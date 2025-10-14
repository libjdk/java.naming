#include <com/sun/jndi/ldap/sasl/LdapSasl.h>

#include <com/sun/jndi/ldap/Connection.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/sasl/DefaultCallbackHandler.h>
#include <com/sun/jndi/ldap/sasl/SaslInputStream.h>
#include <com/sun/jndi/ldap/sasl/SaslOutputStream.h>
#include <com/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType.h>
#include <com/sun/jndi/ldap/sasl/TlsChannelBinding.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <javax/naming/AuthenticationException.h>
#include <javax/naming/AuthenticationNotSupportedException.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NamingSecurityException.h>
#include <javax/naming/ldap/Control.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef CHANNEL_BINDING
#undef CHANNEL_BINDING_TYPE
#undef LDAP_SASL_BIND_IN_PROGRESS
#undef LDAP_SUCCESS
#undef NO_BYTES
#undef QOP
#undef SASL_AUTHZ_ID
#undef SASL_CALLBACK
#undef SASL_REALM
#undef TLS_SERVER_END_POINT

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $Connection = ::com::sun::jndi::ldap::Connection;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $DefaultCallbackHandler = ::com::sun::jndi::ldap::sasl::DefaultCallbackHandler;
using $SaslInputStream = ::com::sun::jndi::ldap::sasl::SaslInputStream;
using $SaslOutputStream = ::com::sun::jndi::ldap::sasl::SaslOutputStream;
using $TlsChannelBinding = ::com::sun::jndi::ldap::sasl::TlsChannelBinding;
using $TlsChannelBinding$TlsChannelBindingType = ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $AuthenticationException = ::javax::naming::AuthenticationException;
using $AuthenticationNotSupportedException = ::javax::naming::AuthenticationNotSupportedException;
using $NamingException = ::javax::naming::NamingException;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

$FieldInfo _LdapSasl_FieldInfo_[] = {
	{"SASL_CALLBACK", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSasl, SASL_CALLBACK)},
	{"SASL_AUTHZ_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSasl, SASL_AUTHZ_ID)},
	{"SASL_REALM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSasl, SASL_REALM)},
	{"LDAP_SUCCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSasl, LDAP_SUCCESS)},
	{"LDAP_SASL_BIND_IN_PROGRESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSasl, LDAP_SASL_BIND_IN_PROGRESS)},
	{"NO_BYTES", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSasl, NO_BYTES)},
	{}
};

$MethodInfo _LdapSasl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapSasl::*)()>(&LdapSasl::init$))},
	{"getSaslMechanismNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($String*)>(&LdapSasl::getSaslMechanismNames))},
	{"saslBind", "(Lcom/sun/jndi/ldap/LdapClient;Lcom/sun/jndi/ldap/Connection;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;Ljava/util/Hashtable;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", "(Lcom/sun/jndi/ldap/LdapClient;Lcom/sun/jndi/ldap/Connection;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;Ljava/util/Hashtable<**>;[Ljavax/naming/ldap/Control;)Lcom/sun/jndi/ldap/LdapResult;", $PUBLIC | $STATIC, $method(static_cast<$LdapResult*(*)($LdapClient*,$Connection*,$String*,$String*,Object$*,$String*,$Hashtable*,$ControlArray*)>(&LdapSasl::saslBind)), "java.io.IOException,javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapSasl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.sasl.LdapSasl",
	"java.lang.Object",
	nullptr,
	_LdapSasl_FieldInfo_,
	_LdapSasl_MethodInfo_
};

$Object* allocate$LdapSasl($Class* clazz) {
	return $of($alloc(LdapSasl));
}

$String* LdapSasl::SASL_CALLBACK = nullptr;
$String* LdapSasl::SASL_AUTHZ_ID = nullptr;
$String* LdapSasl::SASL_REALM = nullptr;
$bytes* LdapSasl::NO_BYTES = nullptr;

void LdapSasl::init$() {
}

$LdapResult* LdapSasl::saslBind($LdapClient* clnt, $Connection* conn, $String* server, $String* dn, Object$* pw, $String* authMech, $Hashtable* env, $ControlArray* bindCtls) {
	$init(LdapSasl);
	$var($SaslClient, saslClnt, nullptr);
	bool cleanupHandler = false;
	$var($CallbackHandler, cbh, (env != nullptr) ? $cast($CallbackHandler, $nc(env)->get(LdapSasl::SASL_CALLBACK)) : ($CallbackHandler*)nullptr);
	if (cbh == nullptr) {
		$assign(cbh, $new($DefaultCallbackHandler, dn, pw, $cast($String, $(env->get(LdapSasl::SASL_REALM)))));
		cleanupHandler = true;
	}
	$var($String, authzId, (env != nullptr) ? $cast($String, env->get(LdapSasl::SASL_AUTHZ_ID)) : ($String*)nullptr);
	$var($StringArray, mechs, getSaslMechanismNames(authMech));
	$init($TlsChannelBinding);
	if (env->get($TlsChannelBinding::CHANNEL_BINDING) != nullptr) {
		$throwNew($NamingException, $$str({$TlsChannelBinding::CHANNEL_BINDING, " property cannot be set explicitly"_s}));
	}
	$var($Hashtable, envProps, env);
	{
		$var($Throwable, var$0, nullptr);
		$var($LdapResult, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				if ($nc(conn)->isTlsConnection()) {
					$TlsChannelBinding$TlsChannelBindingType* cbType = $TlsChannelBinding::parseType($cast($String, $(env->get($TlsChannelBinding::CHANNEL_BINDING_TYPE))));
					$init($TlsChannelBinding$TlsChannelBindingType);
					if (cbType == $TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT) {
						$var($X509Certificate, cert, conn->getTlsServerCertificate());
						if (cert != nullptr) {
							$var($TlsChannelBinding, tlsCB, $TlsChannelBinding::create(cert));
							$assign(envProps, $cast($Hashtable, env->clone()));
							$nc(envProps)->put($TlsChannelBinding::CHANNEL_BINDING, $($nc(tlsCB)->getData()));
						} else {
							$throwNew($SaslException, "No suitable certificate to generate TLS Channel Binding data"_s);
						}
					}
				}
				$assign(saslClnt, $Sasl::createSaslClient(mechs, authzId, "ldap"_s, server, envProps, cbh));
				if (saslClnt == nullptr) {
					$throwNew($AuthenticationNotSupportedException, authMech);
				}
				$var($LdapResult, res, nullptr);
				$var($String, mechName, $nc(saslClnt)->getMechanismName());
				$var($bytes, response, saslClnt->hasInitialResponse() ? saslClnt->evaluateChallenge(LdapSasl::NO_BYTES) : ($bytes*)nullptr);
				$assign(res, $nc(clnt)->ldapBind(nullptr, response, bindCtls, mechName, true));
				while (!saslClnt->isComplete() && ($nc(res)->status == LdapSasl::LDAP_SASL_BIND_IN_PROGRESS || $nc(res)->status == LdapSasl::LDAP_SUCCESS)) {
					$assign(response, saslClnt->evaluateChallenge(res->serverCreds != nullptr ? res->serverCreds : LdapSasl::NO_BYTES));
					if (res->status == LdapSasl::LDAP_SUCCESS) {
						if (response != nullptr) {
							$throwNew($AuthenticationException, "SASL client generated response after success"_s);
						}
						break;
					}
					$assign(res, clnt->ldapBind(nullptr, response, bindCtls, mechName, true));
				}
				if ($nc(res)->status == LdapSasl::LDAP_SUCCESS) {
					if (!saslClnt->isComplete()) {
						$throwNew($AuthenticationException, "SASL authentication not complete despite server claims"_s);
					}
					$var($String, qop, $cast($String, saslClnt->getNegotiatedProperty($Sasl::QOP)));
					bool var$3 = qop != nullptr;
					if (var$3) {
						bool var$4 = qop->equalsIgnoreCase("auth-int"_s);
						var$3 = (var$4 || qop->equalsIgnoreCase("auth-conf"_s));
					}
					if (var$3) {
						$var($InputStream, newIn, $new($SaslInputStream, saslClnt, $nc(conn)->inStream));
						$var($OutputStream, newOut, $new($SaslOutputStream, saslClnt, $nc(conn)->outStream));
						$nc(conn)->replaceStreams(newIn, newOut);
					} else {
						saslClnt->dispose();
					}
				}
				$assign(var$2, res);
				return$1 = true;
				goto $finally;
			} catch ($SaslException&) {
				$var($SaslException, e, $catch());
				$var($NamingException, ne, $new($AuthenticationException, authMech));
				ne->setRootCause(e);
				$throw(ne);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (cleanupHandler) {
				$nc(($cast($DefaultCallbackHandler, cbh)))->clearPassword();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$StringArray* LdapSasl::getSaslMechanismNames($String* str) {
	$init(LdapSasl);
	$var($StringTokenizer, parser, $new($StringTokenizer, str));
	$var($Vector, mechs, $new($Vector, 10));
	while (parser->hasMoreTokens()) {
		mechs->addElement($(parser->nextToken()));
	}
	$var($StringArray, mechNames, $new($StringArray, mechs->size()));
	for (int32_t i = 0; i < mechs->size(); ++i) {
		mechNames->set(i, $cast($String, $(mechs->elementAt(i))));
	}
	return mechNames;
}

void clinit$LdapSasl($Class* class$) {
	$assignStatic(LdapSasl::SASL_CALLBACK, "java.naming.security.sasl.callback"_s);
	$assignStatic(LdapSasl::SASL_AUTHZ_ID, "java.naming.security.sasl.authorizationId"_s);
	$assignStatic(LdapSasl::SASL_REALM, "java.naming.security.sasl.realm"_s);
	$assignStatic(LdapSasl::NO_BYTES, $new($bytes, 0));
}

LdapSasl::LdapSasl() {
}

$Class* LdapSasl::load$($String* name, bool initialize) {
	$loadClass(LdapSasl, name, initialize, &_LdapSasl_ClassInfo_, clinit$LdapSasl, allocate$LdapSasl);
	return class$;
}

$Class* LdapSasl::class$ = nullptr;

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com