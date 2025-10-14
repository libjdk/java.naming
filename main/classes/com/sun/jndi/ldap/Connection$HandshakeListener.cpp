#include <com/sun/jndi/ldap/Connection$HandshakeListener.h>

#include <com/sun/jndi/ldap/Connection.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <javax/naming/CommunicationException.h>
#include <javax/net/ssl/HandshakeCompletedEvent.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLPeerUnverifiedException.h>
#include <javax/net/ssl/SSLSocket.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $Connection = ::com::sun::jndi::ldap::Connection;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CommunicationException = ::javax::naming::CommunicationException;
using $NamingException = ::javax::naming::NamingException;
using $HandshakeCompletedEvent = ::javax::net::ssl::HandshakeCompletedEvent;
using $HandshakeCompletedListener = ::javax::net::ssl::HandshakeCompletedListener;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLPeerUnverifiedException = ::javax::net::ssl::SSLPeerUnverifiedException;
using $SSLSocket = ::javax::net::ssl::SSLSocket;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _Connection$HandshakeListener_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/ldap/Connection;", nullptr, $FINAL | $SYNTHETIC, $field(Connection$HandshakeListener, this$0)},
	{"tlsHandshakeCompleted", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/security/cert/X509Certificate;>;", $PRIVATE | $FINAL, $field(Connection$HandshakeListener, tlsHandshakeCompleted)},
	{}
};

$MethodInfo _Connection$HandshakeListener_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/Connection;)V", nullptr, $PRIVATE, $method(static_cast<void(Connection$HandshakeListener::*)($Connection*)>(&Connection$HandshakeListener::init$))},
	{"handshakeCompleted", "(Ljavax/net/ssl/HandshakeCompletedEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Connection$HandshakeListener_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Connection$HandshakeListener", "com.sun.jndi.ldap.Connection", "HandshakeListener", $PRIVATE},
	{}
};

$ClassInfo _Connection$HandshakeListener_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.Connection$HandshakeListener",
	"java.lang.Object",
	"javax.net.ssl.HandshakeCompletedListener",
	_Connection$HandshakeListener_FieldInfo_,
	_Connection$HandshakeListener_MethodInfo_,
	nullptr,
	nullptr,
	_Connection$HandshakeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Connection"
};

$Object* allocate$Connection$HandshakeListener($Class* clazz) {
	return $of($alloc(Connection$HandshakeListener));
}

void Connection$HandshakeListener::init$($Connection* this$0) {
	$set(this, this$0, this$0);
	$set(this, tlsHandshakeCompleted, $new($CompletableFuture));
}

void Connection$HandshakeListener::handshakeCompleted($HandshakeCompletedEvent* event) {
	try {
		$var($X509Certificate, tlsServerCert, nullptr);
		$var($CertificateArray, certs, nullptr);
		if ($nc($($nc(event)->getSocket()))->getUseClientMode()) {
			$assign(certs, event->getPeerCertificates());
		} else {
			$assign(certs, event->getLocalCertificates());
		}
		if (certs != nullptr && certs->length > 0 && $instanceOf($X509Certificate, certs->get(0))) {
			$assign(tlsServerCert, $cast($X509Certificate, certs->get(0)));
		}
		$nc(this->tlsHandshakeCompleted)->complete(tlsServerCert);
	} catch ($SSLPeerUnverifiedException&) {
		$var($SSLPeerUnverifiedException, ex, $catch());
		$var($CommunicationException, ce, $new($CommunicationException));
		ce->setRootCause(this->this$0->closureReason);
		$nc(this->tlsHandshakeCompleted)->completeExceptionally(ex);
	}
}

Connection$HandshakeListener::Connection$HandshakeListener() {
}

$Class* Connection$HandshakeListener::load$($String* name, bool initialize) {
	$loadClass(Connection$HandshakeListener, name, initialize, &_Connection$HandshakeListener_ClassInfo_, allocate$Connection$HandshakeListener);
	return class$;
}

$Class* Connection$HandshakeListener::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com