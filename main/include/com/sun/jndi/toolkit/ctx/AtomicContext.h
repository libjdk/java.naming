#ifndef _com_sun_jndi_toolkit_ctx_AtomicContext_h_
#define _com_sun_jndi_toolkit_ctx_AtomicContext_h_
//$ class com.sun.jndi.toolkit.ctx.AtomicContext
//$ extends com.sun.jndi.toolkit.ctx.ComponentContext

#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class Continuation;
					class StringHeadTail;
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

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $import AtomicContext : public ::com::sun::jndi::toolkit::ctx::ComponentContext {
	$class(AtomicContext, 0, ::com::sun::jndi::toolkit::ctx::ComponentContext)
public:
	AtomicContext();
	void init$();
	virtual void a_bind($String* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_bind_nns($String* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::Context* a_createSubcontext($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::Context* a_createSubcontext_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_destroySubcontext($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_destroySubcontext_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NameParser* a_getNameParser(::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NameParser* a_getNameParser_nns(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* a_list(::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* a_listBindings(::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* a_listBindings_nns(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* a_list_nns(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual $Object* a_lookup($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual $Object* a_lookupLink($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual $Object* a_lookupLink_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual $Object* a_lookup_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_processJunction_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_processJunction_nns(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_rebind($String* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_rebind_nns($String* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_rename($String* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_rename_nns($String* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual $Object* a_resolveIntermediate_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_unbind($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_unbind_nns($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_bind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_bind_nns(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::Context* c_createSubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::Context* c_createSubcontext_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_destroySubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_destroySubcontext_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NameParser* c_getNameParser(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NameParser* c_getNameParser_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_list(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_listBindings(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_listBindings_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_list_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_lookup(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_lookupLink(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_lookupLink_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_lookup_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::com::sun::jndi::toolkit::ctx::StringHeadTail* c_parseComponent($String* inputName, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual void c_rebind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rebind_nns(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rename(::javax::naming::Name* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rename_nns(::javax::naming::Name* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_resolveIntermediate_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_unbind(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_unbind_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual bool isEmpty($String* name);
	virtual bool resolve_to_context(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void resolve_to_nns_and_continue(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual bool resolve_to_penultimate_context(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual bool resolve_to_penultimate_context_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	static int32_t debug;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_AtomicContext_h_