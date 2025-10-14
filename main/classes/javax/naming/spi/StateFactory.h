#ifndef _javax_naming_spi_StateFactory_h_
#define _javax_naming_spi_StateFactory_h_
//$ interface javax.naming.spi.StateFactory
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

class $export StateFactory : public ::java::lang::Object {
	$interface(StateFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getStateToBind(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_StateFactory_h_