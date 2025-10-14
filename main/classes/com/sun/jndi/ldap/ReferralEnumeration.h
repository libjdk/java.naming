#ifndef _com_sun_jndi_ldap_ReferralEnumeration_h_
#define _com_sun_jndi_ldap_ReferralEnumeration_h_
//$ interface com.sun.jndi.ldap.ReferralEnumeration
//$ extends javax.naming.NamingEnumeration

#include <javax/naming/NamingEnumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapReferralException;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class ReferralEnumeration : public ::javax::naming::NamingEnumeration {
	$interface(ReferralEnumeration, $NO_CLASS_INIT, ::javax::naming::NamingEnumeration)
public:
	virtual void appendUnprocessedReferrals(::com::sun::jndi::ldap::LdapReferralException* ex) {}
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_ReferralEnumeration_h_