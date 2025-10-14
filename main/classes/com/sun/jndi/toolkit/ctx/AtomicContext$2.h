#ifndef _com_sun_jndi_toolkit_ctx_AtomicContext$2_h_
#define _com_sun_jndi_toolkit_ctx_AtomicContext$2_h_
//$ class com.sun.jndi.toolkit.ctx.AtomicContext$2
//$ extends javax.naming.RefAddr

#include <javax/naming/RefAddr.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class AtomicContext;
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

class AtomicContext$2 : public ::javax::naming::RefAddr {
	$class(AtomicContext$2, $NO_CLASS_INIT, ::javax::naming::RefAddr)
public:
	AtomicContext$2();
	void init$(::com::sun::jndi::toolkit::ctx::AtomicContext* this$0, $String* addrType);
	virtual $Object* getContent() override;
	::com::sun::jndi::toolkit::ctx::AtomicContext* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x2FE019F48B439B88;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_AtomicContext$2_h_