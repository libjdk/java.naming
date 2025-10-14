#machine generated

add_subdirectory("ldap")
add_subdirectory("toolkit")
add_subdirectory("url")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi_SRCS)
file(GLOB classes.com.sun.jndi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi_HEADERS}) 
list(LENGTH classes.com.sun.jndi_SRCS classes.com.sun.jndi_SRCS_LENGTH)
if(classes.com.sun.jndi_SRCS_LENGTH)
	add_library(classes.com.sun.jndi OBJECT "${classes.com.sun.jndi_SRCS}" "${classes.com.sun.jndi_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi)
endif()