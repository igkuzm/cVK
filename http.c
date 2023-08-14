/**
 * File              : http.c
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 13.08.2023
 * Last Modified Date: 13.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#include "config.h"
#include "http.h"
#include "cJSON.h"
#include <curl/curl.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


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

size_t writefunc(void *ptr, size_t size, 
		size_t nmemb, struct string *s)
{
	size_t new_len = s->len + size*nmemb;
	s->ptr = realloc(s->ptr, new_len+1);
	if (!s->ptr){
		perror("malloc");
		return 0;
	}
	memcpy(s->ptr+s->len, ptr, size*nmemb);
	s->ptr[new_len] = '\0';
	s->len = new_len;

	return size*nmemb;
}


cJSON * c_vk_http_transport(
		const char *token,
		cJSON *content,
		void *oed, 
		void (*on_error)(void *oed, const char *error),
		const char *method, ...)
{
	const char * http_method = "GET";
	char *body = NULL;    // content string
	size_t body_len = 0;  // content length
	
	if (content){
		body = cJSON_Print(content);
		body_len = strlen(body);
		http_method = "POST";
	}

	char authorization[BUFSIZ];
	sprintf(authorization, 
			"Authorization: Bearer %s", token);

	CURL *curl = curl_easy_init();
		
	struct string s;
	init_string(&s);
	
	if(!curl) {
		if (on_error)
			on_error(oed, "Can't init cURL");
		return NULL;
	}
		
	char requestString[BUFSIZ];	
	sprintf(requestString, "%s%s", API_URL, method);
	va_list argv;
	va_start(argv, method);
	const char *arg = va_arg(argv, const char*);
	if (arg) {
		sprintf(requestString, "%s?%s", requestString, arg);
		arg = va_arg(argv, const char*);	
	}
	while (arg) {
		sprintf(requestString, "%s&%s", requestString, arg);
		arg = va_arg(argv, const char*);	
	}
	va_end(argv);

	// vk api version
	sprintf(requestString, "%s&v=%s", requestString, VK_API);
	printf("REQUEST: %s\n", requestString);

	curl_easy_setopt(curl, CURLOPT_URL, requestString);
	curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, http_method);		
	curl_easy_setopt(curl, CURLOPT_HEADER, 0);
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, VERIFY_SSL);		

	/* enable verbose for easier tracing */
	/*curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);		*/

	struct curl_slist *header = NULL;
	header = curl_slist_append(header, 
			"Content-Type: multipart/form-data");
	header = curl_slist_append(header, authorization);
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, header);

	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writefunc);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &s);

	if (body) {
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, body);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, body_len);
	}

	CURLcode res = curl_easy_perform(curl);

	if (res) { //handle erros
		if (on_error)
			on_error(oed, curl_easy_strerror(res));
		curl_easy_cleanup(curl);
		curl_slist_free_all(header);
		free(s.ptr);
		return NULL;			
	}		
	curl_easy_cleanup(curl);
	curl_slist_free_all(header);
	
	//parse JSON answer
	cJSON *json = cJSON_ParseWithLength(s.ptr, s.len);
	free(s.ptr);		
	
	cJSON *responce =
		cJSON_GetObjectItem(json, "responce");
	if (responce)
		return responce;
	
	// try to get error
	cJSON *error =
		cJSON_GetObjectItem(json, "error");
	if (error){
		cJSON *msg = 
			cJSON_GetObjectItem(error, "error_msg");
		if (msg){
			on_error(oed, msg->valuestring);
			return NULL;
		}
	}

	on_error(oed, "unknown error");
	return NULL;
}
