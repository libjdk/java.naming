#ifndef _com_sun_jndi_toolkit_dir_HierMemDirCtx_h_
#define _com_sun_jndi_toolkit_dir_HierMemDirCtx_h_
//$ class com.sun.jndi.toolkit.dir.HierMemDirCtx
//$ extends javax.naming.directory.DirContext

#include <java/lang/Array.h>
#include <javax/naming/directory/DirContext.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
		class NameParser;
		class NamingEnumeration;
		class NamingException;
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
				namespace dir {

class HierMemDirCtx : public ::javax::naming::directory::DirContext {
	$class(HierMemDirCtx, 0, ::javax::naming::directory::DirContext)
public:
	HierMemDirCtx();
	void init$();
	void init$(bool ignoreCase);
	void init$(::java::util::Hashtable* environment, bool ignoreCase);
	void init$(::java::util::Hashtable* environment, bool ignoreCase, bool useFac);
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override;
	static ::javax::naming::directory::Attributes* applyMods($Array<::javax::naming::directory::ModificationItem>* mods, ::javax::naming::directory::Attributes* orig);
	virtual void bind($String* name, Object$* obj) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj) override;
	virtual void bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::Name* canonizeName(::javax::naming::Name* name);
	virtual void close() override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual ::com::sun::jndi::toolkit::dir::HierMemDirCtx* createNewCtx();
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual void doBind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool useFactory);
	virtual void doBindAux(::javax::naming::Name* name, Object$* obj);
	virtual ::javax::naming::directory::DirContext* doCreateSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs);
	virtual void doDestroySubcontext(::javax::naming::Name* name);
	virtual ::javax::naming::directory::Attributes* doGetAttributes();
	virtual ::javax::naming::directory::Attributes* doGetAttributes($StringArray* attrIds);
	virtual ::javax::naming::NamingEnumeration* doList();
	virtual ::javax::naming::NamingEnumeration* doListBindings(bool useFactory);
	virtual $Object* doLookup(::javax::naming::Name* name, bool useFactory);
	virtual void doModifyAttributes($Array<::javax::naming::directory::ModificationItem>* mods);
	virtual void doRebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool useFactory);
	virtual void doRebindAux(::javax::naming::Name* name, Object$* obj);
	virtual void doRename(::javax::naming::Name* oldname, ::javax::naming::Name* newname);
	virtual void doUnbind(::javax::naming::Name* name);
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name, $StringArray* attrIds) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name, $StringArray* attrIds) override;
	virtual ::java::util::Hashtable* getEnvironment() override;
	virtual ::javax::naming::Name* getInternalName(::javax::naming::Name* name);
	virtual ::javax::naming::Name* getLeafName(::javax::naming::Name* name);
	virtual $String* getNameInNamespace() override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition(::javax::naming::Name* name) override;
	void init();
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
	virtual void rebind($String* name, Object$* obj) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj) override;
	virtual void rebind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual $Object* removeFromEnvironment($String* propName) override;
	virtual void rename($String* oldname, $String* newname) override;
	virtual void rename(::javax::naming::Name* oldname, ::javax::naming::Name* newname) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, ::javax::naming::directory::Attributes* matchingAttributes) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons) override;
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, $String* filter, ::javax::naming::directory::SearchControls* cons) override;
	virtual ::javax::naming::NamingEnumeration* search($String* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons) override;
	virtual void setIgnoreCase(bool ignoreCase);
	virtual void setNameParser(::javax::naming::NameParser* parser);
	virtual void setReadOnly(::javax::naming::NamingException* e);
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
	static const bool debug = false;
	static ::javax::naming::NameParser* defaultParser;
	::java::util::Hashtable* myEnv = nullptr;
	::java::util::Hashtable* bindings = nullptr;
	::javax::naming::directory::Attributes* attrs = nullptr;
	bool ignoreCase = false;
	::javax::naming::NamingException* readOnlyEx = nullptr;
	::javax::naming::NameParser* myParser = nullptr;
	bool alwaysUseFactory = false;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierMemDirCtx_h_