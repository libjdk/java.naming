#ifndef _com_sun_jndi_ldap_LdapNamingEnumeration_h_
#define _com_sun_jndi_ldap_LdapNamingEnumeration_h_
//$ class com.sun.jndi.ldap.LdapNamingEnumeration
//$ extends com.sun.jndi.ldap.AbstractLdapNamingEnumeration

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapCtx;
				class LdapReferralContext;
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

class LdapNamingEnumeration : public ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration {
	$class(LdapNamingEnumeration, 0, ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration)
public:
	LdapNamingEnumeration();
	void init$(::com::sun::jndi::ldap::LdapCtx* homeCtx, ::com::sun::jndi::ldap::LdapResult* answer, ::javax::naming::Name* listArg, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NameClassPair* createItem($String* dn, ::javax::naming::directory::Attributes* attrs, ::java::util::Vector* respCtls) override;
	virtual ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration* getReferredResults(::com::sun::jndi::ldap::LdapReferralContext* refCtx) override;
	static $String* defaultClassName;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapNamingEnumeration_h_