#include <com/sun/jndi/ldap/ext/StartTlsResponseImpl.h>

#include <com/sun/jndi/ldap/Connection.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/AbstractMethodError.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Socket.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Principal.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/naming/ldap/StartTlsResponse.h>
#include <javax/net/SocketFactory.h>
#include <javax/net/ssl/HostnameVerifier.h>
#include <javax/net/ssl/SSLPeerUnverifiedException.h>
#include <javax/net/ssl/SSLSession.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/net/ssl/SSLSocketFactory.h>
#include <sun/security/util/HostnameChecker.h>
#include <jcpp.h>

#undef DNSNAME_TYPE
#undef TYPE_LDAP

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $Connection = ::com::sun::jndi::ldap::Connection;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $AbstractMethodError = ::java::lang::AbstractMethodError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Socket = ::java::net::Socket;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Principal = ::java::security::Principal;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $StartTlsResponse = ::javax::naming::ldap::StartTlsResponse;
using $SocketFactory = ::javax::net::SocketFactory;
using $HostnameVerifier = ::javax::net::ssl::HostnameVerifier;
using $SSLPeerUnverifiedException = ::javax::net::ssl::SSLPeerUnverifiedException;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $SSLSocketFactory = ::javax::net::ssl::SSLSocketFactory;
using $HostnameChecker = ::sun::security::util::HostnameChecker;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace ext {

$FieldInfo _StartTlsResponseImpl_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StartTlsResponseImpl, debug)},
	{"DNSNAME_TYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StartTlsResponseImpl, DNSNAME_TYPE)},
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, hostname)},
	{"ldapConnection", "Lcom/sun/jndi/ldap/Connection;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, ldapConnection)},
	{"originalInputStream", "Ljava/io/InputStream;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, originalInputStream)},
	{"originalOutputStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, originalOutputStream)},
	{"sslSocket", "Ljavax/net/ssl/SSLSocket;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, sslSocket)},
	{"defaultFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, defaultFactory)},
	{"currentFactory", "Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, currentFactory)},
	{"suites", "[Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, suites)},
	{"verifier", "Ljavax/net/ssl/HostnameVerifier;", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, verifier)},
	{"isClosed", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(StartTlsResponseImpl, isClosed)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StartTlsResponseImpl, serialVersionUID)},
	{}
};

$MethodInfo _StartTlsResponseImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StartTlsResponseImpl::*)()>(&StartTlsResponseImpl::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDefaultFactory", "()Ljavax/net/ssl/SSLSocketFactory;", nullptr, $PRIVATE, $method(static_cast<$SSLSocketFactory*(StartTlsResponseImpl::*)()>(&StartTlsResponseImpl::getDefaultFactory)), "java.io.IOException"},
	{"getPeerPrincipal", "(Ljavax/net/ssl/SSLSession;)Ljava/security/Principal;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Principal*(*)($SSLSession*)>(&StartTlsResponseImpl::getPeerPrincipal)), "javax.net.ssl.SSLPeerUnverifiedException"},
	{"negotiate", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"negotiate", "(Ljavax/net/ssl/SSLSocketFactory;)Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setConnection", "(Lcom/sun/jndi/ldap/Connection;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StartTlsResponseImpl::*)($Connection*,$String*)>(&StartTlsResponseImpl::setConnection))},
	{"setEnabledCipherSuites", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setHostnameVerifier", "(Ljavax/net/ssl/HostnameVerifier;)V", nullptr, $PUBLIC},
	{"startHandshake", "(Ljavax/net/ssl/SSLSocketFactory;)Ljavax/net/ssl/SSLSocket;", nullptr, $PRIVATE, $method(static_cast<$SSLSocket*(StartTlsResponseImpl::*)($SSLSocketFactory*)>(&StartTlsResponseImpl::startHandshake)), "java.io.IOException"},
	{"verify", "(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z", nullptr, $PRIVATE, $method(static_cast<bool(StartTlsResponseImpl::*)($String*,$SSLSession*)>(&StartTlsResponseImpl::verify)), "javax.net.ssl.SSLPeerUnverifiedException"},
	{}
};

$ClassInfo _StartTlsResponseImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.ext.StartTlsResponseImpl",
	"javax.naming.ldap.StartTlsResponse",
	nullptr,
	_StartTlsResponseImpl_FieldInfo_,
	_StartTlsResponseImpl_MethodInfo_
};

$Object* allocate$StartTlsResponseImpl($Class* clazz) {
	return $of($alloc(StartTlsResponseImpl));
}

void StartTlsResponseImpl::init$() {
	$StartTlsResponse::init$();
	$set(this, hostname, nullptr);
	$set(this, ldapConnection, nullptr);
	$set(this, originalInputStream, nullptr);
	$set(this, originalOutputStream, nullptr);
	$set(this, sslSocket, nullptr);
	$set(this, defaultFactory, nullptr);
	$set(this, currentFactory, nullptr);
	$set(this, suites, nullptr);
	$set(this, verifier, nullptr);
	this->isClosed = true;
}

void StartTlsResponseImpl::setEnabledCipherSuites($StringArray* suites) {
	$set(this, suites, suites == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(suites)->clone()));
}

void StartTlsResponseImpl::setHostnameVerifier($HostnameVerifier* verifier) {
	$set(this, verifier, verifier);
}

$SSLSession* StartTlsResponseImpl::negotiate() {
	return negotiate(nullptr);
}

$SSLSession* StartTlsResponseImpl::negotiate($SSLSocketFactory* factory$renamed) {
	$var($SSLSocketFactory, factory, factory$renamed);
	if (this->isClosed && this->sslSocket != nullptr) {
		$throwNew($IOException, "TLS connection is closed."_s);
	}
	if (factory == nullptr) {
		$assign(factory, getDefaultFactory());
	}
	$var($SSLSession, sslSession, $nc($(startHandshake(factory)))->getSession());
	$var($SSLPeerUnverifiedException, verifExcep, nullptr);
	try {
		if (verify(this->hostname, sslSession)) {
			this->isClosed = false;
			return sslSession;
		}
	} catch ($SSLPeerUnverifiedException&) {
		$var($SSLPeerUnverifiedException, e, $catch());
		$assign(verifExcep, e);
	}
	if ((this->verifier != nullptr) && $nc(this->verifier)->verify(this->hostname, sslSession)) {
		this->isClosed = false;
		return sslSession;
	}
	close();
	$nc(sslSession)->invalidate();
	if (verifExcep == nullptr) {
		$assign(verifExcep, $new($SSLPeerUnverifiedException, $$str({"hostname of the server \'"_s, this->hostname, "\' does not match the hostname in the server\'s certificate."_s})));
	}
	$throw(verifExcep);
}

void StartTlsResponseImpl::close() {
	if (this->isClosed) {
		return;
	}
	$nc(this->ldapConnection)->replaceStreams(this->originalInputStream, this->originalOutputStream, false);
	$nc(this->sslSocket)->close();
	this->isClosed = true;
}

void StartTlsResponseImpl::setConnection($Connection* ldapConnection, $String* hostname) {
	$set(this, ldapConnection, ldapConnection);
	$set(this, hostname, (hostname == nullptr || $nc(hostname)->isEmpty()) ? $nc(ldapConnection)->host : hostname);
	$set(this, originalInputStream, ldapConnection->inStream);
	$set(this, originalOutputStream, ldapConnection->outStream);
}

$SSLSocketFactory* StartTlsResponseImpl::getDefaultFactory() {
	if (this->defaultFactory != nullptr) {
		return this->defaultFactory;
	}
	return ($assignField(this, defaultFactory, $cast($SSLSocketFactory, $SSLSocketFactory::getDefault())));
}

$SSLSocket* StartTlsResponseImpl::startHandshake($SSLSocketFactory* factory) {
	if (this->ldapConnection == nullptr) {
		$throwNew($IllegalStateException, "LDAP connection has not been set. TLS requires an existing LDAP connection."_s);
	}
	if (factory != this->currentFactory) {
		$set(this, sslSocket, $cast($SSLSocket, $nc(factory)->createSocket($nc(this->ldapConnection)->sock, $nc(this->ldapConnection)->host, $nc(this->ldapConnection)->port, false)));
		$set(this, currentFactory, factory);
	}
	if (this->suites != nullptr) {
		$nc(this->sslSocket)->setEnabledCipherSuites(this->suites);
	}
	try {
		$nc(this->ldapConnection)->setHandshakeCompletedListener(this->sslSocket);
		$nc(this->sslSocket)->startHandshake();
		$var($InputStream, var$0, $nc(this->sslSocket)->getInputStream());
		$nc(this->ldapConnection)->replaceStreams(var$0, $($nc(this->sslSocket)->getOutputStream()), true);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$nc(this->sslSocket)->close();
		this->isClosed = true;
		$throw(e);
	}
	return this->sslSocket;
}

bool StartTlsResponseImpl::verify($String* hostname$renamed, $SSLSession* session) {
	$var($String, hostname, hostname$renamed);
	$var($CertificateArray, certs, nullptr);
	bool var$0 = hostname != nullptr && hostname->startsWith("["_s);
	if (var$0 && hostname->endsWith("]"_s)) {
		$assign(hostname, hostname->substring(1, hostname->length() - 1));
	}
	try {
		$var($HostnameChecker, checker, $HostnameChecker::getInstance($HostnameChecker::TYPE_LDAP));
		$assign(certs, $nc(session)->getPeerCertificates());
		$var($X509Certificate, peerCert, nullptr);
		if ($instanceOf($X509Certificate, $nc(certs)->get(0))) {
			$assign(peerCert, $cast($X509Certificate, certs->get(0)));
		} else {
			$throwNew($SSLPeerUnverifiedException, "Received a non X509Certificate from the server"_s);
		}
		$nc(checker)->match(hostname, peerCert);
		return true;
	} catch ($SSLPeerUnverifiedException&) {
		$var($SSLPeerUnverifiedException, e, $catch());
		$var($String, cipher, $nc(session)->getCipherSuite());
		if (cipher != nullptr && (cipher->indexOf("_anon_"_s) != -1)) {
			return true;
		}
		$throw(e);
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		$throw($cast($SSLPeerUnverifiedException, $($$new($SSLPeerUnverifiedException, $$str({"hostname of the server \'"_s, hostname, "\' does not match the hostname in the server\'s certificate."_s}))->initCause(e))));
	}
	$shouldNotReachHere();
}

$Principal* StartTlsResponseImpl::getPeerPrincipal($SSLSession* session) {
	$init(StartTlsResponseImpl);
	$var($Principal, principal, nullptr);
	try {
		$assign(principal, $nc(session)->getPeerPrincipal());
	} catch ($AbstractMethodError&) {
		$var($AbstractMethodError, e, $catch());
		$assign(principal, nullptr);
	}
	return principal;
}

StartTlsResponseImpl::StartTlsResponseImpl() {
}

$Class* StartTlsResponseImpl::load$($String* name, bool initialize) {
	$loadClass(StartTlsResponseImpl, name, initialize, &_StartTlsResponseImpl_ClassInfo_, allocate$StartTlsResponseImpl);
	return class$;
}

$Class* StartTlsResponseImpl::class$ = nullptr;

				} // ext
			} // ldap
		} // jndi
	} // sun
} // com