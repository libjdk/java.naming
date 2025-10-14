#machine generated

add_subdirectory("ldap")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.provide_4_SRCS)
file(GLOB classes.sun.security.provide_4_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.provide_4_HEADERS}) 
list(LENGTH classes.sun.security.provide_4_SRCS classes.sun.security.provide_4_SRCS_LENGTH)
if(classes.sun.security.provide_4_SRCS_LENGTH)
	add_library(classes.sun.security.provide_4 OBJECT "${classes.sun.security.provide_4_SRCS}" "${classes.sun.security.provide_4_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.provide_4)
endif()