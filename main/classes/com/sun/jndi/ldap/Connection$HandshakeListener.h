#ifndef _com_sun_jndi_ldap_Connection$HandshakeListener_h_
#define _com_sun_jndi_ldap_Connection$HandshakeListener_h_
//$ class com.sun.jndi.ldap.Connection$HandshakeListener
//$ extends javax.net.ssl.HandshakeCompletedListener

#include <javax/net/ssl/HandshakeCompletedListener.h>

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
	namespace util {
		namespace concurrent {
			class CompletableFuture;
		}
	}
}
namespace javax {
	namespace net {
		namespace ssl {
			class HandshakeCompletedEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Connection$HandshakeListener : public ::javax::net::ssl::HandshakeCompletedListener {
	$class(Connection$HandshakeListener, $NO_CLASS_INIT, ::javax::net::ssl::HandshakeCompletedListener)
public:
	Connection$HandshakeListener();
	void init$(::com::sun::jndi::ldap::Connection* this$0);
	virtual void handshakeCompleted(::javax::net::ssl::HandshakeCompletedEvent* event) override;
	::com::sun::jndi::ldap::Connection* this$0 = nullptr;
	::java::util::concurrent::CompletableFuture* tlsHandshakeCompleted = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_Connection$HandshakeListener_h_