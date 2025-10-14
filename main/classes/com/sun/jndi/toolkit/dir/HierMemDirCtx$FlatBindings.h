#ifndef _com_sun_jndi_toolkit_dir_HierMemDirCtx$FlatBindings_h_
#define _com_sun_jndi_toolkit_dir_HierMemDirCtx$FlatBindings_h_
//$ class com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatBindings
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
		class Hashtable;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class HierMemDirCtx$FlatBindings : public ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames {
	$class(HierMemDirCtx$FlatBindings, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames)
public:
	HierMemDirCtx$FlatBindings();
	void init$(::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0, ::java::util::Hashtable* bindings, ::java::util::Hashtable* env, bool useFactory);
	virtual $Object* next() override;
	::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0 = nullptr;
	::java::util::Hashtable* bds = nullptr;
	::java::util::Hashtable* env = nullptr;
	bool useFactory = false;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierMemDirCtx$FlatBindings_h_