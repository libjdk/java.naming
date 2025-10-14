#machine generated

add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.naming.ldap_SRCS)
file(GLOB classes.javax.naming.ldap_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.naming.ldap_HEADERS}) 
list(LENGTH classes.javax.naming.ldap_SRCS classes.javax.naming.ldap_SRCS_LENGTH)
if(classes.javax.naming.ldap_SRCS_LENGTH)
	add_library(classes.javax.naming.ldap OBJECT "${classes.javax.naming.ldap_SRCS}" "${classes.javax.naming.ldap_HEADERS}")
	jcpp_enable_bigobj(classes.javax.naming.ldap)
endif()