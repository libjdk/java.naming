#ifndef _com_sun_jndi_ldap_ServiceLocator_h_
#define _com_sun_jndi_ldap_ServiceLocator_h_
//$ class com.sun.jndi.ldap.ServiceLocator
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SRV_RR")
#undef SRV_RR
#pragma push_macro("SRV_RR_ATTR")
#undef SRV_RR_ATTR

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class ServiceLocator$SrvRecord;
			}
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
		class Random;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class ServiceLocator : public ::java::lang::Object {
	$class(ServiceLocator, 0, ::java::lang::Object)
public:
	ServiceLocator();
	void init$();
	static $StringArray* extractHostports($Array<::com::sun::jndi::ldap::ServiceLocator$SrvRecord>* srvRecords);
	static $StringArray* getLdapService($String* domainName, ::java::util::Map* environment);
	static $StringArray* getLdapService($String* domainName, ::java::util::Hashtable* environment);
	static $String* mapDnToDomainName($String* dn);
	static $String* selectHostport($Array<::com::sun::jndi::ldap::ServiceLocator$SrvRecord>* srvRecords, int32_t head, int32_t tail);
	static $String* SRV_RR;
	static $StringArray* SRV_RR_ATTR;
	static ::java::util::Random* random;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("SRV_RR")
#pragma pop_macro("SRV_RR_ATTR")

#endif // _com_sun_jndi_ldap_ServiceLocator_h_