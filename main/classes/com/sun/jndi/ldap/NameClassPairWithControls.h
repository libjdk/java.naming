#ifndef _com_sun_jndi_ldap_NameClassPairWithControls_h_
#define _com_sun_jndi_ldap_NameClassPairWithControls_h_
//$ class com.sun.jndi.ldap.NameClassPairWithControls
//$ extends javax.naming.NameClassPair
//$ implements javax.naming.ldap.HasControls

#include <java/lang/Array.h>
#include <javax/naming/NameClassPair.h>
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

class NameClassPairWithControls : public ::javax::naming::NameClassPair, public ::javax::naming::ldap::HasControls {
	$class(NameClassPairWithControls, $NO_CLASS_INIT, ::javax::naming::NameClassPair, ::javax::naming::ldap::HasControls)
public:
	NameClassPairWithControls();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, $String* className, $Array<::javax::naming::ldap::Control>* controls);
	virtual $Array<::javax::naming::ldap::Control>* getControls() override;
	virtual $String* toString() override;
	$Array<::javax::naming::ldap::Control>* controls = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x1BE794653F513FF0;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_NameClassPairWithControls_h_