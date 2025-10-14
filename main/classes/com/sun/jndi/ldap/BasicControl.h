#ifndef _com_sun_jndi_ldap_BasicControl_h_
#define _com_sun_jndi_ldap_BasicControl_h_
//$ class com.sun.jndi.ldap.BasicControl
//$ extends javax.naming.ldap.Control

#include <java/lang/Array.h>
#include <javax/naming/ldap/Control.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class BasicControl : public ::javax::naming::ldap::Control {
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
	static const int64_t serialVersionUID = (int64_t)0xADED21A92901AB03;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_BasicControl_h_