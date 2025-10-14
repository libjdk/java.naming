#ifndef _javax_naming_spi_DirStateFactory$Result_h_
#define _javax_naming_spi_DirStateFactory$Result_h_
//$ class javax.naming.spi.DirStateFactory$Result
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import DirStateFactory$Result : public ::java::lang::Object {
	$class(DirStateFactory$Result, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DirStateFactory$Result();
	void init$(Object$* obj, ::javax::naming::directory::Attributes* outAttrs);
	virtual ::javax::naming::directory::Attributes* getAttributes();
	virtual $Object* getObject();
	$Object* obj = nullptr;
	::javax::naming::directory::Attributes* attrs = nullptr;
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_DirStateFactory$Result_h_