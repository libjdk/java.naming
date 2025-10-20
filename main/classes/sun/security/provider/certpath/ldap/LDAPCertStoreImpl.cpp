#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
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
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/cert/CRL.h>
#include <java/security/cert/CRLException.h>
#include <java/security/cert/CertStoreException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/X509CRL.h>
#include <java/security/cert/X509CRLSelector.h>
#include <java/security/cert/X509CertSelector.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/InitialLdapContext.h>
#include <javax/naming/ldap/LdapContext.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/provider/certpath/X509CertificatePair.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest.h>
#include <sun/security/util/Cache.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ARL
#undef BB0
#undef CA_CERT
#undef CRL
#undef CROSS_CERT
#undef DEFAULT_CACHE_LIFETIME
#undef DEFAULT_CACHE_SIZE
#undef EMPTY_ATTRIBUTES
#undef INITIAL_CONTEXT_FACTORY
#undef LIFETIME
#undef PROP_DISABLE_APP_RESOURCE_FILES
#undef PROP_LIFETIME
#undef PROVIDER_URL
#undef REFERRAL
#undef STRING0
#undef USER_CERT

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $byteArray2 = $Array<int8_t, 2>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CRL = ::java::security::cert::CRL;
using $CRLException = ::java::security::cert::CRLException;
using $CertStoreException = ::java::security::cert::CertStoreException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $X509CRL = ::java::security::cert::X509CRL;
using $X509CRLSelector = ::java::security::cert::X509CRLSelector;
using $X509CertSelector = ::java::security::cert::X509CertSelector;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Context = ::javax::naming::Context;
using $NamingException = ::javax::naming::NamingException;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $InitialLdapContext = ::javax::naming::ldap::InitialLdapContext;
using $LdapContext = ::javax::naming::ldap::LdapContext;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $X509CertificatePair = ::sun::security::provider::certpath::X509CertificatePair;
using $LDAPCertStoreImpl$LDAPRequest = ::sun::security::provider::certpath::ldap::LDAPCertStoreImpl$LDAPRequest;
using $Cache = ::sun::security::util::Cache;
using $Debug = ::sun::security::util::Debug;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1 : public $PrivilegedAction {
	$class(LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LDAPCertStoreImpl::lambda$createInitialDirContext$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::*)()>(&LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.provider.certpath.ldap.LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::load$($String* name, bool initialize) {
	$loadClass(LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::class$ = nullptr;

class LDAPCertStoreImpl$$Lambda$lambda$static$0$1 : public $PrivilegedAction {
	$class(LDAPCertStoreImpl$$Lambda$lambda$static$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LDAPCertStoreImpl::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LDAPCertStoreImpl$$Lambda$lambda$static$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LDAPCertStoreImpl$$Lambda$lambda$static$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LDAPCertStoreImpl$$Lambda$lambda$static$0$1::*)()>(&LDAPCertStoreImpl$$Lambda$lambda$static$0$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LDAPCertStoreImpl$$Lambda$lambda$static$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.provider.certpath.ldap.LDAPCertStoreImpl$$Lambda$lambda$static$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LDAPCertStoreImpl$$Lambda$lambda$static$0$1::load$($String* name, bool initialize) {
	$loadClass(LDAPCertStoreImpl$$Lambda$lambda$static$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LDAPCertStoreImpl$$Lambda$lambda$static$0$1::class$ = nullptr;

$FieldInfo _LDAPCertStoreImpl_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, debug)},
	{"USER_CERT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, USER_CERT)},
	{"CA_CERT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, CA_CERT)},
	{"CROSS_CERT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, CROSS_CERT)},
	{"CRL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, CRL)},
	{"ARL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, ARL)},
	{"STRING0", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, STRING0)},
	{"BB0", "[[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, BB0)},
	{"EMPTY_ATTRIBUTES", "Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, EMPTY_ATTRIBUTES)},
	{"DEFAULT_CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LDAPCertStoreImpl, DEFAULT_CACHE_SIZE)},
	{"DEFAULT_CACHE_LIFETIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LDAPCertStoreImpl, DEFAULT_CACHE_LIFETIME)},
	{"LIFETIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, LIFETIME)},
	{"PROP_LIFETIME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, PROP_LIFETIME)},
	{"PROP_DISABLE_APP_RESOURCE_FILES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LDAPCertStoreImpl, PROP_DISABLE_APP_RESOURCE_FILES)},
	{"cf", "Ljava/security/cert/CertificateFactory;", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, cf)},
	{"ctx", "Ljavax/naming/ldap/LdapContext;", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, ctx)},
	{"communicationError", "Z", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, communicationError)},
	{"prefetchCRLs", "Z", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, prefetchCRLs)},
	{"valueCache", "Lsun/security/util/Cache;", "Lsun/security/util/Cache<Ljava/lang/String;[[B>;", $PRIVATE | $FINAL, $field(LDAPCertStoreImpl, valueCache)},
	{"cacheHits", "I", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, cacheHits)},
	{"cacheMisses", "I", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, cacheMisses)},
	{"requests", "I", nullptr, $PRIVATE, $field(LDAPCertStoreImpl, requests)},
	{}
};

$MethodInfo _LDAPCertStoreImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(LDAPCertStoreImpl::*)($String*,int32_t)>(&LDAPCertStoreImpl::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"createInitialDirContext", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(LDAPCertStoreImpl::*)($String*,int32_t)>(&LDAPCertStoreImpl::createInitialDirContext)), "java.security.InvalidAlgorithmParameterException"},
	{"getCRLs", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/lang/String;Ljava/security/cert/X509CRLSelector;)Ljava/util/Collection;", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/lang/String;Ljava/security/cert/X509CRLSelector;)Ljava/util/Collection<Ljava/security/cert/X509CRL;>;", $PRIVATE, $method(static_cast<$Collection*(LDAPCertStoreImpl::*)($LDAPCertStoreImpl$LDAPRequest*,$String*,$X509CRLSelector*)>(&LDAPCertStoreImpl::getCRLs)), "java.security.cert.CertStoreException"},
	{"getCRLs", "(Ljava/security/cert/X509CRLSelector;Ljava/lang/String;)Ljava/util/Collection;", "(Ljava/security/cert/X509CRLSelector;Ljava/lang/String;)Ljava/util/Collection<Ljava/security/cert/X509CRL;>;", $SYNCHRONIZED, $method(static_cast<$Collection*(LDAPCertStoreImpl::*)($X509CRLSelector*,$String*)>(&LDAPCertStoreImpl::getCRLs)), "java.security.cert.CertStoreException"},
	{"getCertPairs", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/lang/String;)Ljava/util/Collection;", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/lang/String;)Ljava/util/Collection<Lsun/security/provider/certpath/X509CertificatePair;>;", $PRIVATE, $method(static_cast<$Collection*(LDAPCertStoreImpl::*)($LDAPCertStoreImpl$LDAPRequest*,$String*)>(&LDAPCertStoreImpl::getCertPairs)), "java.security.cert.CertStoreException"},
	{"getCertificates", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/lang/String;Ljava/security/cert/X509CertSelector;)Ljava/util/Collection;", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/lang/String;Ljava/security/cert/X509CertSelector;)Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;", $PRIVATE, $method(static_cast<$Collection*(LDAPCertStoreImpl::*)($LDAPCertStoreImpl$LDAPRequest*,$String*,$X509CertSelector*)>(&LDAPCertStoreImpl::getCertificates)), "java.security.cert.CertStoreException"},
	{"getCertificates", "(Ljava/security/cert/X509CertSelector;Ljava/lang/String;)Ljava/util/Collection;", "(Ljava/security/cert/X509CertSelector;Ljava/lang/String;)Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;", $SYNCHRONIZED, $method(static_cast<$Collection*(LDAPCertStoreImpl::*)($X509CertSelector*,$String*)>(&LDAPCertStoreImpl::getCertificates)), "java.security.cert.CertStoreException"},
	{"getMatchingCrossCerts", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/security/cert/X509CertSelector;Ljava/security/cert/X509CertSelector;)Ljava/util/Collection;", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest;Ljava/security/cert/X509CertSelector;Ljava/security/cert/X509CertSelector;)Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;", $PRIVATE, $method(static_cast<$Collection*(LDAPCertStoreImpl::*)($LDAPCertStoreImpl$LDAPRequest*,$X509CertSelector*,$X509CertSelector*)>(&LDAPCertStoreImpl::getMatchingCrossCerts)), "java.security.cert.CertStoreException"},
	{"lambda$createInitialDirContext$1", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&LDAPCertStoreImpl::lambda$createInitialDirContext$1))},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&LDAPCertStoreImpl::lambda$static$0))},
	{}
};

$InnerClassInfo _LDAPCertStoreImpl_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ldap.LDAPCertStoreImpl$LDAPRequest", "sun.security.provider.certpath.ldap.LDAPCertStoreImpl", "LDAPRequest", $PRIVATE},
	{}
};

$ClassInfo _LDAPCertStoreImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.ldap.LDAPCertStoreImpl",
	"java.lang.Object",
	nullptr,
	_LDAPCertStoreImpl_FieldInfo_,
	_LDAPCertStoreImpl_MethodInfo_,
	nullptr,
	nullptr,
	_LDAPCertStoreImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ldap.LDAPCertStoreImpl$LDAPRequest"
};

$Object* allocate$LDAPCertStoreImpl($Class* clazz) {
	return $of($alloc(LDAPCertStoreImpl));
}

$Debug* LDAPCertStoreImpl::debug = nullptr;

$String* LDAPCertStoreImpl::USER_CERT = nullptr;
$String* LDAPCertStoreImpl::CA_CERT = nullptr;
$String* LDAPCertStoreImpl::CROSS_CERT = nullptr;
$String* LDAPCertStoreImpl::CRL = nullptr;
$String* LDAPCertStoreImpl::ARL = nullptr;
$StringArray* LDAPCertStoreImpl::STRING0 = nullptr;
$byteArray2* LDAPCertStoreImpl::BB0 = nullptr;
$Attributes* LDAPCertStoreImpl::EMPTY_ATTRIBUTES = nullptr;
int32_t LDAPCertStoreImpl::LIFETIME = 0;
$String* LDAPCertStoreImpl::PROP_LIFETIME = nullptr;
$String* LDAPCertStoreImpl::PROP_DISABLE_APP_RESOURCE_FILES = nullptr;

void LDAPCertStoreImpl::init$($String* serverName, int32_t port) {
	this->communicationError = false;
	this->prefetchCRLs = false;
	this->cacheHits = 0;
	this->cacheMisses = 0;
	this->requests = 0;
	createInitialDirContext(serverName, port);
	try {
		$set(this, cf, $CertificateFactory::getInstance("X.509"_s));
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		$throwNew($InvalidAlgorithmParameterException, "unable to create CertificateFactory for X.509"_s);
	}
	if (LDAPCertStoreImpl::LIFETIME == 0) {
		$set(this, valueCache, $Cache::newNullCache());
	} else if (LDAPCertStoreImpl::LIFETIME < 0) {
		$set(this, valueCache, $Cache::newSoftMemoryCache(LDAPCertStoreImpl::DEFAULT_CACHE_SIZE));
	} else {
		$set(this, valueCache, $Cache::newSoftMemoryCache(LDAPCertStoreImpl::DEFAULT_CACHE_SIZE, LDAPCertStoreImpl::LIFETIME));
	}
}

void LDAPCertStoreImpl::createInitialDirContext($String* server, int32_t port) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, url, $str({"ldap://"_s, server, ":"_s, $$str(port)}));
	$var($Hashtable, env, $new($Hashtable));
	$init($Context);
	env->put($Context::INITIAL_CONTEXT_FACTORY, "com.sun.jndi.ldap.LdapCtxFactory"_s);
	env->put($Context::PROVIDER_URL, url);
	bool disableAppResourceFiles = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1)))))))->booleanValue();
	if (disableAppResourceFiles) {
		if (LDAPCertStoreImpl::debug != nullptr) {
			$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore disabling app resource files"_s);
		}
		env->put("com.sun.naming.disable.app.resource.files"_s, "true"_s);
	}
	try {
		$set(this, ctx, $new($InitialLdapContext, env, nullptr));
		$nc(this->ctx)->addToEnvironment($Context::REFERRAL, "throw"_s);
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		if (LDAPCertStoreImpl::debug != nullptr) {
			$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.engineInit about to throw InvalidAlgorithmParameterException"_s);
			e->printStackTrace();
		}
		$var($Exception, ee, $new($InvalidAlgorithmParameterException, "unable to create InitialDirContext using supplied parameters"_s));
		ee->initCause(e);
		$throw($cast($InvalidAlgorithmParameterException, ee));
	}
}

$Collection* LDAPCertStoreImpl::getCertificates($LDAPCertStoreImpl$LDAPRequest* request, $String* id, $X509CertSelector* sel) {
	$useLocalCurrentObjectStackCache();
	$var($byteArray2, encodedCert, nullptr);
	try {
		$assign(encodedCert, $nc(request)->getValues(id));
	} catch ($NamingException&) {
		$var($NamingException, namingEx, $catch());
		$throwNew($CertStoreException, static_cast<$Throwable*>(namingEx));
	}
	int32_t n = $nc(encodedCert)->length;
	if (n == 0) {
		return $Collections::emptySet();
	}
	$var($List, certs, $new($ArrayList, n));
	for (int32_t i = 0; i < n; ++i) {
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, encodedCert->get(i)));
		try {
			$var($Certificate, cert, $nc(this->cf)->generateCertificate(bais));
			if ($nc(sel)->match(cert)) {
				certs->add($cast($X509Certificate, cert));
			}
		} catch ($CertificateException&) {
			$var($CertificateException, e, $catch());
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.getCertificates() encountered exception while parsing cert, skipping the bad data: "_s);
				$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
				$nc(LDAPCertStoreImpl::debug)->println($$str({"[ "_s, $(encoder->encodeBuffer(encodedCert->get(i))), " ]"_s}));
			}
		}
	}
	return certs;
}

$Collection* LDAPCertStoreImpl::getCertPairs($LDAPCertStoreImpl$LDAPRequest* request, $String* id) {
	$useLocalCurrentObjectStackCache();
	$var($byteArray2, encodedCertPair, nullptr);
	try {
		$assign(encodedCertPair, $nc(request)->getValues(id));
	} catch ($NamingException&) {
		$var($NamingException, namingEx, $catch());
		$throwNew($CertStoreException, static_cast<$Throwable*>(namingEx));
	}
	int32_t n = $nc(encodedCertPair)->length;
	if (n == 0) {
		return $Collections::emptySet();
	}
	$var($List, certPairs, $new($ArrayList, n));
	for (int32_t i = 0; i < n; ++i) {
		try {
			$var($X509CertificatePair, certPair, $X509CertificatePair::generateCertificatePair(encodedCertPair->get(i)));
			certPairs->add(certPair);
		} catch ($CertificateException&) {
			$var($CertificateException, e, $catch());
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.getCertPairs() encountered exception while parsing cert, skipping the bad data: "_s);
				$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
				$nc(LDAPCertStoreImpl::debug)->println($$str({"[ "_s, $(encoder->encodeBuffer(encodedCertPair->get(i))), " ]"_s}));
			}
		}
	}
	return certPairs;
}

$Collection* LDAPCertStoreImpl::getMatchingCrossCerts($LDAPCertStoreImpl$LDAPRequest* request, $X509CertSelector* forward, $X509CertSelector* reverse) {
	$useLocalCurrentObjectStackCache();
	$var($Collection, certPairs, getCertPairs(request, LDAPCertStoreImpl::CROSS_CERT));
	$var($ArrayList, matchingCerts, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(certPairs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($X509CertificatePair, certPair, $cast($X509CertificatePair, i$->next()));
			{
				$var($X509Certificate, cert, nullptr);
				if (forward != nullptr) {
					$assign(cert, $nc(certPair)->getForward());
					if ((cert != nullptr) && forward->match(cert)) {
						matchingCerts->add(cert);
					}
				}
				if (reverse != nullptr) {
					$assign(cert, $nc(certPair)->getReverse());
					if ((cert != nullptr) && reverse->match(cert)) {
						matchingCerts->add(cert);
					}
				}
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(matchingCerts)));
}

$Collection* LDAPCertStoreImpl::getCertificates($X509CertSelector* xsel, $String* ldapDN$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, ldapDN, ldapDN$renamed);
		if (ldapDN == nullptr) {
			$var($X500Principal, subject, $nc(xsel)->getSubject());
			$assign(ldapDN, subject == nullptr ? ($String*)nullptr : $nc(subject)->getName());
		}
		int32_t basicConstraints = $nc(xsel)->getBasicConstraints();
		$var($X500Principal, issuer, xsel->getIssuer());
		$var($HashSet, certs, $new($HashSet));
		if (LDAPCertStoreImpl::debug != nullptr) {
			$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCertificates() basicConstraints: "_s, $$str(basicConstraints)}));
		}
		if (ldapDN != nullptr) {
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.engineGetCertificates()  subject is not null"_s);
			}
			$var($LDAPCertStoreImpl$LDAPRequest, request, $new($LDAPCertStoreImpl$LDAPRequest, this, ldapDN));
			if (basicConstraints > -2) {
				request->addRequestedAttribute(LDAPCertStoreImpl::CROSS_CERT);
				request->addRequestedAttribute(LDAPCertStoreImpl::CA_CERT);
				request->addRequestedAttribute(LDAPCertStoreImpl::ARL);
				if (this->prefetchCRLs) {
					request->addRequestedAttribute(LDAPCertStoreImpl::CRL);
				}
			}
			if (basicConstraints < 0) {
				request->addRequestedAttribute(LDAPCertStoreImpl::USER_CERT);
			}
			if (basicConstraints > -2) {
				certs->addAll($(getMatchingCrossCerts(request, xsel, nullptr)));
				if (LDAPCertStoreImpl::debug != nullptr) {
					$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCertificates() after getMatchingCrossCerts(subject,xsel,null),certs.size(): "_s, $$str(certs->size())}));
				}
				certs->addAll($(getCertificates(request, LDAPCertStoreImpl::CA_CERT, xsel)));
				if (LDAPCertStoreImpl::debug != nullptr) {
					$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCertificates() after getCertificates(subject,CA_CERT,xsel),certs.size(): "_s, $$str(certs->size())}));
				}
			}
			if (basicConstraints < 0) {
				certs->addAll($(getCertificates(request, LDAPCertStoreImpl::USER_CERT, xsel)));
				if (LDAPCertStoreImpl::debug != nullptr) {
					$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCertificates() after getCertificates(subject,USER_CERT, xsel),certs.size(): "_s, $$str(certs->size())}));
				}
			}
		} else {
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.engineGetCertificates() subject is null"_s);
			}
			if (basicConstraints == -2) {
				$throwNew($CertStoreException, "need subject to find EE certs"_s);
			}
			if (issuer == nullptr) {
				$throwNew($CertStoreException, "need subject or issuer to find certs"_s);
			}
		}
		if (LDAPCertStoreImpl::debug != nullptr) {
			$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.engineGetCertificates() about to getMatchingCrossCerts..."_s);
		}
		if ((issuer != nullptr) && (basicConstraints > -2)) {
			$var($LDAPCertStoreImpl$LDAPRequest, request, $new($LDAPCertStoreImpl$LDAPRequest, this, $(issuer->getName())));
			request->addRequestedAttribute(LDAPCertStoreImpl::CROSS_CERT);
			request->addRequestedAttribute(LDAPCertStoreImpl::CA_CERT);
			request->addRequestedAttribute(LDAPCertStoreImpl::ARL);
			if (this->prefetchCRLs) {
				request->addRequestedAttribute(LDAPCertStoreImpl::CRL);
			}
			certs->addAll($(getMatchingCrossCerts(request, nullptr, xsel)));
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCertificates() after getMatchingCrossCerts(issuer,null,xsel),certs.size(): "_s, $$str(certs->size())}));
			}
			certs->addAll($(getCertificates(request, LDAPCertStoreImpl::CA_CERT, xsel)));
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCertificates() after getCertificates(issuer,CA_CERT,xsel),certs.size(): "_s, $$str(certs->size())}));
			}
		}
		if (LDAPCertStoreImpl::debug != nullptr) {
			$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.engineGetCertificates() returning certs"_s);
		}
		return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(certs)));
	}
}

$Collection* LDAPCertStoreImpl::getCRLs($LDAPCertStoreImpl$LDAPRequest* request, $String* id, $X509CRLSelector* sel) {
	$useLocalCurrentObjectStackCache();
	$var($byteArray2, encodedCRL, nullptr);
	try {
		$assign(encodedCRL, $nc(request)->getValues(id));
	} catch ($NamingException&) {
		$var($NamingException, namingEx, $catch());
		$throwNew($CertStoreException, static_cast<$Throwable*>(namingEx));
	}
	int32_t n = $nc(encodedCRL)->length;
	if (n == 0) {
		return $Collections::emptySet();
	}
	$var($List, crls, $new($ArrayList, n));
	for (int32_t i = 0; i < n; ++i) {
		try {
			$var($CRL, crl, $nc(this->cf)->generateCRL($$new($ByteArrayInputStream, encodedCRL->get(i))));
			if ($nc(sel)->match(crl)) {
				crls->add($cast($X509CRL, crl));
			}
		} catch ($CRLException&) {
			$var($CRLException, e, $catch());
			if (LDAPCertStoreImpl::debug != nullptr) {
				$nc(LDAPCertStoreImpl::debug)->println("LDAPCertStore.getCRLs() encountered exception while parsing CRL, skipping the bad data: "_s);
				$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
				$nc(LDAPCertStoreImpl::debug)->println($$str({"[ "_s, $(encoder->encodeBuffer(encodedCRL->get(i))), " ]"_s}));
			}
		}
	}
	return crls;
}

$Collection* LDAPCertStoreImpl::getCRLs($X509CRLSelector* xsel, $String* ldapDN) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($HashSet, crls, $new($HashSet));
		$var($Collection, issuerNames, nullptr);
		$var($X509Certificate, certChecking, $nc(xsel)->getCertificateChecking());
		if (certChecking != nullptr) {
			$assign(issuerNames, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($new($HashSet)))));
			$var($X500Principal, issuer, certChecking->getIssuerX500Principal());
			$init($X500Principal);
			issuerNames->add($($nc(issuer)->getName($X500Principal::RFC2253)));
		} else if (ldapDN != nullptr) {
			$assign(issuerNames, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($new($HashSet)))));
			issuerNames->add(ldapDN);
		} else {
			$assign(issuerNames, xsel->getIssuerNames());
			if (issuerNames == nullptr) {
				$throwNew($CertStoreException, "need issuerNames or certChecking to find CRLs"_s);
			}
		}
		{
			$var($Iterator, i$, $nc(issuerNames)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, nameObject, i$->next());
				{
					$var($String, issuerName, nullptr);
					if ($instanceOf($bytes, nameObject)) {
						try {
							$var($X500Principal, issuer, $new($X500Principal, $cast($bytes, nameObject)));
							$init($X500Principal);
							$assign(issuerName, issuer->getName($X500Principal::RFC2253));
						} catch ($IllegalArgumentException&) {
							$var($IllegalArgumentException, e, $catch());
							continue;
						}
					} else {
						$assign(issuerName, $cast($String, nameObject));
					}
					$var($Collection, entryCRLs, $Collections::emptySet());
					if (certChecking == nullptr || $nc(certChecking)->getBasicConstraints() != -1) {
						$var($LDAPCertStoreImpl$LDAPRequest, request, $new($LDAPCertStoreImpl$LDAPRequest, this, issuerName));
						request->addRequestedAttribute(LDAPCertStoreImpl::CROSS_CERT);
						request->addRequestedAttribute(LDAPCertStoreImpl::CA_CERT);
						request->addRequestedAttribute(LDAPCertStoreImpl::ARL);
						if (this->prefetchCRLs) {
							request->addRequestedAttribute(LDAPCertStoreImpl::CRL);
						}
						try {
							$assign(entryCRLs, getCRLs(request, LDAPCertStoreImpl::ARL, xsel));
							if ($nc(entryCRLs)->isEmpty()) {
								this->prefetchCRLs = true;
							} else {
								crls->addAll(entryCRLs);
							}
						} catch ($CertStoreException&) {
							$var($CertStoreException, e, $catch());
							if (LDAPCertStoreImpl::debug != nullptr) {
								$nc(LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.engineGetCRLs non-fatal error retrieving ARLs:"_s, e}));
								e->printStackTrace();
							}
						}
					}
					if ($nc(entryCRLs)->isEmpty() || certChecking == nullptr) {
						$var($LDAPCertStoreImpl$LDAPRequest, request, $new($LDAPCertStoreImpl$LDAPRequest, this, issuerName));
						request->addRequestedAttribute(LDAPCertStoreImpl::CRL);
						$assign(entryCRLs, getCRLs(request, LDAPCertStoreImpl::CRL, xsel));
						crls->addAll(entryCRLs);
					}
				}
			}
		}
		return static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>(crls)));
	}
}

$Boolean* LDAPCertStoreImpl::lambda$createInitialDirContext$1() {
	$init(LDAPCertStoreImpl);
	return $Boolean::valueOf($Boolean::getBoolean(LDAPCertStoreImpl::PROP_DISABLE_APP_RESOURCE_FILES));
}

$String* LDAPCertStoreImpl::lambda$static$0() {
	$init(LDAPCertStoreImpl);
	return $System::getProperty(LDAPCertStoreImpl::PROP_LIFETIME);
}

void clinit$LDAPCertStoreImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LDAPCertStoreImpl::USER_CERT, "userCertificate;binary"_s);
	$assignStatic(LDAPCertStoreImpl::CA_CERT, "cACertificate;binary"_s);
	$assignStatic(LDAPCertStoreImpl::CROSS_CERT, "crossCertificatePair;binary"_s);
	$assignStatic(LDAPCertStoreImpl::CRL, "certificateRevocationList;binary"_s);
	$assignStatic(LDAPCertStoreImpl::ARL, "authorityRevocationList;binary"_s);
	$assignStatic(LDAPCertStoreImpl::PROP_LIFETIME, "sun.security.certpath.ldap.cache.lifetime"_s);
	$assignStatic(LDAPCertStoreImpl::PROP_DISABLE_APP_RESOURCE_FILES, "sun.security.certpath.ldap.disable.app.resource.files"_s);
	$beforeCallerSensitive();
	$assignStatic(LDAPCertStoreImpl::debug, $Debug::getInstance("certpath"_s));
	$assignStatic(LDAPCertStoreImpl::STRING0, $new($StringArray, 0));
	$assignStatic(LDAPCertStoreImpl::BB0, $new($byteArray2, 0));
	$assignStatic(LDAPCertStoreImpl::EMPTY_ATTRIBUTES, $new($BasicAttributes));
	{
		$var($String, s, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(LDAPCertStoreImpl$$Lambda$lambda$static$0$1)))));
		if (s != nullptr) {
			LDAPCertStoreImpl::LIFETIME = $Integer::parseInt(s);
		} else {
			LDAPCertStoreImpl::LIFETIME = LDAPCertStoreImpl::DEFAULT_CACHE_LIFETIME;
		}
	}
}

LDAPCertStoreImpl::LDAPCertStoreImpl() {
}

$Class* LDAPCertStoreImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::classInfo$.name)) {
			return LDAPCertStoreImpl$$Lambda$lambda$createInitialDirContext$1::load$(name, initialize);
		}
		if (name->equals(LDAPCertStoreImpl$$Lambda$lambda$static$0$1::classInfo$.name)) {
			return LDAPCertStoreImpl$$Lambda$lambda$static$0$1::load$(name, initialize);
		}
	}
	$loadClass(LDAPCertStoreImpl, name, initialize, &_LDAPCertStoreImpl_ClassInfo_, clinit$LDAPCertStoreImpl, allocate$LDAPCertStoreImpl);
	return class$;
}

$Class* LDAPCertStoreImpl::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun