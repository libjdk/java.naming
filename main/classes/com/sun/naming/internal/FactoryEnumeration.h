#ifndef _com_sun_naming_internal_FactoryEnumeration_h_
#define _com_sun_naming_internal_FactoryEnumeration_h_
//$ class com.sun.naming.internal.FactoryEnumeration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class FactoryEnumeration : public ::java::lang::Object {
	$class(FactoryEnumeration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FactoryEnumeration();
	void init$(::java::util::List* factories, ::java::lang::ClassLoader* loader);
	bool hasMore();
	$Object* next();
	::java::util::List* factories = nullptr;
	int32_t posn = 0;
	::java::lang::ClassLoader* loader = nullptr;
};

			} // internal
		} // naming
	} // sun
} // com

#endif // _com_sun_naming_internal_FactoryEnumeration_h_