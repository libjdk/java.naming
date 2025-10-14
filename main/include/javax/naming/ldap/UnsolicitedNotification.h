#ifndef _javax_naming_ldap_UnsolicitedNotification_h_
#define _javax_naming_ldap_UnsolicitedNotification_h_
//$ interface javax.naming.ldap.UnsolicitedNotification
//$ extends javax.naming.ldap.ExtendedResponse,javax.naming.ldap.HasControls

#include <java/lang/Array.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <javax/naming/ldap/HasControls.h>

namespace javax {
	namespace naming {
		class NamingException;
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $import UnsolicitedNotification : public ::javax::naming::ldap::ExtendedResponse, public ::javax::naming::ldap::HasControls {
	$interface(UnsolicitedNotification, $NO_CLASS_INIT, ::javax::naming::ldap::ExtendedResponse, ::javax::naming::ldap::HasControls)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::naming::NamingException* getException() {return nullptr;}
	virtual $StringArray* getReferrals() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_UnsolicitedNotification_h_