#ifndef _javax_naming_spi_InitialContextFactory_h_
#define _javax_naming_spi_InitialContextFactory_h_
//$ interface javax.naming.spi.InitialContextFactory
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
		namespace spi {

class $import InitialContextFactory : public ::java::lang::Object {
	$interface(InitialContextFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::naming::Context* getInitialContext(::java::util::Hashtable* environment) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_InitialContextFactory_h_