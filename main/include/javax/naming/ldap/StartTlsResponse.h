#ifndef _javax_naming_ldap_StartTlsResponse_h_
#define _javax_naming_ldap_StartTlsResponse_h_
//$ class javax.naming.ldap.StartTlsResponse
//$ extends javax.naming.ldap.ExtendedResponse

#include <java/lang/Array.h>
#include <javax/naming/ldap/ExtendedResponse.h>

#pragma push_macro("OID")
#undef OID

namespace javax {
	namespace net {
		namespace ssl {
			class HostnameVerifier;
			class SSLSession;
			class SSLSocketFactory;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $import StartTlsResponse : public ::javax::naming::ldap::ExtendedResponse {
	$class(StartTlsResponse, 0, ::javax::naming::ldap::ExtendedResponse)
public:
	StartTlsResponse();
	void init$();
	virtual void close() {}
	virtual $bytes* getEncodedValue() override;
	virtual $String* getID() override;
	virtual ::javax::net::ssl::SSLSession* negotiate() {return nullptr;}
	virtual ::javax::net::ssl::SSLSession* negotiate(::javax::net::ssl::SSLSocketFactory* factory) {return nullptr;}
	virtual void setEnabledCipherSuites($StringArray* suites) {}
	virtual void setHostnameVerifier(::javax::net::ssl::HostnameVerifier* verifier) {}
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0x74324F9A950B4A82;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("OID")

#endif // _javax_naming_ldap_StartTlsResponse_h_