/**
 * File              : cVK.h
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 11.08.2023
 * Last Modified Date: 12.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#ifndef C_VK_H
#define C_VK_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <time.h>

/*
 * To create new application visit https://vk.com/apps
 * Set Open API ON, basic domen to localhost
 * and addres like 'http://localhost:2000'
 */

/*
 * to get access_token, first get verification code with
 * c_vk_listen_for_code and open result url of c_vk_url_to_ask_for_verification_code
 * with browser
 * After you've got verification code, start c_vk_get_token
 */

// https://dev.vk.com/references/access-rights
// ACCESS-RIGHTS FOR USER
#define AR_NOTIFY       1<<0
#define AR_FRIENDS      1<<1
#define AR_PHOTOS       1<<2
#define AR_AUDIO        1<<3
#define AR_VIDEO        1<<4
#define AR_STORIES      1<<6
#define AR_PAGES        1<<7
#define AR_MENU         1<<8
#define AR_STATUS       1<<10
#define AR_NOTES        1<<11
#define AR_MESSAGES     1<<12
#define AR_WALL         1<<13
#define AR_ADS          1<<15
#define AR_OFFLINE      1<<16 //token has unlimit life, expires_in=0
#define AR_DOCS         1<<17
#define AR_GROUPS       1<<18
#define AR_NOTIFICATION 1<<19
#define AR_STATS        1<<20
#define AR_EMAIL        1<<22
#define AR_MARKET       1<<27
#define AR_PHONE_NUMBER 1<<287

// ACCESS-RIGHTS FOR GROUP
#define ARG_STORIES     1<<0
#define ARG_PHOTOS      1<<2
#define ARG_APP_WIDGET  1<<6
#define ARG_MESSAGES    1<<12
#define ARG_DOCS        1<<17
#define ARG_MANAGE      1<<18

#define DEFAULT_PORT 2000

// return allocated null-terminated string with url to pass OAuth verification
char * c_vk_url_to_ask_for_verification_code(
		const char *client_id,  
		uint32_t access_rights); //https://dev.vk.com/references/access-rights

// open socket at DEFAULT_PORT and listen
// for verification code 
// in success return allocated null-terminated string 
// with code, otherwice return NULL 
char * c_vk_listen_for_code();

// callback acces token
void c_vk_get_token(
		const char *verification_code, 
		const char *client_id,         // get in https://vk.com/apps
		const char *client_secret,     // get in https://vk.com/apps
		void * user_data,
		int (*callback)(
			void * user_data,
			const char * access_token,
			time_t expires_in,
			const char * user_id,
			const char * error));

#ifdef __cplusplus
}  /* end of the 'extern "C"' block */
#endif

#endif /* ifndef C_VK_H */
