/**
 * File              : api_generator.c
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 14.08.2023
 * Last Modified Date: 14.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
#include <dirent.h>

#define API_PATH "vk-api-schema"

cJSON *
cJSON_ParseStream(FILE *fp){
	// find file length
	fseek(fp, 0, SEEK_END);
	size_t size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	// allocate buffer
	char *buf = malloc(size);
	if (!buf){
		perror("malloc");
		return NULL;
	}
	// read file to buffer
	if (fread(buf, size, 1, fp) != 1){
		perror("can't read file to buffer");
		free(buf);
		return NULL;
	}
	// parse json
	return cJSON_ParseWithLength(buf, size);
}

static const char * last_comp(const char *filename) {
		const char *slash = strrchr(filename, '/');
		if (!slash || slash == filename)
			return "";
		return slash + 1;
}

void generate_callbacks(
		FILE *fp, FILE *fcallbacks)
{
	printf("Parse responses.json\n");

}

void generate_types_and_structures(
		FILE *fp, 
		FILE *ftypes, 
		FILE *fstructures,
		FILE *fsetters
		)
{
	printf("Parse objects.json\n");
	cJSON *json = cJSON_ParseStream(fp);
	if (json){
		cJSON *definitions = 
				cJSON_GetObjectItem(json, "definitions");
		if (definitions){
			cJSON *object = definitions->child;
			while (object) {
				// make type
				char str[BUFSIZ], setter[BUFSIZ], getter[BUFSIZ];
				printf("Generate type: %s\n", object->string);
				// get object description
				cJSON *object_description =
						cJSON_GetObjectItem(object, "description");
				
				// get object ref
				cJSON *object_ref =
						cJSON_GetObjectItem(object, "$ref");
				if (object_ref)
				{
					// object is reference
					sprintf(str, "typedef %s_t %s_t;", 
						last_comp(object_ref->valuestring),
						object->string);
					if (object_description)
						sprintf(str, "%s //%s", str, 
							 object_description->valuestring);	
					strcat(str, "\n");
					fputs(str, ftypes);
					
					//iterate
					object = object->next;
					continue;
				}
				
				// get object type
				cJSON *object_type =
						cJSON_GetObjectItem(object, "type");
				if (object_type){
					// object type is string
					if (strcmp(object_type->valuestring, 
								"string") == 0)
					{
						sprintf(str, "typedef char * %s_t;", 
								object->string);
						if (object_description)
							sprintf(str, "%s //%s", str, 
								object_description->valuestring);	
						strcat(str, "\n\n");
						fputs(str, ftypes);
						
						//iterate
						object = object->next;
						continue;
					}
					// object type is integer
					if (strcmp(object_type->valuestring, 
								"integer") == 0){
						char * fint = "int";
						cJSON *object_format =
								cJSON_GetObjectItem(object, "format");
						if (object_format)
							fint = object_format->valuestring;
						sprintf(str, "typedef %s %s_t;", fint,
								object->string);
						if (object_description)
							sprintf(str, "%s //%s", str, 
								object_description->valuestring);	
						strcat(str, "\n\n");
						fputs(str, ftypes);
						//iterate
						object = object->next;
						continue;
					}
					// object type is object
					if (strcmp(object_type->valuestring, 
								"object") == 0){
						sprintf(str, "typedef struct %s %s_t;\n", 
								object->string, object->string);
						fputs(str, ftypes);

						// make structure
						printf("Generate structure: %s\n", object->string);
						sprintf(str, "struct %s{\n", object->string);
						cJSON *properties =
								cJSON_GetObjectItem(object, "properties");
						if (properties){
							cJSON *property = properties->child;
							while (property) {
								cJSON *type =
										cJSON_GetObjectItem(property, "type");
								cJSON *description =
										cJSON_GetObjectItem(property, "description");
								if (type){
									// integer type
									if (strcmp(type->valuestring, 
												"integer") == 0)
									{
										char * fint = "int";
										cJSON *format =
												cJSON_GetObjectItem(property, "format");
										if (format)
											fint = format->valuestring;
										sprintf(str, "%s\t%s %s_; ", 
												str, 
												fint,
												property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, %s value){\n"
												"\tobject->%s_ = value;\n"
												"}\n\n",
												object->string, property->string,
												object->string, fint,
												property->string);
										fputs(setter, fsetters);
										//getter
										sprintf(setter, 
												"static %s %s_get_%s(%s_t *object){\n"
												"\treturn object->%s_;\n"
												"}\n\n",
												fint, object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetters);
									}
									// string type
									else if (strcmp(type->valuestring, 
												"string") == 0)
									{
										sprintf(str, "%s\tchar * %s_; ", 
												str, property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, const char * value){\n"
												"\tobject->%s_ = strdup(value);\n"
												"}\n\n",
												object->string, property->string,
												object->string,
												property->string);
										fputs(setter, fsetters);
										//getter
										sprintf(setter, 
												"static const char * %s_get_%s(%s_t *object){\n"
												"\treturn object->%s_;\n"
												"}\n\n",
												object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetters);
									}
									// boolean type
									else if (strcmp(type->valuestring, 
												"boolean") == 0)
									{
										sprintf(str, "%s\tbool %s; ", 
												str, property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, bool value){\n"
												"\tobject->%s_ = value;\n"
												"}\n\n",
												object->string, property->string,
												object->string,
												property->string);
										fputs(setter, fsetters);
										//getter
										sprintf(setter, 
												"static bool %s_get_%s(%s_t *object){\n"
												"\treturn object->%s_;\n"
												"}\n\n",
												object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetters);
									}
									// array type
									else if (strcmp(type->valuestring, 
												"array") == 0)
									{
										// get array items
										cJSON *items = 
												cJSON_GetObjectItem(property, "items");
										if (items){
											// items may have ref or type
											const char *array_type = NULL;
											// check if ref
											cJSON *items_ref =
													cJSON_GetObjectItem(items, "$ref");
											if (items_ref)
												array_type = 
														last_comp(items_ref->valuestring);
											// check if type
											cJSON *items_type =
													cJSON_GetObjectItem(items, "type");
											if (items_type){
												if (strcmp(
															items_type->valuestring, "integer") == 0)
												{
													// check int format
													array_type = "int";
													cJSON *format =
															cJSON_GetObjectItem(items, "format");
													if (format)
														array_type = format->valuestring;
												}
												else if (strcmp(
															items_type->valuestring, "string") == 0)
													array_type = "char *";
												else if (strcmp(
															items_type->valuestring, "boolean") == 0)
													array_type = "bool";
											}
											sprintf(str, "%s\t%s * %s; ", 
													str, array_type, property->string);
											if (description)
												sprintf(str, "%s//%s", 
														str, description->valuestring);
											strcat(str, "\n");
											// add array len
											sprintf(str, "%s\tint %s_len; ", 
													str, property->string);
											strcat(str, "\n");
											// setter
											sprintf(setter, 
													"static void %s_set_%s(%s_t *object, %s * value, int len){\n"
													"int i;\n"
													"\tobject->%s_ = malloc(len * sizeof(%s) + 8);\n"
													"\tfor(i=0;i<len;++i){\n"
													"\t\tobject->%s[i] = value[i];\n"
													"\t}\n"
													"\tobject->%s_len = len;\n"
													"}\n\n",
													object->string, property->string,
													object->string, array_type,
													property->string, array_type,
													property->string, property->string);
											fputs(setter, fsetters);
											//getter
											sprintf(setter, 
													"static %s * %s_get_%s(%s_t *object, int *len){\n"
													"\tif (len)\n"
													"\t\t*len = object->%s_len;\n"
													"\treturn object->%s_;\n"
													"}\n\n",
													array_type,
													object->string, 
													property->string, object->string,
													property->string,
													property->string);
											fputs(setter, fsetters);
										}
										perror("type is array, but no items");
									}
								} else {
									cJSON *ref =
											cJSON_GetObjectItem(property, "$ref");
									if (ref){
											sprintf(str, "%s\t%s_t %s_; ", 
												str,
												last_comp(ref->valuestring),
												property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, %s_t value){\n"
												"\tobject->%s_ = value;\n"
												"}\n\n",
												object->string, property->string,
												object->string, 
												last_comp(ref->valuestring),
												property->string);
										fputs(setter, fsetters);
										//getter
										sprintf(setter, 
												"static %s_t %s_get_%s(%s_t *object){\n"
												"\treturn object->%s_;\n"
												"}\n\n",
												last_comp(ref->valuestring),
												object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetters);
									}
								}

								// iterate
								property = property->next;
							}
						} else
							perror("no properties in object");
						
						// close struct and write 
						sprintf(str, "%s};\n\n", str);
						fputs(str, fstructures);
					}
				}
				//iterate
				object = object->next;
			}
		} else
			perror("no defenitions in json");
	} else
		perror("can't parse json");
}

int main(int argc, char *argv[])
{
	int i;
	FILE *ftypes, *fstrucutures, *fmethods, 
			 *fversion, *fcallbacks, *fsetters;
	const char htypes[]       = "types.h",
						 hversion[]     = "version.h",
						 hstructures[]  = "structures.h",
						 hcallbacks[]   = "callbacks.h",
						 hsetters[]     = "setters.h",
						 hgetters[]     = "getters.h",
						 hmethods[]     = "methods.h";

	// remove files
	remove(htypes);
	remove(hversion);
	remove(hstructures);
	remove(hmethods);
	remove(hcallbacks);
	remove(hsetters);

	// opnen new streams
	ftypes       = fopen(htypes,      "w");
	fversion     = fopen(hversion,    "w");
	fstrucutures = fopen(hstructures, "w");
	fmethods     = fopen(hmethods,    "w");
	fcallbacks   = fopen(hcallbacks,  "w");
	fsetters     = fopen(hsetters,  "w");
	if (!ftypes || !fstrucutures || !fmethods 
							|| !fversion     || !fcallbacks || !fsetters)
	{
		perror("cant't open streams");
		return -1;
	}

	// put start strings to streams
	fputs("#ifndef VK_TYPES_H\n", ftypes);
	fputs("#define VK_TYPES_H\n", ftypes);
	fputs("\n", ftypes);

	fputs("#ifndef VK_STRUCTURES_H\n", fstrucutures);
	fputs("#define VK_STRUCTURES_H\n", fstrucutures);
	fputs("#include \"types.h\"\n", fstrucutures);
	fputs("#include <stdbool.h>\n", fstrucutures);
	fputs("#include <stdint.h>\n", fstrucutures);
	fputs("\n", fstrucutures);
	fputs("typedef int32_t int32;\n", fstrucutures);
	fputs("typedef uint32_t uint32;\n", fstrucutures);
	fputs("typedef int64_t int64;\n", fstrucutures);
	fputs("typedef uint64_t uint64;\n", fstrucutures);
	fputs("\n", fstrucutures);
	
	fputs("#ifndef VK_CALLBACKS_H\n", fcallbacks);
	fputs("#define VK_CALLBACKS_H\n", fcallbacks);
	fputs("\n", fcallbacks);

	fputs("#ifndef VK_SETTERS_H\n", fsetters);
	fputs("#define VK_SETTERS_H\n", fsetters);
	fputs("#include \"structures.h\"\n", fsetters);
	fputs("#include <string.h>\n", fsetters);
	fputs("\n", fsetters);
	
	// open api
	char api_package_path[128];
	sprintf(api_package_path, "%s/package.json", API_PATH);
	FILE *api_package =
			fopen(api_package_path, "r");
	if (api_package){
		cJSON *api_package_json = 
				cJSON_ParseStream(api_package);	
		if (api_package_json){
			cJSON *version = 
				cJSON_GetObjectItem(api_package_json, "version");	
			if (version){
				// write version to header 
				char str[128];
				sprintf(str,
						"#ifndef VK_API\n"	
						"\t#define VK_API \"%s\"\n" 
						"#endif\n",	
						version->valuestring);
				fwrite(str, strlen(str), 1, fversion);
			} else 
				perror("api schema package.json has no version");
			cJSON_free(api_package_json);
		} else
			perror("can't parse json of api schema package.json");
		fclose(api_package);
	} else
		perror("can't read api schema package.json");

	// open directory to read
	DIR *api_dp = opendir(API_PATH);
	if (api_dp){
		struct dirent *ep;
		while ((ep = readdir(api_dp))) {
			if (ep->d_type == DT_DIR &&
					strcmp(ep->d_name, "ads")) // error reading ads
			{ 
				char sect_path[256];
				sprintf(sect_path, "%s/%s", API_PATH, ep->d_name);
				DIR *sect_dp = opendir(sect_path);
				if (sect_dp){
					FILE *fp;

					// objects.json
					char objects_path[256];
					sprintf(objects_path, "%s/objects.json", sect_path);
					printf("Open objects.json at %s\n", sect_path);
					if ((fp = fopen(objects_path, "r"))){
						generate_types_and_structures(
								fp, 
								ftypes, 
								fstrucutures,
								fsetters
								);
						fclose(fp);
					}
					else {
						perror("can't open objects.json");
					}

					char responses_path[256];
					sprintf(objects_path, "%s/responses.json", sect_path);
					if ((fp = fopen(responses_path, "r"))){
						generate_callbacks(fp, fcallbacks);
						fclose(fp);
					}
					else {
						perror("can't open responses.json");
					}
				}
			}
		}
	} else 
		perror("can't open VK API SCHEMA Directory");

	// close streams
	fputs("#endif //VK_TYPES_H\n", ftypes);
	fputs("#endif //VK_STRUCTURES_H\n", fstrucutures);
	fputs("#endif //VK_CALLBACKS_H\n", fcallbacks);
	fputs("#endif //VK_SETTERS_H\n", fsetters);
	
	fclose(ftypes);
	fclose(fversion);
	fclose(fstrucutures);
	fclose(fcallbacks);
	fclose(fmethods);
	fclose(fsetters);

	return 0;
}
