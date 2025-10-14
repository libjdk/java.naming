#ifndef _com_sun_jndi_toolkit_ctx_AtomicDirContext_h_
#define _com_sun_jndi_toolkit_ctx_AtomicDirContext_h_
//$ class com.sun.jndi.toolkit.ctx.AtomicDirContext
//$ extends com.sun.jndi.toolkit.ctx.ComponentDirContext

#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
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

class $export AtomicDirContext : public ::com::sun::jndi::toolkit::ctx::ComponentDirContext {
	$class(AtomicDirContext, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::ctx::ComponentDirContext)
public:
	AtomicDirContext();
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::bind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::createSubcontext;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::a_bind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::a_rebind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::a_createSubcontext;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::a_bind_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::a_rebind_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::a_createSubcontext_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_bind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_rebind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_createSubcontext;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_bind_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_rebind_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_createSubcontext_nns;
	void init$();
	virtual void a_bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_bind_nns($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* a_createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* a_createSubcontext_nns($String* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::Attributes* a_getAttributes($String* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* a_getAttributes_nns($String* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* a_getSchema(::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* a_getSchemaClassDefinition(::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* a_getSchemaDefinition_nns(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* a_getSchema_nns(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_modifyAttributes($String* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_modifyAttributes($String* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_modifyAttributes_nns($String* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_modifyAttributes_nns($String* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void a_rebind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void a_rebind_nns($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* a_search(::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* a_search($String* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* a_search($String* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* a_search_nns(::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* a_search_nns($String* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* a_search_nns($String* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual void c_bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_bind_nns(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_createSubcontext_nns(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::Attributes* c_getAttributes(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::Attributes* c_getAttributes_nns(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_getSchema(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_getSchemaClassDefinition(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_getSchemaClassDefinition_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_getSchema_nns(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_modifyAttributes_nns(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_modifyAttributes_nns(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rebind_nns(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search_nns(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search_nns(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search_nns(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::p_bind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::p_rebind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::p_createSubcontext;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::rebind;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_AtomicDirContext_h_