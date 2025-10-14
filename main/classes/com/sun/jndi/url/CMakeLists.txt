#machine generated

add_subdirectory("ldap")
add_subdirectory("ldaps")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi.url_SRCS)
file(GLOB classes.com.sun.jndi.url_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi.url_HEADERS}) 
list(LENGTH classes.com.sun.jndi.url_SRCS classes.com.sun.jndi.url_SRCS_LENGTH)
if(classes.com.sun.jndi.url_SRCS_LENGTH)
	add_library(classes.com.sun.jndi.url OBJECT "${classes.com.sun.jndi.url_SRCS}" "${classes.com.sun.jndi.url_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi.url)
endif()