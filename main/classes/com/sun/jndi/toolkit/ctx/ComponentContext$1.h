#ifndef _com_sun_jndi_toolkit_ctx_ComponentContext$1_h_
#define _com_sun_jndi_toolkit_ctx_ComponentContext$1_h_
//$ class com.sun.jndi.toolkit.ctx.ComponentContext$1
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

class ComponentContext$1 : public ::javax::naming::RefAddr {
	$class(ComponentContext$1, $NO_CLASS_INIT, ::javax::naming::RefAddr)
public:
	ComponentContext$1();
	void init$(::com::sun::jndi::toolkit::ctx::ComponentContext* this$0, $String* addrType, Object$* val$obj);
	virtual $Object* getContent() override;
	::com::sun::jndi::toolkit::ctx::ComponentContext* this$0 = nullptr;
	$Object* val$obj = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x85714206711E4306;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_ComponentContext$1_h_