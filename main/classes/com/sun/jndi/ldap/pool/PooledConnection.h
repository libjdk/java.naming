#ifndef _com_sun_jndi_ldap_pool_PooledConnection_h_
#define _com_sun_jndi_ldap_pool_PooledConnection_h_
//$ interface com.sun.jndi.ldap.pool.PooledConnection
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

class PooledConnection : public ::java::lang::Object {
	$interface(PooledConnection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void closeConnection() {}
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_PooledConnection_h_