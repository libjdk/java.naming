#ifndef _com_sun_jndi_ldap_DefaultResponseControlFactory_h_
#define _com_sun_jndi_ldap_DefaultResponseControlFactory_h_
//$ class com.sun.jndi.ldap.DefaultResponseControlFactory
//$ extends javax.naming.ldap.ControlFactory

#include <javax/naming/ldap/ControlFactory.h>

namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class DefaultResponseControlFactory : public ::javax::naming::ldap::ControlFactory {
	$class(DefaultResponseControlFactory, $NO_CLASS_INIT, ::javax::naming::ldap::ControlFactory)
public:
	DefaultResponseControlFactory();
	void init$();
	virtual ::javax::naming::ldap::Control* getControlInstance(::javax::naming::ldap::Control* ctl) override;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_DefaultResponseControlFactory_h_