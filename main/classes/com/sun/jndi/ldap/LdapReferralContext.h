#ifndef _com_sun_jndi_ldap_LdapReferralContext_h_
#define _com_sun_jndi_ldap_LdapReferralContext_h_
//$ class com.sun.jndi.ldap.LdapReferralContext
//$ extends javax.naming.ldap.LdapContext

#include <java/lang/Array.h>
#include <javax/naming/ldap/LdapContext.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapReferralException;
			}
		}
	}
}
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
			class DirContext;
			class ModificationItem;
			class SearchControls;
		}
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
			class ExtendedRequest;
			class ExtendedResponse;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapReferralContext : public ::javax::naming::ldap::LdapContext {
	$class(LdapReferralContext, $NO_CLASS_INIT, ::javax::naming::ldap::LdapContext)
public:
	LdapReferralContext();
	void init$(::com::sun::jndi::ldap::LdapReferralException* ex, ::java::util::Hashtable* env, $Array<::javax::naming::ldap::Control>* connCtls, $Array<::javax::naming::ldap::Control>* reqCtls, $String* nextName, bool skipThisReferral, int32_t handleReferrals);
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override;
	virtual void bind($String* name, Object$* obj) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj) override;
	virtual void bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void close() override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual ::javax::naming::ldap::ExtendedResponse* extendedOperation(::javax::naming::ldap::ExtendedRequest* request) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name, $StringArray* attrIds) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name, $StringArray* attrIds) override;
	virtual $Array<::javax::naming::ldap::Control>* getConnectControls() override;
	virtual ::java::util::Hashtable* getEnvironment() override;
	virtual $String* getNameInNamespace() override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual $Array<::javax::naming::ldap::Control>* getRequestControls() override;
	virtual $Array<::javax::naming::ldap::Control>* getResponseControls() override;
	virtual ::javax::naming::directory::DirContext* getSchema($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition(::javax::naming::Name* name) override;
	void initDefaults($String* referral, $String* nextName);
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
	virtual ::javax::naming::ldap::LdapContext* newInstance($Array<::javax::naming::ldap::Control>* requestControls) override;
	::javax::naming::directory::SearchControls* overrideAttributesAndScope(::javax::naming::directory::SearchControls* cons);
	$String* overrideFilter($String* filter);
	::javax::naming::Name* overrideName(::javax::naming::Name* name);
	virtual void rebind($String* name, Object$* obj) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj) override;
	virtual void rebind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void reconnect($Array<::javax::naming::ldap::Control>* connCtls) override;
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
	void setHopCount(int32_t hopCount);
	virtual void setRequestControls($Array<::javax::naming::ldap::Control>* requestControls) override;
	::javax::naming::Name* toName($String* name);
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
	::javax::naming::directory::DirContext* refCtx = nullptr;
	::javax::naming::Name* urlName = nullptr;
	$String* urlAttrs = nullptr;
	$String* urlScope = nullptr;
	$String* urlFilter = nullptr;
	::com::sun::jndi::ldap::LdapReferralException* refEx = nullptr;
	bool skipThisReferral = false;
	int32_t hopCount = 0;
	::javax::naming::NamingException* previousEx = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapReferralContext_h_