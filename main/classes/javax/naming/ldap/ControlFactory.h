#ifndef _javax_naming_ldap_ControlFactory_h_
#define _javax_naming_ldap_ControlFactory_h_
//$ class javax.naming.ldap.ControlFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $export ControlFactory : public ::java::lang::Object {
	$class(ControlFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ControlFactory();
	void init$();
	virtual ::javax::naming::ldap::Control* getControlInstance(::javax::naming::ldap::Control* ctl) {return nullptr;}
	static ::javax::naming::ldap::Control* getControlInstance(::javax::naming::ldap::Control* ctl, ::javax::naming::Context* ctx, ::java::util::Hashtable* env);
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_ControlFactory_h_