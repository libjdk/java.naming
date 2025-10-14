#ifndef _javax_naming_spi_ObjectFactoryBuilder_h_
#define _javax_naming_spi_ObjectFactoryBuilder_h_
//$ interface javax.naming.spi.ObjectFactoryBuilder
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
			class ObjectFactory;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $import ObjectFactoryBuilder : public ::java::lang::Object {
	$interface(ObjectFactoryBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::naming::spi::ObjectFactory* createObjectFactory(Object$* obj, ::java::util::Hashtable* environment) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_ObjectFactoryBuilder_h_