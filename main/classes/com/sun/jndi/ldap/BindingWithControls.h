#ifndef _com_sun_jndi_ldap_BindingWithControls_h_
#define _com_sun_jndi_ldap_BindingWithControls_h_
//$ class com.sun.jndi.ldap.BindingWithControls
//$ extends javax.naming.Binding
//$ implements javax.naming.ldap.HasControls

#include <java/lang/Array.h>
#include <javax/naming/Binding.h>
#include <javax/naming/ldap/HasControls.h>

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

class BindingWithControls : public ::javax::naming::Binding, public ::javax::naming::ldap::HasControls {
	$class(BindingWithControls, $NO_CLASS_INIT, ::javax::naming::Binding, ::javax::naming::ldap::HasControls)
public:
	BindingWithControls();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, Object$* obj, $Array<::javax::naming::ldap::Control>* controls);
	virtual $Array<::javax::naming::ldap::Control>* getControls() override;
	virtual $String* toString() override;
	$Array<::javax::naming::ldap::Control>* controls = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x7E8710E20C722928;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_BindingWithControls_h_