cmake_minimum_required(VERSION 3.00)

set(TARGET cVK)

#To include cVK to your project use:
#set(CVK_SOURCE_DIR ${CMAKE_SOURCE_DIR}/path/to/cVK)
#add_subdirectory(${CVK_SOURCE_DIR})

if (NOT DEFINED CVK_SOURCE_DIR)
  set(CVK_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
endif ()

project(
	${TARGET} VERSION 1.0 
	DESCRIPTION "C library for Vkontakte API"
	HOMEPAGE_URL ""
	LANGUAGES C CXX 
)

set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 17)

# Determine the location of the libraries to use based on the platform.
if(ANDROID)
	ADD_LIBRARY(curl STATIC IMPORTED)
	SET_TARGET_PROPERTIES(curl PROPERTIES IMPORTED_LOCATION ${CVK_SOURCE_DIR}/curl/android/${ANDROID_ABI}/libcurl.a)
	INCLUDE_DIRECTORIES(${CVK_SOURCE_DIR}/curl/android/include)
elseif(APPLE)
  if(IOS)
	ADD_LIBRARY(curl STATIC IMPORTED)
	SET_TARGET_PROPERTIES(curl PROPERTIES IMPORTED_LOCATION ${CVK_SOURCE_DIR}/curl/iOS/libcurl.a)
	INCLUDE_DIRECTORIES(${CVK_SOURCE_DIR}/curl/iOS/include)
  endif()
elseif(WIN32)
	#add strptime
	set(ADDSRC strptime.cc)
	ADD_LIBRARY(curl STATIC IMPORTED)
	if(CMAKE_SIZEOF_VOID_P EQUAL 8) #64 bit	
		SET_TARGET_PROPERTIES(curl PROPERTIES IMPORTED_LOCATION
			${CVK_SOURCE_DIR}/curl/windows/win64/lib/libcurl.dll.a)
		INCLUDE_DIRECTORIES(${CVK_SOURCE_DIR}/curl/windows/win64/include)
	elseif(CMAKE_SIZEOF_VOID_P EQUAL 4) #32 bit
		SET_TARGET_PROPERTIES(curl PROPERTIES IMPORTED_LOCATION
			${CVK_SOURCE_DIR}/curl/windows/win32/lib/libcurl.dll.a)	
		INCLUDE_DIRECTORIES(${CVK_SOURCE_DIR}/curl/windows/win32/include)
	endif()
endif()

add_library(${TARGET} STATIC cVK.c cJSON.c uuid4.c ${ADDSRC})
target_link_libraries(${TARGET} curl z)
target_link_directories(${TARGET} PRIVATE ${ADDDIRS})

if(${CVK_BUILD_TEST})
	add_executable(cVK_test test.c)
	target_link_libraries(cVK_test ${TARGET})
endif()

#copy files
if (WIN32)
	#curl libs
	#Copy DLLs
	if(CMAKE_SIZEOF_VOID_P EQUAL 8) #64 bit	
		file(GLOB files 
			"${CVK_SOURCE_DIR}/curl/windows/win64/lib/*.dll"
			)	
	elseif(CMAKE_SIZEOF_VOID_P EQUAL 4) #32 bit
		file(GLOB files 
			"${CVK_SOURCE_DIR}/curl/windows/win32/lib/*.dll"
			)	
	endif()	
	#Copy
	foreach(_file ${files})
			file(INSTALL
				DESTINATION "${CMAKE_BINARY_DIR}"
				FILES "${_file}"
			)
	endforeach()	
endif()
