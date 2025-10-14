#ifndef _com_sun_jndi_ldap_AbstractLdapNamingEnumeration_h_
#define _com_sun_jndi_ldap_AbstractLdapNamingEnumeration_h_
//$ class com.sun.jndi.ldap.AbstractLdapNamingEnumeration
//$ extends com.sun.jndi.ldap.ReferralEnumeration

#include <com/sun/jndi/ldap/ReferralEnumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapClient;
				class LdapCtx;
				class LdapReferralContext;
				class LdapReferralException;
				class LdapResult;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class Continuation;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace naming {
		class Name;
		class NameClassPair;
		class NamingException;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class AbstractLdapNamingEnumeration : public ::com::sun::jndi::ldap::ReferralEnumeration {
	$class(AbstractLdapNamingEnumeration, $HAS_FINALIZE | $NO_CLASS_INIT, ::com::sun::jndi::ldap::ReferralEnumeration)
public:
	AbstractLdapNamingEnumeration();
	void init$(::com::sun::jndi::ldap::LdapCtx* homeCtx, ::com::sun::jndi::ldap::LdapResult* answer, ::javax::naming::Name* listArg, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void appendUnprocessedReferrals(::com::sun::jndi::ldap::LdapReferralException* ex) override;
	void cleanup();
	virtual void close() override;
	virtual ::javax::naming::NameClassPair* createItem($String* dn, ::javax::naming::directory::Attributes* attrs, ::java::util::Vector* respCtls) {return nullptr;}
	virtual void finalize() override;
	$String* getAtom($String* dn);
	void getNextBatch();
	virtual ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration* getReferredResults(::com::sun::jndi::ldap::LdapReferralContext* refCtx) {return nullptr;}
	virtual bool hasMore() override;
	virtual bool hasMoreElements() override;
	bool hasMoreImpl();
	bool hasMoreReferrals();
	virtual $Object* next() override;
	::javax::naming::NameClassPair* nextAux();
	virtual $Object* nextElement() override;
	::javax::naming::NameClassPair* nextImpl();
	void setNamingException(::javax::naming::NamingException* e);
	virtual void update(::com::sun::jndi::ldap::AbstractLdapNamingEnumeration* ne);
	::javax::naming::Name* listArg = nullptr;
	bool cleaned = false;
	::com::sun::jndi::ldap::LdapResult* res = nullptr;
	::com::sun::jndi::ldap::LdapClient* enumClnt = nullptr;
	::com::sun::jndi::toolkit::ctx::Continuation* cont = nullptr;
	::java::util::Vector* entries = nullptr;
	int32_t limit = 0;
	int32_t posn = 0;
	::com::sun::jndi::ldap::LdapCtx* homeCtx = nullptr;
	::com::sun::jndi::ldap::LdapReferralException* refEx = nullptr;
	::javax::naming::NamingException* errEx = nullptr;
	bool more = false;
	bool hasMoreCalled = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_AbstractLdapNamingEnumeration_h_