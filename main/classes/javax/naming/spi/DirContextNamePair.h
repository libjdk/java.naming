#ifndef _javax_naming_spi_DirContextNamePair_h_
#define _javax_naming_spi_DirContextNamePair_h_
//$ class javax.naming.spi.DirContextNamePair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class DirContext;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class DirContextNamePair : public ::java::lang::Object {
	$class(DirContextNamePair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DirContextNamePair();
	void init$(::javax::naming::directory::DirContext* ctx, ::javax::naming::Name* name);
	virtual ::javax::naming::directory::DirContext* getDirContext();
	virtual ::javax::naming::Name* getName();
	::javax::naming::directory::DirContext* ctx = nullptr;
	::javax::naming::Name* name = nullptr;
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_DirContextNamePair_h_