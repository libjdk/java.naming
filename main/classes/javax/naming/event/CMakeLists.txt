#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.javax.naming.event_SRCS)
file(GLOB classes.javax.naming.event_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.javax.naming.event_HEADERS}) 
list(LENGTH classes.javax.naming.event_SRCS classes.javax.naming.event_SRCS_LENGTH)
if(classes.javax.naming.event_SRCS_LENGTH)
	add_library(classes.javax.naming.event OBJECT "${classes.javax.naming.event_SRCS}" "${classes.javax.naming.event_HEADERS}")
	jcpp_enable_bigobj(classes.javax.naming.event)
endif()