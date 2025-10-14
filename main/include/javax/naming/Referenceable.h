#ifndef _javax_naming_Referenceable_h_
#define _javax_naming_Referenceable_h_
//$ interface javax.naming.Referenceable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		class Reference;
	}
}

namespace javax {
	namespace naming {

class $import Referenceable : public ::java::lang::Object {
	$interface(Referenceable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::naming::Reference* getReference() {return nullptr;}
};

	} // naming
} // javax

#endif // _javax_naming_Referenceable_h_