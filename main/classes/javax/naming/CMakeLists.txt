#machine generated

add_subdirectory("directory")
add_subdirectory("event")
add_subdirectory("ldap")
add_subdirectory("spi")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.naming_SRCS)
file(GLOB classes.javax.naming_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.naming_HEADERS}) 
list(LENGTH classes.javax.naming_SRCS classes.javax.naming_SRCS_LENGTH)
if(classes.javax.naming_SRCS_LENGTH)
	add_library(classes.javax.naming OBJECT "${classes.javax.naming_SRCS}" "${classes.javax.naming_HEADERS}")
	jcpp_enable_bigobj(classes.javax.naming)
endif()