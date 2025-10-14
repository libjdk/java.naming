#ifndef _javax_naming_Context_h_
#define _javax_naming_Context_h_
//$ interface javax.naming.Context
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("APPLET")
#undef APPLET
#pragma push_macro("AUTHORITATIVE")
#undef AUTHORITATIVE
#pragma push_macro("BATCHSIZE")
#undef BATCHSIZE
#pragma push_macro("DNS_URL")
#undef DNS_URL
#pragma push_macro("INITIAL_CONTEXT_FACTORY")
#undef INITIAL_CONTEXT_FACTORY
#pragma push_macro("LANGUAGE")
#undef LANGUAGE
#pragma push_macro("OBJECT_FACTORIES")
#undef OBJECT_FACTORIES
#pragma push_macro("PROVIDER_URL")
#undef PROVIDER_URL
#pragma push_macro("REFERRAL")
#undef REFERRAL
#pragma push_macro("SECURITY_AUTHENTICATION")
#undef SECURITY_AUTHENTICATION
#pragma push_macro("SECURITY_CREDENTIALS")
#undef SECURITY_CREDENTIALS
#pragma push_macro("SECURITY_PRINCIPAL")
#undef SECURITY_PRINCIPAL
#pragma push_macro("SECURITY_PROTOCOL")
#undef SECURITY_PROTOCOL
#pragma push_macro("STATE_FACTORIES")
#undef STATE_FACTORIES
#pragma push_macro("URL_PKG_PREFIXES")
#undef URL_PKG_PREFIXES

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

class $export Context : public ::java::lang::Object {
	$interface(Context, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) {return nullptr;}
	virtual void bind(::javax::naming::Name* name, Object$* obj) {}
	virtual void bind($String* name, Object$* obj) {}
	virtual void close() {}
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) {return nullptr;}
	virtual $String* composeName($String* name, $String* prefix) {return nullptr;}
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::Context* createSubcontext($String* name) {return nullptr;}
	virtual void destroySubcontext(::javax::naming::Name* name) {}
	virtual void destroySubcontext($String* name) {}
	virtual ::java::util::Hashtable* getEnvironment() {return nullptr;}
	virtual $String* getNameInNamespace() {return nullptr;}
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::NameParser* getNameParser($String* name) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* list($String* name) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) {return nullptr;}
	virtual $Object* lookup(::javax::naming::Name* name) {return nullptr;}
	virtual $Object* lookup($String* name) {return nullptr;}
	virtual $Object* lookupLink(::javax::naming::Name* name) {return nullptr;}
	virtual $Object* lookupLink($String* name) {return nullptr;}
	virtual void rebind(::javax::naming::Name* name, Object$* obj) {}
	virtual void rebind($String* name, Object$* obj) {}
	virtual $Object* removeFromEnvironment($String* propName) {return nullptr;}
	virtual void rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName) {}
	virtual void rename($String* oldName, $String* newName) {}
	virtual void unbind(::javax::naming::Name* name) {}
	virtual void unbind($String* name) {}
	static $String* INITIAL_CONTEXT_FACTORY;
	static $String* OBJECT_FACTORIES;
	static $String* STATE_FACTORIES;
	static $String* URL_PKG_PREFIXES;
	static $String* PROVIDER_URL;
	static $String* DNS_URL;
	static $String* AUTHORITATIVE;
	static $String* BATCHSIZE;
	static $String* REFERRAL;
	static $String* SECURITY_PROTOCOL;
	static $String* SECURITY_AUTHENTICATION;
	static $String* SECURITY_PRINCIPAL;
	static $String* SECURITY_CREDENTIALS;
	static $String* LANGUAGE;
	static $String* APPLET;
};

	} // naming
} // javax

#pragma pop_macro("APPLET")
#pragma pop_macro("AUTHORITATIVE")
#pragma pop_macro("BATCHSIZE")
#pragma pop_macro("DNS_URL")
#pragma pop_macro("INITIAL_CONTEXT_FACTORY")
#pragma pop_macro("LANGUAGE")
#pragma pop_macro("OBJECT_FACTORIES")
#pragma pop_macro("PROVIDER_URL")
#pragma pop_macro("REFERRAL")
#pragma pop_macro("SECURITY_AUTHENTICATION")
#pragma pop_macro("SECURITY_CREDENTIALS")
#pragma pop_macro("SECURITY_PRINCIPAL")
#pragma pop_macro("SECURITY_PROTOCOL")
#pragma pop_macro("STATE_FACTORIES")
#pragma pop_macro("URL_PKG_PREFIXES")

#endif // _javax_naming_Context_h_