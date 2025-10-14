#ifndef _javax_naming_ldap_BasicControl_h_
#define _javax_naming_ldap_BasicControl_h_
//$ class javax.naming.ldap.BasicControl
//$ extends javax.naming.ldap.Control

#include <java/lang/Array.h>
#include <javax/naming/ldap/Control.h>

namespace javax {
	namespace naming {
		namespace ldap {

class $export BasicControl : public ::javax::naming::ldap::Control {
	$class(BasicControl, $NO_CLASS_INIT, ::javax::naming::ldap::Control)
public:
	BasicControl();
	void init$($String* id);
	void init$($String* id, bool criticality, $bytes* value);
	virtual $bytes* getEncodedValue() override;
	virtual $String* getID() override;
	virtual bool isCritical() override;
	$String* id = nullptr;
	bool criticality = false;
	$bytes* value = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xC53E238D8FCC5CB9;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_BasicControl_h_