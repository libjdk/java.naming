#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.security.provide_5_SRCS)
file(GLOB classes.sun.security.provide_5_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.security.provide_5_HEADERS}) 
list(LENGTH classes.sun.security.provide_5_SRCS classes.sun.security.provide_5_SRCS_LENGTH)
if(classes.sun.security.provide_5_SRCS_LENGTH)
	add_library(classes.sun.security.provide_5 OBJECT "${classes.sun.security.provide_5_SRCS}" "${classes.sun.security.provide_5_HEADERS}")
	jcpp_enable_bigobj(classes.sun.security.provide_5)
endif()