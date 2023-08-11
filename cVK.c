/**
 * File              : cVK.c
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 11.08.2023
 * Last Modified Date: 11.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

#include "strfind.h"
#include "uuid4.h"
#include "cJSON.h"
#include "cVK.h"

//add strptime for winapi
#ifdef _WIN32
char * strptime(const char* s, const char* f, struct tm* tm);#endif
#endif

#define API_VERS  "5.74"
#define OAUTH_URL "https://oauth.vk.com/authorize"
#define TOKEN_URL "https://oauth.vk.com/access_token"
//#define API_URL "https://cloud-api.yandex.net"

#define VERIFY_SSL 0
#define YD_ANSWER_LIMIT 20

//memory allocation helpers
#define MALLOC(size) ({void* const ___p = malloc(size); if(!___p) {perror("Malloc"); exit(EXIT_FAILURE);} ___p;})
#define REALLOC(ptr, size)	({ void* const ___s = ptr; void* const ___p = realloc(___s, size);	if(!___p) { perror("Realloc"); exit(EXIT_FAILURE); } ___p; })
#define NEW(T) ((T*)MALLOC(sizeof(T)))

//error and string helpers
#define ERRORSTR(ptr, ...) ({if(ptr) {*ptr = MALLOC(BUFSIZ); sprintf(*ptr, __VA_ARGS__);};})
#define STR(...) ({char ___str[BUFSIZ]; sprintf(___str, __VA_ARGS__); ___str;})
#define STRCOPY(str0, str1) ({size_t ___size = sizeof(str0); strncpy(str0, str1, ___size - 1); str0[___size - 1] = '\0';})

// return allocated null-terminated string with url to pass OAuth verification
char * c_vk_url_to_ask_for_verification_code(
		const char *client_id,  
		uint32_t access_rights) //https://dev.vk.com/references/access-rights
{
	char *requestString = MALLOC(BUFSIZ);
	sprintf(requestString, "%s?response_type=code&client_id=%s&v=%s&scope=%u", 
			OAUTH_URL, client_id, API_VERS, access_rights);	
	
	return requestString;
}

char * c_vk_verification_code_from_html(
		const char *html,     //html to search verification code
		char **error		      //error
		)
{
	const char * patterns[] = {
		"verification_code%3Fcode%3D",
		"class=\"verification-code-code\">"
	};
	const char *pattern_ends[] = {
		"&",
		"<"
	};	

	int i;
	for (int i = 0; i < 2; i++) {
		const char * s = patterns[i]; 
		int len = strlen(s);

		//find start of verification code class structure in html
		long start = strfnd(html, s); 
		if (start < 0)
			ERRORSTR(error, "HTML has no verification code class");
		else {
			//find end of code
			long end = strfnd(&html[start], pattern_ends[i]);

			//find length of verification code
			long clen = end - len;

			//allocate code and copy
			char * code = MALLOC(clen + 1);
			strncpy(code, &html[start + len], clen);

			return code;
		}
	}
	return NULL;
}

struct string {
	char *ptr;
	size_t len;
};

static void init_string(struct string *s) {
	s->len = 0;
	s->ptr = MALLOC(s->len+1);
	s->ptr[0] = '\0';
}

static size_t writefunc(void *ptr, size_t size, size_t nmemb, struct string *s)
{
	size_t new_len = s->len + size*nmemb;
	s->ptr = REALLOC(s->ptr, new_len+1);
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


