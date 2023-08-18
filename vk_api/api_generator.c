/**
 * File              : api_generator.c
 * Author            : Igor V. Sementsov <ig.kuzm@gmail.com>
 * Date              : 14.08.2023
 * Last Modified Date: 18.08.2023
 * Last Modified By  : Igor V. Sementsov <ig.kuzm@gmail.com>
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../cJSON.h"
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

void generate_responses(
		FILE *fp, FILE *fresponses)
{
	printf("Parse responses.json\n");

}

void generate_types_and_structures(
		FILE *fp, 
		FILE *ftypes_h, 
		FILE *farrays_h, 
		FILE *frefs_h, 
		FILE *fstructures_h,
		FILE *fstructures_def_h,
		FILE *fsetgets_h,
		FILE *fmems_h,
		FILE *fparsers_h
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
				char str[BUFSIZ], setter[BUFSIZ], parser[BUFSIZ], dealloc[BUFSIZ], allocator[BUFSIZ];
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
					fputs(str, frefs_h);
					
					// make alloc
					sprintf(allocator, 
							"static %s_t * %s_new(){\n" 
							"\treturn %s_new();\n" 
							"}\n", 
							object->string, object->string,
							last_comp(object_ref->valuestring));
					fputs(allocator, fmems_h);

					// make dealloc
					sprintf(dealloc, 
							"static void %s_free(%s_t *object){\n" 
							"\t%s_free(object);\n" 
							"}\n\n", 
							object->string, object->string,
							last_comp(object_ref->valuestring));
					fputs(dealloc, fmems_h);

					//make parser
					sprintf(parser, 
							"static %s_t * %s_from_json(cJSON *json){\n", 
							object->string, object->string);
					sprintf(parser, 
							"%s\treturn %s_from_json(json);\n", 
							parser, last_comp(object_ref->valuestring));
					strcat(parser, "}\n\n");
					fputs(parser, fparsers_h);
					
					//iterate
					object = object->next;
					continue;
				}
				// object type is object if has properties or allOf
					if (cJSON_GetObjectItem(object, "properties") 
					|| cJSON_GetObjectItem(object, "oneOf")
					|| cJSON_GetObjectItem(object, "allOf")
					)
					{
						sprintf(str, "typedef struct %s %s_t;\n", 
								object->string, object->string);
						fputs(str, fstructures_h);

						// make structure
						printf("Generate structure: %s\n", object->string);
						sprintf(str, "struct %s{\n", object->string);
						
						// make alloc
						sprintf(allocator, 
								"static %s_t * %s_new(){\n" 
								"\t%s_t *object = (%s_t *)malloc(sizeof(%s_t));\n"
								"\tif(!object) {perror(\"malloc\"); return NULL;}\n",
								object->string, object->string,
								object->string, object->string, object->string);

						// make dealloc
						sprintf(dealloc, 
								"static void %s_free(%s_t *object){\n", 
								object->string, object->string);

						// make parser
						sprintf(parser, 
								"static %s_t * %s_from_json(cJSON *json){\n" 
								"\t%s_t *object = %s_new();\n"
								"\tif(!object) return NULL;\n", 
								object->string, object->string,
								object->string, object->string);
						
						cJSON *properties =
								cJSON_GetObjectItem(object, "properties");
						
						cJSON *allOf =
								cJSON_GetObjectItem(object, "allOf");

						if (allOf)
							properties = allOf->child;
						
						cJSON *oneOf =
								cJSON_GetObjectItem(object, "oneOf");
						
						if (oneOf)
							properties = oneOf->child;

						while (properties){
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
										// structure
										char * fint = "int";
										cJSON *format =
												cJSON_GetObjectItem(property, "format");
										if (format)
											fint = format->valuestring;
										sprintf(str, "%s\t%s _%s; ", 
												str, 
												fint,
												property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										
										// alloc
										sprintf(allocator, 
												"%s\tobject->_%s = 0;\n",
												allocator, property->string); 

										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, %s value){\n"
												"\tobject->_%s = value;\n"
												"}\n\n",
												object->string, property->string,
												object->string, fint,
												property->string);
										fputs(setter, fsetgets_h);
										
										//getter
										sprintf(setter, 
												"static %s %s_get_%s(%s_t *object){\n"
												"\treturn object->_%s;\n"
												"}\n\n",
												fint, object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetgets_h);
										
										// parser
										sprintf(parser, 
												"%s\tcJSON * %s_json =\n"
												"\t\t\tcJSON_GetObjectItem(json, \"%s\");\n" 
												"\tif(%s_json)\n"
												"\t\tobject->_%s = %s_json->valueint;\n",
											parser, 
											property->string, property->string,
											property->string,
											property->string, property->string);
									}
									
									// string type
									else if (strcmp(type->valuestring, 
												"string") == 0)
									{
										// structure
										sprintf(str, "%s\tchar * _%s; ", 
												str, property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, const char * value){\n"
												"\tobject->_%s = strdup(value);\n"
												"}\n\n",
												object->string, property->string,
												object->string,
												property->string);
										fputs(setter, fsetgets_h);
										
										//getter
										sprintf(setter, 
												"static const char * %s_get_%s(%s_t *object){\n"
												"\treturn object->_%s;\n"
												"}\n\n",
												object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetgets_h);
							
										// alloc
										sprintf(allocator, 
												"%s\tobject->_%s = NULL;\n",
												allocator, property->string); 

										// dealloc
										sprintf(dealloc, 
												"%s\tif (object->_%s) free(object->_%s);\n", 
												dealloc, property->string, property->string);

										// parser
										sprintf(parser, 
												"%s\tcJSON * %s_json =\n"
												"\t\t\tcJSON_GetObjectItem(json, \"%s\");\n" 
												"\tif(%s_json)\n"
												"\t\tobject->_%s = strdup(%s_json->valuestring);\n",
											parser, 
											property->string, property->string,
											property->string,
											property->string, property->string);
									}
									// boolean type
									else if (strcmp(type->valuestring, 
												"boolean") == 0)
									{
										// structure
										sprintf(str, "%s\tbool _%s; ", 
												str, property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, bool value){\n"
												"\tobject->_%s = value;\n"
												"}\n\n",
												object->string, property->string,
												object->string,
												property->string);
										fputs(setter, fsetgets_h);
										
										//getter
										sprintf(setter, 
												"static bool %s_get_%s(%s_t *object){\n"
												"\treturn object->_%s;\n"
												"}\n\n",
												object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetgets_h);
										
										// alloc
										sprintf(allocator, 
												"%s\tobject->_%s = false;\n",
												allocator, property->string); 

										// parser
										sprintf(parser, 
												"%s\tcJSON * %s_json =\n"
												"\t\t\tcJSON_GetObjectItem(json, \"%s\");\n" 
												"\tif(%s_json)\n"
												"\t\tobject->_%s = %s_json->valueint;\n",
											parser, 
											property->string, property->string,
											property->string,
											property->string, property->string);
									}
									// array type
									else if (strcmp(type->valuestring, "array") == 0)
									{
										// structure
										// get array items
										cJSON *items = cJSON_GetObjectItem(property, "items");
										if (items){
											const char *pointer = "";
											cJSON *items_type = cJSON_GetObjectItem(items, "type");
											if (items_type && strcmp(items_type->valuestring, "array")==0){
												pointer = "**";
												items = cJSON_GetObjectItem(items, "items");
											}
											// items may have ref or type
											const char *array_type = NULL;
											const char *jsonvalue = NULL;
											const char *free_value = NULL;
											// check if ref
											cJSON *items_ref =
													cJSON_GetObjectItem(items, "$ref");
											if (items_ref){
												char arraytyperef[128];
												sprintf(arraytyperef, "%s_t %s*", 
														last_comp(items_ref->valuestring), pointer);
												array_type = arraytyperef; 
												
												char jsonvalueref[128];
												sprintf(jsonvalueref, "%s_from_json(item)", 
														last_comp(items_ref->valuestring));
												jsonvalue = jsonvalueref;
												
												char freevalueref[128];
												sprintf(freevalueref, "%s_free(item)", 
														last_comp(items_ref->valuestring));
												free_value = freevalueref;
											}
											// check if type
											if (items_type){
												if (strcmp(items_type->valuestring, "integer") == 0)
												{
													// check int format
													char arraytyperef[128];
													sprintf(arraytyperef, "int %s", pointer); 
													array_type = arraytyperef; 
													cJSON *format =
															cJSON_GetObjectItem(items, "format");
													if (format)
														array_type = format->valuestring;
													jsonvalue = ("item->valueint");
													free_value = "";
												}
												else if (strcmp(
															items_type->valuestring, "string") == 0)
												{
													char arraytyperef[128];
													sprintf(arraytyperef, "char *%s", pointer); 
													array_type = arraytyperef; 
													jsonvalue = ("item->valuestring");
													free_value = "free(item)";
												}
												else if (strcmp(
															items_type->valuestring, "boolean") == 0)
												{
													char arraytyperef[128];
													sprintf(arraytyperef, "bool %s", pointer); 
													array_type = arraytyperef; 
													jsonvalue = ("item->valueint");
													free_value = "";
												}
											}
											sprintf(str, "%s\t%s * _%s; ", 
													str, array_type, property->string);
											if (description)
												sprintf(str, "%s//%s", 
														str, description->valuestring);
											strcat(str, "\n");
											// add array len
											sprintf(str, "%s\tint _%s_len; ", 
													str, property->string);
											strcat(str, "\n");
											
											// setter
											sprintf(setter, 
													"static void %s_set_%s(%s_t *object, %s * value, int len){\n"
													"\tint i;\n"
													"\tobject->_%s = malloc(len * sizeof(%s));\n"
													"\tif(!object->_%s) {perror(\"malloc\"); return;}\n" 
													"\tfor(i=0;i<len;++i){\n"
													"\t\tobject->_%s[i] = value[i];\n"
													"\t}\n"
													"\tobject->_%s_len = len;\n"
													"}\n\n",
													object->string, property->string, object->string, array_type,
													property->string, array_type,
													property->string,
													property->string, 
													property->string);
											fputs(setter, fsetgets_h);
											
											//getter
											sprintf(setter, 
													"static %s * %s_get_%s(%s_t *object, int *len){\n"
													"\tif (len)\n"
													"\t\t*len = object->_%s_len;\n"
													"\treturn object->_%s;\n"
													"}\n\n",
													array_type,
													object->string, 
													property->string, object->string,
													property->string,
													property->string);
											fputs(setter, fsetgets_h);
											
											// alloc
											sprintf(allocator, 
													"%s\tobject->_%s = NULL;\n",
													allocator, property->string); 

											// dealloc
											sprintf(dealloc, 
													"%s\tif (object->_%s){\n"
													"\t\tint i;\n"
													"\t\tfor (i=0; i<object->_%s_len; i++){\n"
													"\t\t\t%s item = object->_%s[i];\n"
													"\t\t\t%s;\n"
													"\t\t}\n"
													"\t}\n", 
													dealloc, property->string, 
													property->string,
													array_type, property->string,
													free_value);

											// parser
											sprintf(parser, 
													"%s\tcJSON * %s_json =\n"
													"\t\t\tcJSON_GetObjectItem(json, \"%s\");\n" 
													"\tif(%s_json){\n"
													"\t\tint i, len = cJSON_GetArraySize(%s_json);\n"
													"\t\tobject->_%s = malloc(len * sizeof(%s_t));\n"
													"\t\tif(!object->_%s) {perror(\"malloc\"); return NULL;}\n" 
													"\t\tfor(i=0;i<len;++i){\n"
													"\t\t\tcJSON *item = cJSON_GetArrayItem(%s_json, i);\n"
													"\t\t\tobject->_%s[i] = %s;\n"
													"\t\t}\n"
													"\t\tobject->_%s_len = len;\n"
													"\t}\n",
												parser, property->string, 
												property->string,
												property->string,
												property->string,
												property->string, property->string,
												property->string,
												property->string,
												property->string, jsonvalue,
												property->string);
										}
										perror("type is array, but no items");
									}
								} else {
									cJSON *ref =
											cJSON_GetObjectItem(property, "$ref");
									if (ref){
											sprintf(str, "%s\t%s_t * _%s; ", 
												str,
												last_comp(ref->valuestring),
												property->string);
										if (description)
											sprintf(str, "%s//%s", 
													str, description->valuestring);
										strcat(str, "\n");
										
										// setter
										sprintf(setter, 
												"static void %s_set_%s(%s_t *object, %s_t * value){\n"
												"\tobject->_%s = value;\n"
												"}\n\n",
												object->string, property->string,
												object->string, 
												last_comp(ref->valuestring),
												property->string);
										fputs(setter, fsetgets_h);
										
										//getter
										sprintf(setter, 
												"static %s_t * %s_get_%s(%s_t *object){\n"
												"\treturn object->_%s;\n"
												"}\n\n",
												last_comp(ref->valuestring),
												object->string, 
												property->string, object->string,
												property->string);
										fputs(setter, fsetgets_h);
										
										// alloc
										sprintf(allocator, 
												"%s\tobject->_%s = NULL;\n",
												allocator, property->string); 
										
										// dealloc
										sprintf(parser, 
												"%s\t%s_free(object->_%s);\n", 
												dealloc, 
												last_comp(ref->valuestring),
												property->string);

										// parser
										sprintf(parser, 
												"%s\tobject->_%s = %s_from_json(item);\n", 
												parser, property->string,
												last_comp(ref->valuestring));
									}
								}

								// iterate
								property = property->next;
							}
							//iterate properties
							properties = properties->next;
							if (properties){
								if (cJSON_GetObjectItem(properties, "properties")){
									properties = cJSON_GetObjectItem(properties, "properties");
								}
							}
						}
						
						// close struct and write 
						strcat(str, "};\n\n");
						fputs(str, fstructures_def_h);
						// close mems and write 
						strcat(allocator, "\treturn object;\n}\n");
						sprintf(dealloc, 
								"%s\tif (object) %s_free(object);\n}\n\n",
								dealloc, object->string);
						fputs(allocator, fmems_h);
						fputs(dealloc, fmems_h);

						// close parser and write
						strcat(parser, "\treturn object;\n}\n\n");  
						fputs(parser, fparsers_h);
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
						strcat(str, "\n");
						fputs(str, ftypes_h);
						
						// make alloc
						sprintf(allocator, 
							"static %s_t * %s_new(){\n" 
							"\treturn NULL;\n" 
							"}\n", 
							object->string, object->string);
						fputs(allocator, fmems_h);

						// make dealloc
						sprintf(dealloc, 
							"static void %s_free(%s_t *object){\n" 
							"\tif(object) free(object);\n" 
							"}\n\n",
							object->string, object->string);
						fputs(dealloc, fmems_h);

						// make parser
						sprintf(parser, 
								"static %s_t * %s_from_json(cJSON *json){\n", 
								object->string, object->string);
						strcat(parser, 
								"\treturn strdup(json->valuestring);\n"); 
						strcat(parser, "}\n\n");
						fputs(parser, fparsers_h);
						
						//iterate
						object = object->next;
						continue;
					}
					// object type is array
					if (strcmp(object_type->valuestring, 
								"array") == 0)
					{
						// get type of array
						cJSON *items =
								cJSON_GetObjectItem(object, "items");
						if (items){
							const char *array_type = NULL;
							const char *jsonvalue = NULL;
							// check if ref
							cJSON *items_ref =
									cJSON_GetObjectItem(items, "$ref");
							if (items_ref){
								char arraytyperef[128];
								sprintf(arraytyperef, "%s_t *", 
										last_comp(items_ref->valuestring));
								array_type = arraytyperef; 
								
								char jsonvalueref[128];
								sprintf(jsonvalueref, "%s_from_json(item)", 
										last_comp(items_ref->valuestring));
								jsonvalue = jsonvalueref;
							}
							// check if type
							cJSON *items_type =
									cJSON_GetObjectItem(items, "type");
							if (items_type){
								// type may be array or string
								if (cJSON_IsString(items_type)){
									if (strcmp(items_type->valuestring, "integer") == 0)
									{
										// check int format
										array_type = "int *";
										cJSON *format =
												cJSON_GetObjectItem(items, "format");
										if (format)
											array_type = format->valuestring;
										jsonvalue = ("item->valueint");
									}
									else if (strcmp(items_type->valuestring, "string") == 0)
									{
										array_type = "char **";
										jsonvalue = ("item->valuestring");
									}
									else if (strcmp(items_type->valuestring, "boolean") == 0)
									{
										array_type = "bool *";
										jsonvalue = ("item->valueint");
									}
								}
								else if (cJSON_IsArray(items_type)){
									// array of structures
									char array_struct[128] = {0};
									strcat(array_struct, "struct {");
									cJSON *items_type_item;
									int i=0;
									for (items_type_item=items_type->child; items_type_item; items_type_item=items_type_item->next) {
										if (strcmp(items_type_item->valuestring, "string") == 0){
											sprintf(array_struct, "%schar * v%d; ", array_struct, i);
										} 
										else if (strcmp(items_type_item->valuestring, "integer") == 0){
											sprintf(array_struct, "%sint v%d; ", array_struct, i);
										}
										else if (strcmp(items_type_item->valuestring, "boolean") == 0){
											sprintf(array_struct, "%sbool v%d; ", array_struct, i);
										}
										i++;
									}
									strcat(array_struct, "} *");
									array_type = array_struct;
								}
							}
							// typedef
							sprintf(str, "typedef %s %s_t;", array_type,
									object->string);
							if (object_description)
								sprintf(str, "%s //%s", str, 
									object_description->valuestring);	
							strcat(str, "\n");
							fputs(str, farrays_h);
							
							// make alloc
							sprintf(allocator, 
								"static %s_t * %s_new(){\n" 
								"\treturn NULL;\n" 
								"}\n", 
								object->string, object->string);
							fputs(allocator, fmems_h);

							// make dealloc
							sprintf(dealloc, 
								"static void %s_free(%s_t *object){\n" 
								"\tfree(object);\n"
								"}\n\n",
								object->string, object->string);
							fputs(dealloc, fmems_h);

							//make parser
							sprintf(parser, 
									"static %s_t %s_from_json(cJSON *json){\n", 
									object->string, object->string);
							strcat(parser, 
									"\treturn json->valueint;\n"); 
							strcat(parser, "}\n\n");
							fputs(parser, fparsers_h);
						} else // no items 
								perror("object is array, but no items");
						
						//iterate if array
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
						strcat(str, "\n");
						fputs(str, ftypes_h);
						
						// make alloc
						sprintf(allocator, 
							"static %s_t * %s_new(){\n" 
							"\treturn NULL;\n" 
							"}\n", 
							object->string, object->string);
						fputs(allocator, fmems_h);

						// make dealloc
						sprintf(dealloc, 
							"static void %s_free(%s_t *object){\n" 
							"}\n\n",
							object->string, object->string);
						fputs(dealloc, fmems_h);

						//make parser
						sprintf(parser, 
								"static %s_t %s_from_json(cJSON *json){\n", 
								object->string, object->string);
						strcat(parser, 
								"\treturn json->valueint;\n"); 
						strcat(parser, "}\n\n");
						fputs(parser, fparsers_h);

						//iterate
						object = object->next;
						continue;
					}
					// object type is boolean
					if (strcmp(object_type->valuestring, 
								"boolean") == 0){
						sprintf(str, "typedef bool %s_t;",
								object->string);
						if (object_description)
							sprintf(str, "%s //%s", str, 
								object_description->valuestring);	
						strcat(str, "\n");
						fputs(str, ftypes_h);
						
						// make alloc
						sprintf(allocator, 
							"static %s_t * %s_new(){\n" 
							"\treturn NULL;\n" 
							"}\n", 
							object->string, object->string);
						fputs(allocator, fmems_h);

						// make dealloc
						sprintf(dealloc, 
							"static void %s_free(%s_t *object){\n" 
							"}\n\n",
							object->string, object->string);
						fputs(dealloc, fmems_h);

						//make parser
						sprintf(parser, 
								"static %s_t %s_from_json(cJSON *json){\n", 
								object->string, object->string);
						strcat(parser, 
								"\treturn json->valueint;\n"); 
						strcat(parser, "}\n\n");
						fputs(parser, fparsers_h);

						//iterate
						object = object->next;
						continue;
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
	FILE *ftypes_h, 
			 *frefs_h,
			 *fversion_h, 
			 *fstructures_h, 
			 *fstructures_def_h, 
			 *fmethods_h, 
			 *fmethods_c, 
			 *fresponses_h, 
			 *fresponses_c, 
			 *fsetgets_h, 
			 *fmems_h, 
			 *farrays_h,
			 *fparsers_h;
	const char types_h[]          = "types.h",
						 refs_h[]           = "refs.h",
						 version_h[]        = "version.h",
						 structures_h[]     = "structures.h",
						 structures_def_h[] = "structures_def.h",
						 methods_h[]        = "methods.h",
						 methods_c[]        = "methods.c",
						 responses_h[]      = "responses.h",
						 responses_c[]      = "responses.c",
						 setgets_h[]        = "setgets.h",
						 mems_h[]           = "mems.h",
						 arrays_h[]         = "arrays.h",
						 parsers_h[]        = "parsers.h";

	// remove files
	remove (types_h);     
  remove (refs_h);      
  remove (version_h);   
  remove (structures_h);
  remove (structures_def_h);
  remove (methods_h);   
  remove (methods_c);   
  remove (responses_h); 
  remove (responses_c); 
  remove (setgets_h);   
  remove (mems_h);      
  remove (arrays_h);      
  remove (parsers_h);    
	
	// opnen new streams
	ftypes_h          = fopen(types_h,          "w");
  frefs_h           = fopen(refs_h,           "w");
  fversion_h        = fopen(version_h,        "w");
  fstructures_h     = fopen(structures_h,     "w");
  fstructures_def_h = fopen(structures_def_h, "w");
  fmethods_h        = fopen(methods_h,        "w");
  fmethods_c        = fopen(methods_c,        "w");
  fresponses_h      = fopen(responses_h,      "w");
  fresponses_c      = fopen(responses_c,      "w");
  fsetgets_h        = fopen(setgets_h,        "w");
  fmems_h           = fopen(mems_h,           "w");
  farrays_h         = fopen(arrays_h,         "w");
  fparsers_h        = fopen(parsers_h,        "w");

	if (
		   !ftypes_h  
		|| !frefs_h 
		|| !fversion_h  
		|| !fstructures_h
		|| !fstructures_def_h
		|| !fmethods_h  
		|| !fmethods_c  
		|| !fresponses_h
		|| !fresponses_c
		|| !fsetgets_h  
		|| !fmems_h  
		|| !farrays_h  
		|| !fparsers_h   
		)
	{
		perror("cant't open streams");
		return -1;
	}

	// put start strings to streams
	fputs("#ifndef VK_TYPES_H\n", ftypes_h);
	fputs("#include <stdbool.h>\n", ftypes_h);
	fputs("#include <stdint.h>\n", ftypes_h);
	fputs("\n", ftypes_h);
	fputs("typedef int32_t int32;\n", ftypes_h);
	fputs("typedef uint32_t uint32;\n", ftypes_h);
	fputs("typedef int64_t int64;\n", ftypes_h);
	fputs("typedef uint64_t uint64;\n", ftypes_h);
	fputs("\n", ftypes_h);

	fputs("#ifndef VK_STRUCTURES_H\n", fstructures_h);
	fputs("#define VK_STRUCTURES_H\n", fstructures_h);
	fputs("#include \"types.h\"\n", fstructures_h);
	fputs("\n", fstructures_h);
	
	fputs("#ifndef VK_ARRAYS_H\n", farrays_h);
	fputs("#define VK_ARRAYS_H\n", farrays_h);
	fputs("#include \"structures.h\"\n", farrays_h);
	fputs("\n", farrays_h);

	fputs("#ifndef VK_REFS_H\n", frefs_h);
	fputs("#define VK_REFS_H\n", frefs_h);
	fputs("#include \"arrays.h\"\n", frefs_h);
	fputs("\n", frefs_h);

	fputs("#ifndef VK_STRUCTURES_DEF_H\n", fstructures_def_h);
	fputs("#define VK_STRUCTURES_DEF_H\n", fstructures_def_h);
	fputs("#include \"refs.h\"\n", fstructures_def_h);
	fputs("\n", fstructures_def_h);
	
	fputs("#ifndef VK_RESPONSES_H\n", fresponses_h);
	fputs("#define VK_RESPONSES_H\n", fresponses_h);
	fputs("\n", fresponses_h);

	fputs("#ifndef VK_SETTERS_H\n", fsetgets_h);
	fputs("#define VK_SETTERS_H\n", fsetgets_h);
	fputs("#include \"structures_def.h\"\n", fsetgets_h);
	fputs("#include <stdio.h>\n", fsetgets_h);
	fputs("#include <stdlib.h>\n", fsetgets_h);
	fputs("#include <string.h>\n", fsetgets_h);
	fputs("\n", fsetgets_h);
	
	fputs("#ifndef VK_MEMS_H\n", fmems_h);
	fputs("#define VK_MEMS_H\n", fmems_h);
	fputs("#include \"structures_def.h\"\n", fmems_h);
	fputs("#include <stdio.h>\n", fmems_h);
	fputs("#include <stdlib.h>\n", fmems_h);
	fputs("\n", fmems_h);

	fputs("#ifndef VK_PARSERS_H\n", fparsers_h);
	fputs("#define VK_PARSERS_H\n", fparsers_h);
	fputs("#include \"structures.h\"\n", fparsers_h);
	fputs("#include <stdio.h>\n", fparsers_h);
	fputs("#include <string.h>\n", fparsers_h);
	fputs("#include \"mems.h\"\n", fparsers_h);
	fputs("#include \"cJSON.h\"\n", fparsers_h);
	fputs("\n", fparsers_h);
	
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
				fwrite(str, strlen(str), 1, fversion_h);
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
								ftypes_h, 
								farrays_h, 
								frefs_h, 
								fstructures_h,
								fstructures_def_h,
								fsetgets_h,
								fmems_h,
								fparsers_h
								);
						fclose(fp);
					}
					else {
						perror("can't open objects.json");
					}

					char responses_path[256];
					sprintf(objects_path, "%s/responses.json", sect_path);
					if ((fp = fopen(responses_path, "r"))){
						generate_responses(fp, fresponses_h);
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
	fputs("#endif //VK_TYPES_H\n", ftypes_h);
	fputs("#endif //VK_REFS_H\n", frefs_h);
	fputs("#endif //VK_ARRAYS_H\n", farrays_h);
	fputs("#endif //VK_STRUCTURES_H\n", fstructures_h);
	fputs("#endif //VK_STRUCTURES_DEF_H\n", fstructures_def_h);
	fputs("#endif //VK_RESPONSES_H\n", fresponses_h);
	fputs("#endif //VK_SETTERS_H\n", fsetgets_h);
	fputs("#endif //VK_PARSERS_H\n", fparsers_h);
	fputs("#endif //VK_MEMS_H\n", fmems_h);
	

	fclose(ftypes_h); 
	fclose(frefs_h); 
	fclose(fversion_h);  
	fclose(fstructures_h);
	fclose(fstructures_def_h);
	fclose(fmethods_h);  
	fclose(fmethods_c);  
	fclose(fresponses_h);
	fclose(fresponses_c);
	fclose(fsetgets_h);  
	fclose(fmems_h);  
	fclose(farrays_h);  
	fclose(fparsers_h);   

	return 0;
}
