#ifndef _com_sun_jndi_toolkit_ctx_PartialCompositeDirContext_h_
#define _com_sun_jndi_toolkit_ctx_PartialCompositeDirContext_h_
//$ class com.sun.jndi.toolkit.ctx.PartialCompositeDirContext
//$ extends com.sun.jndi.toolkit.ctx.AtomicContext
//$ implements javax.naming.directory.DirContext

#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <java/lang/Array.h>
#include <javax/naming/directory/DirContext.h>

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
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
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

class $import PartialCompositeDirContext : public ::com::sun::jndi::toolkit::ctx::AtomicContext, public ::javax::naming::directory::DirContext {
	$class(PartialCompositeDirContext, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::ctx::AtomicContext, ::javax::naming::directory::DirContext)
public:
	PartialCompositeDirContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override {return nullptr;}
	virtual void bind($String* name, Object$* newObj) override;
	virtual void bind(::javax::naming::Name* name, Object$* newObj) override;
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::util::Hashtable* getEnvironment() override {return nullptr;}
	virtual $String* getNameInNamespace() override {return nullptr;}
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void a_bind($String* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::Context* a_createSubcontext($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void a_destroySubcontext($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NameParser* a_getNameParser(::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* a_list(::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* a_listBindings(::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* a_lookup($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* a_lookupLink($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void a_rebind($String* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void a_rename($String* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void a_unbind($String* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::com::sun::jndi::toolkit::ctx::StringHeadTail* c_parseComponent($String* inputName, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name, $StringArray* attrIds) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name, $StringArray* attrIds) override;
	static ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext* getPCDirContext(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::directory::DirContext* getSchema($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* list($String* name) override;
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) override;
	virtual $Object* lookup($String* name) override;
	virtual $Object* lookup(::javax::naming::Name* name) override;
	virtual $Object* lookupLink($String* name) override;
	virtual $Object* lookupLink(::javax::naming::Name* name) override;
	virtual void modifyAttributes($String* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs) override;
	virtual void modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs) override;
	virtual void modifyAttributes($String* name, $Array<::javax::naming::directory::ModificationItem>* mods) override;
	virtual void modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods) override;
	using ::com::sun::jndi::toolkit::ctx::AtomicContext::p_bind;
	virtual void p_bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	using ::com::sun::jndi::toolkit::ctx::AtomicContext::p_createSubcontext;
	virtual ::javax::naming::directory::DirContext* p_createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* p_getAttributes(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* p_getSchema(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* p_getSchemaClassDefinition(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual void p_modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void p_modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	using ::com::sun::jndi::toolkit::ctx::AtomicContext::p_rebind;
	virtual void p_rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual ::javax::naming::NamingEnumeration* p_search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* p_search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* p_search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual void rebind($String* name, Object$* newObj) override;
	virtual void rebind(::javax::naming::Name* name, Object$* newObj) override;
	virtual void rebind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual $Object* removeFromEnvironment($String* propName) override {return nullptr;}
	virtual void rename($String* oldName, $String* newName) override;
	virtual void rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, ::javax::naming::directory::Attributes* matchingAttributes) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, $String* filter, ::javax::naming::directory::SearchControls* cons) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons) override;
	virtual $String* toString() override;
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_PartialCompositeDirContext_h_