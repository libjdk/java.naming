#ifndef _javax_naming_spi_InitialContextFactoryBuilder_h_
#define _javax_naming_spi_InitialContextFactoryBuilder_h_
//$ interface javax.naming.spi.InitialContextFactoryBuilder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		namespace spi {
			class InitialContextFactory;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $import InitialContextFactoryBuilder : public ::java::lang::Object {
	$interface(InitialContextFactoryBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::naming::spi::InitialContextFactory* createInitialContextFactory(::java::util::Hashtable* environment) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_InitialContextFactoryBuilder_h_