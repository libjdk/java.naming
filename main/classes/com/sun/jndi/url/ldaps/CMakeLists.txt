#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi.url.ldaps_SRCS)
file(GLOB classes.com.sun.jndi.url.ldaps_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi.url.ldaps_HEADERS}) 
list(LENGTH classes.com.sun.jndi.url.ldaps_SRCS classes.com.sun.jndi.url.ldaps_SRCS_LENGTH)
if(classes.com.sun.jndi.url.ldaps_SRCS_LENGTH)
	add_library(classes.com.sun.jndi.url.ldaps OBJECT "${classes.com.sun.jndi.url.ldaps_SRCS}" "${classes.com.sun.jndi.url.ldaps_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi.url.ldaps)
endif()