#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.naming.ldap.spi_SRCS)
file(GLOB classes.javax.naming.ldap.spi_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.naming.ldap.spi_HEADERS}) 
list(LENGTH classes.javax.naming.ldap.spi_SRCS classes.javax.naming.ldap.spi_SRCS_LENGTH)
if(classes.javax.naming.ldap.spi_SRCS_LENGTH)
	add_library(classes.javax.naming.ldap.spi OBJECT "${classes.javax.naming.ldap.spi_SRCS}" "${classes.javax.naming.ldap.spi_HEADERS}")
	jcpp_enable_bigobj(classes.javax.naming.ldap.spi)
endif()