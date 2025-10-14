#ifndef _com_sun_jndi_ldap_LdapPoolManager$1_h_
#define _com_sun_jndi_ldap_LdapPoolManager$1_h_
//$ class com.sun.jndi.ldap.LdapPoolManager$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapPoolManager$1 : public ::java::security::PrivilegedAction {
	$class(LdapPoolManager$1, 0, ::java::security::PrivilegedAction)
public:
	LdapPoolManager$1();
	void init$();
	virtual $Object* run() override;
	static bool $assertionsDisabled;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapPoolManager$1_h_