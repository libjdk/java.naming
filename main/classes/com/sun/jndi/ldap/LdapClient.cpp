#include <com/sun/jndi/ldap/LdapClient.h>

#include <com/sun/jndi/ldap/BasicControl.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerDecoder.h>
#include <com/sun/jndi/ldap/BerEncoder.h>
#include <com/sun/jndi/ldap/Connection.h>
#include <com/sun/jndi/ldap/Filter.h>
#include <com/sun/jndi/ldap/LdapAttribute.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapEntry.h>
#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/LdapRequest.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/UnsolicitedResponseImpl.h>
#include <com/sun/jndi/ldap/pool/PoolCallback.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <com/sun/jndi/ldap/sasl/LdapSasl.h>
#include <com/sun/jndi/ldap/sasl/SaslInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/Collection.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/naming/AuthenticationException.h>
#include <javax/naming/AuthenticationNotSupportedException.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/InvalidAttributeValueException.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>
#include <jcpp.h>

#undef ADD
#undef ASN_BOOLEAN
#undef ASN_CONSTRUCTOR
#undef ASN_CONTEXT
#undef ASN_OCTET_STR
#undef ASN_SEQUENCE
#undef ASN_SIMPLE_STRING
#undef DELETE
#undef DISCONNECT_OID
#undef DN
#undef ENGLISH
#undef LBER_BITSTRING
#undef LBER_BOOLEAN
#undef LBER_ENUMERATED
#undef LBER_INTEGER
#undef LBER_NULL
#undef LBER_OCTETSTRING
#undef LBER_SEQUENCE
#undef LBER_SET
#undef LDAPS_URL
#undef LDAP_ADMIN_LIMIT_EXCEEDED
#undef LDAP_AFFECTS_MULTIPLE_DSAS
#undef LDAP_ALIAS_DEREFERENCING_PROBLEM
#undef LDAP_ALIAS_PROBLEM
#undef LDAP_ATTRIBUTE_OR_VALUE_EXISTS
#undef LDAP_AUTH_METHOD_NOT_SUPPORTED
#undef LDAP_BUSY
#undef LDAP_COMPARE_FALSE
#undef LDAP_COMPARE_TRUE
#undef LDAP_CONFIDENTIALITY_REQUIRED
#undef LDAP_CONSTRAINT_VIOLATION
#undef LDAP_CONTROLS
#undef LDAP_CONTROL_MANAGE_DSA_IT
#undef LDAP_CONTROL_PAGED_RESULTS
#undef LDAP_CONTROL_PREFERRED_LANG
#undef LDAP_CONTROL_SERVER_SORT_REQ
#undef LDAP_CONTROL_SERVER_SORT_RES
#undef LDAP_ENTRY_ALREADY_EXISTS
#undef LDAP_INAPPROPRIATE_AUTHENTICATION
#undef LDAP_INAPPROPRIATE_MATCHING
#undef LDAP_INSUFFICIENT_ACCESS_RIGHTS
#undef LDAP_INVALID_ATTRIBUTE_SYNTAX
#undef LDAP_INVALID_CREDENTIALS
#undef LDAP_INVALID_DN_SYNTAX
#undef LDAP_IS_LEAF
#undef LDAP_LOOP_DETECT
#undef LDAP_NAMING_VIOLATION
#undef LDAP_NOT_ALLOWED_ON_NON_LEAF
#undef LDAP_NOT_ALLOWED_ON_RDN
#undef LDAP_NO_SUCH_ATTRIBUTE
#undef LDAP_NO_SUCH_OBJECT
#undef LDAP_OBJECT_CLASS_MODS_PROHIBITED
#undef LDAP_OBJECT_CLASS_VIOLATION
#undef LDAP_OPERATIONS_ERROR
#undef LDAP_OTHER
#undef LDAP_PARTIAL_RESULTS
#undef LDAP_PROTOCOL_ERROR
#undef LDAP_REFERRAL
#undef LDAP_REF_FOLLOW
#undef LDAP_REF_FOLLOW_SCHEME
#undef LDAP_REF_IGNORE
#undef LDAP_REF_THROW
#undef LDAP_REP_ADD
#undef LDAP_REP_BIND
#undef LDAP_REP_COMPARE
#undef LDAP_REP_DELETE
#undef LDAP_REP_EXTENSION
#undef LDAP_REP_EXT_OID
#undef LDAP_REP_EXT_VAL
#undef LDAP_REP_MODIFY
#undef LDAP_REP_MODRDN
#undef LDAP_REP_REFERRAL
#undef LDAP_REP_RESULT
#undef LDAP_REP_SEARCH
#undef LDAP_REP_SEARCH_REF
#undef LDAP_REQ_ABANDON
#undef LDAP_REQ_ADD
#undef LDAP_REQ_BIND
#undef LDAP_REQ_COMPARE
#undef LDAP_REQ_DELETE
#undef LDAP_REQ_EXTENSION
#undef LDAP_REQ_MODIFY
#undef LDAP_REQ_MODRDN
#undef LDAP_REQ_SEARCH
#undef LDAP_REQ_UNBIND
#undef LDAP_SASL_BIND_IN_PROGRESS
#undef LDAP_SIZE_LIMIT_EXCEEDED
#undef LDAP_STRONG_AUTH_REQUIRED
#undef LDAP_SUCCESS
#undef LDAP_SUPERIOR_DN
#undef LDAP_TIME_LIMIT_EXCEEDED
#undef LDAP_UNAVAILABLE
#undef LDAP_UNAVAILABLE_CRITICAL_EXTENSION
#undef LDAP_UNDEFINED_ATTRIBUTE_TYPE
#undef LDAP_UNWILLING_TO_PERFORM
#undef LDAP_URL
#undef LDAP_VERSION
#undef LDAP_VERSION2
#undef LDAP_VERSION3
#undef LDAP_VERSION3_VERSION2
#undef MAX_VALUE
#undef REPLACE
#undef SCOPE_BASE_OBJECT
#undef SCOPE_ONE_LEVEL
#undef SCOPE_SUBTREE
#undef TRUE

using $AttributeArray = $Array<::javax::naming::directory::Attribute>;
using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerDecoder = ::com::sun::jndi::ldap::BerDecoder;
using $BerEncoder = ::com::sun::jndi::ldap::BerEncoder;
using $Connection = ::com::sun::jndi::ldap::Connection;
using $Filter = ::com::sun::jndi::ldap::Filter;
using $LdapAttribute = ::com::sun::jndi::ldap::LdapAttribute;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapEntry = ::com::sun::jndi::ldap::LdapEntry;
using $LdapPoolManager = ::com::sun::jndi::ldap::LdapPoolManager;
using $LdapRequest = ::com::sun::jndi::ldap::LdapRequest;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $UnsolicitedResponseImpl = ::com::sun::jndi::ldap::UnsolicitedResponseImpl;
using $PoolCallback = ::com::sun::jndi::ldap::pool::PoolCallback;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $LdapSasl = ::com::sun::jndi::ldap::sasl::LdapSasl;
using $SaslInputStream = ::com::sun::jndi::ldap::sasl::SaslInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $Collection = ::java::util::Collection;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $AuthenticationException = ::javax::naming::AuthenticationException;
using $AuthenticationNotSupportedException = ::javax::naming::AuthenticationNotSupportedException;
using $CommunicationException = ::javax::naming::CommunicationException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $InvalidAttributeValueException = ::javax::naming::directory::InvalidAttributeValueException;
using $Control = ::javax::naming::ldap::Control;
using $UnsolicitedNotification = ::javax::naming::ldap::UnsolicitedNotification;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapClient_FieldInfo_[] = {
	{"debug", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapClient, debug)},
	{"caseIgnore", "Z", nullptr, $STATIC | $FINAL, $constField(LdapClient, caseIgnore)},
	{"defaultBinaryAttrs", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LdapClient, defaultBinaryAttrs)},
	{"DISCONNECT_OID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapClient, DISCONNECT_OID)},
	{"isLdapv3", "Z", nullptr, 0, $field(LdapClient, isLdapv3)},
	{"referenceCount", "I", nullptr, 0, $field(LdapClient, referenceCount)},
	{"conn", "Lcom/sun/jndi/ldap/Connection;", nullptr, $FINAL, $field(LdapClient, conn)},
	{"pcb", "Lcom/sun/jndi/ldap/pool/PoolCallback;", nullptr, $PRIVATE | $FINAL, $field(LdapClient, pcb)},
	{"pooled", "Z", nullptr, $PRIVATE | $FINAL, $field(LdapClient, pooled)},
	{"authenticateCalled", "Z", nullptr, $PRIVATE, $field(LdapClient, authenticateCalled$)},
	{"SCOPE_BASE_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, SCOPE_BASE_OBJECT)},
	{"SCOPE_ONE_LEVEL", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, SCOPE_ONE_LEVEL)},
	{"SCOPE_SUBTREE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, SCOPE_SUBTREE)},
	{"ADD", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, ADD)},
	{"DELETE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, DELETE)},
	{"REPLACE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, REPLACE)},
	{"LDAP_VERSION3_VERSION2", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_VERSION3_VERSION2)},
	{"LDAP_VERSION2", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_VERSION2)},
	{"LDAP_VERSION3", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_VERSION3)},
	{"LDAP_VERSION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_VERSION)},
	{"LDAP_REF_FOLLOW", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REF_FOLLOW)},
	{"LDAP_REF_THROW", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REF_THROW)},
	{"LDAP_REF_IGNORE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REF_IGNORE)},
	{"LDAP_REF_FOLLOW_SCHEME", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REF_FOLLOW_SCHEME)},
	{"LDAP_URL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAP_URL)},
	{"LDAPS_URL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAPS_URL)},
	{"LBER_BOOLEAN", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_BOOLEAN)},
	{"LBER_INTEGER", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_INTEGER)},
	{"LBER_BITSTRING", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_BITSTRING)},
	{"LBER_OCTETSTRING", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_OCTETSTRING)},
	{"LBER_NULL", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_NULL)},
	{"LBER_ENUMERATED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_ENUMERATED)},
	{"LBER_SEQUENCE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_SEQUENCE)},
	{"LBER_SET", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LBER_SET)},
	{"LDAP_SUPERIOR_DN", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_SUPERIOR_DN)},
	{"LDAP_REQ_BIND", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_BIND)},
	{"LDAP_REQ_UNBIND", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_UNBIND)},
	{"LDAP_REQ_SEARCH", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_SEARCH)},
	{"LDAP_REQ_MODIFY", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_MODIFY)},
	{"LDAP_REQ_ADD", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_ADD)},
	{"LDAP_REQ_DELETE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_DELETE)},
	{"LDAP_REQ_MODRDN", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_MODRDN)},
	{"LDAP_REQ_COMPARE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_COMPARE)},
	{"LDAP_REQ_ABANDON", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_ABANDON)},
	{"LDAP_REQ_EXTENSION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REQ_EXTENSION)},
	{"LDAP_REP_BIND", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_BIND)},
	{"LDAP_REP_SEARCH", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_SEARCH)},
	{"LDAP_REP_SEARCH_REF", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_SEARCH_REF)},
	{"LDAP_REP_RESULT", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_RESULT)},
	{"LDAP_REP_MODIFY", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_MODIFY)},
	{"LDAP_REP_ADD", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_ADD)},
	{"LDAP_REP_DELETE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_DELETE)},
	{"LDAP_REP_MODRDN", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_MODRDN)},
	{"LDAP_REP_COMPARE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_COMPARE)},
	{"LDAP_REP_EXTENSION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_EXTENSION)},
	{"LDAP_REP_REFERRAL", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_REFERRAL)},
	{"LDAP_REP_EXT_OID", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_EXT_OID)},
	{"LDAP_REP_EXT_VAL", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REP_EXT_VAL)},
	{"LDAP_CONTROLS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_CONTROLS)},
	{"LDAP_CONTROL_MANAGE_DSA_IT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAP_CONTROL_MANAGE_DSA_IT)},
	{"LDAP_CONTROL_PREFERRED_LANG", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAP_CONTROL_PREFERRED_LANG)},
	{"LDAP_CONTROL_PAGED_RESULTS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAP_CONTROL_PAGED_RESULTS)},
	{"LDAP_CONTROL_SERVER_SORT_REQ", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAP_CONTROL_SERVER_SORT_REQ)},
	{"LDAP_CONTROL_SERVER_SORT_RES", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, LDAP_CONTROL_SERVER_SORT_RES)},
	{"LDAP_SUCCESS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_SUCCESS)},
	{"LDAP_OPERATIONS_ERROR", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_OPERATIONS_ERROR)},
	{"LDAP_PROTOCOL_ERROR", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_PROTOCOL_ERROR)},
	{"LDAP_TIME_LIMIT_EXCEEDED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_TIME_LIMIT_EXCEEDED)},
	{"LDAP_SIZE_LIMIT_EXCEEDED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_SIZE_LIMIT_EXCEEDED)},
	{"LDAP_COMPARE_FALSE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_COMPARE_FALSE)},
	{"LDAP_COMPARE_TRUE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_COMPARE_TRUE)},
	{"LDAP_AUTH_METHOD_NOT_SUPPORTED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_AUTH_METHOD_NOT_SUPPORTED)},
	{"LDAP_STRONG_AUTH_REQUIRED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_STRONG_AUTH_REQUIRED)},
	{"LDAP_PARTIAL_RESULTS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_PARTIAL_RESULTS)},
	{"LDAP_REFERRAL", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_REFERRAL)},
	{"LDAP_ADMIN_LIMIT_EXCEEDED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_ADMIN_LIMIT_EXCEEDED)},
	{"LDAP_UNAVAILABLE_CRITICAL_EXTENSION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_UNAVAILABLE_CRITICAL_EXTENSION)},
	{"LDAP_CONFIDENTIALITY_REQUIRED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_CONFIDENTIALITY_REQUIRED)},
	{"LDAP_SASL_BIND_IN_PROGRESS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_SASL_BIND_IN_PROGRESS)},
	{"LDAP_NO_SUCH_ATTRIBUTE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_NO_SUCH_ATTRIBUTE)},
	{"LDAP_UNDEFINED_ATTRIBUTE_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_UNDEFINED_ATTRIBUTE_TYPE)},
	{"LDAP_INAPPROPRIATE_MATCHING", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_INAPPROPRIATE_MATCHING)},
	{"LDAP_CONSTRAINT_VIOLATION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_CONSTRAINT_VIOLATION)},
	{"LDAP_ATTRIBUTE_OR_VALUE_EXISTS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_ATTRIBUTE_OR_VALUE_EXISTS)},
	{"LDAP_INVALID_ATTRIBUTE_SYNTAX", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_INVALID_ATTRIBUTE_SYNTAX)},
	{"LDAP_NO_SUCH_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_NO_SUCH_OBJECT)},
	{"LDAP_ALIAS_PROBLEM", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_ALIAS_PROBLEM)},
	{"LDAP_INVALID_DN_SYNTAX", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_INVALID_DN_SYNTAX)},
	{"LDAP_IS_LEAF", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_IS_LEAF)},
	{"LDAP_ALIAS_DEREFERENCING_PROBLEM", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_ALIAS_DEREFERENCING_PROBLEM)},
	{"LDAP_INAPPROPRIATE_AUTHENTICATION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_INAPPROPRIATE_AUTHENTICATION)},
	{"LDAP_INVALID_CREDENTIALS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_INVALID_CREDENTIALS)},
	{"LDAP_INSUFFICIENT_ACCESS_RIGHTS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_INSUFFICIENT_ACCESS_RIGHTS)},
	{"LDAP_BUSY", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_BUSY)},
	{"LDAP_UNAVAILABLE", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_UNAVAILABLE)},
	{"LDAP_UNWILLING_TO_PERFORM", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_UNWILLING_TO_PERFORM)},
	{"LDAP_LOOP_DETECT", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_LOOP_DETECT)},
	{"LDAP_NAMING_VIOLATION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_NAMING_VIOLATION)},
	{"LDAP_OBJECT_CLASS_VIOLATION", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_OBJECT_CLASS_VIOLATION)},
	{"LDAP_NOT_ALLOWED_ON_NON_LEAF", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_NOT_ALLOWED_ON_NON_LEAF)},
	{"LDAP_NOT_ALLOWED_ON_RDN", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_NOT_ALLOWED_ON_RDN)},
	{"LDAP_ENTRY_ALREADY_EXISTS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_ENTRY_ALREADY_EXISTS)},
	{"LDAP_OBJECT_CLASS_MODS_PROHIBITED", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_OBJECT_CLASS_MODS_PROHIBITED)},
	{"LDAP_AFFECTS_MULTIPLE_DSAS", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_AFFECTS_MULTIPLE_DSAS)},
	{"LDAP_OTHER", "I", nullptr, $STATIC | $FINAL, $constField(LdapClient, LDAP_OTHER)},
	{"ldap_error_message", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapClient, ldap_error_message)},
	{"unsolicited", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapCtx;>;", $PRIVATE, $field(LdapClient, unsolicited)},
	{}
};

$MethodInfo _LdapClient_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;Lcom/sun/jndi/ldap/pool/PoolCallback;)V", nullptr, 0, $method(static_cast<void(LdapClient::*)($String*,int32_t,$String*,int32_t,int32_t,$OutputStream*,$PoolCallback*)>(&LdapClient::init$)), "javax.naming.NamingException"},
	{"add", "(Lcom/sun/jndi/ldap/LdapEntry;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapClient::*)($LdapEntry*,$ControlArray*)>(&LdapClient::add)), "java.io.IOException,javax.naming.NamingException"},
	{"addUnsolicited", "(Lcom/sun/jndi/ldap/LdapCtx;)V", nullptr, 0, $method(static_cast<void(LdapClient::*)($LdapCtx*)>(&LdapClient::addUnsolicited))},
	{"authenticate", "(ZLjava/lang/String;Ljava/lang/Object;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapResult;", "(ZLjava/lang/String;Ljava/lang/Object;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/util/Hashtable<**>;)Lcom/sun/jndi/ldap/LdapResult;", $SYNCHRONIZED, $method(static_cast<$LdapResult*(LdapClient::*)(bool,$String*,Object$*,int32_t,$String*,$ControlArray*,$Hashtable*)>(&LdapClient::authenticate)), "javax.naming.NamingException"},
	{"authenticateCalled", "()Z", nullptr, $SYNCHRONIZED, $method(static_cast<bool(LdapClient::*)()>(&LdapClient::authenticateCalled))},
	{"clearSearchReply", "(Lcom/sun/jndi/ldap/LdapResult;[Ljavax/naming/ldap/Control;)V", nullptr, 0, $method(static_cast<void(LdapClient::*)($LdapResult*,$ControlArray*)>(&LdapClient::clearSearchReply))},
	{"close", "([Ljavax/naming/ldap/Control;Z)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(LdapClient::*)($ControlArray*,bool)>(&LdapClient::close))},
	{"closeConnection", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapClient::*)($String*,$String*,$String*,$ControlArray*)>(&LdapClient::compare)), "java.io.IOException,javax.naming.NamingException"},
	{"delete", "(Ljava/lang/String;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapClient::*)($String*,$ControlArray*)>(&LdapClient::delete$)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeAttribute", "(Lcom/sun/jndi/ldap/BerEncoder;Ljavax/naming/directory/Attribute;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapClient::*)($BerEncoder*,$Attribute*)>(&LdapClient::encodeAttribute)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeControls", "(Lcom/sun/jndi/ldap/BerEncoder;[Ljavax/naming/ldap/Control;)V", nullptr, $STATIC, $method(static_cast<void(*)($BerEncoder*,$ControlArray*)>(&LdapClient::encodeControls)), "java.io.IOException"},
	{"encodePassword", "(Ljava/lang/Object;Z)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(Object$*,bool)>(&LdapClient::encodePassword)), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapClient::*)()>(&LdapClient::ensureOpen)), "java.io.IOException"},
	{"extendedOp", "(Ljava/lang/String;[B[Ljavax/naming/ldap/Control;Z)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapClient::*)($String*,$bytes*,$ControlArray*,bool)>(&LdapClient::extendedOp)), "java.io.IOException,javax.naming.NamingException"},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"forceClose", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(LdapClient::*)(bool)>(&LdapClient::forceClose))},
	{"getErrorMessage", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t,$String*)>(&LdapClient::getErrorMessage))},
	{"getInstance", "(ZLjava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapClient;", "(ZLjava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable<**>;)Lcom/sun/jndi/ldap/LdapClient;", $STATIC, $method(static_cast<LdapClient*(*)(bool,$String*,int32_t,$String*,int32_t,int32_t,$OutputStream*,int32_t,$String*,$ControlArray*,$String*,$String*,Object$*,$Hashtable*)>(&LdapClient::getInstance)), "javax.naming.NamingException"},
	{"getSearchReply", "(ILcom/sun/jndi/ldap/LdapResult;Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapResult;", "(ILcom/sun/jndi/ldap/LdapResult;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;)Lcom/sun/jndi/ldap/LdapResult;", 0, $method(static_cast<$LdapResult*(LdapClient::*)(int32_t,$LdapResult*,$Hashtable*)>(&LdapClient::getSearchReply)), "java.io.IOException,javax.naming.NamingException"},
	{"getSearchReply", "(Lcom/sun/jndi/ldap/LdapRequest;ILcom/sun/jndi/ldap/LdapResult;Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapResult;", "(Lcom/sun/jndi/ldap/LdapRequest;ILcom/sun/jndi/ldap/LdapResult;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;)Lcom/sun/jndi/ldap/LdapResult;", $PRIVATE, $method(static_cast<$LdapResult*(LdapClient::*)($LdapRequest*,int32_t,$LdapResult*,$Hashtable*)>(&LdapClient::getSearchReply)), "java.io.IOException,javax.naming.NamingException"},
	{"hasNoValue", "(Ljavax/naming/directory/Attribute;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Attribute*)>(&LdapClient::hasNoValue)), "javax.naming.NamingException"},
	{"incRefCount", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(LdapClient::*)()>(&LdapClient::incRefCount))},
	{"isBinaryValued", "(Ljava/lang/String;Ljava/util/Hashtable;)Z", "(Ljava/lang/String;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;)Z", $PRIVATE, $method(static_cast<bool(LdapClient::*)($String*,$Hashtable*)>(&LdapClient::isBinaryValued))},
	{"isUpgradedToStartTls", "()Z", nullptr, 0, $method(static_cast<bool(LdapClient::*)()>(&LdapClient::isUpgradedToStartTls))},
	{"ldapBind", "(Ljava/lang/String;[B[Ljavax/naming/ldap/Control;Ljava/lang/String;Z)Lcom/sun/jndi/ldap/LdapResult;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<$LdapResult*(LdapClient::*)($String*,$bytes*,$ControlArray*,$String*,bool)>(&LdapClient::ldapBind)), "java.io.IOException,javax.naming.NamingException"},
	{"moddn", "(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapClient::*)($String*,$String*,bool,$String*,$ControlArray*)>(&LdapClient::moddn)), "java.io.IOException,javax.naming.NamingException"},
	{"modify", "(Ljava/lang/String;[I[Ljavax/naming/directory/Attribute;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapClient::*)($String*,$ints*,$AttributeArray*,$ControlArray*)>(&LdapClient::modify)), "java.io.IOException,javax.naming.NamingException"},
	{"notifyUnsolicited", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapClient::*)(Object$*)>(&LdapClient::notifyUnsolicited))},
	{"parseAttribute", "(Lcom/sun/jndi/ldap/BerDecoder;Ljava/util/Hashtable;)Ljavax/naming/directory/Attribute;", "(Lcom/sun/jndi/ldap/BerDecoder;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;)Ljavax/naming/directory/Attribute;", $PRIVATE, $method(static_cast<$Attribute*(LdapClient::*)($BerDecoder*,$Hashtable*)>(&LdapClient::parseAttribute)), "java.io.IOException"},
	{"parseAttributeValue", "(Lcom/sun/jndi/ldap/BerDecoder;Ljavax/naming/directory/Attribute;Z)I", nullptr, $PRIVATE, $method(static_cast<int32_t(LdapClient::*)($BerDecoder*,$Attribute*,bool)>(&LdapClient::parseAttributeValue)), "java.io.IOException"},
	{"parseControls", "(Lcom/sun/jndi/ldap/BerDecoder;)Ljava/util/Vector;", "(Lcom/sun/jndi/ldap/BerDecoder;)Ljava/util/Vector<Ljavax/naming/ldap/Control;>;", $STATIC, $method(static_cast<$Vector*(*)($BerDecoder*)>(&LdapClient::parseControls)), "java.io.IOException"},
	{"parseExtResponse", "(Lcom/sun/jndi/ldap/BerDecoder;Lcom/sun/jndi/ldap/LdapResult;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapClient::*)($BerDecoder*,$LdapResult*)>(&LdapClient::parseExtResponse)), "java.io.IOException"},
	{"parseResult", "(Lcom/sun/jndi/ldap/BerDecoder;Lcom/sun/jndi/ldap/LdapResult;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($BerDecoder*,$LdapResult*,bool)>(&LdapClient::parseResult)), "java.io.IOException"},
	{"processConnectionClosure", "()V", nullptr, 0, $method(static_cast<void(LdapClient::*)()>(&LdapClient::processConnectionClosure))},
	{"processReply", "(Lcom/sun/jndi/ldap/LdapRequest;Lcom/sun/jndi/ldap/LdapResult;I)Lcom/sun/jndi/ldap/LdapResult;", nullptr, $PRIVATE, $method(static_cast<$LdapResult*(LdapClient::*)($LdapRequest*,$LdapResult*,int32_t)>(&LdapClient::processReply)), "java.io.IOException,javax.naming.NamingException"},
	{"processUnsolicited", "(Lcom/sun/jndi/ldap/BerDecoder;)V", nullptr, 0, $method(static_cast<void(LdapClient::*)($BerDecoder*)>(&LdapClient::processUnsolicited))},
	{"removeUnsolicited", "(Lcom/sun/jndi/ldap/LdapCtx;)V", nullptr, 0, $method(static_cast<void(LdapClient::*)($LdapCtx*)>(&LdapClient::removeUnsolicited))},
	{"search", "(Ljava/lang/String;IIIIZ[Ljava/lang/String;Ljava/lang/String;I[Ljavax/naming/ldap/Control;Ljava/util/Hashtable;ZI)Lcom/sun/jndi/ldap/LdapResult;", "(Ljava/lang/String;IIIIZ[Ljava/lang/String;Ljava/lang/String;I[Ljavax/naming/ldap/Control;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;ZI)Lcom/sun/jndi/ldap/LdapResult;", 0, $method(static_cast<$LdapResult*(LdapClient::*)($String*,int32_t,int32_t,int32_t,int32_t,bool,$StringArray*,$String*,int32_t,$ControlArray*,$Hashtable*,bool,int32_t)>(&LdapClient::search)), "java.io.IOException,javax.naming.NamingException"},
	{"usingSaslStreams", "()Z", nullptr, 0, $method(static_cast<bool(LdapClient::*)()>(&LdapClient::usingSaslStreams))},
	{}
};

$ClassInfo _LdapClient_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapClient",
	"java.lang.Object",
	"com.sun.jndi.ldap.pool.PooledConnection",
	_LdapClient_FieldInfo_,
	_LdapClient_MethodInfo_
};

$Object* allocate$LdapClient($Class* clazz) {
	return $of($alloc(LdapClient));
}

$Hashtable* LdapClient::defaultBinaryAttrs = nullptr;
$String* LdapClient::DISCONNECT_OID = nullptr;
$String* LdapClient::LDAP_URL = nullptr;
$String* LdapClient::LDAPS_URL = nullptr;
$String* LdapClient::LDAP_CONTROL_MANAGE_DSA_IT = nullptr;
$String* LdapClient::LDAP_CONTROL_PREFERRED_LANG = nullptr;
$String* LdapClient::LDAP_CONTROL_PAGED_RESULTS = nullptr;
$String* LdapClient::LDAP_CONTROL_SERVER_SORT_REQ = nullptr;
$String* LdapClient::LDAP_CONTROL_SERVER_SORT_RES = nullptr;
$StringArray* LdapClient::ldap_error_message = nullptr;

void LdapClient::init$($String* host, int32_t port, $String* socketFactory, int32_t connectTimeout, int32_t readTimeout, $OutputStream* trace, $PoolCallback* pcb) {
	this->referenceCount = 1;
	this->authenticateCalled$ = false;
	$set(this, unsolicited, $new($Vector, 3));
	$set(this, conn, $new($Connection, this, host, port, socketFactory, connectTimeout, readTimeout, trace));
	$set(this, pcb, pcb);
	this->pooled = (pcb != nullptr);
}

bool LdapClient::authenticateCalled() {
	$synchronized(this) {
		return this->authenticateCalled$;
	}
}

$LdapResult* LdapClient::authenticate(bool initial, $String* name$renamed, Object$* pw$renamed, int32_t version, $String* authMechanism, $ControlArray* ctls, $Hashtable* env) {
	$synchronized(this) {
		$var($Object, pw, pw$renamed);
		$var($String, name, name$renamed);
		int32_t readTimeout = $nc(this->conn)->readTimeout;
		$nc(this->conn)->readTimeout = $nc(this->conn)->connectTimeout;
		$var($LdapResult, res, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			$var($LdapResult, var$2, nullptr);
			bool return$1 = false;
			try {
				this->authenticateCalled$ = true;
				try {
					ensureOpen();
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					$var($NamingException, ne, $new($CommunicationException));
					ne->setRootCause(e);
					$throw(ne);
				}
				switch (version) {
				case LdapClient::LDAP_VERSION3_VERSION2:
					{}
				case LdapClient::LDAP_VERSION3:
					{
						this->isLdapv3 = true;
						break;
					}
				case LdapClient::LDAP_VERSION2:
					{
						this->isLdapv3 = false;
						break;
					}
				default:
					{
						$throwNew($CommunicationException, $$str({"Protocol version "_s, $$str(version), " not supported"_s}));
					}
				}
				bool var$3 = $nc(authMechanism)->equalsIgnoreCase("none"_s);
				if (var$3 || $nc(authMechanism)->equalsIgnoreCase("anonymous"_s)) {
					if (!initial || (version == LdapClient::LDAP_VERSION2) || (version == LdapClient::LDAP_VERSION3_VERSION2) || ((ctls != nullptr) && (ctls->length > 0))) {
						try {
							$assign(res, ldapBind($assign(name, nullptr), ($cast($bytes, ($assign(pw, nullptr)))), ctls, nullptr, false));
							if ($nc(res)->status == LdapClient::LDAP_SUCCESS) {
								$nc(this->conn)->setBound();
							}
						} catch ($IOException&) {
							$var($IOException, e, $catch());
							$var($NamingException, ne, $new($CommunicationException, $$str({"anonymous bind failed: "_s, $nc(this->conn)->host, ":"_s, $$str($nc(this->conn)->port)})));
							ne->setRootCause(e);
							$throw(ne);
						}
					} else {
						$assign(res, $new($LdapResult));
						res->status = LdapClient::LDAP_SUCCESS;
					}
				} else if (authMechanism->equalsIgnoreCase("simple"_s)) {
					$var($bytes, encodedPw, nullptr);
					{
						$var($Throwable, var$4, nullptr);
						try {
							try {
								$assign(encodedPw, encodePassword(pw, this->isLdapv3));
								$assign(res, ldapBind(name, encodedPw, ctls, nullptr, false));
								if ($nc(res)->status == LdapClient::LDAP_SUCCESS) {
									$nc(this->conn)->setBound();
								}
							} catch ($IOException&) {
								$var($IOException, e, $catch());
								$var($NamingException, ne, $new($CommunicationException, $$str({"simple bind failed: "_s, $nc(this->conn)->host, ":"_s, $$str($nc(this->conn)->port)})));
								ne->setRootCause(e);
								$throw(ne);
							}
						} catch ($Throwable&) {
							$assign(var$4, $catch());
						} /*finally*/ {
							if (!$equals(encodedPw, pw) && encodedPw != nullptr) {
								for (int32_t i = 0; i < encodedPw->length; ++i) {
									encodedPw->set(i, (int8_t)0);
								}
							}
						}
						if (var$4 != nullptr) {
							$throw(var$4);
						}
					}
				} else if (this->isLdapv3) {
					try {
						$assign(res, $LdapSasl::saslBind(this, this->conn, $nc(this->conn)->host, name, pw, authMechanism, env, ctls));
						if ($nc(res)->status == LdapClient::LDAP_SUCCESS) {
							$nc(this->conn)->setBound();
						}
					} catch ($IOException&) {
						$var($IOException, e, $catch());
						$var($NamingException, ne, $new($CommunicationException, $$str({"SASL bind failed: "_s, $nc(this->conn)->host, ":"_s, $$str($nc(this->conn)->port)})));
						ne->setRootCause(e);
						$throw(ne);
					}
				} else {
					$throwNew($AuthenticationNotSupportedException, authMechanism);
				}
				bool var$5 = initial && ($nc(res)->status == LdapClient::LDAP_PROTOCOL_ERROR) && (version == LdapClient::LDAP_VERSION3_VERSION2);
				if (var$5) {
					bool var$7 = authMechanism->equalsIgnoreCase("none"_s);
					bool var$6 = var$7 || authMechanism->equalsIgnoreCase("anonymous"_s);
					var$5 = (var$6 || authMechanism->equalsIgnoreCase("simple"_s));
				}
				if (var$5) {
					$var($bytes, encodedPw, nullptr);
					{
						$var($Throwable, var$8, nullptr);
						try {
							try {
								this->isLdapv3 = false;
								$assign(encodedPw, encodePassword(pw, false));
								$assign(res, ldapBind(name, encodedPw, ctls, nullptr, false));
								if ($nc(res)->status == LdapClient::LDAP_SUCCESS) {
									$nc(this->conn)->setBound();
								}
							} catch ($IOException&) {
								$var($IOException, e, $catch());
								$var($NamingException, ne, $new($CommunicationException, $$str({authMechanism, ":"_s, $nc(this->conn)->host, ":"_s, $$str($nc(this->conn)->port)})));
								ne->setRootCause(e);
								$throw(ne);
							}
						} catch ($Throwable&) {
							$assign(var$8, $catch());
						} /*finally*/ {
							if (!$equals(encodedPw, pw) && encodedPw != nullptr) {
								for (int32_t i = 0; i < encodedPw->length; ++i) {
									encodedPw->set(i, (int8_t)0);
								}
							}
						}
						if (var$8 != nullptr) {
							$throw(var$8);
						}
					}
				}
				if ($nc(res)->status == LdapClient::LDAP_NO_SUCH_OBJECT) {
					$throwNew($AuthenticationException, $(getErrorMessage(res->status, res->errorMessage)));
				}
				$nc(this->conn)->setV3(this->isLdapv3);
				$assign(var$2, res);
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(this->conn)->readTimeout = readTimeout;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$LdapResult* LdapClient::ldapBind($String* dn, $bytes* toServer, $ControlArray* bindCtls, $String* auth, bool pauseAfterReceipt) {
	$synchronized(this) {
		ensureOpen();
		$nc(this->conn)->abandonOutstandingReqs(nullptr);
		$var($BerEncoder, ber, $new($BerEncoder));
		int32_t curMsgId = $nc(this->conn)->getMsgId();
		$var($LdapResult, res, $new($LdapResult));
		res->status = LdapClient::LDAP_OPERATIONS_ERROR;
		ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
		ber->encodeInt(curMsgId);
		ber->beginSeq(LdapClient::LDAP_REQ_BIND);
		ber->encodeInt(this->isLdapv3 ? LdapClient::LDAP_VERSION3 : LdapClient::LDAP_VERSION2);
		ber->encodeString(dn, this->isLdapv3);
		if (auth != nullptr) {
			ber->beginSeq(($Ber::ASN_CONTEXT | $Ber::ASN_CONSTRUCTOR) | 3);
			ber->encodeString(auth, this->isLdapv3);
			if (toServer != nullptr) {
				ber->encodeOctetString(toServer, $Ber::ASN_OCTET_STR);
			}
			ber->endSeq();
		} else if (toServer != nullptr) {
			ber->encodeOctetString(toServer, $Ber::ASN_CONTEXT);
		} else {
			ber->encodeOctetString(nullptr, $Ber::ASN_CONTEXT, 0, 0);
		}
		ber->endSeq();
		if (this->isLdapv3) {
			encodeControls(ber, bindCtls);
		}
		ber->endSeq();
		$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId, pauseAfterReceipt));
		if (toServer != nullptr) {
			ber->reset();
		}
		$var($BerDecoder, rber, $nc(this->conn)->readReply(req));
		$nc(rber)->parseSeq(nullptr);
		rber->parseInt();
		if (rber->parseByte() != LdapClient::LDAP_REP_BIND) {
			return res;
		}
		rber->parseLength();
		parseResult(rber, res, this->isLdapv3);
		bool var$0 = this->isLdapv3 && (rber->bytesLeft() > 0);
		if (var$0 && (rber->peekByte() == ($Ber::ASN_CONTEXT | 7))) {
			$set(res, serverCreds, rber->parseOctetString(($Ber::ASN_CONTEXT | 7), nullptr));
		}
		$set(res, resControls, this->isLdapv3 ? parseControls(rber) : ($Vector*)nullptr);
		$nc(this->conn)->removeRequest(req);
		return res;
	}
}

bool LdapClient::usingSaslStreams() {
	return ($instanceOf($SaslInputStream, $nc(this->conn)->inStream));
}

bool LdapClient::isUpgradedToStartTls() {
	return $nc(this->conn)->isUpgradedToStartTls();
}

void LdapClient::incRefCount() {
	$synchronized(this) {
		++this->referenceCount;
	}
}

$bytes* LdapClient::encodePassword(Object$* pw$renamed, bool v3) {
	$init(LdapClient);
	$var($Object, pw, pw$renamed);
	if ($instanceOf($chars, pw)) {
		$assign(pw, $new($String, $cast($chars, pw)));
	}
	if ($instanceOf($String, pw)) {
		if (v3) {
			return $nc(($cast($String, pw)))->getBytes("UTF8"_s);
		} else {
			return $nc(($cast($String, pw)))->getBytes("8859_1"_s);
		}
	} else {
		return $cast($bytes, pw);
	}
}

void LdapClient::close($ControlArray* reqCtls, bool hardClose) {
	$synchronized(this) {
		--this->referenceCount;
		if (this->referenceCount <= 0) {
			if (!this->pooled) {
				$nc(this->conn)->cleanup(reqCtls, false);
			} else if (hardClose) {
				$nc(this->conn)->cleanup(reqCtls, false);
				$nc(this->pcb)->removePooledConnection(this);
			} else {
				$nc(this->pcb)->releasePooledConnection(this);
			}
		}
	}
}

void LdapClient::forceClose(bool cleanPool) {
	this->referenceCount = 0;
	$nc(this->conn)->cleanup(nullptr, false);
	if (cleanPool) {
		$nc(this->pcb)->removePooledConnection(this);
	}
}

void LdapClient::finalize() {
	forceClose(this->pooled);
}

void LdapClient::closeConnection() {
	$synchronized(this) {
		forceClose(false);
	}
}

void LdapClient::processConnectionClosure() {
	if ($nc(this->unsolicited)->size() > 0) {
		$var($String, msg, nullptr);
		if (this->conn != nullptr) {
			$assign(msg, $str({$nc(this->conn)->host, ":"_s, $$str($nc(this->conn)->port), " connection closed"_s}));
		} else {
			$assign(msg, "Connection closed"_s);
		}
		notifyUnsolicited($$new($CommunicationException, msg));
	}
	if (this->pooled) {
		$nc(this->pcb)->removePooledConnection(this);
	}
}

$LdapResult* LdapClient::search($String* dn, int32_t scope, int32_t deref, int32_t sizeLimit, int32_t timeLimit, bool attrsOnly, $StringArray* attrs, $String* filter, int32_t batchSize, $ControlArray* reqCtls, $Hashtable* binaryAttrs, bool waitFirstReply, int32_t replyQueueCapacity) {
	ensureOpen();
	$var($LdapResult, res, $new($LdapResult));
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->beginSeq(LdapClient::LDAP_REQ_SEARCH);
	ber->encodeString(dn == nullptr ? ""_s : dn, this->isLdapv3);
	ber->encodeInt(scope, LdapClient::LBER_ENUMERATED);
	ber->encodeInt(deref, LdapClient::LBER_ENUMERATED);
	ber->encodeInt(sizeLimit);
	ber->encodeInt(timeLimit);
	ber->encodeBoolean(attrsOnly);
	$Filter::encodeFilterString(ber, filter, this->isLdapv3);
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeStringArray(attrs, this->isLdapv3);
	ber->endSeq();
	ber->endSeq();
	if (this->isLdapv3) {
		encodeControls(ber, reqCtls);
	}
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId, false, replyQueueCapacity));
	res->msgId = curMsgId;
	res->status = LdapClient::LDAP_SUCCESS;
	if (waitFirstReply) {
		$assign(res, getSearchReply(req, batchSize, res, binaryAttrs));
	}
	return res;
}

void LdapClient::clearSearchReply($LdapResult* res, $ControlArray* ctls) {
	if (res != nullptr) {
		$var($LdapRequest, req, $nc(this->conn)->findRequest(res->msgId));
		if (req == nullptr) {
			return;
		}
		if ($nc(req)->hasSearchCompleted()) {
			$nc(this->conn)->removeRequest(req);
		} else {
			$nc(this->conn)->abandonRequest(req, ctls);
		}
	}
}

$LdapResult* LdapClient::getSearchReply(int32_t batchSize, $LdapResult* res, $Hashtable* binaryAttrs) {
	ensureOpen();
	$var($LdapRequest, req, nullptr);
	if (($assign(req, $nc(this->conn)->findRequest($nc(res)->msgId))) == nullptr) {
		return nullptr;
	}
	return getSearchReply(req, batchSize, res, binaryAttrs);
}

$LdapResult* LdapClient::getSearchReply($LdapRequest* req, int32_t batchSize, $LdapResult* res, $Hashtable* binaryAttrs) {
	if (batchSize == 0) {
		batchSize = $Integer::MAX_VALUE;
	}
	if ($nc(res)->entries != nullptr) {
		$nc(res->entries)->setSize(0);
	} else {
		$set(res, entries, $new($Vector, batchSize == $Integer::MAX_VALUE ? 32 : batchSize));
	}
	if ($nc(res)->referrals != nullptr) {
		$nc(res->referrals)->setSize(0);
	}
	$var($BerDecoder, replyBer, nullptr);
	int32_t seq = 0;
	$var($Attributes, lattrs, nullptr);
	$var($Attribute, la, nullptr);
	$var($String, DN, nullptr);
	$var($LdapEntry, le, nullptr);
	$var($ints, seqlen, nullptr);
	int32_t endseq = 0;
	for (int32_t i = 0; i < batchSize;) {
		$assign(replyBer, $nc(this->conn)->readReply(req));
		$nc(replyBer)->parseSeq(nullptr);
		replyBer->parseInt();
		seq = replyBer->parseSeq(nullptr);
		if (seq == LdapClient::LDAP_REP_SEARCH) {
			$assign(lattrs, $new($BasicAttributes, LdapClient::caseIgnore));
			$assign(DN, replyBer->parseString(this->isLdapv3));
			$assign(le, $new($LdapEntry, DN, lattrs));
			$assign(seqlen, $new($ints, 1));
			replyBer->parseSeq(seqlen);
			endseq = replyBer->getParsePosition() + seqlen->get(0);
			while (true) {
				bool var$0 = (replyBer->getParsePosition() < endseq);
				if (!(var$0 && (replyBer->bytesLeft() > 0))) {
					break;
				}
				{
					$assign(la, parseAttribute(replyBer, binaryAttrs));
					lattrs->put(la);
				}
			}
			$set(le, respCtls, this->isLdapv3 ? parseControls(replyBer) : ($Vector*)nullptr);
			$nc($nc(res)->entries)->addElement(le);
			++i;
		} else if ((seq == LdapClient::LDAP_REP_SEARCH_REF) && this->isLdapv3) {
			$var($Vector, URLs, $new($Vector, 4));
			if (replyBer->peekByte() == ($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR)) {
				replyBer->parseSeq(nullptr);
			}
			while (true) {
				bool var$1 = (replyBer->bytesLeft() > 0);
				if (!(var$1 && (replyBer->peekByte() == $Ber::ASN_OCTET_STR))) {
					break;
				}
				{
					URLs->addElement($(replyBer->parseString(this->isLdapv3)));
				}
			}
			if ($nc(res)->referrals == nullptr) {
				$set(res, referrals, $new($Vector, 4));
			}
			$nc($nc(res)->referrals)->addElement(URLs);
			$set(res, resControls, this->isLdapv3 ? parseControls(replyBer) : ($Vector*)nullptr);
		} else if (seq == LdapClient::LDAP_REP_EXTENSION) {
			parseExtResponse(replyBer, res);
		} else if (seq == LdapClient::LDAP_REP_RESULT) {
			parseResult(replyBer, res, this->isLdapv3);
			$set($nc(res), resControls, this->isLdapv3 ? parseControls(replyBer) : ($Vector*)nullptr);
			$nc(this->conn)->removeRequest(req);
			return res;
		}
	}
	return res;
}

$Attribute* LdapClient::parseAttribute($BerDecoder* ber, $Hashtable* binaryAttrs) {
	$var($ints, len, $new($ints, 1));
	int32_t seq = $nc(ber)->parseSeq(nullptr);
	$var($String, attrid, ber->parseString(this->isLdapv3));
	bool hasBinaryValues = isBinaryValued(attrid, binaryAttrs);
	$var($Attribute, la, $new($LdapAttribute, attrid));
	if ((seq = ber->parseSeq(len)) == LdapClient::LBER_SET) {
		int32_t attrlen = len->get(0);
		while (ber->bytesLeft() > 0 && attrlen > 0) {
			try {
				attrlen -= parseAttributeValue(ber, la, hasBinaryValues);
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				ber->seek(attrlen);
				break;
			}
		}
	} else {
		ber->seek(len->get(0));
	}
	return la;
}

int32_t LdapClient::parseAttributeValue($BerDecoder* ber, $Attribute* la, bool hasBinaryValues) {
	$var($ints, len, $new($ints, 1));
	if (hasBinaryValues) {
		$nc(la)->add($($nc(ber)->parseOctetString(ber->peekByte(), len)));
	} else {
		$nc(la)->add($($nc(ber)->parseStringWithTag($Ber::ASN_SIMPLE_STRING, this->isLdapv3, len)));
	}
	return len->get(0);
}

bool LdapClient::isBinaryValued($String* attrid, $Hashtable* binaryAttrs) {
	$init($Locale);
	$var($String, id, $nc(attrid)->toLowerCase($Locale::ENGLISH));
	bool var$1 = (id->indexOf(";binary"_s) != -1);
	bool var$0 = var$1 || $nc(LdapClient::defaultBinaryAttrs)->containsKey(id);
	return (var$0 || ((binaryAttrs != nullptr) && (binaryAttrs->containsKey(id))));
}

void LdapClient::parseResult($BerDecoder* replyBer, $LdapResult* res, bool isLdapv3) {
	$init(LdapClient);
	$nc(res)->status = $nc(replyBer)->parseEnumeration();
	$set(res, matchedDN, replyBer->parseString(isLdapv3));
	$set(res, errorMessage, replyBer->parseString(isLdapv3));
	bool var$0 = isLdapv3 && (replyBer->bytesLeft() > 0);
	if (var$0 && (replyBer->peekByte() == LdapClient::LDAP_REP_REFERRAL)) {
		$var($Vector, URLs, $new($Vector, 4));
		$var($ints, seqlen, $new($ints, 1));
		replyBer->parseSeq(seqlen);
		int32_t endseq = replyBer->getParsePosition() + seqlen->get(0);
		while (true) {
			bool var$1 = (replyBer->getParsePosition() < endseq);
			if (!(var$1 && (replyBer->bytesLeft() > 0))) {
				break;
			}
			{
				URLs->addElement($(replyBer->parseString(isLdapv3)));
			}
		}
		if (res->referrals == nullptr) {
			$set(res, referrals, $new($Vector, 4));
		}
		$nc(res->referrals)->addElement(URLs);
	}
}

$Vector* LdapClient::parseControls($BerDecoder* replyBer) {
	$init(LdapClient);
	bool var$0 = ($nc(replyBer)->bytesLeft() > 0);
	if (var$0 && (replyBer->peekByte() == LdapClient::LDAP_CONTROLS)) {
		$var($Vector, ctls, $new($Vector, 4));
		$var($String, controlOID, nullptr);
		bool criticality = false;
		$var($bytes, controlValue, nullptr);
		$var($ints, seqlen, $new($ints, 1));
		replyBer->parseSeq(seqlen);
		int32_t endseq = replyBer->getParsePosition() + seqlen->get(0);
		while (true) {
			bool var$1 = (replyBer->getParsePosition() < endseq);
			if (!(var$1 && (replyBer->bytesLeft() > 0))) {
				break;
			}
			{
				replyBer->parseSeq(nullptr);
				$assign(controlOID, replyBer->parseString(true));
				bool var$2 = (replyBer->bytesLeft() > 0);
				if (var$2 && (replyBer->peekByte() == $Ber::ASN_BOOLEAN)) {
					criticality = replyBer->parseBoolean();
				}
				bool var$3 = (replyBer->bytesLeft() > 0);
				if (var$3 && (replyBer->peekByte() == $Ber::ASN_OCTET_STR)) {
					$assign(controlValue, replyBer->parseOctetString($Ber::ASN_OCTET_STR, nullptr));
				}
				if (controlOID != nullptr) {
					ctls->addElement($$new($BasicControl, controlOID, criticality, controlValue));
				}
			}
		}
		return ctls;
	} else {
		return nullptr;
	}
}

void LdapClient::parseExtResponse($BerDecoder* replyBer, $LdapResult* res) {
	parseResult(replyBer, res, this->isLdapv3);
	bool var$0 = ($nc(replyBer)->bytesLeft() > 0);
	if (var$0 && (replyBer->peekByte() == LdapClient::LDAP_REP_EXT_OID)) {
		$set($nc(res), extensionId, replyBer->parseStringWithTag(LdapClient::LDAP_REP_EXT_OID, this->isLdapv3, nullptr));
	}
	bool var$1 = ($nc(replyBer)->bytesLeft() > 0);
	if (var$1 && (replyBer->peekByte() == LdapClient::LDAP_REP_EXT_VAL)) {
		$set($nc(res), extensionValue, replyBer->parseOctetString(LdapClient::LDAP_REP_EXT_VAL, nullptr));
	}
	$set($nc(res), resControls, parseControls(replyBer));
}

void LdapClient::encodeControls($BerEncoder* ber, $ControlArray* reqCtls) {
	$init(LdapClient);
	if ((reqCtls == nullptr) || ($nc(reqCtls)->length == 0)) {
		return;
	}
	$var($bytes, controlVal, nullptr);
	$nc(ber)->beginSeq(LdapClient::LDAP_CONTROLS);
	for (int32_t i = 0; i < $nc(reqCtls)->length; ++i) {
		ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
		ber->encodeString($($nc(reqCtls->get(i))->getID()), true);
		if ($nc(reqCtls->get(i))->isCritical()) {
			ber->encodeBoolean(true);
		}
		if (($assign(controlVal, $nc(reqCtls->get(i))->getEncodedValue())) != nullptr) {
			ber->encodeOctetString(controlVal, $Ber::ASN_OCTET_STR);
		}
		ber->endSeq();
	}
	ber->endSeq();
}

$LdapResult* LdapClient::processReply($LdapRequest* req, $LdapResult* res, int32_t responseType) {
	$var($BerDecoder, rber, $nc(this->conn)->readReply(req));
	$nc(rber)->parseSeq(nullptr);
	rber->parseInt();
	if (rber->parseByte() != responseType) {
		return res;
	}
	rber->parseLength();
	parseResult(rber, res, this->isLdapv3);
	$set($nc(res), resControls, this->isLdapv3 ? parseControls(rber) : ($Vector*)nullptr);
	$nc(this->conn)->removeRequest(req);
	return res;
}

$LdapResult* LdapClient::modify($String* dn, $ints* operations, $AttributeArray* attrs, $ControlArray* reqCtls) {
	ensureOpen();
	$var($LdapResult, res, $new($LdapResult));
	res->status = LdapClient::LDAP_OPERATIONS_ERROR;
	if (dn == nullptr || $nc(operations)->length != $nc(attrs)->length) {
		return res;
	}
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->beginSeq(LdapClient::LDAP_REQ_MODIFY);
	ber->encodeString(dn, this->isLdapv3);
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	for (int32_t i = 0; i < $nc(operations)->length; ++i) {
		ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
		ber->encodeInt(operations->get(i), LdapClient::LBER_ENUMERATED);
		if ((operations->get(i) == LdapClient::ADD) && hasNoValue($nc(attrs)->get(i))) {
			$throwNew($InvalidAttributeValueException, $$str({"\'"_s, $($nc($nc(attrs)->get(i))->getID()), "\' has no values."_s}));
		} else {
			encodeAttribute(ber, $nc(attrs)->get(i));
		}
		ber->endSeq();
	}
	ber->endSeq();
	ber->endSeq();
	if (this->isLdapv3) {
		encodeControls(ber, reqCtls);
	}
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId));
	return processReply(req, res, LdapClient::LDAP_REP_MODIFY);
}

void LdapClient::encodeAttribute($BerEncoder* ber, $Attribute* attr) {
	$nc(ber)->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeString($($nc(attr)->getID()), this->isLdapv3);
	ber->beginSeq(($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR) | 1);
	$var($NamingEnumeration, enum_, $nc(attr)->getAll());
	$var($Object, val, nullptr);
	while ($nc(enum_)->hasMore()) {
		$assign(val, enum_->next());
		if ($instanceOf($String, val)) {
			ber->encodeString($cast($String, val), this->isLdapv3);
		} else if ($instanceOf($bytes, val)) {
			ber->encodeOctetString($cast($bytes, val), $Ber::ASN_OCTET_STR);
		} else if (val == nullptr) {
		} else {
			$throwNew($InvalidAttributeValueException, $$str({"Malformed \'"_s, $(attr->getID()), "\' attribute value"_s}));
		}
	}
	ber->endSeq();
	ber->endSeq();
}

bool LdapClient::hasNoValue($Attribute* attr) {
	$init(LdapClient);
	bool var$0 = $nc(attr)->size() == 0;
	if (!var$0) {
		bool var$1 = $nc(attr)->size() == 1;
		var$0 = (var$1 && attr->get() == nullptr);
	}
	return var$0;
}

$LdapResult* LdapClient::add($LdapEntry* entry, $ControlArray* reqCtls) {
	ensureOpen();
	$var($LdapResult, res, $new($LdapResult));
	res->status = LdapClient::LDAP_OPERATIONS_ERROR;
	if (entry == nullptr || $nc(entry)->DN == nullptr) {
		return res;
	}
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	$var($Attribute, attr, nullptr);
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->beginSeq(LdapClient::LDAP_REQ_ADD);
	ber->encodeString($nc(entry)->DN, this->isLdapv3);
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	$var($NamingEnumeration, enum_, $nc($nc(entry)->attributes)->getAll());
	while ($nc(enum_)->hasMore()) {
		$assign(attr, $cast($Attribute, enum_->next()));
		if (hasNoValue(attr)) {
			$throwNew($InvalidAttributeValueException, $$str({"\'"_s, $($nc(attr)->getID()), "\' has no values."_s}));
		} else {
			encodeAttribute(ber, attr);
		}
	}
	ber->endSeq();
	ber->endSeq();
	if (this->isLdapv3) {
		encodeControls(ber, reqCtls);
	}
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId));
	return processReply(req, res, LdapClient::LDAP_REP_ADD);
}

$LdapResult* LdapClient::delete$($String* DN, $ControlArray* reqCtls) {
	ensureOpen();
	$var($LdapResult, res, $new($LdapResult));
	res->status = LdapClient::LDAP_OPERATIONS_ERROR;
	if (DN == nullptr) {
		return res;
	}
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->encodeString(DN, LdapClient::LDAP_REQ_DELETE, this->isLdapv3);
	if (this->isLdapv3) {
		encodeControls(ber, reqCtls);
	}
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId));
	return processReply(req, res, LdapClient::LDAP_REP_DELETE);
}

$LdapResult* LdapClient::moddn($String* DN, $String* newrdn, bool deleteOldRdn, $String* newSuperior, $ControlArray* reqCtls) {
	ensureOpen();
	bool changeSuperior = (newSuperior != nullptr && newSuperior->length() > 0);
	$var($LdapResult, res, $new($LdapResult));
	res->status = LdapClient::LDAP_OPERATIONS_ERROR;
	if (DN == nullptr || newrdn == nullptr) {
		return res;
	}
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->beginSeq(LdapClient::LDAP_REQ_MODRDN);
	ber->encodeString(DN, this->isLdapv3);
	ber->encodeString(newrdn, this->isLdapv3);
	ber->encodeBoolean(deleteOldRdn);
	if (this->isLdapv3 && changeSuperior) {
		ber->encodeString(newSuperior, LdapClient::LDAP_SUPERIOR_DN, this->isLdapv3);
	}
	ber->endSeq();
	if (this->isLdapv3) {
		encodeControls(ber, reqCtls);
	}
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId));
	return processReply(req, res, LdapClient::LDAP_REP_MODRDN);
}

$LdapResult* LdapClient::compare($String* DN, $String* type, $String* value, $ControlArray* reqCtls) {
	ensureOpen();
	$var($LdapResult, res, $new($LdapResult));
	res->status = LdapClient::LDAP_OPERATIONS_ERROR;
	if (DN == nullptr || type == nullptr || value == nullptr) {
		return res;
	}
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->beginSeq(LdapClient::LDAP_REQ_COMPARE);
	ber->encodeString(DN, this->isLdapv3);
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeString(type, this->isLdapv3);
	$var($bytes, val, this->isLdapv3 ? $nc(value)->getBytes("UTF8"_s) : value->getBytes("8859_1"_s));
	ber->encodeOctetString($($Filter::unescapeFilterValue(val, 0, $nc(val)->length)), $Ber::ASN_OCTET_STR);
	ber->endSeq();
	ber->endSeq();
	if (this->isLdapv3) {
		encodeControls(ber, reqCtls);
	}
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId));
	return processReply(req, res, LdapClient::LDAP_REP_COMPARE);
}

$LdapResult* LdapClient::extendedOp($String* id, $bytes* request, $ControlArray* reqCtls, bool pauseAfterReceipt) {
	ensureOpen();
	$var($LdapResult, res, $new($LdapResult));
	res->status = LdapClient::LDAP_OPERATIONS_ERROR;
	if (id == nullptr) {
		return res;
	}
	$var($BerEncoder, ber, $new($BerEncoder));
	int32_t curMsgId = $nc(this->conn)->getMsgId();
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(curMsgId);
	ber->beginSeq(LdapClient::LDAP_REQ_EXTENSION);
	ber->encodeString(id, $Ber::ASN_CONTEXT | 0, this->isLdapv3);
	if (request != nullptr) {
		ber->encodeOctetString(request, $Ber::ASN_CONTEXT | 1);
	}
	ber->endSeq();
	encodeControls(ber, reqCtls);
	ber->endSeq();
	$var($LdapRequest, req, $nc(this->conn)->writeRequest(ber, curMsgId, pauseAfterReceipt));
	$var($BerDecoder, rber, $nc(this->conn)->readReply(req));
	$nc(rber)->parseSeq(nullptr);
	rber->parseInt();
	if (rber->parseByte() != LdapClient::LDAP_REP_EXTENSION) {
		return res;
	}
	rber->parseLength();
	parseExtResponse(rber, res);
	$nc(this->conn)->removeRequest(req);
	return res;
}

$String* LdapClient::getErrorMessage(int32_t errorCode, $String* errorMessage) {
	$init(LdapClient);
	$var($String, message, $str({"[LDAP: error code "_s, $$str(errorCode)}));
	if ((errorMessage != nullptr) && (errorMessage->length() != 0)) {
		$assign(message, $str({message, " - "_s, errorMessage, "]"_s}));
	} else {
		try {
			if ($nc(LdapClient::ldap_error_message)->get(errorCode) != nullptr) {
				$assign(message, $str({message, " - "_s, $nc(LdapClient::ldap_error_message)->get(errorCode), "]"_s}));
			}
		} catch ($ArrayIndexOutOfBoundsException&) {
			$var($ArrayIndexOutOfBoundsException, ex, $catch());
			$assign(message, $str({message, "]"_s}));
		}
	}
	return message;
}

void LdapClient::addUnsolicited($LdapCtx* ctx) {
	$nc(this->unsolicited)->addElement(ctx);
}

void LdapClient::removeUnsolicited($LdapCtx* ctx) {
	$nc(this->unsolicited)->removeElement(ctx);
}

void LdapClient::processUnsolicited($BerDecoder* ber) {
	try {
		$var($LdapResult, res, $new($LdapResult));
		$nc(ber)->parseSeq(nullptr);
		ber->parseInt();
		if (ber->parseByte() != LdapClient::LDAP_REP_EXTENSION) {
			$throwNew($IOException, "Unsolicited Notification must be an Extended Response"_s);
		}
		ber->parseLength();
		parseExtResponse(ber, res);
		if ($nc(LdapClient::DISCONNECT_OID)->equals(res->extensionId)) {
			forceClose(this->pooled);
		}
		$var($LdapCtx, first, nullptr);
		$var($UnsolicitedNotification, notice, nullptr);
		$synchronized(this->unsolicited) {
			if ($nc(this->unsolicited)->size() > 0) {
				$assign(first, $cast($LdapCtx, $nc(this->unsolicited)->elementAt(0)));
				$assign(notice, $new($UnsolicitedResponseImpl, res->extensionId, res->extensionValue, res->referrals, res->status, res->errorMessage, res->matchedDN, (res->resControls != nullptr) ? $($nc(first)->convertControls(res->resControls)) : ($ControlArray*)nullptr));
			}
		}
		if (notice != nullptr) {
			notifyUnsolicited(notice);
			if ($nc(LdapClient::DISCONNECT_OID)->equals(res->extensionId)) {
				notifyUnsolicited($$new($CommunicationException, "Connection closed"_s));
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, ne, $new($CommunicationException, "Problem parsing unsolicited notification"_s));
		ne->setRootCause(e);
		notifyUnsolicited(ne);
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		notifyUnsolicited(e);
	}
}

void LdapClient::notifyUnsolicited(Object$* e) {
	$var($Vector, unsolicitedCopy, nullptr);
	$synchronized(this->unsolicited) {
		$assign(unsolicitedCopy, $new($Vector, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->unsolicited)))));
		if ($instanceOf($NamingException, e)) {
			$nc(this->unsolicited)->setSize(0);
		}
	}
	for (int32_t i = 0; i < $nc(unsolicitedCopy)->size(); ++i) {
		$nc(($cast($LdapCtx, $(unsolicitedCopy->elementAt(i)))))->fireUnsolicited(e);
	}
}

void LdapClient::ensureOpen() {
	if (this->conn == nullptr || !$nc(this->conn)->useable) {
		if (this->conn != nullptr && $nc(this->conn)->closureReason != nullptr) {
			$throw($nc(this->conn)->closureReason);
		} else {
			$throwNew($IOException, "connection closed"_s);
		}
	}
}

LdapClient* LdapClient::getInstance(bool usePool, $String* hostname, int32_t port, $String* factory, int32_t connectTimeout, int32_t readTimeout, $OutputStream* trace, int32_t version, $String* authMechanism, $ControlArray* ctls, $String* protocol, $String* user, Object$* passwd, $Hashtable* env) {
	$init(LdapClient);
	if (usePool) {
		if ($LdapPoolManager::isPoolingAllowed(factory, trace, authMechanism, protocol, env)) {
			$var(LdapClient, answer, $LdapPoolManager::getLdapClient(hostname, port, factory, connectTimeout, readTimeout, trace, version, authMechanism, ctls, protocol, user, passwd, env));
			$nc(answer)->referenceCount = 1;
			return answer;
		}
	}
	return $new(LdapClient, hostname, port, factory, connectTimeout, readTimeout, trace, nullptr);
}

void clinit$LdapClient($Class* class$) {
	$assignStatic(LdapClient::DISCONNECT_OID, "1.3.6.1.4.1.1466.20036"_s);
	$assignStatic(LdapClient::LDAP_URL, "ldap://"_s);
	$assignStatic(LdapClient::LDAPS_URL, "ldaps://"_s);
	$assignStatic(LdapClient::LDAP_CONTROL_MANAGE_DSA_IT, "2.16.840.1.113730.3.4.2"_s);
	$assignStatic(LdapClient::LDAP_CONTROL_PREFERRED_LANG, "1.3.6.1.4.1.1466.20035"_s);
	$assignStatic(LdapClient::LDAP_CONTROL_PAGED_RESULTS, "1.2.840.113556.1.4.319"_s);
	$assignStatic(LdapClient::LDAP_CONTROL_SERVER_SORT_REQ, "1.2.840.113556.1.4.473"_s);
	$assignStatic(LdapClient::LDAP_CONTROL_SERVER_SORT_RES, "1.2.840.113556.1.4.474"_s);
	$assignStatic(LdapClient::defaultBinaryAttrs, $new($Hashtable, 23, 0.75f));
	{
		$init($Boolean);
		$nc(LdapClient::defaultBinaryAttrs)->put("userpassword"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("javaserializeddata"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("javaserializedobject"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("jpegphoto"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("audio"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("thumbnailphoto"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("thumbnaillogo"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("usercertificate"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("cacertificate"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("certificaterevocationlist"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("authorityrevocationlist"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("crosscertificatepair"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("photo"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("personalsignature"_s, $Boolean::TRUE);
		$nc(LdapClient::defaultBinaryAttrs)->put("x500uniqueidentifier"_s, $Boolean::TRUE);
	}
	$assignStatic(LdapClient::ldap_error_message, $new($StringArray, {
		"Success"_s,
		"Operations Error"_s,
		"Protocol Error"_s,
		"Timelimit Exceeded"_s,
		"Sizelimit Exceeded"_s,
		"Compare False"_s,
		"Compare True"_s,
		"Authentication Method Not Supported"_s,
		"Strong Authentication Required"_s,
		($String*)nullptr,
		"Referral"_s,
		"Administrative Limit Exceeded"_s,
		"Unavailable Critical Extension"_s,
		"Confidentiality Required"_s,
		"SASL Bind In Progress"_s,
		($String*)nullptr,
		"No Such Attribute"_s,
		"Undefined Attribute Type"_s,
		"Inappropriate Matching"_s,
		"Constraint Violation"_s,
		"Attribute Or Value Exists"_s,
		"Invalid Attribute Syntax"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"No Such Object"_s,
		"Alias Problem"_s,
		"Invalid DN Syntax"_s,
		($String*)nullptr,
		"Alias Dereferencing Problem"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"Inappropriate Authentication"_s,
		"Invalid Credentials"_s,
		"Insufficient Access Rights"_s,
		"Busy"_s,
		"Unavailable"_s,
		"Unwilling To Perform"_s,
		"Loop Detect"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"Naming Violation"_s,
		"Object Class Violation"_s,
		"Not Allowed On Non-leaf"_s,
		"Not Allowed On RDN"_s,
		"Entry Already Exists"_s,
		"Object Class Modifications Prohibited"_s,
		($String*)nullptr,
		"Affects Multiple DSAs"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		"Other"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr
	}));
}

LdapClient::LdapClient() {
}

$Class* LdapClient::load$($String* name, bool initialize) {
	$loadClass(LdapClient, name, initialize, &_LdapClient_ClassInfo_, clinit$LdapClient, allocate$LdapClient);
	return class$;
}

$Class* LdapClient::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com