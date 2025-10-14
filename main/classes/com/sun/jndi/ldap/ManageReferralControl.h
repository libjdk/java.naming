#ifndef _com_sun_jndi_ldap_ManageReferralControl_h_
#define _com_sun_jndi_ldap_ManageReferralControl_h_
//$ class com.sun.jndi.ldap.ManageReferralControl
//$ extends com.sun.jndi.ldap.BasicControl

#include <com/sun/jndi/ldap/BasicControl.h>

#pragma push_macro("OID")
#undef OID

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class ManageReferralControl : public ::com::sun::jndi::ldap::BasicControl {
	$class(ManageReferralControl, 0, ::com::sun::jndi::ldap::BasicControl)
public:
	ManageReferralControl();
	void init$();
	void init$(bool criticality);
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0x0C9EC6BDA475BDE8;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("OID")

#endif // _com_sun_jndi_ldap_ManageReferralControl_h_