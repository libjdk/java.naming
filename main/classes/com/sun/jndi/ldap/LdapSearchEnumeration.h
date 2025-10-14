#ifndef _com_sun_jndi_ldap_LdapSearchEnumeration_h_
#define _com_sun_jndi_ldap_LdapSearchEnumeration_h_
//$ class com.sun.jndi.ldap.LdapSearchEnumeration
//$ extends com.sun.jndi.ldap.AbstractLdapNamingEnumeration

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapCtx;
				class LdapCtx$SearchArgs;
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
	namespace security {
		class AccessControlContext;
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

class LdapSearchEnumeration : public ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration {
	$class(LdapSearchEnumeration, $NO_CLASS_INIT, ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration)
public:
	LdapSearchEnumeration();
	void init$(::com::sun::jndi::ldap::LdapCtx* homeCtx, ::com::sun::jndi::ldap::LdapResult* search_results, $String* starter, ::com::sun::jndi::ldap::LdapCtx$SearchArgs* args, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void appendUnprocessedReferrals(::com::sun::jndi::ldap::LdapReferralException* ex) override;
	virtual ::javax::naming::NameClassPair* createItem($String* dn, ::javax::naming::directory::Attributes* attrs, ::java::util::Vector* respCtls) override;
	virtual ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration* getReferredResults(::com::sun::jndi::ldap::LdapReferralContext* refCtx) override;
	static $Object* lambda$createItem$0(::javax::naming::directory::Attributes* attrs);
	void setStartName(::javax::naming::Name* nm);
	virtual void update(::com::sun::jndi::ldap::AbstractLdapNamingEnumeration* ne) override;
	::javax::naming::Name* startName = nullptr;
	::com::sun::jndi::ldap::LdapCtx$SearchArgs* searchArgs = nullptr;
	::java::security::AccessControlContext* acc = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapSearchEnumeration_h_