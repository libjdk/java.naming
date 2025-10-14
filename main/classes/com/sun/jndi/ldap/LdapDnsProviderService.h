#ifndef _com_sun_jndi_ldap_LdapDnsProviderService_h_
#define _com_sun_jndi_ldap_LdapDnsProviderService_h_
//$ class com.sun.jndi.ldap.LdapDnsProviderService
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOCK")
#undef LOCK

namespace java {
	namespace util {
		class Hashtable;
		class ServiceLoader;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {
				class LdapDnsProviderResult;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapDnsProviderService : public ::java::lang::Object {
	$class(LdapDnsProviderService, 0, ::java::lang::Object)
public:
	LdapDnsProviderService();
	void init$();
	static ::com::sun::jndi::ldap::LdapDnsProviderService* getInstance();
	static bool lambda$lookupEndpoints$1(::javax::naming::ldap::spi::LdapDnsProviderResult* r);
	static ::java::util::ServiceLoader* lambda$new$0();
	::javax::naming::ldap::spi::LdapDnsProviderResult* lookupEndpoints($String* url, ::java::util::Hashtable* env);
	static $volatile(::com::sun::jndi::ldap::LdapDnsProviderService*) service;
	static $Object* LOCK;
	::java::util::ServiceLoader* providers = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("LOCK")

#endif // _com_sun_jndi_ldap_LdapDnsProviderService_h_