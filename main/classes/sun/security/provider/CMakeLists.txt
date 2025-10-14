#machine generated

add_subdirectory("certpath")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.provider_SRCS)
file(GLOB classes.sun.security.provider_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.provider_HEADERS}) 
list(LENGTH classes.sun.security.provider_SRCS classes.sun.security.provider_SRCS_LENGTH)
if(classes.sun.security.provider_SRCS_LENGTH)
	add_library(classes.sun.security.provider OBJECT "${classes.sun.security.provider_SRCS}" "${classes.sun.security.provider_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.provider)
endif()