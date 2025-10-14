#ifndef _sun_security_provider_certpath_ldap_LDAPCertStore$Key_h_
#define _sun_security_provider_certpath_ldap_LDAPCertStore$Key_h_
//$ class sun.security.provider.certpath.ldap.LDAPCertStore$Key
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class LDAPCertStore$Key : public ::java::lang::Object {
	$class(LDAPCertStore$Key, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LDAPCertStore$Key();
	void init$($String* serverName, int32_t port);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	$volatile(int32_t) hashCode$ = 0;
	$String* serverName = nullptr;
	int32_t port = 0;
};

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ldap_LDAPCertStore$Key_h_