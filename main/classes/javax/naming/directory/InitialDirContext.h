#ifndef _javax_naming_directory_InitialDirContext_h_
#define _javax_naming_directory_InitialDirContext_h_
//$ class javax.naming.directory.InitialDirContext
//$ extends javax.naming.InitialContext
//$ implements javax.naming.directory.DirContext

#include <java/lang/Array.h>
#include <javax/naming/InitialContext.h>
#include <javax/naming/directory/DirContext.h>

namespace java {
	namespace util {
		class Hashtable;
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
			class ModificationItem;
			class SearchControls;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export InitialDirContext : public ::javax::naming::InitialContext, public ::javax::naming::directory::DirContext {
	$class(InitialDirContext, $NO_CLASS_INIT, ::javax::naming::InitialContext, ::javax::naming::directory::DirContext)
public:
	InitialDirContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override;
	virtual void bind($String* name, Object$* obj) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj) override;
	virtual $Object* clone() override;
	virtual void close() override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::util::Hashtable* getEnvironment() override;
	virtual $String* getNameInNamespace() override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual int32_t hashCode() override;
	void init$(bool lazy);
	void init$();
	void init$(::java::util::Hashtable* environment);
	virtual void bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name, $StringArray* attrIds) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name, $StringArray* attrIds) override;
	virtual ::javax::naming::directory::DirContext* getSchema($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition(::javax::naming::Name* name) override;
	::javax::naming::directory::DirContext* getURLOrDefaultInitDirCtx($String* name);
	::javax::naming::directory::DirContext* getURLOrDefaultInitDirCtx(::javax::naming::Name* name);
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

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_InitialDirContext_h_