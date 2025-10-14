#machine generated

add_subdirectory("ctx")
add_subdirectory("dir")
add_subdirectory("url")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.jndi.toolkit_SRCS)
file(GLOB classes.com.sun.jndi.toolkit_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.jndi.toolkit_HEADERS}) 
list(LENGTH classes.com.sun.jndi.toolkit_SRCS classes.com.sun.jndi.toolkit_SRCS_LENGTH)
if(classes.com.sun.jndi.toolkit_SRCS_LENGTH)
	add_library(classes.com.sun.jndi.toolkit OBJECT "${classes.com.sun.jndi.toolkit_SRCS}" "${classes.com.sun.jndi.toolkit_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.jndi.toolkit)
endif()