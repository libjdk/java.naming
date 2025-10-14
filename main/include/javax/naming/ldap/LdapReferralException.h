#ifndef _javax_naming_ldap_LdapReferralException_h_
#define _javax_naming_ldap_LdapReferralException_h_
//$ class javax.naming.ldap.LdapReferralException
//$ extends javax.naming.ReferralException

#include <java/lang/Array.h>
#include <javax/naming/ReferralException.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $import LdapReferralException : public ::javax::naming::ReferralException {
	$class(LdapReferralException, $NO_CLASS_INIT, ::javax::naming::ReferralException)
public:
	LdapReferralException();
	virtual ::javax::naming::Context* getReferralContext() override {return nullptr;}
	virtual ::javax::naming::Context* getReferralContext(::java::util::Hashtable* env) override {return nullptr;}
	void init$($String* explanation);
	void init$();
	virtual ::javax::naming::Context* getReferralContext(::java::util::Hashtable* env, $Array<::javax::naming::ldap::Control>* reqCtls) {return nullptr;}
	static const int64_t serialVersionUID = (int64_t)0xE8D68BE60A29A0EC;
	LdapReferralException(const LdapReferralException& e);
	LdapReferralException wrapper$();
	virtual void throwWrapper$() override;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_LdapReferralException_h_