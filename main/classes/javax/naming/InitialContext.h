#ifndef _javax_naming_InitialContext_h_
#define _javax_naming_InitialContext_h_
//$ class javax.naming.InitialContext
//$ extends javax.naming.Context

#include <javax/naming/Context.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Name;
		class NameParser;
		class NamingEnumeration;
	}
}

namespace javax {
	namespace naming {

class $export InitialContext : public ::javax::naming::Context {
	$class(InitialContext, $NO_CLASS_INIT, ::javax::naming::Context)
public:
	InitialContext();
	void init$(bool lazy);
	void init$();
	void init$(::java::util::Hashtable* environment);
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override;
	virtual void bind($String* name, Object$* obj) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj) override;
	virtual void close() override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	static $Object* doLookup(::javax::naming::Name* name);
	static $Object* doLookup($String* name);
	virtual ::javax::naming::Context* getDefaultInitCtx();
	virtual ::java::util::Hashtable* getEnvironment() override;
	virtual $String* getNameInNamespace() override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual ::javax::naming::Context* getURLOrDefaultInitCtx($String* name);
	virtual ::javax::naming::Context* getURLOrDefaultInitCtx(::javax::naming::Name* name);
	static $String* getURLScheme($String* str);
	virtual void init(::java::util::Hashtable* environment);
	virtual ::javax::naming::NamingEnumeration* list($String* name) override;
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) override;
	virtual $Object* lookup($String* name) override;
	virtual $Object* lookup(::javax::naming::Name* name) override;
	virtual $Object* lookupLink($String* name) override;
	virtual $Object* lookupLink(::javax::naming::Name* name) override;
	virtual void rebind($String* name, Object$* obj) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj) override;
	virtual $Object* removeFromEnvironment($String* propName) override;
	virtual void rename($String* oldName, $String* newName) override;
	virtual void rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName) override;
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
	::java::util::Hashtable* myProps = nullptr;
	::javax::naming::Context* defaultInitCtx = nullptr;
	bool gotDefault = false;
};

	} // naming
} // javax

#endif // _javax_naming_InitialContext_h_