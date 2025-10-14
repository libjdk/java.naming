#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.naming.directory_SRCS)
file(GLOB classes.javax.naming.directory_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.naming.directory_HEADERS}) 
list(LENGTH classes.javax.naming.directory_SRCS classes.javax.naming.directory_SRCS_LENGTH)
if(classes.javax.naming.directory_SRCS_LENGTH)
	add_library(classes.javax.naming.directory OBJECT "${classes.javax.naming.directory_SRCS}" "${classes.javax.naming.directory_HEADERS}")
	jcpp_enable_bigobj(classes.javax.naming.directory)
endif()