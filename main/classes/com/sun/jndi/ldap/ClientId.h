#ifndef _com_sun_jndi_ldap_ClientId_h_
#define _com_sun_jndi_ldap_ClientId_h_
//$ class com.sun.jndi.ldap.ClientId
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
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
		class SocketFactory;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class ClientId : public ::java::lang::Object {
	$class(ClientId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClientId();
	void init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $Array<::javax::naming::ldap::Control>* bindCtls, ::java::io::OutputStream* trace, $String* socketFactory);
	virtual bool equals(Object$* obj) override;
	static bool equalsControls($Array<::javax::naming::ldap::Control>* a, $Array<::javax::naming::ldap::Control>* b);
	bool equalsSockFactory(::com::sun::jndi::ldap::ClientId* other);
	virtual int32_t hashCode() override;
	static int32_t hashCodeControls($Array<::javax::naming::ldap::Control>* c);
	bool invokeComparator(::com::sun::jndi::ldap::ClientId* c1, ::com::sun::jndi::ldap::ClientId* c2);
	virtual $String* toString() override;
	static $String* toStringControls($Array<::javax::naming::ldap::Control>* ctls);
	int32_t version = 0;
	$String* hostname = nullptr;
	int32_t port = 0;
	$String* protocol = nullptr;
	$Array<::javax::naming::ldap::Control>* bindCtls = nullptr;
	::java::io::OutputStream* trace = nullptr;
	$String* socketFactory = nullptr;
	int32_t myHash = 0;
	int32_t ctlHash = 0;
	::javax::net::SocketFactory* factory = nullptr;
	::java::lang::reflect::Method* sockComparator = nullptr;
	bool isDefaultSockFactory = false;
	static const bool debug = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_ClientId_h_