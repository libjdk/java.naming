#ifndef _com_sun_jndi_ldap_LdapClient_h_
#define _com_sun_jndi_ldap_LdapClient_h_
//$ class com.sun.jndi.ldap.LdapClient
//$ extends com.sun.jndi.ldap.pool.PooledConnection

#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <java/lang/Array.h>

#pragma push_macro("ADD")
#undef ADD
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("DISCONNECT_OID")
#undef DISCONNECT_OID
#pragma push_macro("DN")
#undef DN
#pragma push_macro("LBER_BITSTRING")
#undef LBER_BITSTRING
#pragma push_macro("LBER_BOOLEAN")
#undef LBER_BOOLEAN
#pragma push_macro("LBER_ENUMERATED")
#undef LBER_ENUMERATED
#pragma push_macro("LBER_INTEGER")
#undef LBER_INTEGER
#pragma push_macro("LBER_NULL")
#undef LBER_NULL
#pragma push_macro("LBER_OCTETSTRING")
#undef LBER_OCTETSTRING
#pragma push_macro("LBER_SEQUENCE")
#undef LBER_SEQUENCE
#pragma push_macro("LBER_SET")
#undef LBER_SET
#pragma push_macro("LDAPS_URL")
#undef LDAPS_URL
#pragma push_macro("LDAP_ADMIN_LIMIT_EXCEEDED")
#undef LDAP_ADMIN_LIMIT_EXCEEDED
#pragma push_macro("LDAP_AFFECTS_MULTIPLE_DSAS")
#undef LDAP_AFFECTS_MULTIPLE_DSAS
#pragma push_macro("LDAP_ALIAS_DEREFERENCING_PROBLEM")
#undef LDAP_ALIAS_DEREFERENCING_PROBLEM
#pragma push_macro("LDAP_ALIAS_PROBLEM")
#undef LDAP_ALIAS_PROBLEM
#pragma push_macro("LDAP_ATTRIBUTE_OR_VALUE_EXISTS")
#undef LDAP_ATTRIBUTE_OR_VALUE_EXISTS
#pragma push_macro("LDAP_AUTH_METHOD_NOT_SUPPORTED")
#undef LDAP_AUTH_METHOD_NOT_SUPPORTED
#pragma push_macro("LDAP_BUSY")
#undef LDAP_BUSY
#pragma push_macro("LDAP_COMPARE_FALSE")
#undef LDAP_COMPARE_FALSE
#pragma push_macro("LDAP_COMPARE_TRUE")
#undef LDAP_COMPARE_TRUE
#pragma push_macro("LDAP_CONFIDENTIALITY_REQUIRED")
#undef LDAP_CONFIDENTIALITY_REQUIRED
#pragma push_macro("LDAP_CONSTRAINT_VIOLATION")
#undef LDAP_CONSTRAINT_VIOLATION
#pragma push_macro("LDAP_CONTROLS")
#undef LDAP_CONTROLS
#pragma push_macro("LDAP_CONTROL_MANAGE_DSA_IT")
#undef LDAP_CONTROL_MANAGE_DSA_IT
#pragma push_macro("LDAP_CONTROL_PAGED_RESULTS")
#undef LDAP_CONTROL_PAGED_RESULTS
#pragma push_macro("LDAP_CONTROL_PREFERRED_LANG")
#undef LDAP_CONTROL_PREFERRED_LANG
#pragma push_macro("LDAP_CONTROL_SERVER_SORT_REQ")
#undef LDAP_CONTROL_SERVER_SORT_REQ
#pragma push_macro("LDAP_CONTROL_SERVER_SORT_RES")
#undef LDAP_CONTROL_SERVER_SORT_RES
#pragma push_macro("LDAP_ENTRY_ALREADY_EXISTS")
#undef LDAP_ENTRY_ALREADY_EXISTS
#pragma push_macro("LDAP_INAPPROPRIATE_AUTHENTICATION")
#undef LDAP_INAPPROPRIATE_AUTHENTICATION
#pragma push_macro("LDAP_INAPPROPRIATE_MATCHING")
#undef LDAP_INAPPROPRIATE_MATCHING
#pragma push_macro("LDAP_INSUFFICIENT_ACCESS_RIGHTS")
#undef LDAP_INSUFFICIENT_ACCESS_RIGHTS
#pragma push_macro("LDAP_INVALID_ATTRIBUTE_SYNTAX")
#undef LDAP_INVALID_ATTRIBUTE_SYNTAX
#pragma push_macro("LDAP_INVALID_CREDENTIALS")
#undef LDAP_INVALID_CREDENTIALS
#pragma push_macro("LDAP_INVALID_DN_SYNTAX")
#undef LDAP_INVALID_DN_SYNTAX
#pragma push_macro("LDAP_IS_LEAF")
#undef LDAP_IS_LEAF
#pragma push_macro("LDAP_LOOP_DETECT")
#undef LDAP_LOOP_DETECT
#pragma push_macro("LDAP_NAMING_VIOLATION")
#undef LDAP_NAMING_VIOLATION
#pragma push_macro("LDAP_NOT_ALLOWED_ON_NON_LEAF")
#undef LDAP_NOT_ALLOWED_ON_NON_LEAF
#pragma push_macro("LDAP_NOT_ALLOWED_ON_RDN")
#undef LDAP_NOT_ALLOWED_ON_RDN
#pragma push_macro("LDAP_NO_SUCH_ATTRIBUTE")
#undef LDAP_NO_SUCH_ATTRIBUTE
#pragma push_macro("LDAP_NO_SUCH_OBJECT")
#undef LDAP_NO_SUCH_OBJECT
#pragma push_macro("LDAP_OBJECT_CLASS_MODS_PROHIBITED")
#undef LDAP_OBJECT_CLASS_MODS_PROHIBITED
#pragma push_macro("LDAP_OBJECT_CLASS_VIOLATION")
#undef LDAP_OBJECT_CLASS_VIOLATION
#pragma push_macro("LDAP_OPERATIONS_ERROR")
#undef LDAP_OPERATIONS_ERROR
#pragma push_macro("LDAP_OTHER")
#undef LDAP_OTHER
#pragma push_macro("LDAP_PARTIAL_RESULTS")
#undef LDAP_PARTIAL_RESULTS
#pragma push_macro("LDAP_PROTOCOL_ERROR")
#undef LDAP_PROTOCOL_ERROR
#pragma push_macro("LDAP_REFERRAL")
#undef LDAP_REFERRAL
#pragma push_macro("LDAP_REF_FOLLOW")
#undef LDAP_REF_FOLLOW
#pragma push_macro("LDAP_REF_FOLLOW_SCHEME")
#undef LDAP_REF_FOLLOW_SCHEME
#pragma push_macro("LDAP_REF_IGNORE")
#undef LDAP_REF_IGNORE
#pragma push_macro("LDAP_REF_THROW")
#undef LDAP_REF_THROW
#pragma push_macro("LDAP_REP_ADD")
#undef LDAP_REP_ADD
#pragma push_macro("LDAP_REP_BIND")
#undef LDAP_REP_BIND
#pragma push_macro("LDAP_REP_COMPARE")
#undef LDAP_REP_COMPARE
#pragma push_macro("LDAP_REP_DELETE")
#undef LDAP_REP_DELETE
#pragma push_macro("LDAP_REP_EXTENSION")
#undef LDAP_REP_EXTENSION
#pragma push_macro("LDAP_REP_EXT_OID")
#undef LDAP_REP_EXT_OID
#pragma push_macro("LDAP_REP_EXT_VAL")
#undef LDAP_REP_EXT_VAL
#pragma push_macro("LDAP_REP_MODIFY")
#undef LDAP_REP_MODIFY
#pragma push_macro("LDAP_REP_MODRDN")
#undef LDAP_REP_MODRDN
#pragma push_macro("LDAP_REP_REFERRAL")
#undef LDAP_REP_REFERRAL
#pragma push_macro("LDAP_REP_RESULT")
#undef LDAP_REP_RESULT
#pragma push_macro("LDAP_REP_SEARCH")
#undef LDAP_REP_SEARCH
#pragma push_macro("LDAP_REP_SEARCH_REF")
#undef LDAP_REP_SEARCH_REF
#pragma push_macro("LDAP_REQ_ABANDON")
#undef LDAP_REQ_ABANDON
#pragma push_macro("LDAP_REQ_ADD")
#undef LDAP_REQ_ADD
#pragma push_macro("LDAP_REQ_BIND")
#undef LDAP_REQ_BIND
#pragma push_macro("LDAP_REQ_COMPARE")
#undef LDAP_REQ_COMPARE
#pragma push_macro("LDAP_REQ_DELETE")
#undef LDAP_REQ_DELETE
#pragma push_macro("LDAP_REQ_EXTENSION")
#undef LDAP_REQ_EXTENSION
#pragma push_macro("LDAP_REQ_MODIFY")
#undef LDAP_REQ_MODIFY
#pragma push_macro("LDAP_REQ_MODRDN")
#undef LDAP_REQ_MODRDN
#pragma push_macro("LDAP_REQ_SEARCH")
#undef LDAP_REQ_SEARCH
#pragma push_macro("LDAP_REQ_UNBIND")
#undef LDAP_REQ_UNBIND
#pragma push_macro("LDAP_SASL_BIND_IN_PROGRESS")
#undef LDAP_SASL_BIND_IN_PROGRESS
#pragma push_macro("LDAP_SIZE_LIMIT_EXCEEDED")
#undef LDAP_SIZE_LIMIT_EXCEEDED
#pragma push_macro("LDAP_STRONG_AUTH_REQUIRED")
#undef LDAP_STRONG_AUTH_REQUIRED
#pragma push_macro("LDAP_SUCCESS")
#undef LDAP_SUCCESS
#pragma push_macro("LDAP_SUPERIOR_DN")
#undef LDAP_SUPERIOR_DN
#pragma push_macro("LDAP_TIME_LIMIT_EXCEEDED")
#undef LDAP_TIME_LIMIT_EXCEEDED
#pragma push_macro("LDAP_UNAVAILABLE")
#undef LDAP_UNAVAILABLE
#pragma push_macro("LDAP_UNAVAILABLE_CRITICAL_EXTENSION")
#undef LDAP_UNAVAILABLE_CRITICAL_EXTENSION
#pragma push_macro("LDAP_UNDEFINED_ATTRIBUTE_TYPE")
#undef LDAP_UNDEFINED_ATTRIBUTE_TYPE
#pragma push_macro("LDAP_UNWILLING_TO_PERFORM")
#undef LDAP_UNWILLING_TO_PERFORM
#pragma push_macro("LDAP_URL")
#undef LDAP_URL
#pragma push_macro("LDAP_VERSION")
#undef LDAP_VERSION
#pragma push_macro("LDAP_VERSION2")
#undef LDAP_VERSION2
#pragma push_macro("LDAP_VERSION3")
#undef LDAP_VERSION3
#pragma push_macro("LDAP_VERSION3_VERSION2")
#undef LDAP_VERSION3_VERSION2
#pragma push_macro("REPLACE")
#undef REPLACE
#pragma push_macro("SCOPE_BASE_OBJECT")
#undef SCOPE_BASE_OBJECT
#pragma push_macro("SCOPE_ONE_LEVEL")
#undef SCOPE_ONE_LEVEL
#pragma push_macro("SCOPE_SUBTREE")
#undef SCOPE_SUBTREE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class BerDecoder;
				class BerEncoder;
				class Connection;
				class LdapCtx;
				class LdapEntry;
				class LdapRequest;
				class LdapResult;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class PoolCallback;
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
		class Vector;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attribute;
		}
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapClient : public ::com::sun::jndi::ldap::pool::PooledConnection {
	$class(LdapClient, $HAS_FINALIZE, ::com::sun::jndi::ldap::pool::PooledConnection)
public:
	LdapClient();
	void init$($String* host, int32_t port, $String* socketFactory, int32_t connectTimeout, int32_t readTimeout, ::java::io::OutputStream* trace, ::com::sun::jndi::ldap::pool::PoolCallback* pcb);
	::com::sun::jndi::ldap::LdapResult* add(::com::sun::jndi::ldap::LdapEntry* entry, $Array<::javax::naming::ldap::Control>* reqCtls);
	void addUnsolicited(::com::sun::jndi::ldap::LdapCtx* ctx);
	::com::sun::jndi::ldap::LdapResult* authenticate(bool initial, $String* name, Object$* pw, int32_t version, $String* authMechanism, $Array<::javax::naming::ldap::Control>* ctls, ::java::util::Hashtable* env);
	bool authenticateCalled();
	void clearSearchReply(::com::sun::jndi::ldap::LdapResult* res, $Array<::javax::naming::ldap::Control>* ctls);
	void close($Array<::javax::naming::ldap::Control>* reqCtls, bool hardClose);
	virtual void closeConnection() override;
	::com::sun::jndi::ldap::LdapResult* compare($String* DN, $String* type, $String* value, $Array<::javax::naming::ldap::Control>* reqCtls);
	::com::sun::jndi::ldap::LdapResult* delete$($String* DN, $Array<::javax::naming::ldap::Control>* reqCtls);
	void encodeAttribute(::com::sun::jndi::ldap::BerEncoder* ber, ::javax::naming::directory::Attribute* attr);
	static void encodeControls(::com::sun::jndi::ldap::BerEncoder* ber, $Array<::javax::naming::ldap::Control>* reqCtls);
	static $bytes* encodePassword(Object$* pw, bool v3);
	void ensureOpen();
	::com::sun::jndi::ldap::LdapResult* extendedOp($String* id, $bytes* request, $Array<::javax::naming::ldap::Control>* reqCtls, bool pauseAfterReceipt);
	virtual void finalize() override;
	void forceClose(bool cleanPool);
	static $String* getErrorMessage(int32_t errorCode, $String* errorMessage);
	static ::com::sun::jndi::ldap::LdapClient* getInstance(bool usePool, $String* hostname, int32_t port, $String* factory, int32_t connectTimeout, int32_t readTimeout, ::java::io::OutputStream* trace, int32_t version, $String* authMechanism, $Array<::javax::naming::ldap::Control>* ctls, $String* protocol, $String* user, Object$* passwd, ::java::util::Hashtable* env);
	::com::sun::jndi::ldap::LdapResult* getSearchReply(int32_t batchSize, ::com::sun::jndi::ldap::LdapResult* res, ::java::util::Hashtable* binaryAttrs);
	::com::sun::jndi::ldap::LdapResult* getSearchReply(::com::sun::jndi::ldap::LdapRequest* req, int32_t batchSize, ::com::sun::jndi::ldap::LdapResult* res, ::java::util::Hashtable* binaryAttrs);
	static bool hasNoValue(::javax::naming::directory::Attribute* attr);
	void incRefCount();
	bool isBinaryValued($String* attrid, ::java::util::Hashtable* binaryAttrs);
	bool isUpgradedToStartTls();
	::com::sun::jndi::ldap::LdapResult* ldapBind($String* dn, $bytes* toServer, $Array<::javax::naming::ldap::Control>* bindCtls, $String* auth, bool pauseAfterReceipt);
	::com::sun::jndi::ldap::LdapResult* moddn($String* DN, $String* newrdn, bool deleteOldRdn, $String* newSuperior, $Array<::javax::naming::ldap::Control>* reqCtls);
	::com::sun::jndi::ldap::LdapResult* modify($String* dn, $ints* operations, $Array<::javax::naming::directory::Attribute>* attrs, $Array<::javax::naming::ldap::Control>* reqCtls);
	void notifyUnsolicited(Object$* e);
	::javax::naming::directory::Attribute* parseAttribute(::com::sun::jndi::ldap::BerDecoder* ber, ::java::util::Hashtable* binaryAttrs);
	int32_t parseAttributeValue(::com::sun::jndi::ldap::BerDecoder* ber, ::javax::naming::directory::Attribute* la, bool hasBinaryValues);
	static ::java::util::Vector* parseControls(::com::sun::jndi::ldap::BerDecoder* replyBer);
	void parseExtResponse(::com::sun::jndi::ldap::BerDecoder* replyBer, ::com::sun::jndi::ldap::LdapResult* res);
	static void parseResult(::com::sun::jndi::ldap::BerDecoder* replyBer, ::com::sun::jndi::ldap::LdapResult* res, bool isLdapv3);
	void processConnectionClosure();
	::com::sun::jndi::ldap::LdapResult* processReply(::com::sun::jndi::ldap::LdapRequest* req, ::com::sun::jndi::ldap::LdapResult* res, int32_t responseType);
	void processUnsolicited(::com::sun::jndi::ldap::BerDecoder* ber);
	void removeUnsolicited(::com::sun::jndi::ldap::LdapCtx* ctx);
	::com::sun::jndi::ldap::LdapResult* search($String* dn, int32_t scope, int32_t deref, int32_t sizeLimit, int32_t timeLimit, bool attrsOnly, $StringArray* attrs, $String* filter, int32_t batchSize, $Array<::javax::naming::ldap::Control>* reqCtls, ::java::util::Hashtable* binaryAttrs, bool waitFirstReply, int32_t replyQueueCapacity);
	bool usingSaslStreams();
	static const int32_t debug = 0;
	static const bool caseIgnore = true;
	static ::java::util::Hashtable* defaultBinaryAttrs;
	static $String* DISCONNECT_OID;
	bool isLdapv3 = false;
	int32_t referenceCount = 0;
	::com::sun::jndi::ldap::Connection* conn = nullptr;
	::com::sun::jndi::ldap::pool::PoolCallback* pcb = nullptr;
	bool pooled = false;
	bool authenticateCalled$ = false;
	static const int32_t SCOPE_BASE_OBJECT = 0;
	static const int32_t SCOPE_ONE_LEVEL = 1;
	static const int32_t SCOPE_SUBTREE = 2;
	static const int32_t ADD = 0;
	static const int32_t DELETE = 1;
	static const int32_t REPLACE = 2;
	static const int32_t LDAP_VERSION3_VERSION2 = 32;
	static const int32_t LDAP_VERSION2 = 2;
	static const int32_t LDAP_VERSION3 = 3;
	static const int32_t LDAP_VERSION = LDAP_VERSION3;
	static const int32_t LDAP_REF_FOLLOW = 1;
	static const int32_t LDAP_REF_THROW = 2;
	static const int32_t LDAP_REF_IGNORE = 3;
	static const int32_t LDAP_REF_FOLLOW_SCHEME = 4;
	static $String* LDAP_URL;
	static $String* LDAPS_URL;
	static const int32_t LBER_BOOLEAN = 1;
	static const int32_t LBER_INTEGER = 2;
	static const int32_t LBER_BITSTRING = 3;
	static const int32_t LBER_OCTETSTRING = 4;
	static const int32_t LBER_NULL = 5;
	static const int32_t LBER_ENUMERATED = 10;
	static const int32_t LBER_SEQUENCE = 48;
	static const int32_t LBER_SET = 49;
	static const int32_t LDAP_SUPERIOR_DN = 128;
	static const int32_t LDAP_REQ_BIND = 96;
	static const int32_t LDAP_REQ_UNBIND = 66;
	static const int32_t LDAP_REQ_SEARCH = 99;
	static const int32_t LDAP_REQ_MODIFY = 102;
	static const int32_t LDAP_REQ_ADD = 104;
	static const int32_t LDAP_REQ_DELETE = 74;
	static const int32_t LDAP_REQ_MODRDN = 108;
	static const int32_t LDAP_REQ_COMPARE = 110;
	static const int32_t LDAP_REQ_ABANDON = 80;
	static const int32_t LDAP_REQ_EXTENSION = 119;
	static const int32_t LDAP_REP_BIND = 97;
	static const int32_t LDAP_REP_SEARCH = 100;
	static const int32_t LDAP_REP_SEARCH_REF = 115;
	static const int32_t LDAP_REP_RESULT = 101;
	static const int32_t LDAP_REP_MODIFY = 103;
	static const int32_t LDAP_REP_ADD = 105;
	static const int32_t LDAP_REP_DELETE = 107;
	static const int32_t LDAP_REP_MODRDN = 109;
	static const int32_t LDAP_REP_COMPARE = 111;
	static const int32_t LDAP_REP_EXTENSION = 120;
	static const int32_t LDAP_REP_REFERRAL = 163;
	static const int32_t LDAP_REP_EXT_OID = 138;
	static const int32_t LDAP_REP_EXT_VAL = 139;
	static const int32_t LDAP_CONTROLS = 160;
	static $String* LDAP_CONTROL_MANAGE_DSA_IT;
	static $String* LDAP_CONTROL_PREFERRED_LANG;
	static $String* LDAP_CONTROL_PAGED_RESULTS;
	static $String* LDAP_CONTROL_SERVER_SORT_REQ;
	static $String* LDAP_CONTROL_SERVER_SORT_RES;
	static const int32_t LDAP_SUCCESS = 0;
	static const int32_t LDAP_OPERATIONS_ERROR = 1;
	static const int32_t LDAP_PROTOCOL_ERROR = 2;
	static const int32_t LDAP_TIME_LIMIT_EXCEEDED = 3;
	static const int32_t LDAP_SIZE_LIMIT_EXCEEDED = 4;
	static const int32_t LDAP_COMPARE_FALSE = 5;
	static const int32_t LDAP_COMPARE_TRUE = 6;
	static const int32_t LDAP_AUTH_METHOD_NOT_SUPPORTED = 7;
	static const int32_t LDAP_STRONG_AUTH_REQUIRED = 8;
	static const int32_t LDAP_PARTIAL_RESULTS = 9;
	static const int32_t LDAP_REFERRAL = 10;
	static const int32_t LDAP_ADMIN_LIMIT_EXCEEDED = 11;
	static const int32_t LDAP_UNAVAILABLE_CRITICAL_EXTENSION = 12;
	static const int32_t LDAP_CONFIDENTIALITY_REQUIRED = 13;
	static const int32_t LDAP_SASL_BIND_IN_PROGRESS = 14;
	static const int32_t LDAP_NO_SUCH_ATTRIBUTE = 16;
	static const int32_t LDAP_UNDEFINED_ATTRIBUTE_TYPE = 17;
	static const int32_t LDAP_INAPPROPRIATE_MATCHING = 18;
	static const int32_t LDAP_CONSTRAINT_VIOLATION = 19;
	static const int32_t LDAP_ATTRIBUTE_OR_VALUE_EXISTS = 20;
	static const int32_t LDAP_INVALID_ATTRIBUTE_SYNTAX = 21;
	static const int32_t LDAP_NO_SUCH_OBJECT = 32;
	static const int32_t LDAP_ALIAS_PROBLEM = 33;
	static const int32_t LDAP_INVALID_DN_SYNTAX = 34;
	static const int32_t LDAP_IS_LEAF = 35;
	static const int32_t LDAP_ALIAS_DEREFERENCING_PROBLEM = 36;
	static const int32_t LDAP_INAPPROPRIATE_AUTHENTICATION = 48;
	static const int32_t LDAP_INVALID_CREDENTIALS = 49;
	static const int32_t LDAP_INSUFFICIENT_ACCESS_RIGHTS = 50;
	static const int32_t LDAP_BUSY = 51;
	static const int32_t LDAP_UNAVAILABLE = 52;
	static const int32_t LDAP_UNWILLING_TO_PERFORM = 53;
	static const int32_t LDAP_LOOP_DETECT = 54;
	static const int32_t LDAP_NAMING_VIOLATION = 64;
	static const int32_t LDAP_OBJECT_CLASS_VIOLATION = 65;
	static const int32_t LDAP_NOT_ALLOWED_ON_NON_LEAF = 66;
	static const int32_t LDAP_NOT_ALLOWED_ON_RDN = 67;
	static const int32_t LDAP_ENTRY_ALREADY_EXISTS = 68;
	static const int32_t LDAP_OBJECT_CLASS_MODS_PROHIBITED = 69;
	static const int32_t LDAP_AFFECTS_MULTIPLE_DSAS = 71;
	static const int32_t LDAP_OTHER = 80;
	static $StringArray* ldap_error_message;
	::java::util::Vector* unsolicited = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ADD")
#pragma pop_macro("DELETE")
#pragma pop_macro("DISCONNECT_OID")
#pragma pop_macro("DN")
#pragma pop_macro("LBER_BITSTRING")
#pragma pop_macro("LBER_BOOLEAN")
#pragma pop_macro("LBER_ENUMERATED")
#pragma pop_macro("LBER_INTEGER")
#pragma pop_macro("LBER_NULL")
#pragma pop_macro("LBER_OCTETSTRING")
#pragma pop_macro("LBER_SEQUENCE")
#pragma pop_macro("LBER_SET")
#pragma pop_macro("LDAPS_URL")
#pragma pop_macro("LDAP_ADMIN_LIMIT_EXCEEDED")
#pragma pop_macro("LDAP_AFFECTS_MULTIPLE_DSAS")
#pragma pop_macro("LDAP_ALIAS_DEREFERENCING_PROBLEM")
#pragma pop_macro("LDAP_ALIAS_PROBLEM")
#pragma pop_macro("LDAP_ATTRIBUTE_OR_VALUE_EXISTS")
#pragma pop_macro("LDAP_AUTH_METHOD_NOT_SUPPORTED")
#pragma pop_macro("LDAP_BUSY")
#pragma pop_macro("LDAP_COMPARE_FALSE")
#pragma pop_macro("LDAP_COMPARE_TRUE")
#pragma pop_macro("LDAP_CONFIDENTIALITY_REQUIRED")
#pragma pop_macro("LDAP_CONSTRAINT_VIOLATION")
#pragma pop_macro("LDAP_CONTROLS")
#pragma pop_macro("LDAP_CONTROL_MANAGE_DSA_IT")
#pragma pop_macro("LDAP_CONTROL_PAGED_RESULTS")
#pragma pop_macro("LDAP_CONTROL_PREFERRED_LANG")
#pragma pop_macro("LDAP_CONTROL_SERVER_SORT_REQ")
#pragma pop_macro("LDAP_CONTROL_SERVER_SORT_RES")
#pragma pop_macro("LDAP_ENTRY_ALREADY_EXISTS")
#pragma pop_macro("LDAP_INAPPROPRIATE_AUTHENTICATION")
#pragma pop_macro("LDAP_INAPPROPRIATE_MATCHING")
#pragma pop_macro("LDAP_INSUFFICIENT_ACCESS_RIGHTS")
#pragma pop_macro("LDAP_INVALID_ATTRIBUTE_SYNTAX")
#pragma pop_macro("LDAP_INVALID_CREDENTIALS")
#pragma pop_macro("LDAP_INVALID_DN_SYNTAX")
#pragma pop_macro("LDAP_IS_LEAF")
#pragma pop_macro("LDAP_LOOP_DETECT")
#pragma pop_macro("LDAP_NAMING_VIOLATION")
#pragma pop_macro("LDAP_NOT_ALLOWED_ON_NON_LEAF")
#pragma pop_macro("LDAP_NOT_ALLOWED_ON_RDN")
#pragma pop_macro("LDAP_NO_SUCH_ATTRIBUTE")
#pragma pop_macro("LDAP_NO_SUCH_OBJECT")
#pragma pop_macro("LDAP_OBJECT_CLASS_MODS_PROHIBITED")
#pragma pop_macro("LDAP_OBJECT_CLASS_VIOLATION")
#pragma pop_macro("LDAP_OPERATIONS_ERROR")
#pragma pop_macro("LDAP_OTHER")
#pragma pop_macro("LDAP_PARTIAL_RESULTS")
#pragma pop_macro("LDAP_PROTOCOL_ERROR")
#pragma pop_macro("LDAP_REFERRAL")
#pragma pop_macro("LDAP_REF_FOLLOW")
#pragma pop_macro("LDAP_REF_FOLLOW_SCHEME")
#pragma pop_macro("LDAP_REF_IGNORE")
#pragma pop_macro("LDAP_REF_THROW")
#pragma pop_macro("LDAP_REP_ADD")
#pragma pop_macro("LDAP_REP_BIND")
#pragma pop_macro("LDAP_REP_COMPARE")
#pragma pop_macro("LDAP_REP_DELETE")
#pragma pop_macro("LDAP_REP_EXTENSION")
#pragma pop_macro("LDAP_REP_EXT_OID")
#pragma pop_macro("LDAP_REP_EXT_VAL")
#pragma pop_macro("LDAP_REP_MODIFY")
#pragma pop_macro("LDAP_REP_MODRDN")
#pragma pop_macro("LDAP_REP_REFERRAL")
#pragma pop_macro("LDAP_REP_RESULT")
#pragma pop_macro("LDAP_REP_SEARCH")
#pragma pop_macro("LDAP_REP_SEARCH_REF")
#pragma pop_macro("LDAP_REQ_ABANDON")
#pragma pop_macro("LDAP_REQ_ADD")
#pragma pop_macro("LDAP_REQ_BIND")
#pragma pop_macro("LDAP_REQ_COMPARE")
#pragma pop_macro("LDAP_REQ_DELETE")
#pragma pop_macro("LDAP_REQ_EXTENSION")
#pragma pop_macro("LDAP_REQ_MODIFY")
#pragma pop_macro("LDAP_REQ_MODRDN")
#pragma pop_macro("LDAP_REQ_SEARCH")
#pragma pop_macro("LDAP_REQ_UNBIND")
#pragma pop_macro("LDAP_SASL_BIND_IN_PROGRESS")
#pragma pop_macro("LDAP_SIZE_LIMIT_EXCEEDED")
#pragma pop_macro("LDAP_STRONG_AUTH_REQUIRED")
#pragma pop_macro("LDAP_SUCCESS")
#pragma pop_macro("LDAP_SUPERIOR_DN")
#pragma pop_macro("LDAP_TIME_LIMIT_EXCEEDED")
#pragma pop_macro("LDAP_UNAVAILABLE")
#pragma pop_macro("LDAP_UNAVAILABLE_CRITICAL_EXTENSION")
#pragma pop_macro("LDAP_UNDEFINED_ATTRIBUTE_TYPE")
#pragma pop_macro("LDAP_UNWILLING_TO_PERFORM")
#pragma pop_macro("LDAP_URL")
#pragma pop_macro("LDAP_VERSION")
#pragma pop_macro("LDAP_VERSION2")
#pragma pop_macro("LDAP_VERSION3")
#pragma pop_macro("LDAP_VERSION3_VERSION2")
#pragma pop_macro("REPLACE")
#pragma pop_macro("SCOPE_BASE_OBJECT")
#pragma pop_macro("SCOPE_ONE_LEVEL")
#pragma pop_macro("SCOPE_SUBTREE")

#endif // _com_sun_jndi_ldap_LdapClient_h_