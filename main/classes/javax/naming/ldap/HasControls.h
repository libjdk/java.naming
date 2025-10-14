#ifndef _javax_naming_ldap_HasControls_h_
#define _javax_naming_ldap_HasControls_h_
//$ interface javax.naming.ldap.HasControls
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class $export HasControls : public ::java::lang::Object {
	$interface(HasControls, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Array<::javax::naming::ldap::Control>* getControls() {return nullptr;}
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_HasControls_h_