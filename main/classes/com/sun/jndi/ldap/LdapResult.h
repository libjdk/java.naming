#ifndef _com_sun_jndi_ldap_LdapResult_h_
#define _com_sun_jndi_ldap_LdapResult_h_
//$ class com.sun.jndi.ldap.LdapResult
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapReferralException;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapResult : public ::java::lang::Object {
	$class(LdapResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapResult();
	void init$();
	bool compareToSearchResult($String* name);
	int32_t msgId = 0;
	int32_t status = 0;
	$String* matchedDN = nullptr;
	$String* errorMessage = nullptr;
	::java::util::Vector* referrals = nullptr;
	::com::sun::jndi::ldap::LdapReferralException* refEx = nullptr;
	::java::util::Vector* entries = nullptr;
	::java::util::Vector* resControls = nullptr;
	$bytes* serverCreds = nullptr;
	$String* extensionId = nullptr;
	$bytes* extensionValue = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapResult_h_