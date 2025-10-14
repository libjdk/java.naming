#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi.ldap.pool_SRCS)
file(GLOB classes.com.sun.jndi.ldap.pool_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi.ldap.pool_HEADERS}) 
list(LENGTH classes.com.sun.jndi.ldap.pool_SRCS classes.com.sun.jndi.ldap.pool_SRCS_LENGTH)
if(classes.com.sun.jndi.ldap.pool_SRCS_LENGTH)
	add_library(classes.com.sun.jndi.ldap.pool OBJECT "${classes.com.sun.jndi.ldap.pool_SRCS}" "${classes.com.sun.jndi.ldap.pool_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi.ldap.pool)
endif()