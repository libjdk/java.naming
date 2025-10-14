#ifndef _com_sun_jndi_ldap_ext_StartTlsResponseImpl_h_
#define _com_sun_jndi_ldap_ext_StartTlsResponseImpl_h_
//$ class com.sun.jndi.ldap.ext.StartTlsResponseImpl
//$ extends javax.naming.ldap.StartTlsResponse

#include <java/lang/Array.h>
#include <javax/naming/ldap/StartTlsResponse.h>

#pragma push_macro("DNSNAME_TYPE")
#undef DNSNAME_TYPE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class Connection;
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Principal;
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HostnameVerifier;
			class SSLSession;
			class SSLSocket;
			class SSLSocketFactory;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace ext {

class StartTlsResponseImpl : public ::javax::naming::ldap::StartTlsResponse {
	$class(StartTlsResponseImpl, $NO_CLASS_INIT, ::javax::naming::ldap::StartTlsResponse)
public:
	StartTlsResponseImpl();
	void init$();
	virtual void close() override;
	::javax::net::ssl::SSLSocketFactory* getDefaultFactory();
	static ::java::security::Principal* getPeerPrincipal(::javax::net::ssl::SSLSession* session);
	virtual ::javax::net::ssl::SSLSession* negotiate() override;
	virtual ::javax::net::ssl::SSLSession* negotiate(::javax::net::ssl::SSLSocketFactory* factory) override;
	void setConnection(::com::sun::jndi::ldap::Connection* ldapConnection, $String* hostname);
	virtual void setEnabledCipherSuites($StringArray* suites) override;
	virtual void setHostnameVerifier(::javax::net::ssl::HostnameVerifier* verifier) override;
	::javax::net::ssl::SSLSocket* startHandshake(::javax::net::ssl::SSLSocketFactory* factory);
	bool verify($String* hostname, ::javax::net::ssl::SSLSession* session);
	static const bool debug = false;
	static const int32_t DNSNAME_TYPE = 2;
	$String* hostname = nullptr;
	::com::sun::jndi::ldap::Connection* ldapConnection = nullptr;
	::java::io::InputStream* originalInputStream = nullptr;
	::java::io::OutputStream* originalOutputStream = nullptr;
	::javax::net::ssl::SSLSocket* sslSocket = nullptr;
	::javax::net::ssl::SSLSocketFactory* defaultFactory = nullptr;
	::javax::net::ssl::SSLSocketFactory* currentFactory = nullptr;
	$StringArray* suites = nullptr;
	::javax::net::ssl::HostnameVerifier* verifier = nullptr;
	bool isClosed = false;
	static const int64_t serialVersionUID = (int64_t)0xF05D6CE1B32A7180;
};

				} // ext
			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("DNSNAME_TYPE")

#endif // _com_sun_jndi_ldap_ext_StartTlsResponseImpl_h_