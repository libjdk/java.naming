#ifndef _com_sun_jndi_toolkit_ctx_ComponentContext_h_
#define _com_sun_jndi_toolkit_ctx_ComponentContext_h_
//$ class com.sun.jndi.toolkit.ctx.ComponentContext
//$ extends com.sun.jndi.toolkit.ctx.PartialCompositeContext

#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>

#pragma push_macro("TERMINAL_COMPONENT")
#undef TERMINAL_COMPONENT
#pragma push_macro("TERMINAL_NNS_COMPONENT")
#undef TERMINAL_NNS_COMPONENT
#pragma push_macro("USE_CONTINUATION")
#undef USE_CONTINUATION

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class Continuation;
					class HeadTail;
				}
			}
		}
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
		class NameParser;
		class NamingEnumeration;
	}
}
namespace javax {
	namespace naming {
		namespace spi {
			class ResolveResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $export ComponentContext : public ::com::sun::jndi::toolkit::ctx::PartialCompositeContext {
	$class(ComponentContext, 0, ::com::sun::jndi::toolkit::ctx::PartialCompositeContext)
public:
	ComponentContext();
	void init$();
	virtual void c_bind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_bind_nns(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::Context* c_createSubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::Context* c_createSubcontext_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_destroySubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_destroySubcontext_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NameParser* c_getNameParser(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NameParser* c_getNameParser_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* c_list(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* c_listBindings(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* c_listBindings_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* c_list_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual $Object* c_lookup(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual $Object* c_lookupLink(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual $Object* c_lookupLink_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual $Object* c_lookup_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_processJunction_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_rebind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_rebind_nns(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_rename(::javax::naming::Name* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_rename_nns(::javax::naming::Name* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual $Object* c_resolveIntermediate_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_unbind(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_unbind_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void checkAndAdjustRemainingName(::javax::naming::Name* rname);
	virtual bool isAllEmpty(::javax::naming::Name* n);
	virtual void p_bind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::Context* p_createSubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void p_destroySubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NameParser* p_getNameParser(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* p_list(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* p_listBindings(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* p_lookup(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* p_lookupLink(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::com::sun::jndi::toolkit::ctx::HeadTail* p_parseComponent(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void p_rebind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void p_rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::com::sun::jndi::toolkit::ctx::HeadTail* p_resolveIntermediate(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::spi::ResolveResult* p_resolveToClass(::javax::naming::Name* name, $Class* contextType, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void p_unbind(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	static int32_t debug;
	static const int8_t USE_CONTINUATION = 1;
	static const int8_t TERMINAL_COMPONENT = 2;
	static const int8_t TERMINAL_NNS_COMPONENT = 3;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#pragma pop_macro("TERMINAL_COMPONENT")
#pragma pop_macro("TERMINAL_NNS_COMPONENT")
#pragma pop_macro("USE_CONTINUATION")

#endif // _com_sun_jndi_toolkit_ctx_ComponentContext_h_