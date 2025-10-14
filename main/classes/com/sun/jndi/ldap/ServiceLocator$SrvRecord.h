#ifndef _com_sun_jndi_ldap_ServiceLocator$SrvRecord_h_
#define _com_sun_jndi_ldap_ServiceLocator$SrvRecord_h_
//$ class com.sun.jndi.ldap.ServiceLocator$SrvRecord
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class ServiceLocator$SrvRecord : public ::java::lang::Comparable {
	$class(ServiceLocator$SrvRecord, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	ServiceLocator$SrvRecord();
	void init$($String* srvRecord);
	virtual int32_t compareTo(::com::sun::jndi::ldap::ServiceLocator$SrvRecord* that);
	virtual int32_t compareTo(Object$* that) override;
	int32_t priority = 0;
	int32_t weight = 0;
	int32_t sum = 0;
	$String* hostport = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_ServiceLocator$SrvRecord_h_