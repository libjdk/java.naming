#ifndef _com_sun_jndi_ldap_LdapCtx_h_
#define _com_sun_jndi_ldap_LdapCtx_h_
//$ class com.sun.jndi.ldap.LdapCtx
//$ extends com.sun.jndi.toolkit.ctx.ComponentDirContext
//$ implements javax.naming.event.EventDirContext,javax.naming.ldap.LdapContext

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <java/lang/Array.h>
#include <javax/naming/event/EventDirContext.h>
#include <javax/naming/ldap/LdapContext.h>

#pragma push_macro("ALLOWED_MECHS_SP")
#undef ALLOWED_MECHS_SP
#pragma push_macro("ALLOWED_MECHS_SP_VALUE")
#undef ALLOWED_MECHS_SP_VALUE
#pragma push_macro("BINARY_ATTRIBUTES")
#undef BINARY_ATTRIBUTES
#pragma push_macro("BIND_CONTROLS")
#undef BIND_CONTROLS
#pragma push_macro("CONNECT_TIMEOUT")
#undef CONNECT_TIMEOUT
#pragma push_macro("DEFAULT_BATCH_SIZE")
#undef DEFAULT_BATCH_SIZE
#pragma push_macro("DEFAULT_DELETE_RDN")
#undef DEFAULT_DELETE_RDN
#pragma push_macro("DEFAULT_DEREF_ALIASES")
#undef DEFAULT_DEREF_ALIASES
#pragma push_macro("DEFAULT_HOST")
#undef DEFAULT_HOST
#pragma push_macro("DEFAULT_LDAP_VERSION")
#undef DEFAULT_LDAP_VERSION
#pragma push_macro("DEFAULT_PORT")
#undef DEFAULT_PORT
#pragma push_macro("DEFAULT_REFERRAL_LIMIT")
#undef DEFAULT_REFERRAL_LIMIT
#pragma push_macro("DEFAULT_REFERRAL_MODE")
#undef DEFAULT_REFERRAL_MODE
#pragma push_macro("DEFAULT_REF_SEPARATOR")
#undef DEFAULT_REF_SEPARATOR
#pragma push_macro("DEFAULT_SSL_FACTORY")
#undef DEFAULT_SSL_FACTORY
#pragma push_macro("DEFAULT_SSL_PORT")
#undef DEFAULT_SSL_PORT
#pragma push_macro("DEFAULT_TYPES_ONLY")
#undef DEFAULT_TYPES_ONLY
#pragma push_macro("DELETE_RDN")
#undef DELETE_RDN
#pragma push_macro("DEREF_ALIASES")
#undef DEREF_ALIASES
#pragma push_macro("DOMAIN_NAME")
#undef DOMAIN_NAME
#pragma push_macro("EMPTY_SCHEMA")
#undef EMPTY_SCHEMA
#pragma push_macro("ENABLE_POOL")
#undef ENABLE_POOL
#pragma push_macro("HARD_CLOSE")
#undef HARD_CLOSE
#pragma push_macro("LDAP_REF_IGNORE")
#undef LDAP_REF_IGNORE
#pragma push_macro("LDAP_VERSION3_VERSION2")
#undef LDAP_VERSION3_VERSION2
#pragma push_macro("MECHS_ALLOWED_BY_SP")
#undef MECHS_ALLOWED_BY_SP
#pragma push_macro("NETSCAPE_SCHEMA_BUG")
#undef NETSCAPE_SCHEMA_BUG
#pragma push_macro("OLD_NETSCAPE_SCHEMA_BUG")
#undef OLD_NETSCAPE_SCHEMA_BUG
#pragma push_macro("READ_TIMEOUT")
#undef READ_TIMEOUT
#pragma push_macro("REFERRAL_LIMIT")
#undef REFERRAL_LIMIT
#pragma push_macro("REF_SEPARATOR")
#undef REF_SEPARATOR
#pragma push_macro("REPLY_QUEUE_SIZE")
#undef REPLY_QUEUE_SIZE
#pragma push_macro("SCHEMA_ATTRIBUTES")
#undef SCHEMA_ATTRIBUTES
#pragma push_macro("SOCKET_FACTORY")
#undef SOCKET_FACTORY
#pragma push_macro("SOFT_CLOSE")
#undef SOFT_CLOSE
#pragma push_macro("STARTTLS_REQ_OID")
#undef STARTTLS_REQ_OID
#pragma push_macro("TRACE_BER")
#undef TRACE_BER
#pragma push_macro("TYPES_ONLY")
#undef TYPES_ONLY
#pragma push_macro("UNSECURED_CRED_TRANSMIT_MSG")
#undef UNSECURED_CRED_TRANSMIT_MSG
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("WAIT_FOR_REPLY")
#undef WAIT_FOR_REPLY

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class EventSupport;
				class LdapResult;
			}
		}
	}
}
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
namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {
					class HierMemDirCtx;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Set;
		class Vector;
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
		namespace event {
			class NamingListener;
		}
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
			class ControlFactory;
			class ExtendedRequest;
			class ExtendedResponse;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapCtx : public ::com::sun::jndi::toolkit::ctx::ComponentDirContext, public ::javax::naming::event::EventDirContext, public ::javax::naming::ldap::LdapContext {
	$class(LdapCtx, $HAS_FINALIZE, ::com::sun::jndi::toolkit::ctx::ComponentDirContext, ::javax::naming::event::EventDirContext, ::javax::naming::ldap::LdapContext)
public:
	LdapCtx();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_bind_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_rebind_nns;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::c_createSubcontext_nns;
	virtual void bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void bind($String* name, Object$* newObj) override;
	virtual void bind(::javax::naming::Name* name, Object$* newObj) override;
	virtual $Object* clone() override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::directory::DirContext* createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual bool equals(Object$* arg0) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name, $StringArray* attrIds) override;
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name, $StringArray* attrIds) override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchema(::javax::naming::Name* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition($String* name) override;
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition(::javax::naming::Name* name) override;
	virtual int32_t hashCode() override;
	virtual ::javax::naming::NamingEnumeration* list($String* name) override;
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) override;
	void init$($String* dn, $String* host, int32_t port_number, ::java::util::Hashtable* props, bool useSsl);
	void init$(::com::sun::jndi::ldap::LdapCtx* existing, $String* newDN);
	static $Array<::javax::naming::ldap::Control>* addControl($Array<::javax::naming::ldap::Control>* prevCtls, ::javax::naming::ldap::Control* addition);
	virtual void addNamingListener(::javax::naming::Name* nm, int32_t scope, ::javax::naming::event::NamingListener* l) override;
	virtual void addNamingListener($String* nm, int32_t scope, ::javax::naming::event::NamingListener* l) override;
	virtual void addNamingListener($String* nm, $String* filter, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) override;
	virtual void addNamingListener(::javax::naming::Name* nm, $String* filter, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) override;
	virtual void addNamingListener(::javax::naming::Name* nm, $String* filter, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) override;
	virtual void addNamingListener($String* nm, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) override;
	static ::javax::naming::directory::Attributes* addRdnAttributes($String* dn, ::javax::naming::directory::Attributes* attrs, bool directUpdate);
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override;
	void addUnsolicited();
	void adjustDeleteStatus($String* fname, ::com::sun::jndi::ldap::LdapResult* answer);
	static ::java::util::Vector* appendVector(::java::util::Vector* v1, ::java::util::Vector* v2);
	::javax::naming::directory::DirContext* buildSchemaTree($String* subschemasubentry);
	virtual void c_bind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::Context* c_createSubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_destroySubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::Attributes* c_getAttributes(::javax::naming::Name* name, $StringArray* attrIds, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NameParser* c_getNameParser(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_getSchema(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::directory::DirContext* c_getSchemaClassDefinition(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_list(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_listBindings(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_lookup(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual $Object* c_lookupLink(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rebind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual ::javax::naming::NamingEnumeration* c_search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	virtual void c_unbind(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) override;
	static $Array<::javax::naming::ldap::Control>* cloneControls($Array<::javax::naming::ldap::Control>* ctls);
	static ::javax::naming::directory::SearchControls* cloneSearchControls(::javax::naming::directory::SearchControls* cons);
	virtual void close() override;
	void closeConnection(bool hardclose);
	::com::sun::jndi::ldap::LdapResult* compare(::javax::naming::Name* name, $String* type, $String* value);
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	static $String* concatNames($String* lesser, $String* greater);
	void connect(bool startTLS);
	static bool containsIgnoreCase(::javax::naming::NamingEnumeration* enumStr, $String* str);
	$Array<::javax::naming::ldap::Control>* convertControls(::java::util::Vector* ctls);
	static int32_t convertToLdapModCode(int32_t mod_op);
	void decEnumCount();
	::com::sun::jndi::ldap::LdapResult* doSearch(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, bool relative, bool waitForReply);
	::com::sun::jndi::ldap::LdapResult* doSearchOnce(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, bool relative);
	void ensureCanTransmitCredentials($String* authMechanism);
	void ensureOpen();
	void ensureOpen(bool startTLS);
	virtual ::javax::naming::ldap::ExtendedResponse* extendedOperation(::javax::naming::ldap::ExtendedRequest* request) override;
	static ::java::util::Vector* extractURLs($String* refString);
	static bool filterToAssertion($String* filter, $StringArray* tokens);
	virtual void finalize() override;
	static int32_t findControl($Array<::javax::naming::ldap::Control>* ctls, ::javax::naming::ldap::Control* target);
	void fireUnsolicited(Object$* obj);
	$String* fullyQualifiedName(::javax::naming::Name* rel);
	$String* fullyQualifiedName($String* rel);
	virtual $Array<::javax::naming::ldap::Control>* getConnectControls() override;
	virtual ::java::util::Hashtable* getEnvironment() override;
	static $String* getMechsAllowedToSendCredentials();
	static ::java::util::Set* getMechsFromPropertyValue($String* propValue);
	virtual $String* getNameInNamespace() override;
	virtual $Array<::javax::naming::ldap::Control>* getRequestControls() override;
	virtual $Array<::javax::naming::ldap::Control>* getResponseControls() override;
	$String* getSchemaEntry(::javax::naming::Name* name, bool relative);
	::javax::naming::directory::DirContext* getSchemaTree(::javax::naming::Name* name);
	::com::sun::jndi::ldap::LdapResult* getSearchReply(::com::sun::jndi::ldap::LdapClient* eClnt, ::com::sun::jndi::ldap::LdapResult* res);
	static $String* getTargetName(::javax::naming::Name* nm);
	$String* getURL();
	void incEnumCount();
	void initEnv();
	bool isConnectionEncrypted();
	static $String* lambda$getMechsAllowedToSendCredentials$0();
	virtual $Object* lookup($String* name) override;
	virtual $Object* lookup(::javax::naming::Name* name) override;
	virtual $Object* lookupLink($String* name) override;
	virtual $Object* lookupLink(::javax::naming::Name* name) override;
	static ::javax::naming::NamingException* mapErrorCode(int32_t errorCode, $String* errorMessage);
	virtual void modifyAttributes($String* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs) override;
	virtual void modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs) override;
	virtual void modifyAttributes($String* name, $Array<::javax::naming::directory::ModificationItem>* mods) override;
	virtual void modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods) override;
	virtual ::javax::naming::ldap::LdapContext* newInstance($Array<::javax::naming::ldap::Control>* reqCtls) override;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::p_bind;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::p_createSubcontext;
	virtual ::java::util::Hashtable* p_getEnvironment() override;
	using ::com::sun::jndi::toolkit::ctx::ComponentDirContext::p_rebind;
	void processReturnCode(::com::sun::jndi::ldap::LdapResult* answer);
	void processReturnCode(::com::sun::jndi::ldap::LdapResult* answer, ::javax::naming::Name* remainName);
	void processReturnCode(::com::sun::jndi::ldap::LdapResult* res, ::javax::naming::Name* resolvedName, Object$* resolvedObj, ::javax::naming::Name* remainName, ::java::util::Hashtable* envprops, $String* fullDN);
	virtual void rebind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void rebind($String* name, Object$* newObj) override;
	virtual void rebind(::javax::naming::Name* name, Object$* newObj) override;
	virtual void reconnect($Array<::javax::naming::ldap::Control>* connCtls) override;
	static $Array<::javax::naming::ldap::Control>* removeControl($Array<::javax::naming::ldap::Control>* prevCtls, ::javax::naming::ldap::Control* target);
	virtual $Object* removeFromEnvironment($String* propName) override;
	virtual void removeNamingListener(::javax::naming::event::NamingListener* l) override;
	void removeUnsolicited();
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
	::javax::naming::NamingEnumeration* searchAux(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons, bool relative, bool waitForReply, ::com::sun::jndi::toolkit::ctx::Continuation* cont);
	static bool searchToCompare($String* filter, ::javax::naming::directory::SearchControls* cons, $StringArray* tokens);
	void setBatchSize($String* batchSizeProp);
	void setBinaryAttributes($String* attrIds);
	void setConnectTimeout($String* connectTimeoutProp);
	void setDeleteRDN($String* deleteRDNProp);
	void setDerefAliases($String* deref);
	void setDomainName($String* domainName);
	void setHopCount(int32_t hopCount);
	void setParents(::javax::naming::directory::Attributes* attrs, ::javax::naming::Name* name);
	void setProviderUrl($String* providerUrl);
	void setReadTimeout($String* readTimeoutProp);
	void setRefSeparator($String* sepStr);
	void setReferralLimit($String* referralLimitProp);
	void setReferralMode($String* ref, bool update);
	void setReplyQueueSize($String* replyQueueSizeProp);
	virtual void setRequestControls($Array<::javax::naming::ldap::Control>* reqCtls) override;
	void setTypesOnly($String* typesOnlyProp);
	void setWaitForReply($String* waitForReplyProp);
	virtual bool targetMustExist() override;
	virtual $String* toString() override;
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
	static const bool debug = false;
	static const bool HARD_CLOSE = true;
	static const bool SOFT_CLOSE = false;
	static const int32_t DEFAULT_PORT = 389;
	static const int32_t DEFAULT_SSL_PORT = 636;
	static $String* DEFAULT_HOST;
	static const bool DEFAULT_DELETE_RDN = true;
	static const bool DEFAULT_TYPES_ONLY = false;
	static const int32_t DEFAULT_DEREF_ALIASES = 3;
	static const int32_t DEFAULT_LDAP_VERSION = ::com::sun::jndi::ldap::LdapClient::LDAP_VERSION3_VERSION2;
	static const int32_t DEFAULT_BATCH_SIZE = 1;
	static const int32_t DEFAULT_REFERRAL_MODE = ::com::sun::jndi::ldap::LdapClient::LDAP_REF_IGNORE;
	static const char16_t DEFAULT_REF_SEPARATOR = ((char16_t)35);
	static $String* DEFAULT_SSL_FACTORY;
	static const int32_t DEFAULT_REFERRAL_LIMIT = 10;
	static $String* STARTTLS_REQ_OID;
	static $StringArray* SCHEMA_ATTRIBUTES;
	static $String* VERSION;
	static $String* BINARY_ATTRIBUTES;
	static $String* DELETE_RDN;
	static $String* DEREF_ALIASES;
	static $String* TYPES_ONLY;
	static $String* REF_SEPARATOR;
	static $String* SOCKET_FACTORY;
	static $String* BIND_CONTROLS;
	static $String* REFERRAL_LIMIT;
	static $String* TRACE_BER;
	static $String* NETSCAPE_SCHEMA_BUG;
	static $String* OLD_NETSCAPE_SCHEMA_BUG;
	static $String* CONNECT_TIMEOUT;
	static $String* READ_TIMEOUT;
	static $String* ENABLE_POOL;
	static $String* DOMAIN_NAME;
	static $String* WAIT_FOR_REPLY;
	static $String* REPLY_QUEUE_SIZE;
	static $String* ALLOWED_MECHS_SP;
	static $String* ALLOWED_MECHS_SP_VALUE;
	static ::java::util::Set* MECHS_ALLOWED_BY_SP;
	static $String* UNSECURED_CRED_TRANSMIT_MSG;
	static ::javax::naming::NameParser* parser;
	static ::javax::naming::ldap::ControlFactory* myResponseControlFactory;
	static ::javax::naming::ldap::Control* manageReferralControl;
	static ::com::sun::jndi::toolkit::dir::HierMemDirCtx* EMPTY_SCHEMA;
	int32_t port_number = 0;
	$String* hostname = nullptr;
	::com::sun::jndi::ldap::LdapClient* clnt = nullptr;
	::java::util::Hashtable* envprops = nullptr;
	int32_t handleReferrals = 0;
	bool hasLdapsScheme = false;
	$String* currentDN = nullptr;
	::javax::naming::Name* currentParsedDN = nullptr;
	::java::util::Vector* respCtls = nullptr;
	$Array<::javax::naming::ldap::Control>* reqCtls = nullptr;
	$volatile(bool) contextSeenStartTlsEnabled = false;
	::java::io::OutputStream* trace = nullptr;
	bool netscapeSchemaBug = false;
	$Array<::javax::naming::ldap::Control>* bindCtls = nullptr;
	int32_t referralHopLimit = 0;
	::java::util::Hashtable* schemaTrees = nullptr;
	int32_t batchSize = 0;
	bool deleteRDN = false;
	bool typesOnly = false;
	int32_t derefAliases = 0;
	char16_t addrEncodingSeparator = 0;
	::java::util::Hashtable* binaryAttrs = nullptr;
	int32_t connectTimeout = 0;
	int32_t readTimeout = 0;
	bool waitForReply = false;
	int32_t replyQueueSize = 0;
	bool useSsl = false;
	bool useDefaultPortNumber = false;
	bool parentIsLdapCtx = false;
	int32_t hopCount = 0;
	$String* url = nullptr;
	::com::sun::jndi::ldap::EventSupport* eventSupport = nullptr;
	bool unsolicited = false;
	bool sharable = false;
	int32_t enumCount = 0;
	bool closeRequested = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ALLOWED_MECHS_SP")
#pragma pop_macro("ALLOWED_MECHS_SP_VALUE")
#pragma pop_macro("BINARY_ATTRIBUTES")
#pragma pop_macro("BIND_CONTROLS")
#pragma pop_macro("CONNECT_TIMEOUT")
#pragma pop_macro("DEFAULT_BATCH_SIZE")
#pragma pop_macro("DEFAULT_DELETE_RDN")
#pragma pop_macro("DEFAULT_DEREF_ALIASES")
#pragma pop_macro("DEFAULT_HOST")
#pragma pop_macro("DEFAULT_LDAP_VERSION")
#pragma pop_macro("DEFAULT_PORT")
#pragma pop_macro("DEFAULT_REFERRAL_LIMIT")
#pragma pop_macro("DEFAULT_REFERRAL_MODE")
#pragma pop_macro("DEFAULT_REF_SEPARATOR")
#pragma pop_macro("DEFAULT_SSL_FACTORY")
#pragma pop_macro("DEFAULT_SSL_PORT")
#pragma pop_macro("DEFAULT_TYPES_ONLY")
#pragma pop_macro("DELETE_RDN")
#pragma pop_macro("DEREF_ALIASES")
#pragma pop_macro("DOMAIN_NAME")
#pragma pop_macro("EMPTY_SCHEMA")
#pragma pop_macro("ENABLE_POOL")
#pragma pop_macro("HARD_CLOSE")
#pragma pop_macro("LDAP_REF_IGNORE")
#pragma pop_macro("LDAP_VERSION3_VERSION2")
#pragma pop_macro("MECHS_ALLOWED_BY_SP")
#pragma pop_macro("NETSCAPE_SCHEMA_BUG")
#pragma pop_macro("OLD_NETSCAPE_SCHEMA_BUG")
#pragma pop_macro("READ_TIMEOUT")
#pragma pop_macro("REFERRAL_LIMIT")
#pragma pop_macro("REF_SEPARATOR")
#pragma pop_macro("REPLY_QUEUE_SIZE")
#pragma pop_macro("SCHEMA_ATTRIBUTES")
#pragma pop_macro("SOCKET_FACTORY")
#pragma pop_macro("SOFT_CLOSE")
#pragma pop_macro("STARTTLS_REQ_OID")
#pragma pop_macro("TRACE_BER")
#pragma pop_macro("TYPES_ONLY")
#pragma pop_macro("UNSECURED_CRED_TRANSMIT_MSG")
#pragma pop_macro("VERSION")
#pragma pop_macro("WAIT_FOR_REPLY")

#endif // _com_sun_jndi_ldap_LdapCtx_h_