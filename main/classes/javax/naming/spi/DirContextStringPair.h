#ifndef _javax_naming_spi_DirContextStringPair_h_
#define _javax_naming_spi_DirContextStringPair_h_
//$ class javax.naming.spi.DirContextStringPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class DirContextStringPair : public ::java::lang::Object {
	$class(DirContextStringPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DirContextStringPair();
	void init$(::javax::naming::directory::DirContext* ctx, $String* str);
	virtual ::javax::naming::directory::DirContext* getDirContext();
	virtual $String* getString();
	::javax::naming::directory::DirContext* ctx = nullptr;
	$String* str = nullptr;
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_DirContextStringPair_h_