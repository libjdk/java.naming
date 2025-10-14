#ifndef _javax_naming_spi_DirStateFactory_h_
#define _javax_naming_spi_DirStateFactory_h_
//$ interface javax.naming.spi.DirStateFactory
//$ extends javax.naming.spi.StateFactory

#include <javax/naming/spi/StateFactory.h>

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
			class DirStateFactory$Result;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $export DirStateFactory : public ::javax::naming::spi::StateFactory {
	$interface(DirStateFactory, $NO_CLASS_INIT, ::javax::naming::spi::StateFactory)
public:
	using ::javax::naming::spi::StateFactory::getStateToBind;
	virtual ::javax::naming::spi::DirStateFactory$Result* getStateToBind(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment, ::javax::naming::directory::Attributes* inAttrs) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_DirStateFactory_h_