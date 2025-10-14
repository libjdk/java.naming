#ifndef _com_sun_jndi_ldap_DefaultLdapDnsProvider_h_
#define _com_sun_jndi_ldap_DefaultLdapDnsProvider_h_
//$ class com.sun.jndi.ldap.DefaultLdapDnsProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
		class Optional;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class DefaultLdapDnsProvider : public ::java::lang::Object {
	$class(DefaultLdapDnsProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DefaultLdapDnsProvider();
	void init$();
	virtual ::java::util::Optional* lookupEndpoints($String* url, ::java::util::Map* env);
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_DefaultLdapDnsProvider_h_