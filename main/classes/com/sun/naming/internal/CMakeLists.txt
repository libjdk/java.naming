#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.naming.inter_3_SRCS)
file(GLOB classes.com.sun.naming.inter_3_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.naming.inter_3_HEADERS}) 
list(LENGTH classes.com.sun.naming.inter_3_SRCS classes.com.sun.naming.inter_3_SRCS_LENGTH)
if(classes.com.sun.naming.inter_3_SRCS_LENGTH)
	add_library(classes.com.sun.naming.inter_3 OBJECT "${classes.com.sun.naming.inter_3_SRCS}" "${classes.com.sun.naming.inter_3_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.naming.inter_3)
endif()