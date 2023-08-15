/**
 * File              : http.h
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 13.08.2023
 * Last Modified Date: 13.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#ifndef C_VK_HTTP_TRANSPORT_H
#define C_VK_HTTP_TRANSPORT_H

#include "cJSON.h"

/* call vk api method and return json or NULL on error */
cJSON * c_vk_http_transport(
		const char *token,  // authorization token
		cJSON *content,     // content of message
		void *on_error_data, 
		void (*on_error)    // error handler - NULL-able
				(void *on_error_data, const char *error), 
		const char *method, // method name from vk api
		... );               // - params list - NULL-terminate

#endif /* ifndef C_VK_HTTP_TRANSPORT_H */
