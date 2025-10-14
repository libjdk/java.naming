#ifndef _javax_naming_spi_DirObjectFactory_h_
#define _javax_naming_spi_DirObjectFactory_h_
//$ interface javax.naming.spi.DirObjectFactory
//$ extends javax.naming.spi.ObjectFactory

#include <javax/naming/spi/ObjectFactory.h>

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
		namespace directory {
			class Attributes;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $export DirObjectFactory : public ::javax::naming::spi::ObjectFactory {
	$interface(DirObjectFactory, $NO_CLASS_INIT, ::javax::naming::spi::ObjectFactory)
public:
	using ::javax::naming::spi::ObjectFactory::getObjectInstance;
	virtual $Object* getObjectInstance(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment, ::javax::naming::directory::Attributes* attrs) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_DirObjectFactory_h_