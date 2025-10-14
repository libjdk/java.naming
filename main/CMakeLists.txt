#machine generated

jcpp_add_dependencies(
	"java.base:17.35"
	"java.security.sasl:17.35"
	"java.logging:17.35"
)

include_directories("classes")

add_subdirectory("classes")

set(local_object ${local_object}
	"$<TARGET_OBJECTS:classes>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.ldap>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.ldap.ext>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.ldap.pool>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.ldap.sasl>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.toolkit_0>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.toolkit_1>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.toolkit_2>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.url.ldap>"
	"$<TARGET_OBJECTS:classes.com.sun.jndi.url.ldaps>"
	"$<TARGET_OBJECTS:classes.com.sun.naming.inter_3>"
	"$<TARGET_OBJECTS:classes.javax.naming>"
	"$<TARGET_OBJECTS:classes.javax.naming.directory>"
	"$<TARGET_OBJECTS:classes.javax.naming.event>"
	"$<TARGET_OBJECTS:classes.javax.naming.ldap>"
	"$<TARGET_OBJECTS:classes.javax.naming.ldap.spi>"
	"$<TARGET_OBJECTS:classes.javax.naming.spi>"
	"$<TARGET_OBJECTS:classes.sun.security.provide_5>"
)

if(BUILD_STATIC_LIB)
	add_library(${JCPP_PROJECT_NAME}_static STATIC "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_static PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_static)

	install(TARGETS ${JCPP_PROJECT_NAME}_static
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

if(BUILD_SHARED_LIB)
	add_library(${JCPP_PROJECT_NAME}_shared SHARED "${local_object}" "${source_SRCS}")

	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES OUTPUT_NAME "${JCPP_PROJECT_FULL_NAME}")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES CLEAN_DIRECT_OUTPUT 1)
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES VERSION ${JCPP_PROJECT_VERSION} SOVERSION 1)
if(JCPP_OS MATCHES "linux")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH "\\\$ORIGIN;\\\$ORIGIN/../lib")
elseif(JCPP_OS MATCHES "macosx")
	SET_TARGET_PROPERTIES(${JCPP_PROJECT_NAME}_shared PROPERTIES INSTALL_RPATH ".;../lib")
endif()

	target_link_libraries(${JCPP_PROJECT_NAME}_shared
		PUBLIC ${JCPP_DEPENDENCY_LIBS}
		PRIVATE ${JCPP_EXT_LIBS}
	)

	jcpp_enable_bigobj(${JCPP_PROJECT_NAME}_shared)

	jcpp_enable_debug_info(${JCPP_PROJECT_NAME}_shared)

	install(TARGETS ${JCPP_PROJECT_NAME}_shared
		LIBRARY DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		ARCHIVE DESTINATION "${JCPP_LIB_INSTALL_PATH}"
		RUNTIME DESTINATION "${JCPP_BIN_INSTALL_PATH}"
	)
endif()

install(
	DIRECTORY "include"
	DESTINATION "${JCPP_INSTALL_PATH}"
)

install(
	FILES "dependencies.txt"
	DESTINATION "${JCPP_INSTALL_PATH}"
)
