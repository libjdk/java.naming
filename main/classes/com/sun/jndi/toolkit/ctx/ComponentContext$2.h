#ifndef _com_sun_jndi_toolkit_ctx_ComponentContext$2_h_
#define _com_sun_jndi_toolkit_ctx_ComponentContext$2_h_
//$ class com.sun.jndi.toolkit.ctx.ComponentContext$2
//$ extends javax.naming.RefAddr

#include <javax/naming/RefAddr.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class ComponentContext;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class ComponentContext$2 : public ::javax::naming::RefAddr {
	$class(ComponentContext$2, $NO_CLASS_INIT, ::javax::naming::RefAddr)
public:
	ComponentContext$2();
	void init$(::com::sun::jndi::toolkit::ctx::ComponentContext* this$0, $String* addrType);
	virtual $Object* getContent() override;
	::com::sun::jndi::toolkit::ctx::ComponentContext* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xECB799B4DA1C5E66;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_ComponentContext$2_h_