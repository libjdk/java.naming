#ifndef _com_sun_jndi_toolkit_url_GenericURLContext_h_
#define _com_sun_jndi_toolkit_url_GenericURLContext_h_
//$ class com.sun.jndi.toolkit.url.GenericURLContext
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
		namespace spi {
			class ResolveResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

class $export GenericURLContext : public ::javax::naming::Context {
	$class(GenericURLContext, $NO_CLASS_INIT, ::javax::naming::Context)
public:
	GenericURLContext();
	void init$(::java::util::Hashtable* env);
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
	virtual ::javax::naming::Context* getContinuationContext(::javax::naming::Name* n);
	virtual ::java::util::Hashtable* getEnvironment() override;
	virtual $String* getNameInNamespace() override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual ::javax::naming::spi::ResolveResult* getRootURLContext($String* url, ::java::util::Hashtable* env) {return nullptr;}
	virtual $String* getURLPrefix($String* url);
	virtual ::javax::naming::Name* getURLSuffix($String* prefix, $String* url);
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
	virtual void rename(::javax::naming::Name* name, ::javax::naming::Name* newName) override;
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
	virtual bool urlEquals($String* url1, $String* url2);
	::java::util::Hashtable* myEnv = nullptr;
};

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_url_GenericURLContext_h_