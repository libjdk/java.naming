#ifndef _com_sun_jndi_ldap_UnsolicitedResponseImpl_h_
#define _com_sun_jndi_ldap_UnsolicitedResponseImpl_h_
//$ class com.sun.jndi.ldap.UnsolicitedResponseImpl
//$ extends javax.naming.ldap.UnsolicitedNotification

#include <java/lang/Array.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace naming {
		class NamingException;
	}
}
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

class UnsolicitedResponseImpl : public ::javax::naming::ldap::UnsolicitedNotification {
	$class(UnsolicitedResponseImpl, $NO_CLASS_INIT, ::javax::naming::ldap::UnsolicitedNotification)
public:
	UnsolicitedResponseImpl();
	void init$($String* oid, $bytes* berVal, ::java::util::Vector* ref, int32_t status, $String* msg, $String* matchedDN, $Array<::javax::naming::ldap::Control>* controls);
	virtual $Array<::javax::naming::ldap::Control>* getControls() override;
	virtual $bytes* getEncodedValue() override;
	virtual ::javax::naming::NamingException* getException() override;
	virtual $String* getID() override;
	virtual $StringArray* getReferrals() override;
	$String* oid = nullptr;
	$StringArray* referrals = nullptr;
	$bytes* extensionValue = nullptr;
	::javax::naming::NamingException* exception = nullptr;
	$Array<::javax::naming::ldap::Control>* controls = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x5211F693577073C7;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_UnsolicitedResponseImpl_h_