#ifndef _javax_naming_spi_ObjectFactory_h_
#define _javax_naming_spi_ObjectFactory_h_
//$ interface javax.naming.spi.ObjectFactory
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
		class Name;
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $import ObjectFactory : public ::java::lang::Object {
	$interface(ObjectFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getObjectInstance(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_ObjectFactory_h_