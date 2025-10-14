#ifndef _javax_naming_spi_DirectoryManager_h_
#define _javax_naming_spi_DirectoryManager_h_
//$ class javax.naming.spi.DirectoryManager
//$ extends javax.naming.spi.NamingManager

#include <javax/naming/spi/NamingManager.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class CannotProceedException;
		class Context;
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
			class DirContext;
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

class $import DirectoryManager : public ::javax::naming::spi::NamingManager {
	$class(DirectoryManager, $NO_CLASS_INIT, ::javax::naming::spi::NamingManager)
public:
	DirectoryManager();
	void init$();
	static $Object* createObjectFromFactories(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment, ::javax::naming::directory::Attributes* attrs);
	static ::javax::naming::directory::DirContext* getContinuationDirContext(::javax::naming::CannotProceedException* cpe);
	static $Object* getObjectInstance(Object$* refInfo, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment, ::javax::naming::directory::Attributes* attrs);
	static ::javax::naming::spi::DirStateFactory$Result* getStateToBind(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment, ::javax::naming::directory::Attributes* attrs);
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_DirectoryManager_h_