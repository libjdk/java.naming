#ifndef _com_sun_jndi_ldap_LdapCtx$SearchArgs_h_
#define _com_sun_jndi_ldap_LdapCtx$SearchArgs_h_
//$ class com.sun.jndi.ldap.LdapCtx$SearchArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace naming {
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class SearchControls;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapCtx$SearchArgs : public ::java::lang::Object {
	$class(LdapCtx$SearchArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapCtx$SearchArgs();
	void init$(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, $StringArray* ra);
	::javax::naming::Name* name = nullptr;
	$String* filter = nullptr;
	::javax::naming::directory::SearchControls* cons = nullptr;
	$StringArray* reqAttrs = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapCtx$SearchArgs_h_