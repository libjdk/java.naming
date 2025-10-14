#ifndef _com_sun_jndi_ldap_LdapEntry_h_
#define _com_sun_jndi_ldap_LdapEntry_h_
//$ class com.sun.jndi.ldap.LdapEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DN")
#undef DN

namespace java {
	namespace util {
		class Vector;
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

class LdapEntry : public ::java::lang::Object {
	$class(LdapEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapEntry();
	void init$($String* DN, ::javax::naming::directory::Attributes* attrs);
	void init$($String* DN, ::javax::naming::directory::Attributes* attrs, ::java::util::Vector* respCtls);
	$String* DN = nullptr;
	::javax::naming::directory::Attributes* attributes = nullptr;
	::java::util::Vector* respCtls = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("DN")

#endif // _com_sun_jndi_ldap_LdapEntry_h_