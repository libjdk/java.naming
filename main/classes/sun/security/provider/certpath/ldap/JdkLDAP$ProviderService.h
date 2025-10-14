#ifndef _sun_security_provider_certpath_ldap_JdkLDAP$ProviderService_h_
#define _sun_security_provider_certpath_ldap_JdkLDAP$ProviderService_h_
//$ class sun.security.provider.certpath.ldap.JdkLDAP$ProviderService
//$ extends java.security.Provider$Service

#include <java/security/Provider$Service.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class List;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class JdkLDAP$ProviderService : public ::java::security::Provider$Service {
	$class(JdkLDAP$ProviderService, $NO_CLASS_INIT, ::java::security::Provider$Service)
public:
	JdkLDAP$ProviderService();
	void init$(::java::security::Provider* p, $String* type, $String* algo, $String* cn, ::java::util::List* aliases, ::java::util::HashMap* attrs);
	virtual $Object* newInstance(Object$* ctrParamObj) override;
};

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ldap_JdkLDAP$ProviderService_h_