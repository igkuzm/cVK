/**
 * File              : cVK.c
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 11.08.2023
 * Last Modified Date: 12.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include "strfind.h"
#include "uuid4.h"
#include "cJSON.h"
#include "cVK.h"

#include "http_answer.h"

//add strptime for winapi
#ifdef _WIN32
char * strptime(const char* s, const char* f, struct tm* tm);#endif
#endif

#define API_VERS  "5.74"
#define OAUTH_URL "https://oauth.vk.com/authorize"
#define TOKEN_URL "https://oauth.vk.com/access_token"
//#define API_URL "https://cloud-api.yandex.net"

#define VERIFY_SSL 0
#define ANSWER_LIMIT 20

//error and string helpers
#define ERRORSTR(ptr, ...) ({if(ptr) {*ptr = MALLOC(BUFSIZ); sprintf(*ptr, __VA_ARGS__);};})
#define STR(...) ({char ___str[BUFSIZ]; sprintf(___str, __VA_ARGS__); ___str;})
#define STRCOPY(str0, str1) ({size_t ___size = sizeof(str0); strncpy(str0, str1, ___size - 1); str0[___size - 1] = '\0';})

// return allocated null-terminated string with url to pass OAuth verification
char * c_vk_url_to_ask_for_verification_code(
		const char *client_id,  
		uint32_t access_rights) //https://dev.vk.com/references/access-rights
{
	char *requestString = malloc(BUFSIZ);
	if (!requestString){
		perror("malloc");
		return NULL;
	}
	sprintf(requestString, "%s?client_id=%s&display=mobile&redirect_uri=http://localhost:%d&scope=%d&v=%s", 
			OAUTH_URL, client_id, DEFAULT_PORT, access_rights, API_VERS);	
	
	return requestString;
}

static char * c_vk_listner()
{
    int socket_desc, client_sock, client_size;
    struct sockaddr_in server_addr, client_addr;
    char server_message[2000], client_message[2000];

    // Clean buffers:
    memset(server_message, '\0', sizeof(server_message));
    memset(client_message, '\0', sizeof(client_message));

    // Create socket:
    socket_desc = socket(AF_INET, SOCK_STREAM, 0);

    if(socket_desc < 0){
        perror("Error while creating socket\n");
        return NULL;
    }
    //printf("Socket created successfully\n");

    // Set port and IP:
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(DEFAULT_PORT);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Bind to the set port and IP:
    if(bind(socket_desc, (struct sockaddr*)&server_addr, sizeof(server_addr))<0){
        perror("Couldn't bind to the port\n");
        return NULL;
    }
    //printf("Done with binding\n");

    // Listen for clients:
    if(listen(socket_desc, 1) < 0){
        perror("Error while listening\n");
        return NULL;
    }
    //printf("\nListening for incoming connections.....\n");

    // Accept an incoming connection:
    client_size = sizeof(client_addr);
    client_sock = accept(socket_desc, (struct sockaddr*)&client_addr, &client_size);

    if (client_sock < 0){
        printf("Can't accept\n");
				close(socket_desc);
        return NULL;
    }
    //printf("Client connected at IP: %s and port: %i\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

    // Receive client's message:
    if (recv(client_sock, client_message, sizeof(client_message), 0) < 0){
        perror("Couldn't receive\n");
				close(client_sock);
				close(socket_desc);
        return NULL;
    }
    //printf("Msg from client: %s\n", client_message);
		char *html = strndup(client_message, 2000);

		// Respond to client:
    strcpy(server_message, "Done! You have got authorization code!");
		send(client_sock, server_message, strlen(server_message), 0);

    // Closing the socket:
    close(client_sock);
    close(socket_desc);

    return html;
}


char * c_vk_listen_for_code(){
		char *html = c_vk_listner();
		if (!html)
			return NULL;

		//find start of verification code
		const char * pattern = "code="; 
		int len = strlen(pattern);
		int start = strfnd(html, pattern); 
		if (start < 0){
      perror("Couldn't find verification code in message\n");
			return NULL;
		}
		//find end of code
		long end = strfnd(&html[start], " ");

		//find length of verification code
		long clen = end - len;

		//allocate code and copy
		char * code = malloc(clen + 1);
		if (!code){
			perror("malloc");
			return NULL;
		}
		strncpy(code, &html[start + len], clen);
		code[clen] = 0;

		return code;
}

struct string {
	char *ptr;
	size_t len;
};

static void init_string(struct string *s) {
	s->len = 0;
	s->ptr = malloc(s->len+1);
	if (!s->ptr){
		perror("malloc");
		return;
	}
	s->ptr[0] = '\0';
}

static size_t writefunc(void *ptr, size_t size, size_t nmemb, struct string *s)
{
	size_t new_len = s->len + size*nmemb;
	s->ptr = realloc(s->ptr, new_len+1);
	if (!s->ptr){
		perror("realloc");
		return 0;
	}
	memcpy(s->ptr+s->len, ptr, size*nmemb);
	s->ptr[new_len] = '\0';
	s->len = new_len;

	return size*nmemb;
}

// callback acces token
void c_yandex_disk_get_token(
		const char *verification_code, 
		const char *client_id, 
		const char *client_secret, 
		void * user_data,
		int (*callback)(
			void * user_data,
			const char * access_token,
			time_t expires_in,
			const char * user_id,
			const char * error
			)
		)
{
	if (verification_code == NULL) {
		callback(user_data, NULL, 0, NULL, "cVK: No verification_code");
		return;
	}

	CURL *curl = curl_easy_init();
		
	struct string s;
	init_string(&s);

	if(curl) {
		
		curl_easy_setopt(curl, CURLOPT_URL, TOKEN_URL);
		curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");		
		curl_easy_setopt(curl, CURLOPT_HEADER, 0);

		struct curl_slist *header = NULL;
	    header = curl_slist_append(header, "Connection: close");		
	    header = curl_slist_append(header, "Content-Type: application/x-www-form-urlencoded");		
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, header);
		
		char post[BUFSIZ];
		sprintf(post, "grant_type=authorization_code");		
		sprintf(post, "%s&code=%s",				   post, verification_code);
		sprintf(post, "%s&client_id=%s",		 post, client_id);
		sprintf(post, "%s&client_secret=%s", post, client_secret);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, post);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, strlen(post));
	    
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writefunc);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &s);

    curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, VERIFY_SSL);		

		CURLcode res = curl_easy_perform(curl);

		curl_easy_cleanup(curl);
		curl_slist_free_all(header);
		if (res) { //handle erros
			callback(user_data, NULL, 0, NULL, STR("cVK: curl returned error: %d", res));
			free(s.ptr);
            return;			
		}		
		//parse JSON answer
		cJSON *json = cJSON_ParseWithLength(s.ptr, s.len);
		free(s.ptr);
		if (cJSON_IsObject(json)) {
			cJSON *access_token = cJSON_GetObjectItem(json, "access_token");			
			if (!access_token) { //handle errors
				cJSON *error_description = cJSON_GetObjectItem(json, "error_description");
				if (!error_description) {
					callback(user_data, NULL, 0, NULL, STR("cVK: unknown error!")); //no error code in JSON answer
					cJSON_free(json);
					return;
				}
				callback(user_data, NULL, 0, NULL, STR("cVK: %s", error_description->valuestring)); //no error code in JSON answer
				cJSON_free(json);
				return;
			}
			//OK - we have a token
			callback(user_data, access_token->valuestring, cJSON_GetObjectItem(json, "expires_in")->valueint, cJSON_GetObjectItem(json, "user_id")->valuestring, NULL);
			cJSON_free(json);
		}	
	}
}


