#ifndef _javax_naming_NameParser_h_
#define _javax_naming_NameParser_h_
//$ interface javax.naming.NameParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		class Name;
	}
}

namespace javax {
	namespace naming {

class $export NameParser : public ::java::lang::Object {
	$interface(NameParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::naming::Name* parse($String* name) {return nullptr;}
};

	} // naming
} // javax

#endif // _javax_naming_NameParser_h_