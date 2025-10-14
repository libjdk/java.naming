#ifndef _sun_security_provider_certpath_ldap_JdkLDAP_h_
#define _sun_security_provider_certpath_ldap_JdkLDAP_h_
//$ class sun.security.provider.certpath.ldap.JdkLDAP
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace lang {
		class Void;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class JdkLDAP : public ::java::security::Provider {
	$class(JdkLDAP, $NO_CLASS_INIT, ::java::security::Provider)
public:
	JdkLDAP();
	using ::java::security::Provider::getProperty;
	void init$();
	::java::lang::Void* lambda$new$0(::java::security::Provider* p);
	using ::java::security::Provider::load;
	static const int64_t serialVersionUID = (int64_t)0xE05CBB6D5F2E6BEE;
};

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ldap_JdkLDAP_h_