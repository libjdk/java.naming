#include <com/sun/jndi/ldap/LdapCtx.h>

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/BasicControl.h>
#include <com/sun/jndi/ldap/Connection.h>
#include <com/sun/jndi/ldap/DefaultResponseControlFactory.h>
#include <com/sun/jndi/ldap/EventSupport.h>
#include <com/sun/jndi/ldap/LdapAttribute.h>
#include <com/sun/jndi/ldap/LdapBindingEnumeration.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapCtx$SearchArgs.h>
#include <com/sun/jndi/ldap/LdapEntry.h>
#include <com/sun/jndi/ldap/LdapNameParser.h>
#include <com/sun/jndi/ldap/LdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/LdapSchemaCtx.h>
#include <com/sun/jndi/ldap/LdapSchemaParser.h>
#include <com/sun/jndi/ldap/LdapSearchEnumeration.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/ldap/ManageReferralControl.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/ReferralEnumeration.h>
#include <com/sun/jndi/ldap/ext/StartTlsResponseImpl.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/naming/AuthenticationException.h>
#include <javax/naming/AuthenticationNotSupportedException.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/ConfigurationException.h>
#include <javax/naming/Context.h>
#include <javax/naming/ContextNotEmptyException.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/LimitExceededException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameAlreadyBoundException.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NamingSecurityException.h>
#include <javax/naming/NoPermissionException.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/PartialResultException.h>
#include <javax/naming/ReferralException.h>
#include <javax/naming/ServiceUnavailableException.h>
#include <javax/naming/SizeLimitExceededException.h>
#include <javax/naming/TimeLimitExceededException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/AttributeInUseException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/InvalidAttributeIdentifierException.h>
#include <javax/naming/directory/InvalidAttributeValueException.h>
#include <javax/naming/directory/InvalidSearchFilterException.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/NoSuchAttributeException.h>
#include <javax/naming/directory/SchemaViolationException.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ControlFactory.h>
#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <javax/naming/ldap/LdapContext.h>
#include <javax/naming/ldap/LdapName.h>
#include <javax/naming/ldap/LdapReferralException.h>
#include <javax/naming/ldap/Rdn.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef ADD
#undef ADD_ATTRIBUTE
#undef ALLOWED_MECHS_SP
#undef ALLOWED_MECHS_SP_VALUE
#undef BATCHSIZE
#undef BINARY_ATTRIBUTES
#undef BIND_CONTROLS
#undef CLASSNAME
#undef CONNECT_TIMEOUT
#undef DEFAULT_BATCH_SIZE
#undef DEFAULT_DELETE_RDN
#undef DEFAULT_DEREF_ALIASES
#undef DEFAULT_HOST
#undef DEFAULT_LDAP_VERSION
#undef DEFAULT_PORT
#undef DEFAULT_REFERRAL_LIMIT
#undef DEFAULT_REFERRAL_MODE
#undef DEFAULT_REF_SEPARATOR
#undef DEFAULT_SSL_FACTORY
#undef DEFAULT_SSL_PORT
#undef DEFAULT_TYPES_ONLY
#undef DELETE
#undef DELETE_RDN
#undef DEREF_ALIASES
#undef DOMAIN_NAME
#undef EMPTY_SCHEMA
#undef ENABLE_POOL
#undef ENGLISH
#undef HARD_CLOSE
#undef JAVA_ATTRIBUTES
#undef JAVA_OBJECT_CLASSES
#undef JAVA_OBJECT_CLASSES_LOWER
#undef LDAP_ADMIN_LIMIT_EXCEEDED
#undef LDAP_ALIAS_DEREFERENCING_PROBLEM
#undef LDAP_ALIAS_PROBLEM
#undef LDAP_ATTRIBUTE_OR_VALUE_EXISTS
#undef LDAP_AUTH_METHOD_NOT_SUPPORTED
#undef LDAP_BUSY
#undef LDAP_COMPARE_FALSE
#undef LDAP_COMPARE_TRUE
#undef LDAP_CONFIDENTIALITY_REQUIRED
#undef LDAP_CONSTRAINT_VIOLATION
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
#undef LDAP_SASL_BIND_IN_PROGRESS
#undef LDAP_SIZE_LIMIT_EXCEEDED
#undef LDAP_STRONG_AUTH_REQUIRED
#undef LDAP_SUCCESS
#undef LDAP_TIME_LIMIT_EXCEEDED
#undef LDAP_UNAVAILABLE
#undef LDAP_UNAVAILABLE_CRITICAL_EXTENSION
#undef LDAP_UNDEFINED_ATTRIBUTE_TYPE
#undef LDAP_UNWILLING_TO_PERFORM
#undef LDAP_VERSION3
#undef MAX_VALUE
#undef MECHS_ALLOWED_BY_SP
#undef NETSCAPE_SCHEMA_BUG
#undef OBJECTCLASS_DEFINITION_NAME
#undef OBJECT_CLASS
#undef OBJECT_SCOPE
#undef OLD_NETSCAPE_SCHEMA_BUG
#undef ONELEVEL_SCOPE
#undef PROVIDER_URL
#undef READ_TIMEOUT
#undef REFERRAL
#undef REFERRAL_LIMIT
#undef REF_SEPARATOR
#undef REMOVE_ATTRIBUTE
#undef REPLACE
#undef REPLACE_ATTRIBUTE
#undef REPLY_QUEUE_SIZE
#undef SCHEMA_ATTRIBUTES
#undef SCOPE_BASE_OBJECT
#undef SCOPE_ONE_LEVEL
#undef SCOPE_SUBTREE
#undef SECURITY_AUTHENTICATION
#undef SECURITY_CREDENTIALS
#undef SECURITY_PRINCIPAL
#undef SECURITY_PROTOCOL
#undef SOCKET_FACTORY
#undef SOFT_CLOSE
#undef STARTTLS_REQ_OID
#undef STRUCTURAL
#undef SUBTREE_SCOPE
#undef TRACE_BER
#undef TRUE
#undef TYPES_ONLY
#undef UNSECURED_CRED_TRANSMIT_MSG
#undef VERSION
#undef WAIT_FOR_REPLY

using $AttributeArray = $Array<::javax::naming::directory::Attribute>;
using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $AbstractLdapNamingEnumeration = ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration;
using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $Connection = ::com::sun::jndi::ldap::Connection;
using $DefaultResponseControlFactory = ::com::sun::jndi::ldap::DefaultResponseControlFactory;
using $EventSupport = ::com::sun::jndi::ldap::EventSupport;
using $LdapAttribute = ::com::sun::jndi::ldap::LdapAttribute;
using $LdapBindingEnumeration = ::com::sun::jndi::ldap::LdapBindingEnumeration;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapCtx$SearchArgs = ::com::sun::jndi::ldap::LdapCtx$SearchArgs;
using $LdapEntry = ::com::sun::jndi::ldap::LdapEntry;
using $LdapNameParser = ::com::sun::jndi::ldap::LdapNameParser;
using $LdapNamingEnumeration = ::com::sun::jndi::ldap::LdapNamingEnumeration;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $LdapSchemaCtx = ::com::sun::jndi::ldap::LdapSchemaCtx;
using $LdapSchemaParser = ::com::sun::jndi::ldap::LdapSchemaParser;
using $LdapSearchEnumeration = ::com::sun::jndi::ldap::LdapSearchEnumeration;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $ManageReferralControl = ::com::sun::jndi::ldap::ManageReferralControl;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $ReferralEnumeration = ::com::sun::jndi::ldap::ReferralEnumeration;
using $StartTlsResponseImpl = ::com::sun::jndi::ldap::ext::StartTlsResponseImpl;
using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $ComponentContext = ::com::sun::jndi::toolkit::ctx::ComponentContext;
using $ComponentDirContext = ::com::sun::jndi::toolkit::ctx::ComponentDirContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $PartialCompositeDirContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext;
using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $Uri = ::com::sun::jndi::toolkit::url::Uri;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $AuthenticationException = ::javax::naming::AuthenticationException;
using $AuthenticationNotSupportedException = ::javax::naming::AuthenticationNotSupportedException;
using $Binding = ::javax::naming::Binding;
using $CommunicationException = ::javax::naming::CommunicationException;
using $CompositeName = ::javax::naming::CompositeName;
using $ConfigurationException = ::javax::naming::ConfigurationException;
using $Context = ::javax::naming::Context;
using $ContextNotEmptyException = ::javax::naming::ContextNotEmptyException;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $LimitExceededException = ::javax::naming::LimitExceededException;
using $Name = ::javax::naming::Name;
using $NameAlreadyBoundException = ::javax::naming::NameAlreadyBoundException;
using $NameNotFoundException = ::javax::naming::NameNotFoundException;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;
using $NoPermissionException = ::javax::naming::NoPermissionException;
using $OperationNotSupportedException = ::javax::naming::OperationNotSupportedException;
using $PartialResultException = ::javax::naming::PartialResultException;
using $ReferralException = ::javax::naming::ReferralException;
using $ServiceUnavailableException = ::javax::naming::ServiceUnavailableException;
using $SizeLimitExceededException = ::javax::naming::SizeLimitExceededException;
using $TimeLimitExceededException = ::javax::naming::TimeLimitExceededException;
using $Attribute = ::javax::naming::directory::Attribute;
using $AttributeInUseException = ::javax::naming::directory::AttributeInUseException;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $InvalidAttributeIdentifierException = ::javax::naming::directory::InvalidAttributeIdentifierException;
using $InvalidAttributeValueException = ::javax::naming::directory::InvalidAttributeValueException;
using $InvalidSearchFilterException = ::javax::naming::directory::InvalidSearchFilterException;
using $ModificationItem = ::javax::naming::directory::ModificationItem;
using $NoSuchAttributeException = ::javax::naming::directory::NoSuchAttributeException;
using $SchemaViolationException = ::javax::naming::directory::SchemaViolationException;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $SearchResult = ::javax::naming::directory::SearchResult;
using $EventDirContext = ::javax::naming::event::EventDirContext;
using $NamingListener = ::javax::naming::event::NamingListener;
using $Control = ::javax::naming::ldap::Control;
using $ControlFactory = ::javax::naming::ldap::ControlFactory;
using $ExtendedRequest = ::javax::naming::ldap::ExtendedRequest;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;
using $LdapContext = ::javax::naming::ldap::LdapContext;
using $LdapName = ::javax::naming::ldap::LdapName;
using $1LdapReferralException = ::javax::naming::ldap::LdapReferralException;
using $Rdn = ::javax::naming::ldap::Rdn;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0 : public $PrivilegedAction {
	$class(LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LdapCtx::lambda$getMechsAllowedToSendCredentials$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::*)()>(&LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::load$($String* name, bool initialize) {
	$loadClass(LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::class$ = nullptr;

class LdapCtx$$Lambda$trim$1 : public $Function {
	$class(LdapCtx$$Lambda$trim$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($String, inst$)->trim());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapCtx$$Lambda$trim$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LdapCtx$$Lambda$trim$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapCtx$$Lambda$trim$1::*)()>(&LdapCtx$$Lambda$trim$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapCtx$$Lambda$trim$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapCtx$$Lambda$trim$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* LdapCtx$$Lambda$trim$1::load$($String* name, bool initialize) {
	$loadClass(LdapCtx$$Lambda$trim$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapCtx$$Lambda$trim$1::class$ = nullptr;

class LdapCtx$$Lambda$isBlank$2 : public $Predicate {
	$class(LdapCtx$$Lambda$isBlank$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		 return $sure($String, inst$)->isBlank();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapCtx$$Lambda$isBlank$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LdapCtx$$Lambda$isBlank$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapCtx$$Lambda$isBlank$2::*)()>(&LdapCtx$$Lambda$isBlank$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapCtx$$Lambda$isBlank$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapCtx$$Lambda$isBlank$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* LdapCtx$$Lambda$isBlank$2::load$($String* name, bool initialize) {
	$loadClass(LdapCtx$$Lambda$isBlank$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapCtx$$Lambda$isBlank$2::class$ = nullptr;

$FieldInfo _LdapCtx_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, debug)},
	{"HARD_CLOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, HARD_CLOSE)},
	{"SOFT_CLOSE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, SOFT_CLOSE)},
	{"DEFAULT_PORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_PORT)},
	{"DEFAULT_SSL_PORT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_SSL_PORT)},
	{"DEFAULT_HOST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LdapCtx, DEFAULT_HOST)},
	{"DEFAULT_DELETE_RDN", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_DELETE_RDN)},
	{"DEFAULT_TYPES_ONLY", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_TYPES_ONLY)},
	{"DEFAULT_DEREF_ALIASES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_DEREF_ALIASES)},
	{"DEFAULT_LDAP_VERSION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_LDAP_VERSION)},
	{"DEFAULT_BATCH_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_BATCH_SIZE)},
	{"DEFAULT_REFERRAL_MODE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_REFERRAL_MODE)},
	{"DEFAULT_REF_SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_REF_SEPARATOR)},
	{"DEFAULT_SSL_FACTORY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapCtx, DEFAULT_SSL_FACTORY)},
	{"DEFAULT_REFERRAL_LIMIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapCtx, DEFAULT_REFERRAL_LIMIT)},
	{"STARTTLS_REQ_OID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, STARTTLS_REQ_OID)},
	{"SCHEMA_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, SCHEMA_ATTRIBUTES)},
	{"VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, VERSION)},
	{"BINARY_ATTRIBUTES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, BINARY_ATTRIBUTES)},
	{"DELETE_RDN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, DELETE_RDN)},
	{"DEREF_ALIASES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, DEREF_ALIASES)},
	{"TYPES_ONLY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, TYPES_ONLY)},
	{"REF_SEPARATOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, REF_SEPARATOR)},
	{"SOCKET_FACTORY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, SOCKET_FACTORY)},
	{"BIND_CONTROLS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapCtx, BIND_CONTROLS)},
	{"REFERRAL_LIMIT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, REFERRAL_LIMIT)},
	{"TRACE_BER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, TRACE_BER)},
	{"NETSCAPE_SCHEMA_BUG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, NETSCAPE_SCHEMA_BUG)},
	{"OLD_NETSCAPE_SCHEMA_BUG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, OLD_NETSCAPE_SCHEMA_BUG)},
	{"CONNECT_TIMEOUT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, CONNECT_TIMEOUT)},
	{"READ_TIMEOUT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, READ_TIMEOUT)},
	{"ENABLE_POOL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, ENABLE_POOL)},
	{"DOMAIN_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, DOMAIN_NAME)},
	{"WAIT_FOR_REPLY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, WAIT_FOR_REPLY)},
	{"REPLY_QUEUE_SIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, REPLY_QUEUE_SIZE)},
	{"ALLOWED_MECHS_SP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, ALLOWED_MECHS_SP)},
	{"ALLOWED_MECHS_SP_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, ALLOWED_MECHS_SP_VALUE)},
	{"MECHS_ALLOWED_BY_SP", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, MECHS_ALLOWED_BY_SP)},
	{"UNSECURED_CRED_TRANSMIT_MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, UNSECURED_CRED_TRANSMIT_MSG)},
	{"parser", "Ljavax/naming/NameParser;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, parser)},
	{"myResponseControlFactory", "Ljavax/naming/ldap/ControlFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, myResponseControlFactory)},
	{"manageReferralControl", "Ljavax/naming/ldap/Control;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, manageReferralControl)},
	{"EMPTY_SCHEMA", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapCtx, EMPTY_SCHEMA)},
	{"port_number", "I", nullptr, 0, $field(LdapCtx, port_number)},
	{"hostname", "Ljava/lang/String;", nullptr, 0, $field(LdapCtx, hostname)},
	{"clnt", "Lcom/sun/jndi/ldap/LdapClient;", nullptr, 0, $field(LdapCtx, clnt)},
	{"envprops", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", 0, $field(LdapCtx, envprops)},
	{"handleReferrals", "I", nullptr, 0, $field(LdapCtx, handleReferrals)},
	{"hasLdapsScheme", "Z", nullptr, 0, $field(LdapCtx, hasLdapsScheme)},
	{"currentDN", "Ljava/lang/String;", nullptr, 0, $field(LdapCtx, currentDN)},
	{"currentParsedDN", "Ljavax/naming/Name;", nullptr, 0, $field(LdapCtx, currentParsedDN)},
	{"respCtls", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/ldap/Control;>;", 0, $field(LdapCtx, respCtls)},
	{"reqCtls", "[Ljavax/naming/ldap/Control;", nullptr, 0, $field(LdapCtx, reqCtls)},
	{"contextSeenStartTlsEnabled", "Z", nullptr, $VOLATILE, $field(LdapCtx, contextSeenStartTlsEnabled)},
	{"trace", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(LdapCtx, trace)},
	{"netscapeSchemaBug", "Z", nullptr, $PRIVATE, $field(LdapCtx, netscapeSchemaBug)},
	{"bindCtls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(LdapCtx, bindCtls)},
	{"referralHopLimit", "I", nullptr, $PRIVATE, $field(LdapCtx, referralHopLimit)},
	{"schemaTrees", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/naming/directory/DirContext;>;", $PRIVATE, $field(LdapCtx, schemaTrees)},
	{"batchSize", "I", nullptr, $PRIVATE, $field(LdapCtx, batchSize)},
	{"deleteRDN", "Z", nullptr, $PRIVATE, $field(LdapCtx, deleteRDN)},
	{"typesOnly", "Z", nullptr, $PRIVATE, $field(LdapCtx, typesOnly)},
	{"derefAliases", "I", nullptr, $PRIVATE, $field(LdapCtx, derefAliases)},
	{"addrEncodingSeparator", "C", nullptr, $PRIVATE, $field(LdapCtx, addrEncodingSeparator)},
	{"binaryAttrs", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE, $field(LdapCtx, binaryAttrs)},
	{"connectTimeout", "I", nullptr, $PRIVATE, $field(LdapCtx, connectTimeout)},
	{"readTimeout", "I", nullptr, $PRIVATE, $field(LdapCtx, readTimeout)},
	{"waitForReply", "Z", nullptr, $PRIVATE, $field(LdapCtx, waitForReply)},
	{"replyQueueSize", "I", nullptr, $PRIVATE, $field(LdapCtx, replyQueueSize)},
	{"useSsl", "Z", nullptr, $PRIVATE, $field(LdapCtx, useSsl)},
	{"useDefaultPortNumber", "Z", nullptr, $PRIVATE, $field(LdapCtx, useDefaultPortNumber)},
	{"parentIsLdapCtx", "Z", nullptr, $PRIVATE, $field(LdapCtx, parentIsLdapCtx)},
	{"hopCount", "I", nullptr, $PRIVATE, $field(LdapCtx, hopCount)},
	{"url", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapCtx, url)},
	{"eventSupport", "Lcom/sun/jndi/ldap/EventSupport;", nullptr, $PRIVATE, $field(LdapCtx, eventSupport)},
	{"unsolicited", "Z", nullptr, $PRIVATE, $field(LdapCtx, unsolicited)},
	{"sharable", "Z", nullptr, $PRIVATE, $field(LdapCtx, sharable)},
	{"enumCount", "I", nullptr, $PRIVATE, $field(LdapCtx, enumCount)},
	{"closeRequested", "Z", nullptr, $PRIVATE, $field(LdapCtx, closeRequested)},
	{}
};

$MethodInfo _LdapCtx_MethodInfo_[] = {
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Hashtable;Z)V", "(Ljava/lang/String;Ljava/lang/String;ILjava/util/Hashtable<**>;Z)V", $PUBLIC, $method(static_cast<void(LdapCtx::*)($String*,$String*,int32_t,$Hashtable*,bool)>(&LdapCtx::init$)), "javax.naming.NamingException"},
	{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)(LdapCtx*,$String*)>(&LdapCtx::init$)), "javax.naming.NamingException"},
	{"addControl", "([Ljavax/naming/ldap/Control;Ljavax/naming/ldap/Control;)[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ControlArray*(*)($ControlArray*,$Control*)>(&LdapCtx::addControl))},
	{"addNamingListener", "(Ljavax/naming/Name;ILjavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;ILjavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addRdnAttributes", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Z)Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Attributes*(*)($String*,$Attributes*,bool)>(&LdapCtx::addRdnAttributes)), "javax.naming.NamingException"},
	{"addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"addUnsolicited", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)()>(&LdapCtx::addUnsolicited)), "javax.naming.NamingException"},
	{"adjustDeleteStatus", "(Ljava/lang/String;Lcom/sun/jndi/ldap/LdapResult;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*,$LdapResult*)>(&LdapCtx::adjustDeleteStatus))},
	{"appendVector", "(Ljava/util/Vector;Ljava/util/Vector;)Ljava/util/Vector;", "<T:Ljava/lang/Object;>(Ljava/util/Vector<TT;>;Ljava/util/Vector<TT;>;)Ljava/util/Vector<TT;>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)($Vector*,$Vector*)>(&LdapCtx::appendVector))},
	{"buildSchemaTree", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE, $method(static_cast<$DirContext*(LdapCtx::*)($String*)>(&LdapCtx::buildSchemaTree)), "javax.naming.NamingException"},
	{"c_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_destroySubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getNameParser", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchema", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchemaClassDefinition", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_list", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_listBindings", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookup", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookupLink", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rename", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, $method(static_cast<$NamingEnumeration*(LdapCtx::*)($Name*,$Attributes*,$Continuation*)>(&LdapCtx::c_search)), "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_unbind", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"cloneControls", "([Ljavax/naming/ldap/Control;)[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ControlArray*(*)($ControlArray*)>(&LdapCtx::cloneControls))},
	{"cloneSearchControls", "(Ljavax/naming/directory/SearchControls;)Ljavax/naming/directory/SearchControls;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SearchControls*(*)($SearchControls*)>(&LdapCtx::cloneSearchControls))},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.naming.NamingException"},
	{"closeConnection", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)(bool)>(&LdapCtx::closeConnection))},
	{"compare", "(Ljavax/naming/Name;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, $PRIVATE, $method(static_cast<$LdapResult*(LdapCtx::*)($Name*,$String*,$String*)>(&LdapCtx::compare)), "java.io.IOException,javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"concatNames", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&LdapCtx::concatNames))},
	{"connect", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)(bool)>(&LdapCtx::connect)), "javax.naming.NamingException"},
	{"containsIgnoreCase", "(Ljavax/naming/NamingEnumeration;Ljava/lang/String;)Z", "(Ljavax/naming/NamingEnumeration<Ljava/lang/String;>;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($NamingEnumeration*,$String*)>(&LdapCtx::containsIgnoreCase)), "javax.naming.NamingException"},
	{"convertControls", "(Ljava/util/Vector;)[Ljavax/naming/ldap/Control;", "(Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)[Ljavax/naming/ldap/Control;", 0, $method(static_cast<$ControlArray*(LdapCtx::*)($Vector*)>(&LdapCtx::convertControls)), "javax.naming.NamingException"},
	{"convertToLdapModCode", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LdapCtx::convertToLdapModCode))},
	{"decEnumCount", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(LdapCtx::*)()>(&LdapCtx::decEnumCount))},
	{"doSearch", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;ZZ)Lcom/sun/jndi/ldap/LdapResult;", nullptr, $PRIVATE, $method(static_cast<$LdapResult*(LdapCtx::*)($Name*,$String*,$SearchControls*,bool,bool)>(&LdapCtx::doSearch)), "javax.naming.NamingException"},
	{"doSearchOnce", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Z)Lcom/sun/jndi/ldap/LdapResult;", nullptr, $PRIVATE, $method(static_cast<$LdapResult*(LdapCtx::*)($Name*,$String*,$SearchControls*,bool)>(&LdapCtx::doSearchOnce)), "javax.naming.NamingException"},
	{"ensureCanTransmitCredentials", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::ensureCanTransmitCredentials)), "javax.naming.NamingException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)()>(&LdapCtx::ensureOpen)), "javax.naming.NamingException"},
	{"ensureOpen", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)(bool)>(&LdapCtx::ensureOpen)), "javax.naming.NamingException"},
	{"extendedOperation", "(Ljavax/naming/ldap/ExtendedRequest;)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"extractURLs", "(Ljava/lang/String;)Ljava/util/Vector;", "(Ljava/lang/String;)Ljava/util/Vector<Ljava/util/Vector<Ljava/lang/String;>;>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)($String*)>(&LdapCtx::extractURLs))},
	{"filterToAssertion", "(Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$StringArray*)>(&LdapCtx::filterToAssertion))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"findControl", "([Ljavax/naming/ldap/Control;Ljavax/naming/ldap/Control;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ControlArray*,$Control*)>(&LdapCtx::findControl))},
	{"fireUnsolicited", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)(Object$*)>(&LdapCtx::fireUnsolicited))},
	{"fullyQualifiedName", "(Ljavax/naming/Name;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LdapCtx::*)($Name*)>(&LdapCtx::fullyQualifiedName))},
	{"fullyQualifiedName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LdapCtx::*)($String*)>(&LdapCtx::fullyQualifiedName))},
	{"getConnectControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getMechsAllowedToSendCredentials", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&LdapCtx::getMechsAllowedToSendCredentials))},
	{"getMechsFromPropertyValue", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($String*)>(&LdapCtx::getMechsFromPropertyValue))},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRequestControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getResponseControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaEntry", "(Ljavax/naming/Name;Z)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LdapCtx::*)($Name*,bool)>(&LdapCtx::getSchemaEntry)), "javax.naming.NamingException"},
	{"getSchemaTree", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE, $method(static_cast<$DirContext*(LdapCtx::*)($Name*)>(&LdapCtx::getSchemaTree)), "javax.naming.NamingException"},
	{"getSearchReply", "(Lcom/sun/jndi/ldap/LdapClient;Lcom/sun/jndi/ldap/LdapResult;)Lcom/sun/jndi/ldap/LdapResult;", nullptr, 0, $method(static_cast<$LdapResult*(LdapCtx::*)($LdapClient*,$LdapResult*)>(&LdapCtx::getSearchReply)), "javax.naming.NamingException"},
	{"getTargetName", "(Ljavax/naming/Name;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Name*)>(&LdapCtx::getTargetName)), "javax.naming.NamingException"},
	{"getURL", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(LdapCtx::*)()>(&LdapCtx::getURL))},
	{"incEnumCount", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(LdapCtx::*)()>(&LdapCtx::incEnumCount))},
	{"initEnv", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)()>(&LdapCtx::initEnv)), "javax.naming.NamingException"},
	{"isConnectionEncrypted", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LdapCtx::*)()>(&LdapCtx::isConnectionEncrypted))},
	{"lambda$getMechsAllowedToSendCredentials$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&LdapCtx::lambda$getMechsAllowedToSendCredentials$0))},
	{"*list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"mapErrorCode", "(ILjava/lang/String;)Ljavax/naming/NamingException;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NamingException*(*)(int32_t,$String*)>(&LdapCtx::mapErrorCode))},
	{"*modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC},
	{"newInstance", "([Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/LdapContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"p_getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED},
	{"processReturnCode", "(Lcom/sun/jndi/ldap/LdapResult;)V", nullptr, $PROTECTED, $method(static_cast<void(LdapCtx::*)($LdapResult*)>(&LdapCtx::processReturnCode)), "javax.naming.NamingException"},
	{"processReturnCode", "(Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)($LdapResult*,$Name*)>(&LdapCtx::processReturnCode)), "javax.naming.NamingException"},
	{"processReturnCode", "(Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/Name;Ljava/util/Hashtable;Ljava/lang/String;)V", "(Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/Name;Ljava/util/Hashtable<**>;Ljava/lang/String;)V", $PROTECTED, $method(static_cast<void(LdapCtx::*)($LdapResult*,$Name*,Object$*,$Name*,$Hashtable*,$String*)>(&LdapCtx::processReturnCode)), "javax.naming.NamingException"},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"reconnect", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeControl", "([Ljavax/naming/ldap/Control;Ljavax/naming/ldap/Control;)[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ControlArray*(*)($ControlArray*,$Control*)>(&LdapCtx::removeControl))},
	{"removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeUnsolicited", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)()>(&LdapCtx::removeUnsolicited))},
	{"*rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"searchAux", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;ZZLcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;ZZLcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", 0, $method(static_cast<$NamingEnumeration*(LdapCtx::*)($Name*,$String*,$SearchControls*,bool,bool,$Continuation*)>(&LdapCtx::searchAux)), "javax.naming.NamingException"},
	{"searchToCompare", "(Ljava/lang/String;Ljavax/naming/directory/SearchControls;[Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$SearchControls*,$StringArray*)>(&LdapCtx::searchToCompare))},
	{"setBatchSize", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setBatchSize))},
	{"setBinaryAttributes", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setBinaryAttributes))},
	{"setConnectTimeout", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setConnectTimeout))},
	{"setDeleteRDN", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setDeleteRDN))},
	{"setDerefAliases", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setDerefAliases))},
	{"setDomainName", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setDomainName))},
	{"setHopCount", "(I)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)(int32_t)>(&LdapCtx::setHopCount))},
	{"setParents", "(Ljavax/naming/directory/Attributes;Ljavax/naming/Name;)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)($Attributes*,$Name*)>(&LdapCtx::setParents)), "javax.naming.NamingException"},
	{"setProviderUrl", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setProviderUrl))},
	{"setReadTimeout", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setReadTimeout))},
	{"setRefSeparator", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setRefSeparator)), "javax.naming.NamingException"},
	{"setReferralLimit", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setReferralLimit))},
	{"setReferralMode", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*,bool)>(&LdapCtx::setReferralMode))},
	{"setReplyQueueSize", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setReplyQueueSize))},
	{"setRequestControls", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"setTypesOnly", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setTypesOnly))},
	{"setWaitForReply", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapCtx::*)($String*)>(&LdapCtx::setWaitForReply))},
	{"targetMustExist", "()Z", nullptr, $PUBLIC},
	{"*unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LdapCtx_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapCtx$SearchArgs", "com.sun.jndi.ldap.LdapCtx", "SearchArgs", $STATIC | $FINAL},
	{}
};

$ClassInfo _LdapCtx_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapCtx",
	"com.sun.jndi.toolkit.ctx.ComponentDirContext",
	"javax.naming.event.EventDirContext,javax.naming.ldap.LdapContext",
	_LdapCtx_FieldInfo_,
	_LdapCtx_MethodInfo_,
	nullptr,
	nullptr,
	_LdapCtx_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapCtx$SearchArgs"
};

$Object* allocate$LdapCtx($Class* clazz) {
	return $of($alloc(LdapCtx));
}

$Attributes* LdapCtx::getAttributes($String* name) {
	 return this->$ComponentDirContext::getAttributes(name);
}

$Attributes* LdapCtx::getAttributes($Name* name) {
	 return this->$ComponentDirContext::getAttributes(name);
}

$Attributes* LdapCtx::getAttributes($String* name, $StringArray* attrIds) {
	 return this->$ComponentDirContext::getAttributes(name, attrIds);
}

$Attributes* LdapCtx::getAttributes($Name* name, $StringArray* attrIds) {
	 return this->$ComponentDirContext::getAttributes(name, attrIds);
}

void LdapCtx::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	this->$ComponentDirContext::modifyAttributes(name, mod_op, attrs);
}

void LdapCtx::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	this->$ComponentDirContext::modifyAttributes(name, mod_op, attrs);
}

void LdapCtx::modifyAttributes($String* name, $ModificationItemArray* mods) {
	this->$ComponentDirContext::modifyAttributes(name, mods);
}

void LdapCtx::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	this->$ComponentDirContext::modifyAttributes(name, mods);
}

void LdapCtx::bind($String* name, Object$* obj, $Attributes* attrs) {
	this->$ComponentDirContext::bind(name, obj, attrs);
}

void LdapCtx::bind($Name* name, Object$* obj, $Attributes* attrs) {
	this->$ComponentDirContext::bind(name, obj, attrs);
}

void LdapCtx::rebind($String* name, Object$* obj, $Attributes* attrs) {
	this->$ComponentDirContext::rebind(name, obj, attrs);
}

void LdapCtx::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	this->$ComponentDirContext::rebind(name, obj, attrs);
}

$DirContext* LdapCtx::createSubcontext($String* name, $Attributes* attrs) {
	 return this->$ComponentDirContext::createSubcontext(name, attrs);
}

$DirContext* LdapCtx::createSubcontext($Name* name, $Attributes* attrs) {
	 return this->$ComponentDirContext::createSubcontext(name, attrs);
}

$NamingEnumeration* LdapCtx::search($String* name, $Attributes* matchingAttributes) {
	 return this->$ComponentDirContext::search(name, matchingAttributes);
}

$NamingEnumeration* LdapCtx::search($Name* name, $Attributes* matchingAttributes) {
	 return this->$ComponentDirContext::search(name, matchingAttributes);
}

$NamingEnumeration* LdapCtx::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	 return this->$ComponentDirContext::search(name, matchingAttributes, attributesToReturn);
}

$NamingEnumeration* LdapCtx::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	 return this->$ComponentDirContext::search(name, matchingAttributes, attributesToReturn);
}

$NamingEnumeration* LdapCtx::search($String* name, $String* filter, $SearchControls* cons) {
	 return this->$ComponentDirContext::search(name, filter, cons);
}

$NamingEnumeration* LdapCtx::search($Name* name, $String* filter, $SearchControls* cons) {
	 return this->$ComponentDirContext::search(name, filter, cons);
}

$NamingEnumeration* LdapCtx::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	 return this->$ComponentDirContext::search(name, filterExpr, filterArgs, cons);
}

$NamingEnumeration* LdapCtx::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	 return this->$ComponentDirContext::search(name, filterExpr, filterArgs, cons);
}

$DirContext* LdapCtx::getSchema($String* name) {
	 return this->$ComponentDirContext::getSchema(name);
}

$DirContext* LdapCtx::getSchema($Name* name) {
	 return this->$ComponentDirContext::getSchema(name);
}

$DirContext* LdapCtx::getSchemaClassDefinition($String* name) {
	 return this->$ComponentDirContext::getSchemaClassDefinition(name);
}

$DirContext* LdapCtx::getSchemaClassDefinition($Name* name) {
	 return this->$ComponentDirContext::getSchemaClassDefinition(name);
}

$Object* LdapCtx::lookup($String* name) {
	 return this->$ComponentDirContext::lookup(name);
}

$Object* LdapCtx::lookup($Name* name) {
	 return this->$ComponentDirContext::lookup(name);
}

void LdapCtx::bind($String* name, Object$* newObj) {
	this->$ComponentDirContext::bind(name, newObj);
}

void LdapCtx::bind($Name* name, Object$* newObj) {
	this->$ComponentDirContext::bind(name, newObj);
}

void LdapCtx::rebind($String* name, Object$* newObj) {
	this->$ComponentDirContext::rebind(name, newObj);
}

void LdapCtx::rebind($Name* name, Object$* newObj) {
	this->$ComponentDirContext::rebind(name, newObj);
}

void LdapCtx::unbind($String* name) {
	this->$ComponentDirContext::unbind(name);
}

void LdapCtx::unbind($Name* name) {
	this->$ComponentDirContext::unbind(name);
}

void LdapCtx::rename($String* oldName, $String* newName) {
	this->$ComponentDirContext::rename(oldName, newName);
}

void LdapCtx::rename($Name* oldName, $Name* newName) {
	this->$ComponentDirContext::rename(oldName, newName);
}

$NamingEnumeration* LdapCtx::list($String* name) {
	 return this->$ComponentDirContext::list(name);
}

$NamingEnumeration* LdapCtx::list($Name* name) {
	 return this->$ComponentDirContext::list(name);
}

$NamingEnumeration* LdapCtx::listBindings($String* name) {
	 return this->$ComponentDirContext::listBindings(name);
}

$NamingEnumeration* LdapCtx::listBindings($Name* name) {
	 return this->$ComponentDirContext::listBindings(name);
}

void LdapCtx::destroySubcontext($String* name) {
	this->$ComponentDirContext::destroySubcontext(name);
}

void LdapCtx::destroySubcontext($Name* name) {
	this->$ComponentDirContext::destroySubcontext(name);
}

$Context* LdapCtx::createSubcontext($String* name) {
	 return this->$ComponentDirContext::createSubcontext(name);
}

$Context* LdapCtx::createSubcontext($Name* name) {
	 return this->$ComponentDirContext::createSubcontext(name);
}

$Object* LdapCtx::lookupLink($String* name) {
	 return this->$ComponentDirContext::lookupLink(name);
}

$Object* LdapCtx::lookupLink($Name* name) {
	 return this->$ComponentDirContext::lookupLink(name);
}

$NameParser* LdapCtx::getNameParser($String* name) {
	 return this->$ComponentDirContext::getNameParser(name);
}

$NameParser* LdapCtx::getNameParser($Name* name) {
	 return this->$ComponentDirContext::getNameParser(name);
}

$String* LdapCtx::composeName($String* name, $String* prefix) {
	 return this->$ComponentDirContext::composeName(name, prefix);
}

int32_t LdapCtx::hashCode() {
	 return this->$ComponentDirContext::hashCode();
}

bool LdapCtx::equals(Object$* arg0) {
	 return this->$ComponentDirContext::equals(arg0);
}

$Object* LdapCtx::clone() {
	 return this->$ComponentDirContext::clone();
}

$String* LdapCtx::toString() {
	 return this->$ComponentDirContext::toString();
}

$String* LdapCtx::DEFAULT_HOST = nullptr;
$String* LdapCtx::DEFAULT_SSL_FACTORY = nullptr;
$String* LdapCtx::STARTTLS_REQ_OID = nullptr;
$StringArray* LdapCtx::SCHEMA_ATTRIBUTES = nullptr;
$String* LdapCtx::VERSION = nullptr;
$String* LdapCtx::BINARY_ATTRIBUTES = nullptr;
$String* LdapCtx::DELETE_RDN = nullptr;
$String* LdapCtx::DEREF_ALIASES = nullptr;
$String* LdapCtx::TYPES_ONLY = nullptr;
$String* LdapCtx::REF_SEPARATOR = nullptr;
$String* LdapCtx::SOCKET_FACTORY = nullptr;
$String* LdapCtx::BIND_CONTROLS = nullptr;
$String* LdapCtx::REFERRAL_LIMIT = nullptr;
$String* LdapCtx::TRACE_BER = nullptr;
$String* LdapCtx::NETSCAPE_SCHEMA_BUG = nullptr;
$String* LdapCtx::OLD_NETSCAPE_SCHEMA_BUG = nullptr;
$String* LdapCtx::CONNECT_TIMEOUT = nullptr;
$String* LdapCtx::READ_TIMEOUT = nullptr;
$String* LdapCtx::ENABLE_POOL = nullptr;
$String* LdapCtx::DOMAIN_NAME = nullptr;
$String* LdapCtx::WAIT_FOR_REPLY = nullptr;
$String* LdapCtx::REPLY_QUEUE_SIZE = nullptr;
$String* LdapCtx::ALLOWED_MECHS_SP = nullptr;
$String* LdapCtx::ALLOWED_MECHS_SP_VALUE = nullptr;
$Set* LdapCtx::MECHS_ALLOWED_BY_SP = nullptr;
$String* LdapCtx::UNSECURED_CRED_TRANSMIT_MSG = nullptr;
$NameParser* LdapCtx::parser = nullptr;
$ControlFactory* LdapCtx::myResponseControlFactory = nullptr;
$Control* LdapCtx::manageReferralControl = nullptr;
$HierMemDirCtx* LdapCtx::EMPTY_SCHEMA = nullptr;

void LdapCtx::init$($String* dn, $String* host, int32_t port_number, $Hashtable* props, bool useSsl) {
	$ComponentDirContext::init$();
	$set(this, hostname, nullptr);
	$set(this, clnt, nullptr);
	$set(this, envprops, nullptr);
	this->handleReferrals = LdapCtx::DEFAULT_REFERRAL_MODE;
	this->hasLdapsScheme = false;
	$set(this, respCtls, nullptr);
	$set(this, reqCtls, nullptr);
	$set(this, trace, nullptr);
	this->netscapeSchemaBug = false;
	$set(this, bindCtls, nullptr);
	this->referralHopLimit = LdapCtx::DEFAULT_REFERRAL_LIMIT;
	$set(this, schemaTrees, nullptr);
	this->batchSize = LdapCtx::DEFAULT_BATCH_SIZE;
	this->deleteRDN = LdapCtx::DEFAULT_DELETE_RDN;
	this->typesOnly = LdapCtx::DEFAULT_TYPES_ONLY;
	this->derefAliases = LdapCtx::DEFAULT_DEREF_ALIASES;
	this->addrEncodingSeparator = LdapCtx::DEFAULT_REF_SEPARATOR;
	$set(this, binaryAttrs, nullptr);
	this->connectTimeout = -1;
	this->readTimeout = -1;
	this->waitForReply = true;
	this->replyQueueSize = -1;
	this->useSsl = false;
	this->useDefaultPortNumber = false;
	this->parentIsLdapCtx = false;
	this->hopCount = 1;
	$set(this, url, nullptr);
	this->unsolicited = false;
	this->sharable = true;
	this->enumCount = 0;
	this->closeRequested = false;
	this->useSsl = (this->hasLdapsScheme = useSsl);
	if (props != nullptr) {
		$set(this, envprops, $cast($Hashtable, props->clone()));
		$init($Context);
		if ("ssl"_s->equals($($nc(this->envprops)->get($Context::SECURITY_PROTOCOL)))) {
			this->useSsl = true;
		}
		$set(this, trace, $cast($OutputStream, $nc(this->envprops)->get(LdapCtx::TRACE_BER)));
		bool var$0 = props->get(LdapCtx::NETSCAPE_SCHEMA_BUG) != nullptr;
		if (var$0 || props->get(LdapCtx::OLD_NETSCAPE_SCHEMA_BUG) != nullptr) {
			this->netscapeSchemaBug = true;
		}
	}
	$set(this, currentDN, (dn != nullptr) ? dn : ""_s);
	$set(this, currentParsedDN, $nc(LdapCtx::parser)->parse(this->currentDN));
	$set(this, hostname, (host != nullptr && host->length() > 0) ? host : LdapCtx::DEFAULT_HOST);
	if ($nc(this->hostname)->charAt(0) == u'[') {
		$set(this, hostname, $nc(this->hostname)->substring(1, $nc(this->hostname)->length() - 1));
	}
	if (port_number > 0) {
		this->port_number = port_number;
	} else {
		this->port_number = this->useSsl ? LdapCtx::DEFAULT_SSL_PORT : LdapCtx::DEFAULT_PORT;
		this->useDefaultPortNumber = true;
	}
	$set(this, schemaTrees, $new($Hashtable, 11, 0.75f));
	initEnv();
	try {
		connect(false);
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		try {
			close();
		} catch ($Exception&) {
			$catch();
		}
		$throw(e);
	}
}

void LdapCtx::init$(LdapCtx* existing, $String* newDN) {
	$ComponentDirContext::init$();
	$set(this, hostname, nullptr);
	$set(this, clnt, nullptr);
	$set(this, envprops, nullptr);
	this->handleReferrals = LdapCtx::DEFAULT_REFERRAL_MODE;
	this->hasLdapsScheme = false;
	$set(this, respCtls, nullptr);
	$set(this, reqCtls, nullptr);
	$set(this, trace, nullptr);
	this->netscapeSchemaBug = false;
	$set(this, bindCtls, nullptr);
	this->referralHopLimit = LdapCtx::DEFAULT_REFERRAL_LIMIT;
	$set(this, schemaTrees, nullptr);
	this->batchSize = LdapCtx::DEFAULT_BATCH_SIZE;
	this->deleteRDN = LdapCtx::DEFAULT_DELETE_RDN;
	this->typesOnly = LdapCtx::DEFAULT_TYPES_ONLY;
	this->derefAliases = LdapCtx::DEFAULT_DEREF_ALIASES;
	this->addrEncodingSeparator = LdapCtx::DEFAULT_REF_SEPARATOR;
	$set(this, binaryAttrs, nullptr);
	this->connectTimeout = -1;
	this->readTimeout = -1;
	this->waitForReply = true;
	this->replyQueueSize = -1;
	this->useSsl = false;
	this->useDefaultPortNumber = false;
	this->parentIsLdapCtx = false;
	this->hopCount = 1;
	$set(this, url, nullptr);
	this->unsolicited = false;
	this->sharable = true;
	this->enumCount = 0;
	this->closeRequested = false;
	this->useSsl = $nc(existing)->useSsl;
	this->hasLdapsScheme = existing->hasLdapsScheme;
	this->useDefaultPortNumber = existing->useDefaultPortNumber;
	$set(this, hostname, existing->hostname);
	this->port_number = existing->port_number;
	$set(this, currentDN, newDN);
	if (existing->currentDN == this->currentDN) {
		$set(this, currentParsedDN, existing->currentParsedDN);
	} else {
		$set(this, currentParsedDN, $nc(LdapCtx::parser)->parse(this->currentDN));
	}
	$set(this, envprops, existing->envprops);
	$set(this, schemaTrees, existing->schemaTrees);
	$set(this, clnt, existing->clnt);
	$nc(this->clnt)->incRefCount();
	this->parentIsLdapCtx = ((newDN == nullptr || $nc(newDN)->equals(existing->currentDN)) ? existing->parentIsLdapCtx : true);
	$set(this, trace, existing->trace);
	this->netscapeSchemaBug = existing->netscapeSchemaBug;
	initEnv();
}

$LdapContext* LdapCtx::newInstance($ControlArray* reqCtls) {
	$var($LdapContext, clone, $new(LdapCtx, this, this->currentDN));
	clone->setRequestControls(reqCtls);
	return clone;
}

void LdapCtx::c_bind($Name* name, Object$* obj, $Continuation* cont) {
	c_bind(name, obj, nullptr, cont);
}

void LdapCtx::c_bind($Name* name, Object$* obj, $Attributes* attrs$renamed, $Continuation* cont) {
	$var($Attributes, attrs, attrs$renamed);
	$nc(cont)->setError($of(this), name);
	$var($Attributes, inputAttrs, attrs);
	try {
		ensureOpen();
		if (obj == nullptr) {
			if (attrs == nullptr) {
				$throwNew($IllegalArgumentException, "cannot bind null object with no attributes"_s);
			}
		} else {
			$assign(attrs, $Obj::determineBindAttrs(this->addrEncodingSeparator, obj, attrs, false, name, static_cast<$Context*>(static_cast<$PartialCompositeContext*>(static_cast<$ComponentContext*>(static_cast<$AtomicContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this)))))), this->envprops));
		}
		$var($String, newDN, fullyQualifiedName(name));
		$assign(attrs, addRdnAttributes(newDN, attrs, inputAttrs != attrs));
		$var($LdapEntry, entry, $new($LdapEntry, newDN, attrs));
		$var($LdapResult, answer, $nc(this->clnt)->add(entry, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->bind(name, obj, inputAttrs);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

void LdapCtx::c_rebind($Name* name, Object$* obj, $Continuation* cont) {
	c_rebind(name, obj, nullptr, cont);
}

void LdapCtx::c_rebind($Name* name, Object$* obj, $Attributes* attrs$renamed, $Continuation* cont) {
	$var($Attributes, attrs, attrs$renamed);
	$nc(cont)->setError($of(this), name);
	$var($Attributes, inputAttrs, attrs);
	try {
		$var($Attributes, origAttrs, nullptr);
		try {
			$assign(origAttrs, c_getAttributes(name, nullptr, cont));
		} catch ($NameNotFoundException&) {
			$catch();
		}
		if (origAttrs == nullptr) {
			c_bind(name, obj, attrs, cont);
			return;
		}
		if (attrs == nullptr && $instanceOf($DirContext, obj)) {
			$assign(attrs, $nc(($cast($DirContext, obj)))->getAttributes(""_s));
		}
		$var($Attributes, keepAttrs, $cast($Attributes, $nc(origAttrs)->clone()));
		if (attrs == nullptr) {
			$init($Obj);
			$var($Attribute, origObjectClass, origAttrs->get($nc($Obj::JAVA_ATTRIBUTES)->get($Obj::OBJECT_CLASS)));
			if (origObjectClass != nullptr) {
				$assign(origObjectClass, $cast($Attribute, origObjectClass->clone()));
				for (int32_t i = 0; i < $nc($Obj::JAVA_OBJECT_CLASSES)->length; ++i) {
					$nc(origObjectClass)->remove($of($nc($Obj::JAVA_OBJECT_CLASSES_LOWER)->get(i)));
					origObjectClass->remove($of($nc($Obj::JAVA_OBJECT_CLASSES)->get(i)));
				}
				origAttrs->put(origObjectClass);
			}
			for (int32_t i = 1; i < $nc($Obj::JAVA_ATTRIBUTES)->length; ++i) {
				origAttrs->remove($nc($Obj::JAVA_ATTRIBUTES)->get(i));
			}
			$assign(attrs, origAttrs);
		}
		if (obj != nullptr) {
			$assign(attrs, $Obj::determineBindAttrs(this->addrEncodingSeparator, obj, attrs, inputAttrs != attrs, name, static_cast<$Context*>(static_cast<$PartialCompositeContext*>(static_cast<$ComponentContext*>(static_cast<$AtomicContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this)))))), this->envprops));
		}
		$var($String, newDN, fullyQualifiedName(name));
		$var($LdapResult, answer, $nc(this->clnt)->delete$(newDN, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
			return;
		}
		$var($Exception, addEx, nullptr);
		try {
			$assign(attrs, addRdnAttributes(newDN, attrs, inputAttrs != attrs));
			$var($LdapEntry, entry, $new($LdapEntry, newDN, attrs));
			$assign(answer, $nc(this->clnt)->add(entry, this->reqCtls));
			if ($nc(answer)->resControls != nullptr) {
				$set(this, respCtls, appendVector(this->respCtls, answer->resControls));
			}
		} catch ($NamingException&) {
			$var($Exception, ae, $catch());
			$assign(addEx, ae);
		} catch ($IOException&) {
			$var($Exception, ae, $catch());
			$assign(addEx, ae);
		}
		if ((addEx != nullptr && !($instanceOf($LdapReferralException, addEx))) || answer->status != $LdapClient::LDAP_SUCCESS) {
			$var($LdapResult, answer2, $nc(this->clnt)->add($$new($LdapEntry, newDN, keepAttrs), this->reqCtls));
			if ($nc(answer2)->resControls != nullptr) {
				$set(this, respCtls, appendVector(this->respCtls, answer2->resControls));
			}
			if (addEx == nullptr) {
				processReturnCode(answer, name);
			}
		}
		if ($instanceOf($NamingException, addEx)) {
			$throw($cast($NamingException, addEx));
		} else if ($instanceOf($IOException, addEx)) {
			$throw($cast($IOException, addEx));
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->rebind(name, obj, inputAttrs);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

void LdapCtx::c_unbind($Name* name, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	try {
		ensureOpen();
		$var($String, fname, fullyQualifiedName(name));
		$var($LdapResult, answer, $nc(this->clnt)->delete$(fname, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		adjustDeleteStatus(fname, answer);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->unbind(name);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

void LdapCtx::c_rename($Name* oldName, $Name* newName, $Continuation* cont) {
	$var($Name, oldParsed, nullptr);
	$var($Name, newParsed, nullptr);
	$var($Name, oldParent, nullptr);
	$var($Name, newParent, nullptr);
	$var($String, newRDN, nullptr);
	$var($String, newSuperior, nullptr);
	$nc(cont)->setError($of(this), oldName);
	try {
		ensureOpen();
		if ($nc(oldName)->isEmpty()) {
			$assign(oldParent, $nc(LdapCtx::parser)->parse(""_s));
		} else {
			$assign(oldParsed, $nc(LdapCtx::parser)->parse($(oldName->get(0))));
			$assign(oldParent, $nc(oldParsed)->getPrefix(oldParsed->size() - 1));
		}
		if ($instanceOf($CompositeName, newName)) {
			$assign(newParsed, $nc(LdapCtx::parser)->parse($($nc(newName)->get(0))));
		} else {
			$assign(newParsed, newName);
		}
		$assign(newParent, $nc(newParsed)->getPrefix(newParsed->size() - 1));
		if (!$nc($of(oldParent))->equals(newParent)) {
			if (!$nc(this->clnt)->isLdapv3) {
				$throwNew($InvalidNameException, "LDAPv2 doesn\'t support changing the parent as a result of a rename"_s);
			} else {
				$assign(newSuperior, fullyQualifiedName($($nc($of(newParent))->toString())));
			}
		}
		$assign(newRDN, newParsed->get(newParsed->size() - 1));
		$var($LdapResult, answer, $nc(this->clnt)->moddn($(fullyQualifiedName(oldName)), newRDN, this->deleteRDN, newSuperior, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, oldName);
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		e->setNewRdn(newRDN);
		if (newSuperior != nullptr) {
			$var($PartialResultException, pre, $new($PartialResultException, $$str({"Cannot continue referral processing when newSuperior is nonempty: "_s, newSuperior})));
			pre->setRootCause($(cont->fillInException(e)));
			$throw($(cont->fillInException(pre)));
		}
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->rename(oldName, newName);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

$Context* LdapCtx::c_createSubcontext($Name* name, $Continuation* cont) {
	return c_createSubcontext(name, nullptr, cont);
}

$DirContext* LdapCtx::c_createSubcontext($Name* name, $Attributes* attrs$renamed, $Continuation* cont) {
	$var($Attributes, attrs, attrs$renamed);
	$nc(cont)->setError($of(this), name);
	$var($Attributes, inputAttrs, attrs);
	try {
		ensureOpen();
		if (attrs == nullptr) {
			$init($Obj);
			$var($Attribute, oc, $new($BasicAttribute, $nc($Obj::JAVA_ATTRIBUTES)->get($Obj::OBJECT_CLASS), $of($nc($Obj::JAVA_OBJECT_CLASSES)->get($Obj::STRUCTURAL))));
			oc->add("top"_s);
			$assign(attrs, $new($BasicAttributes, true));
			attrs->put(oc);
		}
		$var($String, newDN, fullyQualifiedName(name));
		$assign(attrs, addRdnAttributes(newDN, attrs, inputAttrs != attrs));
		$var($LdapEntry, entry, $new($LdapEntry, newDN, attrs));
		$var($LdapResult, answer, $nc(this->clnt)->add(entry, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
			return nullptr;
		}
		return static_cast<$DirContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>($new(LdapCtx, this, newDN))));
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				$var($DirContext, var$2, nullptr);
				bool return$1 = false;
				bool continue$3 = false;
				try {
					try {
						$assign(var$2, $nc(refCtx)->createSubcontext(name, inputAttrs));
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$3 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

void LdapCtx::c_destroySubcontext($Name* name, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	try {
		ensureOpen();
		$var($String, fname, fullyQualifiedName(name));
		$var($LdapResult, answer, $nc(this->clnt)->delete$(fname, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		adjustDeleteStatus(fname, answer);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->destroySubcontext(name);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

$Attributes* LdapCtx::addRdnAttributes($String* dn, $Attributes* attrs$renamed, bool directUpdate) {
	$init(LdapCtx);
	$var($Attributes, attrs, attrs$renamed);
	if ($nc(dn)->isEmpty()) {
		return attrs;
	}
	$var($List, rdnList, ($$new($LdapName, dn))->getRdns());
	$var($Rdn, rdn, $cast($Rdn, $nc(rdnList)->get(rdnList->size() - 1)));
	$var($Attributes, nameAttrs, $nc(rdn)->toAttributes());
	$var($NamingEnumeration, enum_, $nc(nameAttrs)->getAll());
	$var($Attribute, nameAttr, nullptr);
	while ($nc(enum_)->hasMore()) {
		$assign(nameAttr, $cast($Attribute, enum_->next()));
		if ($nc(attrs)->get($($nc(nameAttr)->getID())) == nullptr) {
			bool var$0 = !attrs->isCaseIgnored();
			if (var$0) {
				$var($NamingEnumeration, var$1, attrs->getIDs());
				var$0 = containsIgnoreCase(var$1, $($nc(nameAttr)->getID()));
			}
			if (var$0) {
				continue;
			}
			if (!directUpdate) {
				$assign(attrs, $cast($Attributes, attrs->clone()));
				directUpdate = true;
			}
			attrs->put(nameAttr);
		}
	}
	return attrs;
}

bool LdapCtx::containsIgnoreCase($NamingEnumeration* enumStr, $String* str) {
	$init(LdapCtx);
	$var($String, strEntry, nullptr);
	while ($nc(enumStr)->hasMore()) {
		$assign(strEntry, $cast($String, enumStr->next()));
		if ($nc(strEntry)->equalsIgnoreCase(str)) {
			return true;
		}
	}
	return false;
}

void LdapCtx::adjustDeleteStatus($String* fname, $LdapResult* answer) {
	if ($nc(answer)->status == $LdapClient::LDAP_NO_SUCH_OBJECT && answer->matchedDN != nullptr) {
		try {
			$var($Name, orig, $nc(LdapCtx::parser)->parse(fname));
			$var($Name, matched, $nc(LdapCtx::parser)->parse(answer->matchedDN));
			int32_t var$0 = $nc(orig)->size();
			if ((var$0 - $nc(matched)->size()) == 1) {
				answer->status = $LdapClient::LDAP_SUCCESS;
			}
		} catch ($NamingException&) {
			$catch();
		}
	}
}

$Vector* LdapCtx::appendVector($Vector* v1$renamed, $Vector* v2) {
	$init(LdapCtx);
	$var($Vector, v1, v1$renamed);
	if (v1 == nullptr) {
		$assign(v1, v2);
	} else {
		for (int32_t i = 0; i < $nc(v2)->size(); ++i) {
			$nc(v1)->addElement($(v2->elementAt(i)));
		}
	}
	return v1;
}

$Object* LdapCtx::c_lookupLink($Name* name, $Continuation* cont) {
	return $of(c_lookup(name, cont));
}

$Object* LdapCtx::c_lookup($Name* name, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	$var($Object, obj, nullptr);
	$var($Attributes, attrs, nullptr);
	try {
		$var($SearchControls, cons, $new($SearchControls));
		cons->setSearchScope($SearchControls::OBJECT_SCOPE);
		cons->setReturningAttributes(nullptr);
		cons->setReturningObjFlag(true);
		$var($LdapResult, answer, doSearchOnce(name, "(objectClass=*)"_s, cons, true));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
		}
		if (answer->entries == nullptr || $nc(answer->entries)->size() != 1) {
			$assign(attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
		} else {
			$var($LdapEntry, entry, $cast($LdapEntry, $nc(answer->entries)->elementAt(0)));
			$assign(attrs, $nc(entry)->attributes);
			$var($Vector, entryCtls, entry->respCtls);
			if (entryCtls != nullptr) {
				appendVector(this->respCtls, entryCtls);
			}
		}
		$init($Obj);
		if ($nc(attrs)->get($nc($Obj::JAVA_ATTRIBUTES)->get($Obj::CLASSNAME)) != nullptr) {
			$assign(obj, $Obj::decodeObject(attrs));
		}
		if (obj == nullptr) {
			$assign(obj, $new(LdapCtx, this, $(fullyQualifiedName(name))));
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				$var($Object, var$2, nullptr);
				bool return$1 = false;
				bool continue$3 = false;
				try {
					try {
						$assign(var$2, $nc(refCtx)->lookup(name));
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$3 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	try {
		return $of($DirectoryManager::getObjectInstance(obj, name, static_cast<$Context*>(static_cast<$PartialCompositeContext*>(static_cast<$ComponentContext*>(static_cast<$AtomicContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this)))))), this->envprops, attrs));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($NamingException, e2, $new($NamingException, "problem generating object using object factory"_s));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	}
	$shouldNotReachHere();
}

$NamingEnumeration* LdapCtx::c_list($Name* name, $Continuation* cont) {
	$var($SearchControls, cons, $new($SearchControls));
	$var($StringArray, classAttrs, $new($StringArray, 2));
	$init($Obj);
	classAttrs->set(0, $nc($Obj::JAVA_ATTRIBUTES)->get($Obj::OBJECT_CLASS));
	classAttrs->set(1, $nc($Obj::JAVA_ATTRIBUTES)->get($Obj::CLASSNAME));
	cons->setReturningAttributes(classAttrs);
	cons->setReturningObjFlag(true);
	$nc(cont)->setError($of(this), name);
	$var($LdapResult, answer, nullptr);
	try {
		$assign(answer, doSearch(name, "(objectClass=*)"_s, cons, true, true));
		if (($nc(answer)->status != $LdapClient::LDAP_SUCCESS) || ($nc(answer)->referrals != nullptr)) {
			processReturnCode(answer, name);
		}
		return $new($LdapNamingEnumeration, this, answer, name, cont);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				$var($NamingEnumeration, var$2, nullptr);
				bool return$1 = false;
				bool continue$3 = false;
				try {
					try {
						$assign(var$2, $nc(refCtx)->list(name));
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$3 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($LimitExceededException&) {
		$var($LimitExceededException, e, $catch());
		$var($LdapNamingEnumeration, res, $new($LdapNamingEnumeration, this, answer, name, cont));
		res->setNamingException($cast($LimitExceededException, $(cont->fillInException(e))));
		return res;
	} catch ($PartialResultException&) {
		$var($PartialResultException, e, $catch());
		$var($LdapNamingEnumeration, res, $new($LdapNamingEnumeration, this, answer, name, cont));
		res->setNamingException($cast($PartialResultException, $(cont->fillInException(e))));
		return res;
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

$NamingEnumeration* LdapCtx::c_listBindings($Name* name, $Continuation* cont) {
	$var($SearchControls, cons, $new($SearchControls));
	cons->setReturningAttributes(nullptr);
	cons->setReturningObjFlag(true);
	$nc(cont)->setError($of(this), name);
	$var($LdapResult, answer, nullptr);
	try {
		$assign(answer, doSearch(name, "(objectClass=*)"_s, cons, true, true));
		if (($nc(answer)->status != $LdapClient::LDAP_SUCCESS) || ($nc(answer)->referrals != nullptr)) {
			processReturnCode(answer, name);
		}
		return $new($LdapBindingEnumeration, this, answer, name, cont);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				$var($NamingEnumeration, var$2, nullptr);
				bool return$1 = false;
				bool continue$3 = false;
				try {
					try {
						$assign(var$2, $nc(refCtx)->listBindings(name));
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$3 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($LimitExceededException&) {
		$var($LimitExceededException, e, $catch());
		$var($LdapBindingEnumeration, res, $new($LdapBindingEnumeration, this, answer, name, cont));
		res->setNamingException($(cont->fillInException(e)));
		return res;
	} catch ($PartialResultException&) {
		$var($PartialResultException, e, $catch());
		$var($LdapBindingEnumeration, res, $new($LdapBindingEnumeration, this, answer, name, cont));
		res->setNamingException($(cont->fillInException(e)));
		return res;
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

$NameParser* LdapCtx::c_getNameParser($Name* name, $Continuation* cont) {
	$nc(cont)->setSuccess();
	return LdapCtx::parser;
}

$String* LdapCtx::getNameInNamespace() {
	return this->currentDN;
}

$Name* LdapCtx::composeName($Name* name$renamed, $Name* prefix$renamed) {
	$var($Name, prefix, prefix$renamed);
	$var($Name, name, name$renamed);
	$var($Name, result, nullptr);
	if (($instanceOf($LdapName, name)) && ($instanceOf($LdapName, prefix))) {
		$assign(result, ($cast($Name, $nc(prefix)->clone())));
		$nc(result)->addAll(name);
		return $$new($CompositeName)->add($($of(result)->toString()));
	}
	if (!($instanceOf($CompositeName, name))) {
		$assign(name, $$new($CompositeName)->add($($nc($of(name))->toString())));
	}
	if (!($instanceOf($CompositeName, prefix))) {
		$assign(prefix, $$new($CompositeName)->add($($nc($of(prefix))->toString())));
	}
	int32_t prefixLast = $nc(prefix)->size() - 1;
	bool var$2 = $nc(name)->isEmpty();
	bool var$1 = var$2 || prefix->isEmpty();
	bool var$0 = var$1 || $nc($($nc(name)->get(0)))->isEmpty();
	if (var$0 || $nc($(prefix->get(prefixLast)))->isEmpty()) {
		return $ComponentDirContext::composeName(name, prefix);
	}
	$assign(result, ($cast($Name, prefix->clone())));
	$nc(result)->addAll(name);
	if (this->parentIsLdapCtx) {
		$var($String, var$3, result->get(prefixLast + 1));
		$var($String, ldapComp, concatNames(var$3, $(result->get(prefixLast))));
		result->remove(prefixLast + 1);
		result->remove(prefixLast);
		result->add(prefixLast, ldapComp);
	}
	return result;
}

$String* LdapCtx::fullyQualifiedName($Name* rel) {
	return $nc(rel)->isEmpty() ? this->currentDN : fullyQualifiedName($($nc(rel)->get(0)));
}

$String* LdapCtx::fullyQualifiedName($String* rel) {
	return (concatNames(rel, this->currentDN));
}

$String* LdapCtx::concatNames($String* lesser, $String* greater) {
	$init(LdapCtx);
	if (lesser == nullptr || $nc(lesser)->isEmpty()) {
		return greater;
	} else if (greater == nullptr || $nc(greater)->isEmpty()) {
		return lesser;
	} else {
		return ($str({lesser, ","_s, greater}));
	}
}

$Attributes* LdapCtx::c_getAttributes($Name* name, $StringArray* attrIds, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	$var($SearchControls, cons, $new($SearchControls));
	cons->setSearchScope($SearchControls::OBJECT_SCOPE);
	cons->setReturningAttributes(attrIds);
	try {
		$var($LdapResult, answer, doSearchOnce(name, "(objectClass=*)"_s, cons, true));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
		}
		if (answer->entries == nullptr || $nc(answer->entries)->size() != 1) {
			return $new($BasicAttributes, $LdapClient::caseIgnore);
		}
		$var($LdapEntry, entry, $cast($LdapEntry, $nc(answer->entries)->elementAt(0)));
		$var($Vector, entryCtls, $nc(entry)->respCtls);
		if (entryCtls != nullptr) {
			appendVector(this->respCtls, entryCtls);
		}
		setParents(entry->attributes, $cast($Name, $($nc(name)->clone())));
		return (entry->attributes);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				$var($Attributes, var$2, nullptr);
				bool return$1 = false;
				bool continue$3 = false;
				try {
					try {
						$assign(var$2, $nc(refCtx)->getAttributes(name, attrIds));
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$3 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

void LdapCtx::c_modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	try {
		ensureOpen();
		if (attrs == nullptr || $nc(attrs)->size() == 0) {
			return;
		}
		$var($String, newDN, fullyQualifiedName(name));
		int32_t jmod_op = convertToLdapModCode(mod_op);
		$var($ints, jmods, $new($ints, $nc(attrs)->size()));
		$var($AttributeArray, jattrs, $new($AttributeArray, attrs->size()));
		$var($NamingEnumeration, ae, attrs->getAll());
		for (int32_t i = 0; i < jmods->length && $nc(ae)->hasMore(); ++i) {
			jmods->set(i, jmod_op);
			jattrs->set(i, $cast($Attribute, $(ae->next())));
		}
		$var($LdapResult, answer, $nc(this->clnt)->modify(newDN, jmods, jattrs, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
			return;
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->modifyAttributes(name, mod_op, attrs);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

void LdapCtx::c_modifyAttributes($Name* name, $ModificationItemArray* mods, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	try {
		ensureOpen();
		if (mods == nullptr || $nc(mods)->length == 0) {
			return;
		}
		$var($String, newDN, fullyQualifiedName(name));
		$var($ints, jmods, $new($ints, $nc(mods)->length));
		$var($AttributeArray, jattrs, $new($AttributeArray, mods->length));
		$var($ModificationItem, mod, nullptr);
		for (int32_t i = 0; i < jmods->length; ++i) {
			$assign(mod, mods->get(i));
			jmods->set(i, convertToLdapModCode($nc(mod)->getModificationOp()));
			jattrs->set(i, $($nc(mod)->getAttribute()));
		}
		$var($LdapResult, answer, $nc(this->clnt)->modify(newDN, jmods, jattrs, this->reqCtls));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, name);
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				bool return$1 = false;
				bool continue$2 = false;
				try {
					try {
						$nc(refCtx)->modifyAttributes(name, mods);
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$2) {
					continue;
				}
				if (return$1) {
					return;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
}

int32_t LdapCtx::convertToLdapModCode(int32_t mod_op) {
	$init(LdapCtx);
	switch (mod_op) {
	case $DirContext::ADD_ATTRIBUTE:
		{
			return ($LdapClient::ADD);
		}
	case $DirContext::REPLACE_ATTRIBUTE:
		{
			return ($LdapClient::REPLACE);
		}
	case $DirContext::REMOVE_ATTRIBUTE:
		{
			return ($LdapClient::DELETE);
		}
	default:
		{
			$throwNew($IllegalArgumentException, "Invalid modification code"_s);
		}
	}
}

$DirContext* LdapCtx::c_getSchema($Name* name, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	try {
		return getSchemaTree(name);
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

$DirContext* LdapCtx::c_getSchemaClassDefinition($Name* name, $Continuation* cont) {
	$nc(cont)->setError($of(this), name);
	try {
		$var($Attribute, objectClassAttr, $nc($(c_getAttributes(name, $$new($StringArray, {"objectclass"_s}), cont)))->get("objectclass"_s));
		if (objectClassAttr == nullptr || $nc(objectClassAttr)->size() == 0) {
			return LdapCtx::EMPTY_SCHEMA;
		}
		$init($LdapSchemaParser);
		$var($Context, ocSchema, $cast($Context, $nc($(c_getSchema(name, cont)))->lookup($LdapSchemaParser::OBJECTCLASS_DEFINITION_NAME)));
		$var($HierMemDirCtx, objectClassCtx, $new($HierMemDirCtx));
		$var($DirContext, objectClassDef, nullptr);
		$var($String, objectClassName, nullptr);
		{
			$var($Enumeration, objectClasses, $nc(objectClassAttr)->getAll());
			for (; $nc(objectClasses)->hasMoreElements();) {
				$assign(objectClassName, $cast($String, objectClasses->nextElement()));
				$assign(objectClassDef, $cast($DirContext, $nc(ocSchema)->lookup(objectClassName)));
				objectClassCtx->bind(objectClassName, $of(objectClassDef));
			}
		}
		objectClassCtx->setReadOnly($$new($SchemaViolationException, "Cannot update schema object"_s));
		return static_cast<$DirContext*>(objectClassCtx);
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

$DirContext* LdapCtx::getSchemaTree($Name* name) {
	$var($String, subschemasubentry, getSchemaEntry(name, true));
	$var($DirContext, schemaTree, $cast($DirContext, $nc(this->schemaTrees)->get(subschemasubentry)));
	if (schemaTree == nullptr) {
		$assign(schemaTree, buildSchemaTree(subschemasubentry));
		$nc(this->schemaTrees)->put(subschemasubentry, schemaTree);
	}
	return schemaTree;
}

$DirContext* LdapCtx::buildSchemaTree($String* subschemasubentry) {
	$var($SearchControls, constraints, $new($SearchControls, $SearchControls::OBJECT_SCOPE, 0, 0, LdapCtx::SCHEMA_ATTRIBUTES, true, false));
	$var($Name, sse, ($$new($CompositeName))->add(subschemasubentry));
	$var($NamingEnumeration, results, searchAux(sse, "(objectClass=subschema)"_s, constraints, false, true, $$new($Continuation)));
	if (!$nc(results)->hasMore()) {
		$throwNew($OperationNotSupportedException, $$str({"Cannot get read subschemasubentry: "_s, subschemasubentry}));
	}
	$var($SearchResult, result, $cast($SearchResult, $nc(results)->next()));
	results->close();
	$var($Object, obj, $nc(result)->getObject());
	if (!($instanceOf(LdapCtx, obj))) {
		$throwNew($NamingException, $$str({"Cannot get schema object as DirContext: "_s, subschemasubentry}));
	}
	return $LdapSchemaCtx::createSchemaTree(this->envprops, subschemasubentry, $cast(LdapCtx, obj), $(result->getAttributes()), this->netscapeSchemaBug);
}

$String* LdapCtx::getSchemaEntry($Name* name, bool relative) {
	$var($SearchControls, constraints, $new($SearchControls, $SearchControls::OBJECT_SCOPE, 0, 0, $$new($StringArray, {"subschemasubentry"_s}), false, false));
	$var($NamingEnumeration, results, nullptr);
	try {
		$assign(results, searchAux(name, "objectclass=*"_s, constraints, relative, true, $$new($Continuation)));
	} catch ($NamingException&) {
		$var($NamingException, ne, $catch());
		bool var$0 = !$nc(this->clnt)->isLdapv3 && $nc(this->currentDN)->length() == 0;
		if (var$0 && $nc(name)->isEmpty()) {
			$throwNew($OperationNotSupportedException, "Cannot get schema information from server"_s);
		} else {
			$throw(ne);
		}
	}
	if (!$nc(results)->hasMoreElements()) {
		$throwNew($ConfigurationException, $$str({"Requesting schema of nonexistent entry: "_s, name}));
	}
	$var($SearchResult, result, $cast($SearchResult, $nc(results)->next()));
	results->close();
	$var($Attribute, schemaEntryAttr, $nc($($nc(result)->getAttributes()))->get("subschemasubentry"_s));
	if (schemaEntryAttr == nullptr || $nc(schemaEntryAttr)->size() < 0) {
		bool var$1 = $nc(this->currentDN)->length() == 0;
		if (var$1 && $nc(name)->isEmpty()) {
			$throwNew($OperationNotSupportedException, "Cannot read subschemasubentry of root DSE"_s);
		} else {
			return getSchemaEntry($$new($CompositeName), false);
		}
	}
	return ($cast($String, $nc(schemaEntryAttr)->get()));
}

void LdapCtx::setParents($Attributes* attrs, $Name* name) {
	$var($NamingEnumeration, ae, $nc(attrs)->getAll());
	while ($nc(ae)->hasMore()) {
		$nc(($cast($LdapAttribute, $(ae->next()))))->setParent(static_cast<$DirContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this))), name);
	}
}

$String* LdapCtx::getURL() {
	if (this->url == nullptr) {
		$set(this, url, $LdapURL::toUrlString(this->hostname, this->port_number, this->currentDN, this->hasLdapsScheme));
	}
	return this->url;
}

$NamingEnumeration* LdapCtx::c_search($Name* name, $Attributes* matchingAttributes, $Continuation* cont) {
	return c_search(name, matchingAttributes, ($StringArray*)nullptr, cont);
}

$NamingEnumeration* LdapCtx::c_search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn, $Continuation* cont) {
	$var($SearchControls, cons, $new($SearchControls));
	cons->setReturningAttributes(attributesToReturn);
	$var($String, filter, nullptr);
	try {
		$assign(filter, $SearchFilter::format(matchingAttributes));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$nc(cont)->setError($of(this), name);
		$throw($(cont->fillInException(e)));
	}
	return c_search(name, filter, cons, cont);
}

$NamingEnumeration* LdapCtx::c_search($Name* name, $String* filter, $SearchControls* cons, $Continuation* cont) {
	return searchAux(name, filter, $(cloneSearchControls(cons)), true, this->waitForReply, cont);
}

$NamingEnumeration* LdapCtx::c_search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons, $Continuation* cont) {
	$var($String, strfilter, nullptr);
	try {
		$assign(strfilter, $SearchFilter::format(filterExpr, filterArgs));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$nc(cont)->setError($of(this), name);
		$throw($(cont->fillInException(e)));
	}
	return c_search(name, strfilter, cons, cont);
}

$NamingEnumeration* LdapCtx::searchAux($Name* name, $String* filter, $SearchControls* cons$renamed, bool relative, bool waitForReply, $Continuation* cont) {
	$var($SearchControls, cons, cons$renamed);
	$var($LdapResult, answer, nullptr);
	$var($StringArray, tokens, $new($StringArray, 2));
	$var($StringArray, reqAttrs, nullptr);
	if (cons == nullptr) {
		$assign(cons, $new($SearchControls));
	}
	$assign(reqAttrs, $nc(cons)->getReturningAttributes());
	if (cons->getReturningObjFlag()) {
		if (reqAttrs != nullptr) {
			bool hasWildcard = false;
			for (int32_t i = reqAttrs->length - 1; i >= 0; --i) {
				if ($nc(reqAttrs->get(i))->equals("*"_s)) {
					hasWildcard = true;
					break;
				}
			}
			if (!hasWildcard) {
				$init($Obj);
				$var($StringArray, totalAttrs, $new($StringArray, reqAttrs->length + $nc($Obj::JAVA_ATTRIBUTES)->length));
				$System::arraycopy(reqAttrs, 0, totalAttrs, 0, reqAttrs->length);
				$System::arraycopy($Obj::JAVA_ATTRIBUTES, 0, totalAttrs, reqAttrs->length, $nc($Obj::JAVA_ATTRIBUTES)->length);
				cons->setReturningAttributes(totalAttrs);
			}
		}
	}
	$var($LdapCtx$SearchArgs, args, $new($LdapCtx$SearchArgs, name, filter, cons, reqAttrs));
	$nc(cont)->setError($of(this), name);
	try {
		if (searchToCompare(filter, cons, tokens)) {
			$assign(answer, compare(name, tokens->get(0), tokens->get(1)));
			if (!($nc(answer)->compareToSearchResult($(fullyQualifiedName(name))))) {
				processReturnCode(answer, name);
			}
		} else {
			$assign(answer, doSearch(name, filter, cons, relative, waitForReply));
			processReturnCode(answer, name);
		}
		return $new($LdapSearchEnumeration, this, answer, $(fullyQualifiedName(name)), args, cont);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw($(cont->fillInException(e)));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$0, nullptr);
				$var($NamingEnumeration, var$2, nullptr);
				bool return$1 = false;
				bool continue$3 = false;
				try {
					try {
						$assign(var$2, $nc(refCtx)->search(name, filter, cons));
						return$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$3 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (continue$3) {
					continue;
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($LimitExceededException&) {
		$var($LimitExceededException, e, $catch());
		$var($LdapSearchEnumeration, res, $new($LdapSearchEnumeration, this, answer, $(fullyQualifiedName(name)), args, cont));
		res->setNamingException(e);
		return res;
	} catch ($PartialResultException&) {
		$var($PartialResultException, e, $catch());
		$var($LdapSearchEnumeration, res, $new($LdapSearchEnumeration, this, answer, $(fullyQualifiedName(name)), args, cont));
		res->setNamingException(e);
		return res;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw($(cont->fillInException(e2)));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw($(cont->fillInException(e)));
	}
	$shouldNotReachHere();
}

$LdapResult* LdapCtx::getSearchReply($LdapClient* eClnt, $LdapResult* res) {
	if (this->clnt != eClnt) {
		$throwNew($CommunicationException, "Context\'s connection changed; unable to continue enumeration"_s);
	}
	try {
		return $nc(eClnt)->getSearchReply(this->batchSize, res, this->binaryAttrs);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw(e2);
	}
	$shouldNotReachHere();
}

$LdapResult* LdapCtx::doSearchOnce($Name* name, $String* filter, $SearchControls* cons, bool relative) {
	int32_t savedBatchSize = this->batchSize;
	this->batchSize = 2;
	$var($LdapResult, answer, doSearch(name, filter, cons, relative, true));
	this->batchSize = savedBatchSize;
	return answer;
}

$LdapResult* LdapCtx::doSearch($Name* name, $String* filter, $SearchControls* cons, bool relative, bool waitForReply) {
	ensureOpen();
	try {
		int32_t scope = 0;
		switch ($nc(cons)->getSearchScope()) {
		case $SearchControls::OBJECT_SCOPE:
			{
				scope = $LdapClient::SCOPE_BASE_OBJECT;
				break;
			}
		default:
			{}
		case $SearchControls::ONELEVEL_SCOPE:
			{
				scope = $LdapClient::SCOPE_ONE_LEVEL;
				break;
			}
		case $SearchControls::SUBTREE_SCOPE:
			{
				scope = $LdapClient::SCOPE_SUBTREE;
				break;
			}
		}
		$var($StringArray, retattrs, cons->getReturningAttributes());
		if (retattrs != nullptr && retattrs->length == 0) {
			$assign(retattrs, $new($StringArray, 1));
			retattrs->set(0, "1.1"_s);
		}
		$var($String, nm, relative ? fullyQualifiedName(name) : ($nc(name)->isEmpty() ? ""_s : $nc(name)->get(0)));
		int32_t msecLimit = cons->getTimeLimit();
		int32_t secLimit = 0;
		if (msecLimit > 0) {
			secLimit = (msecLimit / 1000) + 1;
		}
		$var($String, var$0, nm);
		int32_t var$1 = scope;
		int32_t var$2 = this->derefAliases;
		int32_t var$3 = (int32_t)cons->getCountLimit();
		int32_t var$4 = secLimit;
		$var($LdapResult, answer, $nc(this->clnt)->search(var$0, var$1, var$2, var$3, var$4, cons->getReturningObjFlag() ? false : this->typesOnly, retattrs, filter, this->batchSize, this->reqCtls, this->binaryAttrs, waitForReply, this->replyQueueSize));
		$set(this, respCtls, $nc(answer)->resControls);
		return answer;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw(e2);
	}
	$shouldNotReachHere();
}

bool LdapCtx::searchToCompare($String* filter, $SearchControls* cons, $StringArray* tokens) {
	$init(LdapCtx);
	if ($nc(cons)->getSearchScope() != $SearchControls::OBJECT_SCOPE) {
		return false;
	}
	$var($StringArray, attrs, $nc(cons)->getReturningAttributes());
	if (attrs == nullptr || $nc(attrs)->length != 0) {
		return false;
	}
	if (!filterToAssertion(filter, tokens)) {
		return false;
	}
	return true;
}

bool LdapCtx::filterToAssertion($String* filter, $StringArray* tokens) {
	$init(LdapCtx);
	$var($StringTokenizer, assertionTokenizer, $new($StringTokenizer, filter, "="_s));
	if (assertionTokenizer->countTokens() != 2) {
		return false;
	}
	$nc(tokens)->set(0, $(assertionTokenizer->nextToken()));
	tokens->set(1, $(assertionTokenizer->nextToken()));
	if ($nc(tokens->get(1))->indexOf((int32_t)u'*') != -1) {
		return false;
	}
	bool hasParens = false;
	int32_t len = $nc(tokens->get(1))->length();
	bool var$0 = ($nc(tokens->get(0))->charAt(0) == u'(');
	if (var$0 && ($nc(tokens->get(1))->charAt(len - 1) == u')')) {
		hasParens = true;
	} else {
		bool var$2 = ($nc(tokens->get(0))->charAt(0) == u'(');
		if (var$2 || ($nc(tokens->get(1))->charAt(len - 1) == u')')) {
			return false;
		}
	}
	$var($StringTokenizer, illegalCharsTokenizer, $new($StringTokenizer, tokens->get(0), "()&|!=~><*"_s, true));
	if (illegalCharsTokenizer->countTokens() != (hasParens ? 2 : 1)) {
		return false;
	}
	$assign(illegalCharsTokenizer, $new($StringTokenizer, tokens->get(1), "()&|!=~><*"_s, true));
	if (illegalCharsTokenizer->countTokens() != (hasParens ? 2 : 1)) {
		return false;
	}
	if (hasParens) {
		tokens->set(0, $($nc(tokens->get(0))->substring(1)));
		tokens->set(1, $($nc(tokens->get(1))->substring(0, len - 1)));
	}
	return true;
}

$LdapResult* LdapCtx::compare($Name* name, $String* type, $String* value) {
	ensureOpen();
	$var($String, nm, fullyQualifiedName(name));
	$var($LdapResult, answer, $nc(this->clnt)->compare(nm, type, value, this->reqCtls));
	$set(this, respCtls, $nc(answer)->resControls);
	return answer;
}

$SearchControls* LdapCtx::cloneSearchControls($SearchControls* cons) {
	$init(LdapCtx);
	if (cons == nullptr) {
		return nullptr;
	}
	$var($StringArray, retAttrs, $nc(cons)->getReturningAttributes());
	if (retAttrs != nullptr) {
		$var($StringArray, attrs, $new($StringArray, retAttrs->length));
		$System::arraycopy(retAttrs, 0, attrs, 0, retAttrs->length);
		$assign(retAttrs, attrs);
	}
	int32_t var$0 = cons->getSearchScope();
	int64_t var$1 = cons->getCountLimit();
	int32_t var$2 = cons->getTimeLimit();
	$var($StringArray, var$3, retAttrs);
	bool var$4 = cons->getReturningObjFlag();
	return $new($SearchControls, var$0, var$1, var$2, var$3, var$4, cons->getDerefLinkFlag());
}

$Hashtable* LdapCtx::p_getEnvironment() {
	return this->envprops;
}

$Hashtable* LdapCtx::getEnvironment() {
	return (this->envprops == nullptr ? $new($Hashtable, 5, 0.75f) : $cast($Hashtable, $nc(this->envprops)->clone()));
}

$Object* LdapCtx::removeFromEnvironment($String* propName) {
	if (this->envprops == nullptr || $nc(this->envprops)->get(propName) == nullptr) {
		return $of(nullptr);
	}
	{
		$var($String, s79810$, propName);
		int32_t tmp79810$ = -1;
		switch ($nc(s79810$)->hashCode()) {
		case 0x46B41F9D:
			{
				if (s79810$->equals("java.naming.ldap.ref.separator"_s)) {
					tmp79810$ = 0;
				}
				break;
			}
		case (int32_t)0xC3A9B598:
			{
				if (s79810$->equals("java.naming.ldap.typesOnly"_s)) {
					tmp79810$ = 1;
				}
				break;
			}
		case (int32_t)0x8E4A00A4:
			{
				if (s79810$->equals("java.naming.ldap.deleteRDN"_s)) {
					tmp79810$ = 2;
				}
				break;
			}
		case 0x1F3A2F79:
			{
				if (s79810$->equals("java.naming.ldap.derefAliases"_s)) {
					tmp79810$ = 3;
				}
				break;
			}
		case (int32_t)0x9B3C76A1:
			{
				if (s79810$->equals("java.naming.batchsize"_s)) {
					tmp79810$ = 4;
				}
				break;
			}
		case (int32_t)0xDC61C837:
			{
				if (s79810$->equals("java.naming.ldap.referral.limit"_s)) {
					tmp79810$ = 5;
				}
				break;
			}
		case 0x2E666A77:
			{
				if (s79810$->equals("java.naming.referral"_s)) {
					tmp79810$ = 6;
				}
				break;
			}
		case 0x2A03534B:
			{
				if (s79810$->equals("java.naming.ldap.attributes.binary"_s)) {
					tmp79810$ = 7;
				}
				break;
			}
		case 0x5A3E0B4C:
			{
				if (s79810$->equals("com.sun.jndi.ldap.connect.timeout"_s)) {
					tmp79810$ = 8;
				}
				break;
			}
		case 0x0313007A:
			{
				if (s79810$->equals("com.sun.jndi.ldap.read.timeout"_s)) {
					tmp79810$ = 9;
				}
				break;
			}
		case 0x5A4FC22B:
			{
				if (s79810$->equals("com.sun.jndi.ldap.search.waitForReply"_s)) {
					tmp79810$ = 10;
				}
				break;
			}
		case 0x6ED26D9D:
			{
				if (s79810$->equals("com.sun.jndi.ldap.search.replyQueueSize"_s)) {
					tmp79810$ = 11;
				}
				break;
			}
		case (int32_t)0x951457EC:
			{
				if (s79810$->equals("java.naming.security.protocol"_s)) {
					tmp79810$ = 12;
				}
				break;
			}
		case (int32_t)0x8148236B:
			{
				if (s79810$->equals("java.naming.ldap.version"_s)) {
					tmp79810$ = 13;
				}
				break;
			}
		case (int32_t)0xB4A532E4:
			{
				if (s79810$->equals("java.naming.ldap.factory.socket"_s)) {
					tmp79810$ = 14;
				}
				break;
			}
		case 0x1F025CCC:
			{
				if (s79810$->equals("java.naming.security.authentication"_s)) {
					tmp79810$ = 15;
				}
				break;
			}
		case (int32_t)0xC52DD15A:
			{
				if (s79810$->equals("java.naming.security.principal"_s)) {
					tmp79810$ = 16;
				}
				break;
			}
		case (int32_t)0xB414E928:
			{
				if (s79810$->equals("java.naming.security.credentials"_s)) {
					tmp79810$ = 17;
				}
				break;
			}
		}
		switch (tmp79810$) {
		case 0:
			{
				this->addrEncodingSeparator = LdapCtx::DEFAULT_REF_SEPARATOR;
				break;
			}
		case 1:
			{
				this->typesOnly = LdapCtx::DEFAULT_TYPES_ONLY;
				break;
			}
		case 2:
			{
				this->deleteRDN = LdapCtx::DEFAULT_DELETE_RDN;
				break;
			}
		case 3:
			{
				this->derefAliases = LdapCtx::DEFAULT_DEREF_ALIASES;
				break;
			}
		case 4:
			{
				this->batchSize = LdapCtx::DEFAULT_BATCH_SIZE;
				break;
			}
		case 5:
			{
				this->referralHopLimit = LdapCtx::DEFAULT_REFERRAL_LIMIT;
				break;
			}
		case 6:
			{
				setReferralMode(nullptr, true);
				break;
			}
		case 7:
			{
				setBinaryAttributes(nullptr);
				break;
			}
		case 8:
			{
				this->connectTimeout = -1;
				break;
			}
		case 9:
			{
				this->readTimeout = -1;
				break;
			}
		case 10:
			{
				this->waitForReply = true;
				break;
			}
		case 11:
			{
				this->replyQueueSize = -1;
				break;
			}
		case 12:
			{
				closeConnection(LdapCtx::SOFT_CLOSE);
				if (this->useSsl && !this->hasLdapsScheme) {
					this->useSsl = false;
					$set(this, url, nullptr);
					if (this->useDefaultPortNumber) {
						this->port_number = LdapCtx::DEFAULT_PORT;
					}
				}
				break;
			}
		case 13:
			{}
		case 14:
			{
				closeConnection(LdapCtx::SOFT_CLOSE);
				break;
			}
		case 15:
			{}
		case 16:
			{}
		case 17:
			{
				this->sharable = false;
				break;
			}
		}
	}
	$set(this, envprops, $cast($Hashtable, $nc(this->envprops)->clone()));
	return $of($nc(this->envprops)->remove(propName));
}

$Object* LdapCtx::addToEnvironment($String* propName, Object$* propVal) {
	if (propVal == nullptr) {
		return $of(removeFromEnvironment(propName));
	}
	{
		$var($String, s82387$, propName);
		int32_t tmp82387$ = -1;
		switch ($nc(s82387$)->hashCode()) {
		case 0x46B41F9D:
			{
				if (s82387$->equals("java.naming.ldap.ref.separator"_s)) {
					tmp82387$ = 0;
				}
				break;
			}
		case (int32_t)0xC3A9B598:
			{
				if (s82387$->equals("java.naming.ldap.typesOnly"_s)) {
					tmp82387$ = 1;
				}
				break;
			}
		case (int32_t)0x8E4A00A4:
			{
				if (s82387$->equals("java.naming.ldap.deleteRDN"_s)) {
					tmp82387$ = 2;
				}
				break;
			}
		case 0x1F3A2F79:
			{
				if (s82387$->equals("java.naming.ldap.derefAliases"_s)) {
					tmp82387$ = 3;
				}
				break;
			}
		case (int32_t)0x9B3C76A1:
			{
				if (s82387$->equals("java.naming.batchsize"_s)) {
					tmp82387$ = 4;
				}
				break;
			}
		case (int32_t)0xDC61C837:
			{
				if (s82387$->equals("java.naming.ldap.referral.limit"_s)) {
					tmp82387$ = 5;
				}
				break;
			}
		case 0x2E666A77:
			{
				if (s82387$->equals("java.naming.referral"_s)) {
					tmp82387$ = 6;
				}
				break;
			}
		case 0x2A03534B:
			{
				if (s82387$->equals("java.naming.ldap.attributes.binary"_s)) {
					tmp82387$ = 7;
				}
				break;
			}
		case 0x5A3E0B4C:
			{
				if (s82387$->equals("com.sun.jndi.ldap.connect.timeout"_s)) {
					tmp82387$ = 8;
				}
				break;
			}
		case 0x0313007A:
			{
				if (s82387$->equals("com.sun.jndi.ldap.read.timeout"_s)) {
					tmp82387$ = 9;
				}
				break;
			}
		case 0x5A4FC22B:
			{
				if (s82387$->equals("com.sun.jndi.ldap.search.waitForReply"_s)) {
					tmp82387$ = 10;
				}
				break;
			}
		case 0x6ED26D9D:
			{
				if (s82387$->equals("com.sun.jndi.ldap.search.replyQueueSize"_s)) {
					tmp82387$ = 11;
				}
				break;
			}
		case (int32_t)0x951457EC:
			{
				if (s82387$->equals("java.naming.security.protocol"_s)) {
					tmp82387$ = 12;
				}
				break;
			}
		case (int32_t)0x8148236B:
			{
				if (s82387$->equals("java.naming.ldap.version"_s)) {
					tmp82387$ = 13;
				}
				break;
			}
		case (int32_t)0xB4A532E4:
			{
				if (s82387$->equals("java.naming.ldap.factory.socket"_s)) {
					tmp82387$ = 14;
				}
				break;
			}
		case 0x1F025CCC:
			{
				if (s82387$->equals("java.naming.security.authentication"_s)) {
					tmp82387$ = 15;
				}
				break;
			}
		case (int32_t)0xC52DD15A:
			{
				if (s82387$->equals("java.naming.security.principal"_s)) {
					tmp82387$ = 16;
				}
				break;
			}
		case (int32_t)0xB414E928:
			{
				if (s82387$->equals("java.naming.security.credentials"_s)) {
					tmp82387$ = 17;
				}
				break;
			}
		}
		switch (tmp82387$) {
		case 0:
			{
				setRefSeparator($cast($String, propVal));
				break;
			}
		case 1:
			{
				setTypesOnly($cast($String, propVal));
				break;
			}
		case 2:
			{
				setDeleteRDN($cast($String, propVal));
				break;
			}
		case 3:
			{
				setDerefAliases($cast($String, propVal));
				break;
			}
		case 4:
			{
				setBatchSize($cast($String, propVal));
				break;
			}
		case 5:
			{
				setReferralLimit($cast($String, propVal));
				break;
			}
		case 6:
			{
				setReferralMode($cast($String, propVal), true);
				break;
			}
		case 7:
			{
				setBinaryAttributes($cast($String, propVal));
				break;
			}
		case 8:
			{
				setConnectTimeout($cast($String, propVal));
				break;
			}
		case 9:
			{
				setReadTimeout($cast($String, propVal));
				break;
			}
		case 10:
			{
				setWaitForReply($cast($String, propVal));
				break;
			}
		case 11:
			{
				setReplyQueueSize($cast($String, propVal));
				break;
			}
		case 12:
			{
				closeConnection(LdapCtx::SOFT_CLOSE);
				if ("ssl"_s->equals(propVal)) {
					this->useSsl = true;
					$set(this, url, nullptr);
					if (this->useDefaultPortNumber) {
						this->port_number = LdapCtx::DEFAULT_SSL_PORT;
					}
				}
				break;
			}
		case 13:
			{}
		case 14:
			{
				closeConnection(LdapCtx::SOFT_CLOSE);
				break;
			}
		case 15:
			{}
		case 16:
			{}
		case 17:
			{
				this->sharable = false;
				break;
			}
		}
	}
	$set(this, envprops, this->envprops == nullptr ? $new($Hashtable, 5, 0.75f) : $cast($Hashtable, $nc(this->envprops)->clone()));
	return $of($nc(this->envprops)->put(propName, propVal));
}

void LdapCtx::setProviderUrl($String* providerUrl) {
	if (this->envprops != nullptr) {
		$init($Context);
		$nc(this->envprops)->put($Context::PROVIDER_URL, providerUrl);
	}
}

void LdapCtx::setDomainName($String* domainName) {
	if (this->envprops != nullptr) {
		$nc(this->envprops)->put(LdapCtx::DOMAIN_NAME, domainName);
	}
}

void LdapCtx::initEnv() {
	if (this->envprops == nullptr) {
		setReferralMode(nullptr, false);
		return;
	}
	$init($Context);
	setBatchSize($cast($String, $($nc(this->envprops)->get($Context::BATCHSIZE))));
	setRefSeparator($cast($String, $($nc(this->envprops)->get(LdapCtx::REF_SEPARATOR))));
	setDeleteRDN($cast($String, $($nc(this->envprops)->get(LdapCtx::DELETE_RDN))));
	setTypesOnly($cast($String, $($nc(this->envprops)->get(LdapCtx::TYPES_ONLY))));
	setDerefAliases($cast($String, $($nc(this->envprops)->get(LdapCtx::DEREF_ALIASES))));
	setReferralLimit($cast($String, $($nc(this->envprops)->get(LdapCtx::REFERRAL_LIMIT))));
	setBinaryAttributes($cast($String, $($nc(this->envprops)->get(LdapCtx::BINARY_ATTRIBUTES))));
	$set(this, bindCtls, cloneControls($cast($ControlArray, $($nc(this->envprops)->get(LdapCtx::BIND_CONTROLS)))));
	setReferralMode($cast($String, $($nc(this->envprops)->get($Context::REFERRAL))), false);
	setConnectTimeout($cast($String, $($nc(this->envprops)->get(LdapCtx::CONNECT_TIMEOUT))));
	setReadTimeout($cast($String, $($nc(this->envprops)->get(LdapCtx::READ_TIMEOUT))));
	setWaitForReply($cast($String, $($nc(this->envprops)->get(LdapCtx::WAIT_FOR_REPLY))));
	setReplyQueueSize($cast($String, $($nc(this->envprops)->get(LdapCtx::REPLY_QUEUE_SIZE))));
}

void LdapCtx::setDeleteRDN($String* deleteRDNProp) {
	if ((deleteRDNProp != nullptr) && (deleteRDNProp->equalsIgnoreCase("false"_s))) {
		this->deleteRDN = false;
	} else {
		this->deleteRDN = LdapCtx::DEFAULT_DELETE_RDN;
	}
}

void LdapCtx::setTypesOnly($String* typesOnlyProp) {
	if ((typesOnlyProp != nullptr) && (typesOnlyProp->equalsIgnoreCase("true"_s))) {
		this->typesOnly = true;
	} else {
		this->typesOnly = LdapCtx::DEFAULT_TYPES_ONLY;
	}
}

void LdapCtx::setBatchSize($String* batchSizeProp) {
	if (batchSizeProp != nullptr) {
		this->batchSize = $Integer::parseInt(batchSizeProp);
	} else {
		this->batchSize = LdapCtx::DEFAULT_BATCH_SIZE;
	}
}

void LdapCtx::setReferralMode($String* ref, bool update) {
	if (ref != nullptr) {
		{
			$var($String, s88545$, ref);
			int32_t tmp88545$ = -1;
			switch (s88545$->hashCode()) {
			case (int32_t)0xE7640B41:
				{
					if (s88545$->equals("follow-scheme"_s)) {
						tmp88545$ = 0;
					}
					break;
				}
			case (int32_t)0xB45D3BB1:
				{
					if (s88545$->equals("follow"_s)) {
						tmp88545$ = 1;
					}
					break;
				}
			case 0x0693A6E6:
				{
					if (s88545$->equals("throw"_s)) {
						tmp88545$ = 2;
					}
					break;
				}
			case (int32_t)0xB90BFDD2:
				{
					if (s88545$->equals("ignore"_s)) {
						tmp88545$ = 3;
					}
					break;
				}
			}
			switch (tmp88545$) {
			case 0:
				{
					this->handleReferrals = $LdapClient::LDAP_REF_FOLLOW_SCHEME;
					break;
				}
			case 1:
				{
					this->handleReferrals = $LdapClient::LDAP_REF_FOLLOW;
					break;
				}
			case 2:
				{
					this->handleReferrals = $LdapClient::LDAP_REF_THROW;
					break;
				}
			case 3:
				{
					this->handleReferrals = $LdapClient::LDAP_REF_IGNORE;
					break;
				}
			default:
				{
					$init($Context);
					$throwNew($IllegalArgumentException, $$str({"Illegal value for "_s, $Context::REFERRAL, " property."_s}));
				}
			}
		}
	} else {
		this->handleReferrals = LdapCtx::DEFAULT_REFERRAL_MODE;
	}
	if (this->handleReferrals == $LdapClient::LDAP_REF_IGNORE) {
		$set(this, reqCtls, addControl(this->reqCtls, LdapCtx::manageReferralControl));
	} else if (update) {
		$set(this, reqCtls, removeControl(this->reqCtls, LdapCtx::manageReferralControl));
	}
}

void LdapCtx::setDerefAliases($String* deref) {
	if (deref != nullptr) {
		{
			$var($String, s89925$, deref);
			int32_t tmp89925$ = -1;
			switch (s89925$->hashCode()) {
			case 0x063DCA8C:
				{
					if (s89925$->equals("never"_s)) {
						tmp89925$ = 0;
					}
					break;
				}
			case 0x69FD713A:
				{
					if (s89925$->equals("searching"_s)) {
						tmp89925$ = 1;
					}
					break;
				}
			case (int32_t)0xCD259B89:
				{
					if (s89925$->equals("finding"_s)) {
						tmp89925$ = 2;
					}
					break;
				}
			case (int32_t)0xABAF920F:
				{
					if (s89925$->equals("always"_s)) {
						tmp89925$ = 3;
					}
					break;
				}
			}
			switch (tmp89925$) {
			case 0:
				{
					this->derefAliases = 0;
					break;
				}
			case 1:
				{
					this->derefAliases = 1;
					break;
				}
			case 2:
				{
					this->derefAliases = 2;
					break;
				}
			case 3:
				{
					this->derefAliases = 3;
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, $$str({"Illegal value for "_s, LdapCtx::DEREF_ALIASES, " property."_s}));
				}
			}
		}
	} else {
		this->derefAliases = LdapCtx::DEFAULT_DEREF_ALIASES;
	}
}

void LdapCtx::setRefSeparator($String* sepStr) {
	if (sepStr != nullptr && sepStr->length() > 0) {
		this->addrEncodingSeparator = sepStr->charAt(0);
	} else {
		this->addrEncodingSeparator = LdapCtx::DEFAULT_REF_SEPARATOR;
	}
}

void LdapCtx::setReferralLimit($String* referralLimitProp) {
	if (referralLimitProp != nullptr) {
		this->referralHopLimit = $Integer::parseInt(referralLimitProp);
		if (this->referralHopLimit == 0) {
			this->referralHopLimit = $Integer::MAX_VALUE;
		}
	} else {
		this->referralHopLimit = LdapCtx::DEFAULT_REFERRAL_LIMIT;
	}
}

void LdapCtx::setHopCount(int32_t hopCount) {
	this->hopCount = hopCount;
}

void LdapCtx::setConnectTimeout($String* connectTimeoutProp) {
	if (connectTimeoutProp != nullptr) {
		this->connectTimeout = $Integer::parseInt(connectTimeoutProp);
	} else {
		this->connectTimeout = -1;
	}
}

void LdapCtx::setReplyQueueSize($String* replyQueueSizeProp) {
	if (replyQueueSizeProp != nullptr) {
		this->replyQueueSize = $Integer::parseInt(replyQueueSizeProp);
		if (this->replyQueueSize <= 0) {
			this->replyQueueSize = -1;
		}
	} else {
		this->replyQueueSize = -1;
	}
}

void LdapCtx::setWaitForReply($String* waitForReplyProp) {
	if (waitForReplyProp != nullptr && (waitForReplyProp->equalsIgnoreCase("false"_s))) {
		this->waitForReply = false;
	} else {
		this->waitForReply = true;
	}
}

void LdapCtx::setReadTimeout($String* readTimeoutProp) {
	if (readTimeoutProp != nullptr) {
		this->readTimeout = $Integer::parseInt(readTimeoutProp);
	} else {
		this->readTimeout = -1;
	}
}

$Vector* LdapCtx::extractURLs($String* refString) {
	$init(LdapCtx);
	int32_t separator = 0;
	int32_t urlCount = 0;
	while ((separator = $nc(refString)->indexOf((int32_t)u'\n', separator)) >= 0) {
		++separator;
		++urlCount;
	}
	$var($Vector, referrals, $new($Vector, urlCount));
	int32_t iURL = 0;
	int32_t i = 0;
	separator = $nc(refString)->indexOf((int32_t)u'\n');
	iURL = separator + 1;
	while ((separator = refString->indexOf((int32_t)u'\n', iURL)) >= 0) {
		$var($Vector, referral, $new($Vector, 1));
		referral->addElement($(refString->substring(iURL, separator)));
		referrals->addElement(referral);
		iURL = separator + 1;
	}
	$var($Vector, referral, $new($Vector, 1));
	referral->addElement($(refString->substring(iURL)));
	referrals->addElement(referral);
	return referrals;
}

void LdapCtx::setBinaryAttributes($String* attrIds) {
	if (attrIds == nullptr) {
		$set(this, binaryAttrs, nullptr);
	} else {
		$set(this, binaryAttrs, $new($Hashtable, 11, 0.75f));
		$init($Locale);
		$var($StringTokenizer, tokens, $new($StringTokenizer, $($nc(attrIds)->toLowerCase($Locale::ENGLISH)), " "_s));
		while (tokens->hasMoreTokens()) {
			$init($Boolean);
			$nc(this->binaryAttrs)->put($(tokens->nextToken()), $Boolean::TRUE);
		}
	}
}

void LdapCtx::finalize() {
	try {
		close();
	} catch ($NamingException&) {
		$catch();
	}
}

void LdapCtx::close() {
	$synchronized(this) {
		if (this->eventSupport != nullptr) {
			$nc(this->eventSupport)->cleanup();
			removeUnsolicited();
		}
		if (this->enumCount > 0) {
			this->closeRequested = true;
			return;
		}
		closeConnection(LdapCtx::SOFT_CLOSE);
	}
}

void LdapCtx::reconnect($ControlArray* connCtls) {
	$set(this, envprops, this->envprops == nullptr ? $new($Hashtable, 5, 0.75f) : $cast($Hashtable, $nc(this->envprops)->clone()));
	if (connCtls == nullptr) {
		$nc(this->envprops)->remove(LdapCtx::BIND_CONTROLS);
		$set(this, bindCtls, nullptr);
	} else {
		$nc(this->envprops)->put(LdapCtx::BIND_CONTROLS, $assignField(this, bindCtls, cloneControls(connCtls)));
	}
	this->sharable = false;
	ensureOpen();
}

$String* LdapCtx::getMechsAllowedToSendCredentials() {
	$init(LdapCtx);
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0)));
	return $System::getSecurityManager() == nullptr ? $cast($String, $nc(pa)->run()) : $cast($String, $AccessController::doPrivileged(pa));
}

$Set* LdapCtx::getMechsFromPropertyValue($String* propValue) {
	$init(LdapCtx);
	if (propValue == nullptr || $nc(propValue)->isBlank()) {
		return $Collections::emptySet();
	}
	return $cast($Set, $nc($($nc($($nc($($Arrays::stream($($nc(propValue)->split(","_s)))))->map(static_cast<$Function*>($$new(LdapCtx$$Lambda$trim$1)))))->filter($($Predicate::not$(static_cast<$Predicate*>($$new(LdapCtx$$Lambda$isBlank$2)))))))->collect($($Collectors::toUnmodifiableSet())));
}

bool LdapCtx::isConnectionEncrypted() {
	return this->hasLdapsScheme || $nc(this->clnt)->isUpgradedToStartTls();
}

void LdapCtx::ensureCanTransmitCredentials($String* authMechanism) {
	bool var$0 = "none"_s->equalsIgnoreCase(authMechanism);
	if (var$0 || "anonymous"_s->equalsIgnoreCase(authMechanism)) {
		return;
	}
	$var($String, allowedMechanismsOrTrue, $cast($String, $nc(this->envprops)->get(LdapCtx::ALLOWED_MECHS_SP)));
	bool useSpMechsCache = false;
	bool anyPropertyIsSet = LdapCtx::ALLOWED_MECHS_SP_VALUE != nullptr || allowedMechanismsOrTrue != nullptr;
	if (!isConnectionEncrypted() && (this->contextSeenStartTlsEnabled || anyPropertyIsSet)) {
		bool var$1 = "simple"_s->equalsIgnoreCase(authMechanism);
		$init($Context);
		if (var$1 && !$nc(this->envprops)->containsKey($Context::SECURITY_PRINCIPAL)) {
			return;
		}
		if (allowedMechanismsOrTrue == nullptr) {
			useSpMechsCache = true;
			$assign(allowedMechanismsOrTrue, LdapCtx::ALLOWED_MECHS_SP_VALUE);
		}
		if ("all"_s->equalsIgnoreCase(allowedMechanismsOrTrue)) {
			return;
		}
		$var($Set, allowedAuthMechs, useSpMechsCache ? LdapCtx::MECHS_ALLOWED_BY_SP : getMechsFromPropertyValue(allowedMechanismsOrTrue));
		if (!$nc(allowedAuthMechs)->contains(authMechanism)) {
			$throwNew($NamingException, LdapCtx::UNSECURED_CRED_TRANSMIT_MSG);
		}
	}
}

void LdapCtx::ensureOpen() {
	ensureOpen(false);
}

void LdapCtx::ensureOpen(bool startTLS) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->clnt == nullptr) {
				$set(this, schemaTrees, $new($Hashtable, 11, 0.75f));
				connect(startTLS);
			} else if (!this->sharable || startTLS) {
				$synchronized(this->clnt) {
					if (!$nc(this->clnt)->isLdapv3 || $nc(this->clnt)->referenceCount > 1 || $nc(this->clnt)->usingSaslStreams() || !$nc($nc(this->clnt)->conn)->useable) {
						closeConnection(LdapCtx::SOFT_CLOSE);
					}
				}
				$set(this, schemaTrees, $new($Hashtable, 11, 0.75f));
				connect(startTLS);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->sharable = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LdapCtx::connect(bool startTLS) {
	$var($String, user, nullptr);
	$var($Object, passwd, nullptr);
	$var($String, secProtocol, nullptr);
	$var($String, socketFactory, nullptr);
	$var($String, authMechanism, nullptr);
	$var($String, ver, nullptr);
	int32_t ldapVersion = 0;
	bool usePool = false;
	if (this->envprops != nullptr) {
		$init($Context);
		$assign(user, $cast($String, $nc(this->envprops)->get($Context::SECURITY_PRINCIPAL)));
		$assign(passwd, $nc(this->envprops)->get($Context::SECURITY_CREDENTIALS));
		$assign(ver, $cast($String, $nc(this->envprops)->get(LdapCtx::VERSION)));
		$assign(secProtocol, this->useSsl ? "ssl"_s : $cast($String, $nc(this->envprops)->get($Context::SECURITY_PROTOCOL)));
		$assign(socketFactory, $cast($String, $nc(this->envprops)->get(LdapCtx::SOCKET_FACTORY)));
		$assign(authMechanism, $cast($String, $nc(this->envprops)->get($Context::SECURITY_AUTHENTICATION)));
		usePool = "true"_s->equalsIgnoreCase($cast($String, $($nc(this->envprops)->get(LdapCtx::ENABLE_POOL))));
	}
	if (socketFactory == nullptr) {
		$assign(socketFactory, "ssl"_s->equals(secProtocol) ? LdapCtx::DEFAULT_SSL_FACTORY : ($String*)nullptr);
	}
	if (authMechanism == nullptr) {
		$assign(authMechanism, (user == nullptr) ? "none"_s : "simple"_s);
	}
	try {
		bool initial = (this->clnt == nullptr);
		if (initial) {
			ldapVersion = (ver != nullptr) ? $Integer::parseInt(ver) : LdapCtx::DEFAULT_LDAP_VERSION;
			$set(this, clnt, $LdapClient::getInstance(usePool, this->hostname, this->port_number, socketFactory, this->connectTimeout, this->readTimeout, this->trace, ldapVersion, authMechanism, this->bindCtls, secProtocol, user, passwd, this->envprops));
			this->contextSeenStartTlsEnabled |= $nc(this->clnt)->isUpgradedToStartTls();
			if ($nc(this->clnt)->authenticateCalled()) {
				return;
			}
		} else if (this->sharable && startTLS) {
			return;
		} else {
			ldapVersion = $LdapClient::LDAP_VERSION3;
		}
		$var($LdapResult, answer, nullptr);
		$synchronized($nc($nc(this->clnt)->conn)->startTlsLock) {
			ensureCanTransmitCredentials(authMechanism);
			$assign(answer, $nc(this->clnt)->authenticate(initial, user, passwd, ldapVersion, authMechanism, this->bindCtls, this->envprops));
		}
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			if (initial) {
				closeConnection(LdapCtx::HARD_CLOSE);
			}
			processReturnCode(answer);
		}
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw(e);
		}
		$var($String, referral, nullptr);
		$var($LdapURL, url, nullptr);
		$var($NamingException, saved_ex, nullptr);
		while (true) {
			if (($assign(referral, e->getNextReferral())) == nullptr) {
				if (saved_ex != nullptr) {
					$throw(($cast($NamingException, $(saved_ex->fillInStackTrace()))));
				} else {
					$throwNew($NamingException, "Internal error processing referral during connection"_s);
				}
			}
			$assign(url, $new($LdapURL, referral));
			$set(this, hostname, url->getHost());
			if ((this->hostname != nullptr) && ($nc(this->hostname)->charAt(0) == u'[')) {
				$set(this, hostname, $nc(this->hostname)->substring(1, $nc(this->hostname)->length() - 1));
			}
			this->port_number = url->getPort();
			try {
				connect(startTLS);
				break;
			} catch ($NamingException&) {
				$var($NamingException, ne, $catch());
				$assign(saved_ex, ne);
				continue;
			}
		}
	}
}

void LdapCtx::closeConnection(bool hardclose) {
	removeUnsolicited();
	if (this->clnt != nullptr) {
		$nc(this->clnt)->close(this->reqCtls, hardclose);
		$set(this, clnt, nullptr);
	}
}

void LdapCtx::incEnumCount() {
	$synchronized(this) {
		++this->enumCount;
	}
}

void LdapCtx::decEnumCount() {
	$synchronized(this) {
		--this->enumCount;
		if (this->enumCount == 0 && this->closeRequested) {
			try {
				close();
			} catch ($NamingException&) {
				$catch();
			}
		}
	}
}

void LdapCtx::processReturnCode($LdapResult* answer) {
	processReturnCode(answer, nullptr, this, nullptr, this->envprops, nullptr);
}

void LdapCtx::processReturnCode($LdapResult* answer, $Name* remainName) {
	$var($LdapResult, var$0, answer);
	$var($Name, var$1, ($$new($CompositeName))->add(this->currentDN));
	$var($Name, var$2, remainName);
	$var($Hashtable, var$3, this->envprops);
	processReturnCode(var$0, var$1, this, var$2, var$3, $(fullyQualifiedName(remainName)));
}

void LdapCtx::processReturnCode($LdapResult* res, $Name* resolvedName, Object$* resolvedObj, $Name* remainName, $Hashtable* envprops, $String* fullDN) {
	$var($String, msg, $LdapClient::getErrorMessage($nc(res)->status, res->errorMessage));
	$var($NamingException, e, nullptr);
	$var($LdapReferralException, r, nullptr);
	{
		$var($Vector, refs, nullptr)
		switch ($nc(res)->status) {
		case $LdapClient::LDAP_SUCCESS:
			{
				if (res->referrals != nullptr) {
					$assign(msg, "Unprocessed Continuation Reference(s)"_s);
					if (this->handleReferrals == $LdapClient::LDAP_REF_IGNORE) {
						$assign(e, $new($PartialResultException, msg));
						break;
					}
					int32_t contRefCount = $nc(res->referrals)->size();
					$var($LdapReferralException, head, nullptr);
					$var($LdapReferralException, ptr, nullptr);
					$assign(msg, "Continuation Reference"_s);
					for (int32_t i = 0; i < contRefCount; ++i) {
						$assign(r, $new($LdapReferralException, resolvedName, resolvedObj, remainName, msg, envprops, fullDN, this->handleReferrals, this->reqCtls));
						r->setReferralInfo($cast($Vector, $($nc(res->referrals)->elementAt(i))), true);
						if (this->hopCount > 1) {
							r->setHopCount(this->hopCount);
						}
						if (head == nullptr) {
							$assign(head, ($assign(ptr, r)));
						} else {
							$set($nc(ptr), nextReferralEx, r);
							$assign(ptr, r);
						}
					}
					$set(res, referrals, nullptr);
					if (res->refEx == nullptr) {
						$set(res, refEx, head);
					} else {
						$assign(ptr, res->refEx);
						while ($nc(ptr)->nextReferralEx != nullptr) {
							$assign(ptr, ptr->nextReferralEx);
						}
						$set($nc(ptr), nextReferralEx, head);
					}
					if (this->hopCount > this->referralHopLimit) {
						$var($NamingException, lee, $new($LimitExceededException, "Referral limit exceeded"_s));
						lee->setRootCause(r);
						$throw(lee);
					}
				}
				return;
			}
		case $LdapClient::LDAP_REFERRAL:
			{
				if (this->handleReferrals == $LdapClient::LDAP_REF_IGNORE) {
					$assign(e, $new($PartialResultException, msg));
					break;
				}
				$assign(r, $new($LdapReferralException, resolvedName, resolvedObj, remainName, msg, envprops, fullDN, this->handleReferrals, this->reqCtls));
				if (res->referrals == nullptr) {
					$assign(refs, nullptr);
				} else if (this->handleReferrals == $LdapClient::LDAP_REF_FOLLOW_SCHEME) {
					$assign(refs, $new($Vector));
					{
						$var($Iterator, i$, $nc(($cast($Vector, $($nc(res->referrals)->elementAt(0)))))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, s, $cast($String, i$->next()));
							{
								if ($nc(s)->startsWith("ldap:"_s)) {
									refs->add(s);
								}
							}
						}
					}
					if (refs->isEmpty()) {
						$assign(refs, nullptr);
					}
				} else {
					$assign(refs, $cast($Vector, $nc(res->referrals)->elementAt(0)));
				}
				$nc(r)->setReferralInfo(refs, false);
				if (this->hopCount > 1) {
					$nc(r)->setHopCount(this->hopCount);
				}
				if (this->hopCount > this->referralHopLimit) {
					$var($NamingException, lee, $new($LimitExceededException, "Referral limit exceeded"_s));
					lee->setRootCause(r);
					$assign(e, lee);
				} else {
					$assign(e, r);
				}
				break;
			}
		case $LdapClient::LDAP_PARTIAL_RESULTS:
			{
				if (this->handleReferrals == $LdapClient::LDAP_REF_IGNORE) {
					$assign(e, $new($PartialResultException, msg));
					break;
				}
				if ((res->errorMessage != nullptr) && (!$nc(res->errorMessage)->isEmpty())) {
					$set(res, referrals, extractURLs(res->errorMessage));
				} else {
					$assign(e, $new($PartialResultException, msg));
					break;
				}
				$assign(r, $new($LdapReferralException, resolvedName, resolvedObj, remainName, msg, envprops, fullDN, this->handleReferrals, this->reqCtls));
				if (this->hopCount > 1) {
					$nc(r)->setHopCount(this->hopCount);
				}
				bool var$0 = ((res->entries == nullptr) || ($nc(res->entries)->isEmpty()));
				if (var$0 && ((res->referrals != nullptr) && ($nc(res->referrals)->size() == 1))) {
					$nc(r)->setReferralInfo(res->referrals, false);
					if (this->hopCount > this->referralHopLimit) {
						$var($NamingException, lee, $new($LimitExceededException, "Referral limit exceeded"_s));
						lee->setRootCause(r);
						$assign(e, lee);
					} else {
						$assign(e, r);
					}
				} else {
					$nc(r)->setReferralInfo(res->referrals, true);
					$set(res, refEx, r);
					return;
				}
				break;
			}
		case $LdapClient::LDAP_INVALID_DN_SYNTAX:
			{}
		case $LdapClient::LDAP_NAMING_VIOLATION:
			{
				if (remainName != nullptr) {
					$assign(e, $new($InvalidNameException, $$str({$($of(remainName)->toString()), ": "_s, msg})));
				} else {
					$assign(e, $new($InvalidNameException, msg));
				}
				break;
			}
		default:
			{
				$assign(e, mapErrorCode(res->status, res->errorMessage));
				break;
			}
		}
	}
	$nc(e)->setResolvedName(resolvedName);
	e->setResolvedObj(resolvedObj);
	e->setRemainingName(remainName);
	$throw(e);
}

$NamingException* LdapCtx::mapErrorCode(int32_t errorCode, $String* errorMessage) {
	$init(LdapCtx);
	if (errorCode == $LdapClient::LDAP_SUCCESS) {
		return nullptr;
	}
	$var($NamingException, e, nullptr);
	$var($String, message, $LdapClient::getErrorMessage(errorCode, errorMessage));
	switch (errorCode) {
	case $LdapClient::LDAP_ALIAS_DEREFERENCING_PROBLEM:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_ALIAS_PROBLEM:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_ATTRIBUTE_OR_VALUE_EXISTS:
		{
			$assign(e, $new($AttributeInUseException, message));
			break;
		}
	case $LdapClient::LDAP_AUTH_METHOD_NOT_SUPPORTED:
		{}
	case $LdapClient::LDAP_CONFIDENTIALITY_REQUIRED:
		{}
	case $LdapClient::LDAP_STRONG_AUTH_REQUIRED:
		{}
	case $LdapClient::LDAP_INAPPROPRIATE_AUTHENTICATION:
		{
			$assign(e, $new($AuthenticationNotSupportedException, message));
			break;
		}
	case $LdapClient::LDAP_ENTRY_ALREADY_EXISTS:
		{
			$assign(e, $new($NameAlreadyBoundException, message));
			break;
		}
	case $LdapClient::LDAP_INVALID_CREDENTIALS:
		{}
	case $LdapClient::LDAP_SASL_BIND_IN_PROGRESS:
		{
			$assign(e, $new($AuthenticationException, message));
			break;
		}
	case $LdapClient::LDAP_INAPPROPRIATE_MATCHING:
		{
			$assign(e, $new($InvalidSearchFilterException, message));
			break;
		}
	case $LdapClient::LDAP_INSUFFICIENT_ACCESS_RIGHTS:
		{
			$assign(e, $new($NoPermissionException, message));
			break;
		}
	case $LdapClient::LDAP_INVALID_ATTRIBUTE_SYNTAX:
		{}
	case $LdapClient::LDAP_CONSTRAINT_VIOLATION:
		{
			$assign(e, $new($InvalidAttributeValueException, message));
			break;
		}
	case $LdapClient::LDAP_LOOP_DETECT:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_NO_SUCH_ATTRIBUTE:
		{
			$assign(e, $new($NoSuchAttributeException, message));
			break;
		}
	case $LdapClient::LDAP_NO_SUCH_OBJECT:
		{
			$assign(e, $new($NameNotFoundException, message));
			break;
		}
	case $LdapClient::LDAP_OBJECT_CLASS_MODS_PROHIBITED:
		{}
	case $LdapClient::LDAP_OBJECT_CLASS_VIOLATION:
		{}
	case $LdapClient::LDAP_NOT_ALLOWED_ON_RDN:
		{
			$assign(e, $new($SchemaViolationException, message));
			break;
		}
	case $LdapClient::LDAP_NOT_ALLOWED_ON_NON_LEAF:
		{
			$assign(e, $new($ContextNotEmptyException, message));
			break;
		}
	case $LdapClient::LDAP_OPERATIONS_ERROR:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_OTHER:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_PROTOCOL_ERROR:
		{
			$assign(e, $new($CommunicationException, message));
			break;
		}
	case $LdapClient::LDAP_SIZE_LIMIT_EXCEEDED:
		{
			$assign(e, $new($SizeLimitExceededException, message));
			break;
		}
	case $LdapClient::LDAP_TIME_LIMIT_EXCEEDED:
		{
			$assign(e, $new($TimeLimitExceededException, message));
			break;
		}
	case $LdapClient::LDAP_UNAVAILABLE_CRITICAL_EXTENSION:
		{
			$assign(e, $new($OperationNotSupportedException, message));
			break;
		}
	case $LdapClient::LDAP_UNAVAILABLE:
		{}
	case $LdapClient::LDAP_BUSY:
		{
			$assign(e, $new($ServiceUnavailableException, message));
			break;
		}
	case $LdapClient::LDAP_UNDEFINED_ATTRIBUTE_TYPE:
		{
			$assign(e, $new($InvalidAttributeIdentifierException, message));
			break;
		}
	case $LdapClient::LDAP_UNWILLING_TO_PERFORM:
		{
			$assign(e, $new($OperationNotSupportedException, message));
			break;
		}
	case $LdapClient::LDAP_COMPARE_FALSE:
		{}
	case $LdapClient::LDAP_COMPARE_TRUE:
		{}
	case $LdapClient::LDAP_IS_LEAF:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_ADMIN_LIMIT_EXCEEDED:
		{
			$assign(e, $new($LimitExceededException, message));
			break;
		}
	case $LdapClient::LDAP_REFERRAL:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_PARTIAL_RESULTS:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	case $LdapClient::LDAP_INVALID_DN_SYNTAX:
		{}
	case $LdapClient::LDAP_NAMING_VIOLATION:
		{
			$assign(e, $new($InvalidNameException, message));
			break;
		}
	default:
		{
			$assign(e, $new($NamingException, message));
			break;
		}
	}
	return e;
}

$ExtendedResponse* LdapCtx::extendedOperation($ExtendedRequest* request) {
	bool startTLS = ($nc($($nc(request)->getID()))->equals(LdapCtx::STARTTLS_REQ_OID));
	ensureOpen(startTLS);
	try {
		$var($String, var$0, request->getID());
		$var($LdapResult, answer, $nc(this->clnt)->extendedOp(var$0, $(request->getEncodedValue()), this->reqCtls, startTLS));
		$set(this, respCtls, $nc(answer)->resControls);
		if (answer->status != $LdapClient::LDAP_SUCCESS) {
			processReturnCode(answer, $$new($CompositeName));
		}
		int32_t len = (answer->extensionValue == nullptr) ? 0 : $nc(answer->extensionValue)->length;
		$var($ExtendedResponse, er, request->createExtendedResponse(answer->extensionId, answer->extensionValue, 0, len));
		if ($instanceOf($StartTlsResponseImpl, er)) {
			$var($String, domainName, ($cast($String, (this->envprops != nullptr ? $nc(this->envprops)->get(LdapCtx::DOMAIN_NAME) : ($Object*)nullptr))));
			$nc(($cast($StartTlsResponseImpl, er)))->setConnection($nc(this->clnt)->conn, domainName);
			this->contextSeenStartTlsEnabled |= startTLS;
		}
		return er;
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		if (this->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw(e);
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(e)->getReferralContext(this->envprops, this->bindCtls)));
			{
				$var($Throwable, var$1, nullptr);
				$var($ExtendedResponse, var$3, nullptr);
				bool return$2 = false;
				bool continue$4 = false;
				try {
					try {
						$assign(var$3, $nc(refCtx)->extendedOperation(request));
						return$2 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(e, re);
						// continue;
						continue$4 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$1, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
				if (continue$4) {
					continue;
				}
				if (return$2) {
					return var$3;
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, e2, $new($CommunicationException, $(e->getMessage())));
		e2->setRootCause(e);
		$throw(e2);
	}
	$shouldNotReachHere();
}

void LdapCtx::setRequestControls($ControlArray* reqCtls) {
	if (this->handleReferrals == $LdapClient::LDAP_REF_IGNORE) {
		$set(this, reqCtls, addControl(reqCtls, LdapCtx::manageReferralControl));
	} else {
		$set(this, reqCtls, cloneControls(reqCtls));
	}
}

$ControlArray* LdapCtx::getRequestControls() {
	return cloneControls(this->reqCtls);
}

$ControlArray* LdapCtx::getConnectControls() {
	return cloneControls(this->bindCtls);
}

$ControlArray* LdapCtx::getResponseControls() {
	return (this->respCtls != nullptr) ? convertControls(this->respCtls) : ($ControlArray*)nullptr;
}

$ControlArray* LdapCtx::convertControls($Vector* ctls) {
	int32_t count = $nc(ctls)->size();
	if (count == 0) {
		return nullptr;
	}
	$var($ControlArray, controls, $new($ControlArray, count));
	for (int32_t i = 0; i < count; ++i) {
		controls->set(i, $($nc(LdapCtx::myResponseControlFactory)->getControlInstance($cast($Control, $(ctls->elementAt(i))))));
		if (controls->get(i) == nullptr) {
			controls->set(i, $($ControlFactory::getControlInstance($cast($Control, $(ctls->elementAt(i))), static_cast<$Context*>(static_cast<$PartialCompositeContext*>(static_cast<$ComponentContext*>(static_cast<$AtomicContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this)))))), this->envprops)));
		}
	}
	return controls;
}

$ControlArray* LdapCtx::addControl($ControlArray* prevCtls, $Control* addition) {
	$init(LdapCtx);
	if (prevCtls == nullptr) {
		return $new($ControlArray, {addition});
	}
	int32_t found = findControl(prevCtls, addition);
	if (found != -1) {
		return prevCtls;
	}
	$var($ControlArray, newCtls, $new($ControlArray, $nc(prevCtls)->length + 1));
	$System::arraycopy(prevCtls, 0, newCtls, 0, prevCtls->length);
	newCtls->set(prevCtls->length, addition);
	return newCtls;
}

int32_t LdapCtx::findControl($ControlArray* ctls, $Control* target) {
	$init(LdapCtx);
	for (int32_t i = 0; i < $nc(ctls)->length; ++i) {
		if (ctls->get(i) == target) {
			return i;
		}
	}
	return -1;
}

$ControlArray* LdapCtx::removeControl($ControlArray* prevCtls, $Control* target) {
	$init(LdapCtx);
	if (prevCtls == nullptr) {
		return nullptr;
	}
	int32_t found = findControl(prevCtls, target);
	if (found == -1) {
		return prevCtls;
	}
	$var($ControlArray, newCtls, $new($ControlArray, $nc(prevCtls)->length - 1));
	$System::arraycopy(prevCtls, 0, newCtls, 0, found);
	$System::arraycopy(prevCtls, found + 1, newCtls, found, prevCtls->length - found - 1);
	return newCtls;
}

$ControlArray* LdapCtx::cloneControls($ControlArray* ctls) {
	$init(LdapCtx);
	if (ctls == nullptr) {
		return nullptr;
	}
	$var($ControlArray, copiedCtls, $new($ControlArray, $nc(ctls)->length));
	$System::arraycopy(ctls, 0, copiedCtls, 0, ctls->length);
	return copiedCtls;
}

void LdapCtx::addNamingListener($Name* nm, int32_t scope, $NamingListener* l) {
	addNamingListener($(getTargetName(nm)), scope, l);
}

void LdapCtx::addNamingListener($String* nm, int32_t scope, $NamingListener* l) {
	if (this->eventSupport == nullptr) {
		$set(this, eventSupport, $new($EventSupport, this));
	}
	$nc(this->eventSupport)->addNamingListener($(getTargetName($$new($CompositeName, nm))), scope, l);
	if ($instanceOf($UnsolicitedNotificationListener, l) && !this->unsolicited) {
		addUnsolicited();
	}
}

void LdapCtx::removeNamingListener($NamingListener* l) {
	if (this->eventSupport == nullptr) {
		return;
	}
	$nc(this->eventSupport)->removeNamingListener(l);
	if ($instanceOf($UnsolicitedNotificationListener, l) && !$nc(this->eventSupport)->hasUnsolicited()) {
		removeUnsolicited();
	}
}

void LdapCtx::addNamingListener($String* nm, $String* filter, $SearchControls* ctls, $NamingListener* l) {
	if (this->eventSupport == nullptr) {
		$set(this, eventSupport, $new($EventSupport, this));
	}
	$var($String, var$0, getTargetName($$new($CompositeName, nm)));
	$var($String, var$1, filter);
	$nc(this->eventSupport)->addNamingListener(var$0, var$1, $(cloneSearchControls(ctls)), l);
	if ($instanceOf($UnsolicitedNotificationListener, l) && !this->unsolicited) {
		addUnsolicited();
	}
}

void LdapCtx::addNamingListener($Name* nm, $String* filter, $SearchControls* ctls, $NamingListener* l) {
	addNamingListener($(getTargetName(nm)), filter, ctls, l);
}

void LdapCtx::addNamingListener($Name* nm, $String* filter, $ObjectArray* filterArgs, $SearchControls* ctls, $NamingListener* l) {
	addNamingListener($(getTargetName(nm)), filter, filterArgs, ctls, l);
}

void LdapCtx::addNamingListener($String* nm, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* ctls, $NamingListener* l) {
	$var($String, strfilter, $SearchFilter::format(filterExpr, filterArgs));
	addNamingListener($(getTargetName($$new($CompositeName, nm))), strfilter, ctls, l);
}

bool LdapCtx::targetMustExist() {
	return true;
}

$String* LdapCtx::getTargetName($Name* nm) {
	$init(LdapCtx);
	if ($instanceOf($CompositeName, nm)) {
		if ($nc(nm)->size() > 1) {
			$throwNew($InvalidNameException, $$str({"Target cannot span multiple namespaces: "_s, nm}));
		} else if (nm->isEmpty()) {
			return ""_s;
		} else {
			return nm->get(0);
		}
	} else {
		return $nc($of(nm))->toString();
	}
}

void LdapCtx::addUnsolicited() {
	ensureOpen();
	$synchronized(this->eventSupport) {
		$nc(this->clnt)->addUnsolicited(this);
		this->unsolicited = true;
	}
}

void LdapCtx::removeUnsolicited() {
	if (this->eventSupport == nullptr) {
		return;
	}
	$synchronized(this->eventSupport) {
		if (this->unsolicited && this->clnt != nullptr) {
			$nc(this->clnt)->removeUnsolicited(this);
		}
		this->unsolicited = false;
	}
}

void LdapCtx::fireUnsolicited(Object$* obj) {
	$synchronized(this->eventSupport) {
		if (this->unsolicited) {
			$nc(this->eventSupport)->fireUnsolicited(obj);
			if ($instanceOf($NamingException, obj)) {
				this->unsolicited = false;
			}
		}
	}
}

$String* LdapCtx::lambda$getMechsAllowedToSendCredentials$0() {
	$init(LdapCtx);
	return $System::getProperty(LdapCtx::ALLOWED_MECHS_SP);
}

void clinit$LdapCtx($Class* class$) {
	$assignStatic(LdapCtx::DEFAULT_HOST, "localhost"_s);
	$assignStatic(LdapCtx::DEFAULT_SSL_FACTORY, "javax.net.ssl.SSLSocketFactory"_s);
	$assignStatic(LdapCtx::STARTTLS_REQ_OID, "1.3.6.1.4.1.1466.20037"_s);
	$assignStatic(LdapCtx::VERSION, "java.naming.ldap.version"_s);
	$assignStatic(LdapCtx::BINARY_ATTRIBUTES, "java.naming.ldap.attributes.binary"_s);
	$assignStatic(LdapCtx::DELETE_RDN, "java.naming.ldap.deleteRDN"_s);
	$assignStatic(LdapCtx::DEREF_ALIASES, "java.naming.ldap.derefAliases"_s);
	$assignStatic(LdapCtx::TYPES_ONLY, "java.naming.ldap.typesOnly"_s);
	$assignStatic(LdapCtx::REF_SEPARATOR, "java.naming.ldap.ref.separator"_s);
	$assignStatic(LdapCtx::SOCKET_FACTORY, "java.naming.ldap.factory.socket"_s);
	$assignStatic(LdapCtx::BIND_CONTROLS, "java.naming.ldap.control.connect"_s);
	$assignStatic(LdapCtx::REFERRAL_LIMIT, "java.naming.ldap.referral.limit"_s);
	$assignStatic(LdapCtx::TRACE_BER, "com.sun.jndi.ldap.trace.ber"_s);
	$assignStatic(LdapCtx::NETSCAPE_SCHEMA_BUG, "com.sun.jndi.ldap.netscape.schemaBugs"_s);
	$assignStatic(LdapCtx::OLD_NETSCAPE_SCHEMA_BUG, "com.sun.naming.netscape.schemaBugs"_s);
	$assignStatic(LdapCtx::CONNECT_TIMEOUT, "com.sun.jndi.ldap.connect.timeout"_s);
	$assignStatic(LdapCtx::READ_TIMEOUT, "com.sun.jndi.ldap.read.timeout"_s);
	$assignStatic(LdapCtx::ENABLE_POOL, "com.sun.jndi.ldap.connect.pool"_s);
	$assignStatic(LdapCtx::DOMAIN_NAME, "com.sun.jndi.ldap.domainname"_s);
	$assignStatic(LdapCtx::WAIT_FOR_REPLY, "com.sun.jndi.ldap.search.waitForReply"_s);
	$assignStatic(LdapCtx::REPLY_QUEUE_SIZE, "com.sun.jndi.ldap.search.replyQueueSize"_s);
	$assignStatic(LdapCtx::ALLOWED_MECHS_SP, "jdk.jndi.ldap.mechsAllowedToSendCredentials"_s);
	$assignStatic(LdapCtx::UNSECURED_CRED_TRANSMIT_MSG, "Transmission of credentials over unsecured connection is not allowed"_s);
	$assignStatic(LdapCtx::SCHEMA_ATTRIBUTES, $new($StringArray, {
		"objectClasses"_s,
		"attributeTypes"_s,
		"matchingRules"_s,
		"ldapSyntaxes"_s
	}));
	$assignStatic(LdapCtx::ALLOWED_MECHS_SP_VALUE, LdapCtx::getMechsAllowedToSendCredentials());
	$assignStatic(LdapCtx::MECHS_ALLOWED_BY_SP, LdapCtx::getMechsFromPropertyValue(LdapCtx::ALLOWED_MECHS_SP_VALUE));
	$assignStatic(LdapCtx::parser, $new($LdapNameParser));
	$assignStatic(LdapCtx::myResponseControlFactory, $new($DefaultResponseControlFactory));
	$assignStatic(LdapCtx::manageReferralControl, $new($ManageReferralControl, false));
	$assignStatic(LdapCtx::EMPTY_SCHEMA, $new($HierMemDirCtx));
	{
		$nc(LdapCtx::EMPTY_SCHEMA)->setReadOnly($$new($SchemaViolationException, "Cannot update schema object"_s));
	}
}

LdapCtx::LdapCtx() {
}

$Class* LdapCtx::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::classInfo$.name)) {
			return LdapCtx$$Lambda$lambda$getMechsAllowedToSendCredentials$0::load$(name, initialize);
		}
		if (name->equals(LdapCtx$$Lambda$trim$1::classInfo$.name)) {
			return LdapCtx$$Lambda$trim$1::load$(name, initialize);
		}
		if (name->equals(LdapCtx$$Lambda$isBlank$2::classInfo$.name)) {
			return LdapCtx$$Lambda$isBlank$2::load$(name, initialize);
		}
	}
	$loadClass(LdapCtx, name, initialize, &_LdapCtx_ClassInfo_, clinit$LdapCtx, allocate$LdapCtx);
	return class$;
}

$Class* LdapCtx::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com