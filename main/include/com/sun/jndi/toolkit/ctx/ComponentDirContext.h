#ifndef _com_sun_jndi_toolkit_ctx_ComponentDirContext_h_
#define _com_sun_jndi_toolkit_ctx_ComponentDirContext_h_
//$ class com.sun.jndi.toolkit.ctx.ComponentDirContext
//$ extends com.sun.jndi.toolkit.ctx.PartialCompositeDirContext

#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class Continuation;
				}
			}
		}
	}
}
namespace javax {
	namespace naming {
		class Name;
		class NamingEnumeration;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
			class DirContext;
			class ModificationItem;
			class SearchControls;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $import ComponentDirContext : public ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext {
	$class(ComponentDirContext, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext)
public:
	ComponentDirContext();
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::bind;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::createSubcontext;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::c_bind;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::c_rebind;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::c_createSubcontext;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::c_bind_nns;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::c_rebind_nns;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::c_createSubcontext_nns;
	void init$();
	virtual void c_bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_bind_nns(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* c_createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* c_createSubcontext_nns(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::Attributes* c_getAttributes(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* c_getAttributes_nns(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* c_getSchema(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* c_getSchemaClassDefinition(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* c_getSchemaClassDefinition_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* c_getSchema_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_modifyAttributes_nns(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_modifyAttributes_nns(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void c_rebind_nns(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* c_search_nns(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* c_search_nns(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* c_search_nns(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::p_bind;
	virtual void p_bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::p_createSubcontext;
	virtual ::javax::naming::directory::DirContext* p_createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::Attributes* p_getAttributes(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* p_getSchema(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* p_getSchemaClassDefinition(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void p_modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void p_modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::p_rebind;
	virtual void p_rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* p_search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* p_search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* p_search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	using ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext::rebind;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_ComponentDirContext_h_