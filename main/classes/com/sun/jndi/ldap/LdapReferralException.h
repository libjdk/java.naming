#ifndef _com_sun_jndi_ldap_LdapReferralException_h_
#define _com_sun_jndi_ldap_LdapReferralException_h_
//$ class com.sun.jndi.ldap.LdapReferralException
//$ extends javax.naming.ldap.LdapReferralException

#include <java/lang/Array.h>
#include <javax/naming/ldap/LdapReferralException.h>

namespace java {
	namespace util {
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
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

class LdapReferralException : public ::javax::naming::ldap::LdapReferralException {
	$class(LdapReferralException, $NO_CLASS_INIT, ::javax::naming::ldap::LdapReferralException)
public:
	LdapReferralException();
	void init$(::javax::naming::Name* resolvedName, Object$* resolvedObj, ::javax::naming::Name* remainingName, $String* explanation, ::java::util::Hashtable* envprops, $String* nextName, int32_t handleReferrals, $Array<::javax::naming::ldap::Control>* reqCtls);
	::com::sun::jndi::ldap::LdapReferralException* appendUnprocessedReferrals(::com::sun::jndi::ldap::LdapReferralException* back);
	void dump();
	void dumpState();
	::javax::naming::NamingException* getNamingException();
	$String* getNewRdn();
	$String* getNextReferral();
	virtual ::javax::naming::Context* getReferralContext() override;
	virtual ::javax::naming::Context* getReferralContext(::java::util::Hashtable* newProps) override;
	virtual ::javax::naming::Context* getReferralContext(::java::util::Hashtable* newProps, $Array<::javax::naming::ldap::Control>* connCtls) override;
	virtual $Object* getReferralInfo() override;
	bool hasMoreReferralExceptions();
	bool hasMoreReferrals();
	virtual void retryReferral() override;
	void setHopCount(int32_t hopCount);
	void setNameResolved(bool resolved);
	void setNamingException(::javax::naming::NamingException* e);
	void setNewRdn($String* newRdn);
	void setReferralInfo(::java::util::Vector* referrals, bool continuationRef);
	virtual bool skipReferral() override;
	static const int64_t serialVersionUID = (int64_t)0x08B3C2E85B701D9F;
	int32_t handleReferrals = 0;
	::java::util::Hashtable* envprops = nullptr;
	$String* nextName = nullptr;
	$Array<::javax::naming::ldap::Control>* reqCtls = nullptr;
	::java::util::Vector* referrals = nullptr;
	int32_t referralIndex = 0;
	int32_t referralCount = 0;
	bool foundEntry = false;
	bool skipThisReferral = false;
	int32_t hopCount = 0;
	::javax::naming::NamingException* errorEx = nullptr;
	$String* newRdn = nullptr;
	bool debug = false;
	::com::sun::jndi::ldap::LdapReferralException* nextReferralEx = nullptr;
	LdapReferralException(const LdapReferralException& e);
	LdapReferralException wrapper$();
	virtual void throwWrapper$() override;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapReferralException_h_