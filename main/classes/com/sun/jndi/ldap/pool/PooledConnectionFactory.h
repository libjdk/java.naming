#ifndef _com_sun_jndi_ldap_pool_PooledConnectionFactory_h_
#define _com_sun_jndi_ldap_pool_PooledConnectionFactory_h_
//$ interface com.sun.jndi.ldap.pool.PooledConnectionFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

class PooledConnectionFactory : public ::java::lang::Object {
	$interface(PooledConnectionFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::jndi::ldap::pool::PooledConnection* createPooledConnection(::com::sun::jndi::ldap::pool::PoolCallback* pcb) {return nullptr;}
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_PooledConnectionFactory_h_