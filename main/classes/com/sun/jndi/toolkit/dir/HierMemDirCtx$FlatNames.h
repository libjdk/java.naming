#ifndef _com_sun_jndi_toolkit_dir_HierMemDirCtx$FlatNames_h_
#define _com_sun_jndi_toolkit_dir_HierMemDirCtx$FlatNames_h_
//$ class com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames
//$ extends com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames

#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {
					class HierMemDirCtx;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class HierMemDirCtx$FlatNames : public ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames {
	$class(HierMemDirCtx$FlatNames, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames)
public:
	HierMemDirCtx$FlatNames();
	void init$(::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0, ::java::util::Enumeration* names);
	virtual $Object* next() override;
	::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0 = nullptr;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierMemDirCtx$FlatNames_h_