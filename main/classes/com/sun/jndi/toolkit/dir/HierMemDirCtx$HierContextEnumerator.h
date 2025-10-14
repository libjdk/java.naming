#ifndef _com_sun_jndi_toolkit_dir_HierMemDirCtx$HierContextEnumerator_h_
#define _com_sun_jndi_toolkit_dir_HierMemDirCtx$HierContextEnumerator_h_
//$ class com.sun.jndi.toolkit.dir.HierMemDirCtx$HierContextEnumerator
//$ extends com.sun.jndi.toolkit.dir.ContextEnumerator

#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>

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
namespace javax {
	namespace naming {
		class Context;
		class NamingEnumeration;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class HierMemDirCtx$HierContextEnumerator : public ::com::sun::jndi::toolkit::dir::ContextEnumerator {
	$class(HierMemDirCtx$HierContextEnumerator, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::ContextEnumerator)
public:
	HierMemDirCtx$HierContextEnumerator();
	void init$(::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0, ::javax::naming::Context* context, int32_t scope);
	void init$(::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0, ::javax::naming::Context* context, int32_t scope, $String* contextName, bool returnSelf);
	virtual ::javax::naming::NamingEnumeration* getImmediateChildren(::javax::naming::Context* ctx) override;
	virtual ::com::sun::jndi::toolkit::dir::ContextEnumerator* newEnumerator(::javax::naming::Context* ctx, int32_t scope, $String* contextName, bool returnSelf) override;
	::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0 = nullptr;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierMemDirCtx$HierContextEnumerator_h_