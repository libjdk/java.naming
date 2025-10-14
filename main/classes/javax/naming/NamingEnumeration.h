#ifndef _javax_naming_NamingEnumeration_h_
#define _javax_naming_NamingEnumeration_h_
//$ interface javax.naming.NamingEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace javax {
	namespace naming {

class $export NamingEnumeration : public ::java::util::Enumeration {
	$interface(NamingEnumeration, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	virtual void close() {}
	virtual bool hasMore() {return false;}
	virtual $Object* next() {return nullptr;}
};

	} // naming
} // javax

#endif // _javax_naming_NamingEnumeration_h_