#ifndef _com_sun_jndi_toolkit_dir_AttrFilter_h_
#define _com_sun_jndi_toolkit_dir_AttrFilter_h_
//$ interface com.sun.jndi.toolkit.dir.AttrFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class AttrFilter : public ::java::lang::Object {
	$interface(AttrFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool check(::javax::naming::directory::Attributes* targetAttrs) {return false;}
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_AttrFilter_h_