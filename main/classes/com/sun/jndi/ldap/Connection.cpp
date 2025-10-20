#include <com/sun/jndi/ldap/Connection.h>

#include <com/sun/jndi/ldap/Ber$DecodeException.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerDecoder.h>
#include <com/sun/jndi/ldap/BerEncoder.h>
#include <com/sun/jndi/ldap/Connection$HandshakeListener.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapRequest.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InterruptedIOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/ExecutionException.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/InterruptedNamingException.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ServiceUnavailableException.h>
#include <javax/naming/ldap/Control.h>
#include <javax/net/SocketFactory.h>
#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLSocket.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef ASN_CONSTRUCTOR
#undef ASN_SEQUENCE
#undef IS_HOSTNAME_VERIFICATION_DISABLED
#undef LDAP_REQ_ABANDON
#undef LDAP_REQ_UNBIND

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $Ber = ::com::sun::jndi::ldap::Ber;
using $Ber$DecodeException = ::com::sun::jndi::ldap::Ber$DecodeException;
using $BerDecoder = ::com::sun::jndi::ldap::BerDecoder;
using $BerEncoder = ::com::sun::jndi::ldap::BerEncoder;
using $Connection$HandshakeListener = ::com::sun::jndi::ldap::Connection$HandshakeListener;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapRequest = ::com::sun::jndi::ldap::LdapRequest;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $VersionHelper = ::com::sun::jndi::ldap::VersionHelper;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $CommunicationException = ::javax::naming::CommunicationException;
using $InterruptedNamingException = ::javax::naming::InterruptedNamingException;
using $NamingException = ::javax::naming::NamingException;
using $ServiceUnavailableException = ::javax::naming::ServiceUnavailableException;
using $SocketFactory = ::javax::net::SocketFactory;
using $HandshakeCompletedListener = ::javax::net::ssl::HandshakeCompletedListener;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLSocket = ::javax::net::ssl::SSLSocket;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0 : public $PrivilegedAction {
	$class(Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Connection::lambda$hostnameVerificationDisabledValue$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::*)()>(&Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::load$($String* name, bool initialize) {
	$loadClass(Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::class$ = nullptr;

$FieldInfo _Connection_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Connection, debug)},
	{"dump", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Connection, dump)},
	{"worker", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(Connection, worker)},
	{"v3", "Z", nullptr, $PRIVATE, $field(Connection, v3)},
	{"host", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Connection, host)},
	{"port", "I", nullptr, $PUBLIC | $FINAL, $field(Connection, port)},
	{"bound", "Z", nullptr, $PRIVATE, $field(Connection, bound)},
	{"traceFile", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(Connection, traceFile)},
	{"traceTagIn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Connection, traceTagIn)},
	{"traceTagOut", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Connection, traceTagOut)},
	{"inStream", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(Connection, inStream)},
	{"outStream", "Ljava/io/OutputStream;", nullptr, $PUBLIC, $field(Connection, outStream)},
	{"sock", "Ljava/net/Socket;", nullptr, $PUBLIC, $field(Connection, sock)},
	{"parent", "Lcom/sun/jndi/ldap/LdapClient;", nullptr, $PRIVATE | $FINAL, $field(Connection, parent)},
	{"outMsgId", "I", nullptr, $PRIVATE, $field(Connection, outMsgId)},
	{"pendingRequests", "Lcom/sun/jndi/ldap/LdapRequest;", nullptr, $PRIVATE, $field(Connection, pendingRequests)},
	{"closureReason", "Ljava/io/IOException;", nullptr, $VOLATILE, $field(Connection, closureReason)},
	{"useable", "Z", nullptr, $VOLATILE, $field(Connection, useable)},
	{"readTimeout", "I", nullptr, 0, $field(Connection, readTimeout)},
	{"connectTimeout", "I", nullptr, 0, $field(Connection, connectTimeout)},
	{"isUpgradedToStartTls", "Z", nullptr, $PRIVATE | $VOLATILE, $field(Connection, isUpgradedToStartTls$)},
	{"startTlsLock", "Ljava/lang/Object;", nullptr, $FINAL, $field(Connection, startTlsLock)},
	{"IS_HOSTNAME_VERIFICATION_DISABLED", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Connection, IS_HOSTNAME_VERIFICATION_DISABLED)},
	{"pauseLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Connection, pauseLock)},
	{"paused", "Z", nullptr, $PRIVATE, $field(Connection, paused)},
	{"tlsHandshakeListener", "Lcom/sun/jndi/ldap/Connection$HandshakeListener;", nullptr, $PRIVATE | $VOLATILE, $field(Connection, tlsHandshakeListener)},
	{}
};

$MethodInfo _Connection_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapClient;Ljava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(Connection::*)($LdapClient*,$String*,int32_t,$String*,int32_t,int32_t,$OutputStream*)>(&Connection::init$)), "javax.naming.NamingException"},
	{"abandonOutstandingReqs", "([Ljavax/naming/ldap/Control;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(Connection::*)($ControlArray*)>(&Connection::abandonOutstandingReqs))},
	{"abandonRequest", "(Lcom/sun/jndi/ldap/LdapRequest;[Ljavax/naming/ldap/Control;)V", nullptr, 0, $method(static_cast<void(Connection::*)($LdapRequest*,$ControlArray*)>(&Connection::abandonRequest))},
	{"addRequest", "(Lcom/sun/jndi/ldap/LdapRequest;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(Connection::*)($LdapRequest*)>(&Connection::addRequest))},
	{"cleanup", "([Ljavax/naming/ldap/Control;Z)V", nullptr, 0, $method(static_cast<void(Connection::*)($ControlArray*,bool)>(&Connection::cleanup))},
	{"createInetSocketAddress", "(Ljava/lang/String;I)Ljava/net/InetSocketAddress;", nullptr, $PRIVATE, $method(static_cast<$InetSocketAddress*(Connection::*)($String*,int32_t)>(&Connection::createInetSocketAddress))},
	{"createSocket", "(Ljava/lang/String;ILjava/lang/String;I)Ljava/net/Socket;", nullptr, $PRIVATE, $method(static_cast<$Socket*(Connection::*)($String*,int32_t,$String*,int32_t)>(&Connection::createSocket)), "java.lang.Exception"},
	{"findRequest", "(I)Lcom/sun/jndi/ldap/LdapRequest;", nullptr, $SYNCHRONIZED, $method(static_cast<$LdapRequest*(Connection::*)(int32_t)>(&Connection::findRequest))},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$InputStream*(Connection::*)()>(&Connection::getInputStream))},
	{"getMsgId", "()I", nullptr, $SYNCHRONIZED, $method(static_cast<int32_t(Connection::*)()>(&Connection::getMsgId))},
	{"getTlsServerCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $method(static_cast<$X509Certificate*(Connection::*)()>(&Connection::getTlsServerCertificate)), "javax.security.sasl.SaslException"},
	{"hostnameVerificationDisabledValue", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Connection::hostnameVerificationDisabledValue))},
	{"isTlsConnection", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Connection::*)()>(&Connection::isTlsConnection))},
	{"isUpgradedToStartTls", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Connection::*)()>(&Connection::isUpgradedToStartTls))},
	{"lambda$hostnameVerificationDisabledValue$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&Connection::lambda$hostnameVerificationDisabledValue$0))},
	{"ldapUnbind", "([Ljavax/naming/ldap/Control;)V", nullptr, $PRIVATE, $method(static_cast<void(Connection::*)($ControlArray*)>(&Connection::ldapUnbind))},
	{"pauseReader", "()V", nullptr, $PRIVATE, $method(static_cast<void(Connection::*)()>(&Connection::pauseReader)), "java.io.IOException"},
	{"readFully", "(Ljava/io/InputStream;I)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($InputStream*,int32_t)>(&Connection::readFully)), "java.io.IOException"},
	{"readReply", "(Lcom/sun/jndi/ldap/LdapRequest;)Lcom/sun/jndi/ldap/BerDecoder;", nullptr, 0, $method(static_cast<$BerDecoder*(Connection::*)($LdapRequest*)>(&Connection::readReply)), "java.io.IOException,javax.naming.NamingException"},
	{"removeRequest", "(Lcom/sun/jndi/ldap/LdapRequest;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(Connection::*)($LdapRequest*)>(&Connection::removeRequest))},
	{"replaceStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(Connection::*)($InputStream*,$OutputStream*)>(&Connection::replaceStreams))},
	{"replaceStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(Connection::*)($InputStream*,$OutputStream*,bool)>(&Connection::replaceStreams))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setBound", "()V", nullptr, 0, $method(static_cast<void(Connection::*)()>(&Connection::setBound))},
	{"setHandshakeCompletedListener", "(Ljavax/net/ssl/SSLSocket;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(Connection::*)($SSLSocket*)>(&Connection::setHandshakeCompletedListener))},
	{"setV3", "(Z)V", nullptr, 0, $method(static_cast<void(Connection::*)(bool)>(&Connection::setV3))},
	{"unpauseReader", "()V", nullptr, $PRIVATE, $method(static_cast<void(Connection::*)()>(&Connection::unpauseReader)), "java.io.IOException"},
	{"writeRequest", "(Lcom/sun/jndi/ldap/BerEncoder;I)Lcom/sun/jndi/ldap/LdapRequest;", nullptr, 0, $method(static_cast<$LdapRequest*(Connection::*)($BerEncoder*,int32_t)>(&Connection::writeRequest)), "java.io.IOException"},
	{"writeRequest", "(Lcom/sun/jndi/ldap/BerEncoder;IZ)Lcom/sun/jndi/ldap/LdapRequest;", nullptr, 0, $method(static_cast<$LdapRequest*(Connection::*)($BerEncoder*,int32_t,bool)>(&Connection::writeRequest)), "java.io.IOException"},
	{"writeRequest", "(Lcom/sun/jndi/ldap/BerEncoder;IZI)Lcom/sun/jndi/ldap/LdapRequest;", nullptr, 0, $method(static_cast<$LdapRequest*(Connection::*)($BerEncoder*,int32_t,bool,int32_t)>(&Connection::writeRequest)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Connection_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Connection$HandshakeListener", "com.sun.jndi.ldap.Connection", "HandshakeListener", $PRIVATE},
	{}
};

$ClassInfo _Connection_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.Connection",
	"java.lang.Object",
	"java.lang.Runnable",
	_Connection_FieldInfo_,
	_Connection_MethodInfo_,
	nullptr,
	nullptr,
	_Connection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Connection$HandshakeListener"
};

$Object* allocate$Connection($Class* clazz) {
	return $of($alloc(Connection));
}

bool Connection::IS_HOSTNAME_VERIFICATION_DISABLED = false;

bool Connection::hostnameVerificationDisabledValue() {
	$init(Connection);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0)));
	$var($String, prop, $cast($String, $AccessController::doPrivileged(act)));
	if (prop == nullptr) {
		return false;
	}
	return $nc(prop)->isEmpty() ? true : $Boolean::parseBoolean(prop);
}

void Connection::setV3(bool v) {
	this->v3 = v;
}

void Connection::setBound() {
	this->bound = true;
}

void Connection::init$($LdapClient* parent, $String* host, int32_t port, $String* socketFactory, int32_t connectTimeout, int32_t readTimeout, $OutputStream* trace) {
	$useLocalCurrentObjectStackCache();
	this->v3 = true;
	this->bound = false;
	$set(this, traceFile, nullptr);
	$set(this, traceTagIn, nullptr);
	$set(this, traceTagOut, nullptr);
	this->outMsgId = 0;
	$set(this, pendingRequests, nullptr);
	$set(this, closureReason, nullptr);
	this->useable = true;
	$set(this, startTlsLock, $new($Object));
	$set(this, pauseLock, $new($Object));
	this->paused = false;
	$set(this, host, host);
	this->port = port;
	$set(this, parent, parent);
	this->readTimeout = readTimeout;
	this->connectTimeout = connectTimeout;
	if (trace != nullptr) {
		$set(this, traceFile, trace);
		$set(this, traceTagIn, $str({"<- "_s, host, ":"_s, $$str(port), "\n\n"_s}));
		$set(this, traceTagOut, $str({"-> "_s, host, ":"_s, $$str(port), "\n\n"_s}));
	}
	try {
		$set(this, sock, createSocket(host, port, socketFactory, connectTimeout));
		$set(this, inStream, $new($BufferedInputStream, $($nc(this->sock)->getInputStream())));
		$set(this, outStream, $new($BufferedOutputStream, $($nc(this->sock)->getOutputStream())));
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, e, $catch());
		$var($Throwable, realException, e->getCause());
		$var($CommunicationException, ce, $new($CommunicationException, $$str({host, ":"_s, $$str(port)})));
		ce->setRootCause(realException);
		$throw(ce);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($CommunicationException, ce, $new($CommunicationException, $$str({host, ":"_s, $$str(port)})));
		ce->setRootCause(e);
		$throw(ce);
	}
	$init($Obj);
	$set(this, worker, $nc($Obj::helper)->createThread(this));
	$nc(this->worker)->setDaemon(true);
	$nc(this->worker)->start();
}

$InetSocketAddress* Connection::createInetSocketAddress($String* host, int32_t port) {
	return $new($InetSocketAddress, host, port);
}

$Socket* Connection::createSocket($String* host, int32_t port, $String* socketFactory, int32_t connectTimeout) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Socket, socket, nullptr);
	if (socketFactory != nullptr) {
		$init($Obj);
		$Class* socketFactoryClass = $nc($Obj::helper)->loadClass(socketFactory);
		$var($Method, getDefault, $nc(socketFactoryClass)->getMethod("getDefault"_s, $$new($ClassArray, 0)));
		$var($SocketFactory, factory, $cast($SocketFactory, $nc(getDefault)->invoke(nullptr, $$new($ObjectArray, 0))));
		if (connectTimeout > 0) {
			$var($InetSocketAddress, endpoint, createInetSocketAddress(host, port));
			$assign(socket, $nc(factory)->createSocket());
			$nc(socket)->connect(endpoint, connectTimeout);
		}
		if (socket == nullptr) {
			$assign(socket, $nc(factory)->createSocket(host, port));
		}
	} else {
		if (connectTimeout > 0) {
			$var($InetSocketAddress, endpoint, createInetSocketAddress(host, port));
			$assign(socket, $new($Socket));
			socket->connect(endpoint, connectTimeout);
		}
		if (socket == nullptr) {
			$assign(socket, $new($Socket, host, port));
		}
	}
	if ($instanceOf($SSLSocket, socket)) {
		$var($SSLSocket, sslSocket, $cast($SSLSocket, socket));
		if (!Connection::IS_HOSTNAME_VERIFICATION_DISABLED) {
			$var($SSLParameters, param, $nc(sslSocket)->getSSLParameters());
			$nc(param)->setEndpointIdentificationAlgorithm("LDAPS"_s);
			sslSocket->setSSLParameters(param);
		}
		setHandshakeCompletedListener(sslSocket);
		if (connectTimeout > 0) {
			int32_t socketTimeout = $nc(sslSocket)->getSoTimeout();
			sslSocket->setSoTimeout(connectTimeout);
			sslSocket->startHandshake();
			sslSocket->setSoTimeout(socketTimeout);
		}
	}
	return socket;
}

int32_t Connection::getMsgId() {
	$synchronized(this) {
		return ++this->outMsgId;
	}
}

$LdapRequest* Connection::writeRequest($BerEncoder* ber, int32_t msgId) {
	return writeRequest(ber, msgId, false, -1);
}

$LdapRequest* Connection::writeRequest($BerEncoder* ber, int32_t msgId, bool pauseAfterReceipt) {
	return writeRequest(ber, msgId, pauseAfterReceipt, -1);
}

$LdapRequest* Connection::writeRequest($BerEncoder* ber, int32_t msgId, bool pauseAfterReceipt, int32_t replyQueueCapacity) {
	$useLocalCurrentObjectStackCache();
	$var($LdapRequest, req, $new($LdapRequest, msgId, pauseAfterReceipt, replyQueueCapacity));
	addRequest(req);
	if (this->traceFile != nullptr) {
		$var($OutputStream, var$0, this->traceFile);
		$var($String, var$1, this->traceTagOut);
		$var($bytes, var$2, $nc(ber)->getBuf());
		$Ber::dumpBER(var$0, var$1, var$2, 0, ber->getDataLen());
	}
	unpauseReader();
	try {
		$synchronized(this) {
			$var($bytes, var$3, $nc(ber)->getBuf());
			$nc(this->outStream)->write(var$3, 0, ber->getDataLen());
			$nc(this->outStream)->flush();
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		cleanup(nullptr, true);
		$throw($assignField(this, closureReason, e));
	}
	return req;
}

$BerDecoder* Connection::readReply($LdapRequest* ldr) {
	$useLocalCurrentObjectStackCache();
	$var($BerDecoder, rber, nullptr);
	$synchronized(this) {
		if (this->sock == nullptr) {
			$throwNew($ServiceUnavailableException, $$str({this->host, ":"_s, $$str(this->port), "; socket closed"_s}));
		}
	}
	$var($NamingException, namingException, nullptr);
	try {
		$assign(rber, $nc(ldr)->getReplyBer(this->readTimeout));
	} catch ($InterruptedException&) {
		$var($InterruptedException, ex, $catch());
		$throwNew($InterruptedNamingException, "Interrupted during LDAP operation"_s);
	} catch ($CommunicationException&) {
		$var($CommunicationException, ce, $catch());
		$throw(ce);
	} catch ($NamingException&) {
		$var($NamingException, ne, $catch());
		$assign(namingException, ne);
		$assign(rber, nullptr);
	}
	if (rber == nullptr) {
		abandonRequest(ldr, nullptr);
	}
	if (namingException != nullptr) {
		$throw(namingException);
	}
	return rber;
}

void Connection::addRequest($LdapRequest* ldapRequest) {
	$synchronized(this) {
		$var($LdapRequest, ldr, this->pendingRequests);
		if (ldr == nullptr) {
			$set(this, pendingRequests, ldapRequest);
			$set($nc(ldapRequest), next, nullptr);
		} else {
			$set($nc(ldapRequest), next, this->pendingRequests);
			$set(this, pendingRequests, ldapRequest);
		}
	}
}

$LdapRequest* Connection::findRequest(int32_t msgId) {
	$synchronized(this) {
		$var($LdapRequest, ldr, this->pendingRequests);
		while (ldr != nullptr) {
			if (ldr->msgId == msgId) {
				return ldr;
			}
			$assign(ldr, ldr->next);
		}
		return nullptr;
	}
}

void Connection::removeRequest($LdapRequest* req) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($LdapRequest, ldr, this->pendingRequests);
		$var($LdapRequest, ldrprev, nullptr);
		while (ldr != nullptr) {
			if (ldr == req) {
				ldr->cancel();
				if (ldrprev != nullptr) {
					$set(ldrprev, next, ldr->next);
				} else {
					$set(this, pendingRequests, ldr->next);
				}
				$set(ldr, next, nullptr);
			}
			$assign(ldrprev, ldr);
			$assign(ldr, ldr->next);
		}
	}
}

void Connection::abandonRequest($LdapRequest* ldr, $ControlArray* reqCtls) {
	$useLocalCurrentObjectStackCache();
	removeRequest(ldr);
	$var($BerEncoder, ber, $new($BerEncoder, 256));
	int32_t abandonMsgId = getMsgId();
	try {
		ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
		ber->encodeInt(abandonMsgId);
		ber->encodeInt($nc(ldr)->msgId, $LdapClient::LDAP_REQ_ABANDON);
		if (this->v3) {
			$LdapClient::encodeControls(ber, reqCtls);
		}
		ber->endSeq();
		if (this->traceFile != nullptr) {
			$var($OutputStream, var$0, this->traceFile);
			$var($String, var$1, this->traceTagOut);
			$var($bytes, var$2, ber->getBuf());
			$Ber::dumpBER(var$0, var$1, var$2, 0, ber->getDataLen());
		}
		$synchronized(this) {
			$var($bytes, var$3, ber->getBuf());
			$nc(this->outStream)->write(var$3, 0, ber->getDataLen());
			$nc(this->outStream)->flush();
		}
	} catch ($IOException&) {
		$catch();
	}
}

void Connection::abandonOutstandingReqs($ControlArray* reqCtls) {
	$synchronized(this) {
		$var($LdapRequest, ldr, this->pendingRequests);
		while (ldr != nullptr) {
			abandonRequest(ldr, reqCtls);
			$set(this, pendingRequests, ($assign(ldr, ldr->next)));
		}
	}
}

void Connection::ldapUnbind($ControlArray* reqCtls) {
	$useLocalCurrentObjectStackCache();
	$var($BerEncoder, ber, $new($BerEncoder, 256));
	int32_t unbindMsgId = getMsgId();
	try {
		ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
		ber->encodeInt(unbindMsgId);
		ber->encodeByte($LdapClient::LDAP_REQ_UNBIND);
		ber->encodeByte(0);
		if (this->v3) {
			$LdapClient::encodeControls(ber, reqCtls);
		}
		ber->endSeq();
		if (this->traceFile != nullptr) {
			$var($OutputStream, var$0, this->traceFile);
			$var($String, var$1, this->traceTagOut);
			$var($bytes, var$2, ber->getBuf());
			$Ber::dumpBER(var$0, var$1, var$2, 0, ber->getDataLen());
		}
		$synchronized(this) {
			$var($bytes, var$3, ber->getBuf());
			$nc(this->outStream)->write(var$3, 0, ber->getDataLen());
			$nc(this->outStream)->flush();
		}
	} catch ($IOException&) {
		$catch();
	}
}

void Connection::cleanup($ControlArray* reqCtls, bool notifyParent) {
	$useLocalCurrentObjectStackCache();
	bool nparent = false;
	$synchronized(this) {
		this->useable = false;
		if (this->sock != nullptr) {
			{
				$var($Throwable, var$0, nullptr);
				try {
					if (!notifyParent) {
						abandonOutstandingReqs(reqCtls);
					}
					if (this->bound) {
						ldapUnbind(reqCtls);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					try {
						$nc(this->outStream)->flush();
						$nc(this->sock)->close();
						unpauseReader();
					} catch ($IOException&) {
						$var($IOException, ie, $catch());
					}
					if (!notifyParent) {
						$var($LdapRequest, ldr, this->pendingRequests);
						while (ldr != nullptr) {
							ldr->cancel();
							$assign(ldr, ldr->next);
						}
					}
					if (isTlsConnection() && this->tlsHandshakeListener != nullptr) {
						if (this->closureReason != nullptr) {
							$var($CommunicationException, ce, $new($CommunicationException));
							ce->setRootCause(this->closureReason);
							$nc($nc(this->tlsHandshakeListener)->tlsHandshakeCompleted)->completeExceptionally(ce);
						} else {
							$nc($nc(this->tlsHandshakeListener)->tlsHandshakeCompleted)->cancel(false);
						}
					}
					$set(this, sock, nullptr);
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			nparent = notifyParent;
		}
		if (nparent) {
			$var($LdapRequest, ldr, this->pendingRequests);
			while (ldr != nullptr) {
				ldr->close();
				$assign(ldr, ldr->next);
			}
		}
	}
	if (nparent) {
		$nc(this->parent)->processConnectionClosure();
	}
}

void Connection::replaceStreams($InputStream* newIn, $OutputStream* newOut) {
	$synchronized(this) {
		$set(this, inStream, newIn);
		try {
			$nc(this->outStream)->flush();
		} catch ($IOException&) {
			$var($IOException, ie, $catch());
		}
		$set(this, outStream, newOut);
	}
}

void Connection::replaceStreams($InputStream* newIn, $OutputStream* newOut, bool isStartTls) {
	$synchronized(this) {
		$synchronized(this->startTlsLock) {
			replaceStreams(newIn, newOut);
			this->isUpgradedToStartTls$ = isStartTls;
		}
	}
}

bool Connection::isUpgradedToStartTls() {
	return this->isUpgradedToStartTls$;
}

$InputStream* Connection::getInputStream() {
	$synchronized(this) {
		return this->inStream;
	}
}

void Connection::unpauseReader() {
	$synchronized(this->pauseLock) {
		if (this->paused) {
			this->paused = false;
			$nc($of(this->pauseLock))->notify();
		}
	}
}

void Connection::pauseReader() {
	this->paused = true;
	try {
		while (this->paused) {
			$nc($of(this->pauseLock))->wait();
		}
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($InterruptedIOException, "Pause/unpause reader has problems."_s);
	}
}

void Connection::run() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, inbuf, nullptr);
	int32_t inMsgId = 0;
	int32_t bytesread = 0;
	int32_t br = 0;
	int32_t offset = 0;
	int32_t seqlen = 0;
	int32_t seqlenlen = 0;
	bool eos = false;
	$var($BerDecoder, retBer, nullptr);
	$var($InputStream, in, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				while (true) {
					try {
						$assign(inbuf, $new($bytes, 129));
						offset = 0;
						seqlen = 0;
						seqlenlen = 0;
						$assign(in, getInputStream());
						bytesread = $nc(in)->read(inbuf, offset, 1);
						if (bytesread < 0) {
							if (in != getInputStream()) {
								continue;
							} else {
								break;
							}
						}
						if (inbuf->get(offset++) != ($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR)) {
							continue;
						}
						bytesread = in->read(inbuf, offset, 1);
						if (bytesread < 0) {
							break;
						}
						seqlen = inbuf->get(offset++);
						if (((int32_t)(seqlen & (uint32_t)128)) == 128) {
							seqlenlen = (int32_t)(seqlen & (uint32_t)127);
							if (seqlenlen > 4) {
								$throwNew($IOException, $$str({"Length coded with too many bytes: "_s, $$str(seqlenlen)}));
							}
							bytesread = 0;
							eos = false;
							while (bytesread < seqlenlen) {
								br = in->read(inbuf, offset + bytesread, seqlenlen - bytesread);
								if (br < 0) {
									eos = true;
									break;
								}
								bytesread += br;
							}
							if (eos) {
								break;
							}
							seqlen = 0;
							for (int32_t i = 0; i < seqlenlen; ++i) {
								seqlen = (seqlen << 8) + ((int32_t)(inbuf->get(offset + i) & (uint32_t)255));
							}
							offset += bytesread;
						}
						if (seqlenlen > bytesread) {
							$throwNew($IOException, "Unexpected EOF while reading length"_s);
						}
						if (seqlen < 0) {
							$throwNew($IOException, $$str({"Length too big: "_s, $$str(((int64_t)(((int64_t)seqlen) & (uint64_t)(int64_t)0x00000000FFFFFFFF)))}));
						}
						$var($bytes, left, readFully(in, seqlen));
						$assign(inbuf, $Arrays::copyOf(inbuf, offset + $nc(left)->length));
						$System::arraycopy(left, 0, inbuf, offset, $nc(left)->length);
						offset += $nc(left)->length;
						try {
							$assign(retBer, $new($BerDecoder, inbuf, 0, offset));
							if (this->traceFile != nullptr) {
								$Ber::dumpBER(this->traceFile, this->traceTagIn, inbuf, 0, offset);
							}
							retBer->parseSeq(nullptr);
							inMsgId = retBer->parseInt();
							retBer->reset();
							bool needPause = false;
							if (inMsgId == 0) {
								$nc(this->parent)->processUnsolicited(retBer);
							} else {
								$var($LdapRequest, ldr, findRequest(inMsgId));
								if (ldr != nullptr) {
									$synchronized(this->pauseLock) {
										needPause = ldr->addReplyBer(retBer);
										if (needPause) {
											pauseReader();
										}
									}
								} else {
								}
							}
						} catch ($Ber$DecodeException&) {
							$catch();
						}
					} catch ($IOException&) {
						$var($IOException, ie, $catch());
						if (in != getInputStream()) {
						} else {
							$throw(ie);
						}
					}
				}
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				$set(this, closureReason, ex);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			cleanup(nullptr, true);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$bytes* Connection::readFully($InputStream* is, int32_t length) {
	$init(Connection);
	$var($bytes, buf, $new($bytes, $Math::min(length, 8192)));
	int32_t nread = 0;
	while (nread < length) {
		int32_t bytesToRead = 0;
		if (nread >= buf->length) {
			bytesToRead = $Math::min(length - nread, buf->length + 8192);
			if (buf->length < nread + bytesToRead) {
				$assign(buf, $Arrays::copyOf(buf, nread + bytesToRead));
			}
		} else {
			bytesToRead = buf->length - nread;
		}
		int32_t count = $nc(is)->read(buf, nread, bytesToRead);
		if (count < 0) {
			if (buf->length != nread) {
				$assign(buf, $Arrays::copyOf(buf, nread));
			}
			break;
		}
		nread += count;
	}
	return buf;
}

bool Connection::isTlsConnection() {
	return ($instanceOf($SSLSocket, this->sock)) || this->isUpgradedToStartTls$;
}

void Connection::setHandshakeCompletedListener($SSLSocket* sslSocket) {
	$synchronized(this) {
		if (this->tlsHandshakeListener != nullptr) {
			$nc($nc(this->tlsHandshakeListener)->tlsHandshakeCompleted)->cancel(false);
		}
		$set(this, tlsHandshakeListener, $new($Connection$HandshakeListener, this));
		$nc(sslSocket)->addHandshakeCompletedListener(this->tlsHandshakeListener);
	}
}

$X509Certificate* Connection::getTlsServerCertificate() {
	$useLocalCurrentObjectStackCache();
	try {
		if (isTlsConnection() && this->tlsHandshakeListener != nullptr) {
			return $cast($X509Certificate, $nc($nc(this->tlsHandshakeListener)->tlsHandshakeCompleted)->get());
		}
	} catch ($InterruptedException&) {
		$var($InterruptedException, iex, $catch());
		$throwNew($SaslException, "TLS Handshake Exception "_s, iex);
	} catch ($ExecutionException&) {
		$var($ExecutionException, eex, $catch());
		$throwNew($SaslException, "TLS Handshake Exception "_s, $(eex->getCause()));
	}
	return nullptr;
}

$String* Connection::lambda$hostnameVerificationDisabledValue$0() {
	$init(Connection);
	return $System::getProperty("com.sun.jndi.ldap.object.disableEndpointIdentification"_s);
}

void clinit$Connection($Class* class$) {
	Connection::IS_HOSTNAME_VERIFICATION_DISABLED = Connection::hostnameVerificationDisabledValue();
}

Connection::Connection() {
}

$Class* Connection::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::classInfo$.name)) {
			return Connection$$Lambda$lambda$hostnameVerificationDisabledValue$0::load$(name, initialize);
		}
	}
	$loadClass(Connection, name, initialize, &_Connection_ClassInfo_, clinit$Connection, allocate$Connection);
	return class$;
}

$Class* Connection::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com