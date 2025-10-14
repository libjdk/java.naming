#ifndef _javax_naming_ldap_ManageReferralControl_h_
#define _javax_naming_ldap_ManageReferralControl_h_
//$ class javax.naming.ldap.ManageReferralControl
//$ extends javax.naming.ldap.BasicControl

#include <javax/naming/ldap/BasicControl.h>

#pragma push_macro("OID")
#undef OID

namespace javax {
	namespace naming {
		namespace ldap {

class $export ManageReferralControl : public ::javax::naming::ldap::BasicControl {
	$class(ManageReferralControl, 0, ::javax::naming::ldap::BasicControl)
public:
	ManageReferralControl();
	void init$();
	void init$(bool criticality);
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0x29E1393D287C8D66;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("OID")

#endif // _javax_naming_ldap_ManageReferralControl_h_