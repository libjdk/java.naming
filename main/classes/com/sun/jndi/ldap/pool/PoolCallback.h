#ifndef _com_sun_jndi_ldap_pool_PoolCallback_h_
#define _com_sun_jndi_ldap_pool_PoolCallback_h_
//$ interface com.sun.jndi.ldap.pool.PoolCallback
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
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

class PoolCallback : public ::java::lang::Object {
	$interface(PoolCallback, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool releasePooledConnection(::com::sun::jndi::ldap::pool::PooledConnection* conn) {return false;}
	virtual bool removePooledConnection(::com::sun::jndi::ldap::pool::PooledConnection* conn) {return false;}
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_PoolCallback_h_