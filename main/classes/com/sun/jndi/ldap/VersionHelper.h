#ifndef _com_sun_jndi_ldap_VersionHelper_h_
#define _com_sun_jndi_ldap_VersionHelper_h_
//$ class com.sun.jndi.ldap.VersionHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
		class Runnable;
		class Thread;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class VersionHelper : public ::java::lang::Object {
	$class(VersionHelper, 0, ::java::lang::Object)
public:
	VersionHelper();
	void init$();
	$Thread* createThread(::java::lang::Runnable* r);
	::java::lang::ClassLoader* getContextClassLoader();
	static $String* getPrivilegedProperty($String* propertyName, $String* defaultVal);
	::java::lang::ClassLoader* getURLClassLoader($StringArray* url);
	static $Array<::java::net::URL>* getUrlArray($StringArray* url);
	static ::com::sun::jndi::ldap::VersionHelper* getVersionHelper();
	static bool isSerialDataAllowed();
	static $Thread* lambda$createThread$1(::java::lang::Runnable* r, ::java::security::AccessControlContext* acc);
	static $String* lambda$getPrivilegedProperty$0($String* propertyName, $String* defaultVal);
	$Class* loadClass($String* className);
	static ::com::sun::jndi::ldap::VersionHelper* helper;
	static bool trustURLCodebase;
	static bool trustSerialData;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_VersionHelper_h_