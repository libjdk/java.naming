#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi.ldap.sasl_SRCS)
file(GLOB classes.com.sun.jndi.ldap.sasl_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi.ldap.sasl_HEADERS}) 
list(LENGTH classes.com.sun.jndi.ldap.sasl_SRCS classes.com.sun.jndi.ldap.sasl_SRCS_LENGTH)
if(classes.com.sun.jndi.ldap.sasl_SRCS_LENGTH)
	add_library(classes.com.sun.jndi.ldap.sasl OBJECT "${classes.com.sun.jndi.ldap.sasl_SRCS}" "${classes.com.sun.jndi.ldap.sasl_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi.ldap.sasl)
endif()