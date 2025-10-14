#ifndef _com_sun_jndi_ldap_LdapClientFactory_h_
#define _com_sun_jndi_ldap_LdapClientFactory_h_
//$ class com.sun.jndi.ldap.LdapClientFactory
//$ extends com.sun.jndi.ldap.pool.PooledConnectionFactory

#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class PoolCallback;
					class PooledConnection;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapClientFactory : public ::com::sun::jndi::ldap::pool::PooledConnectionFactory {
	$class(LdapClientFactory, $NO_CLASS_INIT, ::com::sun::jndi::ldap::pool::PooledConnectionFactory)
public:
	LdapClientFactory();
	void init$($String* host, int32_t port, $String* socketFactory, int32_t connTimeout, int32_t readTimeout, ::java::io::OutputStream* trace);
	virtual ::com::sun::jndi::ldap::pool::PooledConnection* createPooledConnection(::com::sun::jndi::ldap::pool::PoolCallback* pcb) override;
	virtual $String* toString() override;
	$String* host = nullptr;
	int32_t port = 0;
	$String* socketFactory = nullptr;
	int32_t connTimeout = 0;
	int32_t readTimeout = 0;
	::java::io::OutputStream* trace = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapClientFactory_h_