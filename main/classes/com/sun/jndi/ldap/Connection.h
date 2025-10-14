#ifndef _com_sun_jndi_ldap_Connection_h_
#define _com_sun_jndi_ldap_Connection_h_
//$ class com.sun.jndi.ldap.Connection
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

#pragma push_macro("IS_HOSTNAME_VERIFICATION_DISABLED")
#undef IS_HOSTNAME_VERIFICATION_DISABLED

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class BerDecoder;
				class BerEncoder;
				class Connection$HandshakeListener;
				class LdapClient;
				class LdapRequest;
			}
		}
	}
}
namespace java {
	namespace io {
		class IOException;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace net {
		class InetSocketAddress;
		class Socket;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
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
namespace javax {
	namespace net {
		namespace ssl {
			class SSLSocket;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Connection : public ::java::lang::Runnable {
	$class(Connection, 0, ::java::lang::Runnable)
public:
	Connection();
	void init$(::com::sun::jndi::ldap::LdapClient* parent, $String* host, int32_t port, $String* socketFactory, int32_t connectTimeout, int32_t readTimeout, ::java::io::OutputStream* trace);
	void abandonOutstandingReqs($Array<::javax::naming::ldap::Control>* reqCtls);
	void abandonRequest(::com::sun::jndi::ldap::LdapRequest* ldr, $Array<::javax::naming::ldap::Control>* reqCtls);
	void addRequest(::com::sun::jndi::ldap::LdapRequest* ldapRequest);
	void cleanup($Array<::javax::naming::ldap::Control>* reqCtls, bool notifyParent);
	::java::net::InetSocketAddress* createInetSocketAddress($String* host, int32_t port);
	::java::net::Socket* createSocket($String* host, int32_t port, $String* socketFactory, int32_t connectTimeout);
	::com::sun::jndi::ldap::LdapRequest* findRequest(int32_t msgId);
	::java::io::InputStream* getInputStream();
	int32_t getMsgId();
	::java::security::cert::X509Certificate* getTlsServerCertificate();
	static bool hostnameVerificationDisabledValue();
	bool isTlsConnection();
	bool isUpgradedToStartTls();
	static $String* lambda$hostnameVerificationDisabledValue$0();
	void ldapUnbind($Array<::javax::naming::ldap::Control>* reqCtls);
	void pauseReader();
	static $bytes* readFully(::java::io::InputStream* is, int32_t length);
	::com::sun::jndi::ldap::BerDecoder* readReply(::com::sun::jndi::ldap::LdapRequest* ldr);
	void removeRequest(::com::sun::jndi::ldap::LdapRequest* req);
	void replaceStreams(::java::io::InputStream* newIn, ::java::io::OutputStream* newOut);
	void replaceStreams(::java::io::InputStream* newIn, ::java::io::OutputStream* newOut, bool isStartTls);
	virtual void run() override;
	void setBound();
	void setHandshakeCompletedListener(::javax::net::ssl::SSLSocket* sslSocket);
	void setV3(bool v);
	void unpauseReader();
	::com::sun::jndi::ldap::LdapRequest* writeRequest(::com::sun::jndi::ldap::BerEncoder* ber, int32_t msgId);
	::com::sun::jndi::ldap::LdapRequest* writeRequest(::com::sun::jndi::ldap::BerEncoder* ber, int32_t msgId, bool pauseAfterReceipt);
	::com::sun::jndi::ldap::LdapRequest* writeRequest(::com::sun::jndi::ldap::BerEncoder* ber, int32_t msgId, bool pauseAfterReceipt, int32_t replyQueueCapacity);
	static const bool debug = false;
	static const int32_t dump = 0;
	$Thread* worker = nullptr;
	bool v3 = false;
	$String* host = nullptr;
	int32_t port = 0;
	bool bound = false;
	::java::io::OutputStream* traceFile = nullptr;
	$String* traceTagIn = nullptr;
	$String* traceTagOut = nullptr;
	::java::io::InputStream* inStream = nullptr;
	::java::io::OutputStream* outStream = nullptr;
	::java::net::Socket* sock = nullptr;
	::com::sun::jndi::ldap::LdapClient* parent = nullptr;
	int32_t outMsgId = 0;
	::com::sun::jndi::ldap::LdapRequest* pendingRequests = nullptr;
	$volatile(::java::io::IOException*) closureReason = nullptr;
	$volatile(bool) useable = false;
	int32_t readTimeout = 0;
	int32_t connectTimeout = 0;
	$volatile(bool) isUpgradedToStartTls$ = false;
	$Object* startTlsLock = nullptr;
	static bool IS_HOSTNAME_VERIFICATION_DISABLED;
	$Object* pauseLock = nullptr;
	bool paused = false;
	$volatile(::com::sun::jndi::ldap::Connection$HandshakeListener*) tlsHandshakeListener = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("IS_HOSTNAME_VERIFICATION_DISABLED")

#endif // _com_sun_jndi_ldap_Connection_h_