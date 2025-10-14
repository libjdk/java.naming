#machine generated

add_subdirectory("internal")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.naming_SRCS)
file(GLOB classes.com.sun.naming_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.naming_HEADERS}) 
list(LENGTH classes.com.sun.naming_SRCS classes.com.sun.naming_SRCS_LENGTH)
if(classes.com.sun.naming_SRCS_LENGTH)
	add_library(classes.com.sun.naming OBJECT "${classes.com.sun.naming_SRCS}" "${classes.com.sun.naming_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.naming)
endif()