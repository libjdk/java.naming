#include <com/sun/jndi/ldap/sasl/TlsChannelBinding.h>

#include <com/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <javax/naming/NamingException.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef CHANNEL_BINDING
#undef CHANNEL_BINDING_TYPE
#undef TLS_SERVER_END_POINT

using $TlsChannelBinding$TlsChannelBindingType = ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
using $NamingException = ::javax::naming::NamingException;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

$FieldInfo _TlsChannelBinding_FieldInfo_[] = {
	{"CHANNEL_BINDING_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TlsChannelBinding, CHANNEL_BINDING_TYPE)},
	{"CHANNEL_BINDING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TlsChannelBinding, CHANNEL_BINDING)},
	{"cbType", "Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PRIVATE | $FINAL, $field(TlsChannelBinding, cbType)},
	{"cbData", "[B", nullptr, $PRIVATE | $FINAL, $field(TlsChannelBinding, cbData)},
	{}
};

$MethodInfo _TlsChannelBinding_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;[B)V", nullptr, $PRIVATE, $method(static_cast<void(TlsChannelBinding::*)($TlsChannelBinding$TlsChannelBindingType*,$bytes*)>(&TlsChannelBinding::init$))},
	{"create", "(Ljava/security/cert/X509Certificate;)Lcom/sun/jndi/ldap/sasl/TlsChannelBinding;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TlsChannelBinding*(*)($X509Certificate*)>(&TlsChannelBinding::create)), "javax.security.sasl.SaslException"},
	{"getData", "()[B", nullptr, $PUBLIC},
	{"getType", "()Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PUBLIC},
	{"parseType", "(Ljava/lang/String;)Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TlsChannelBinding$TlsChannelBindingType*(*)($String*)>(&TlsChannelBinding::parseType)), "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _TlsChannelBinding_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.sasl.TlsChannelBinding$TlsChannelBindingType", "com.sun.jndi.ldap.sasl.TlsChannelBinding", "TlsChannelBindingType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TlsChannelBinding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.ldap.sasl.TlsChannelBinding",
	"java.lang.Object",
	nullptr,
	_TlsChannelBinding_FieldInfo_,
	_TlsChannelBinding_MethodInfo_,
	nullptr,
	nullptr,
	_TlsChannelBinding_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.sasl.TlsChannelBinding$TlsChannelBindingType"
};

$Object* allocate$TlsChannelBinding($Class* clazz) {
	return $of($alloc(TlsChannelBinding));
}

$String* TlsChannelBinding::CHANNEL_BINDING_TYPE = nullptr;
$String* TlsChannelBinding::CHANNEL_BINDING = nullptr;

$TlsChannelBinding$TlsChannelBindingType* TlsChannelBinding::parseType($String* cbType) {
	$init(TlsChannelBinding);
	if (cbType != nullptr) {
		$init($TlsChannelBinding$TlsChannelBindingType);
		if (cbType->equals($($TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT->getName()))) {
			return $TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT;
		} else {
			$throwNew($NamingException, $$str({"Illegal value for "_s, TlsChannelBinding::CHANNEL_BINDING_TYPE, " property."_s}));
		}
	}
	return nullptr;
}

TlsChannelBinding* TlsChannelBinding::create($X509Certificate* serverCertificate) {
	$init(TlsChannelBinding);
	try {
		$init($TlsChannelBinding$TlsChannelBindingType);
		$var($bytes, prefix, $($nc($($TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT->getName()))->concat(":"_s))->getBytes());
		$var($String, hashAlg, $($nc($($nc(serverCertificate)->getSigAlgName()))->replace(static_cast<$CharSequence*>("SHA"_s), static_cast<$CharSequence*>("SHA-"_s)))->toUpperCase());
		int32_t ind = hashAlg->indexOf("WITH"_s);
		if (ind > 0) {
			$assign(hashAlg, hashAlg->substring(0, ind));
			bool var$0 = hashAlg->equals("MD5"_s);
			if (var$0 || hashAlg->equals("SHA-1"_s)) {
				$assign(hashAlg, "SHA-256"_s);
			}
		} else {
			$assign(hashAlg, "SHA-256"_s);
		}
		$var($MessageDigest, md, $MessageDigest::getInstance(hashAlg));
		$var($bytes, hash, $nc(md)->digest($(serverCertificate->getEncoded())));
		$var($bytes, cbData, $Arrays::copyOf(prefix, prefix->length + $nc(hash)->length));
		$System::arraycopy(hash, 0, cbData, prefix->length, $nc(hash)->length);
		return $new(TlsChannelBinding, $TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT, cbData);
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, e, $catch());
		$throwNew($SaslException, "Cannot create TLS channel binding data"_s, e);
	} catch ($CertificateEncodingException&) {
		$var($GeneralSecurityException, e, $catch());
		$throwNew($SaslException, "Cannot create TLS channel binding data"_s, e);
	}
	$shouldNotReachHere();
}

void TlsChannelBinding::init$($TlsChannelBinding$TlsChannelBindingType* cbType, $bytes* cbData) {
	$set(this, cbType, cbType);
	$set(this, cbData, cbData);
}

$TlsChannelBinding$TlsChannelBindingType* TlsChannelBinding::getType() {
	return this->cbType;
}

$bytes* TlsChannelBinding::getData() {
	return this->cbData;
}

TlsChannelBinding::TlsChannelBinding() {
}

void clinit$TlsChannelBinding($Class* class$) {
	$assignStatic(TlsChannelBinding::CHANNEL_BINDING_TYPE, "com.sun.jndi.ldap.tls.cbtype"_s);
	$assignStatic(TlsChannelBinding::CHANNEL_BINDING, "jdk.internal.sasl.tlschannelbinding"_s);
}

$Class* TlsChannelBinding::load$($String* name, bool initialize) {
	$loadClass(TlsChannelBinding, name, initialize, &_TlsChannelBinding_ClassInfo_, clinit$TlsChannelBinding, allocate$TlsChannelBinding);
	return class$;
}

$Class* TlsChannelBinding::class$ = nullptr;

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com