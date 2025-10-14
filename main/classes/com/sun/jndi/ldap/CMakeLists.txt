#machine generated

add_subdirectory("ext")
add_subdirectory("pool")
add_subdirectory("sasl")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi.ldap_SRCS)
file(GLOB classes.com.sun.jndi.ldap_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi.ldap_HEADERS}) 
list(LENGTH classes.com.sun.jndi.ldap_SRCS classes.com.sun.jndi.ldap_SRCS_LENGTH)
if(classes.com.sun.jndi.ldap_SRCS_LENGTH)
	add_library(classes.com.sun.jndi.ldap OBJECT "${classes.com.sun.jndi.ldap_SRCS}" "${classes.com.sun.jndi.ldap_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi.ldap)
endif()