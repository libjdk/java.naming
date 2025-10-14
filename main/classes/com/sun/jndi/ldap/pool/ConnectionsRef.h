#ifndef _com_sun_jndi_ldap_pool_ConnectionsRef_h_
#define _com_sun_jndi_ldap_pool_ConnectionsRef_h_
//$ class com.sun.jndi.ldap.pool.ConnectionsRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class Connections;
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

class ConnectionsRef : public ::java::lang::Object {
	$class(ConnectionsRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConnectionsRef();
	void init$(::com::sun::jndi::ldap::pool::Connections* conns);
	::com::sun::jndi::ldap::pool::Connections* getConnections();
	::com::sun::jndi::ldap::pool::Connections* conns = nullptr;
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_ConnectionsRef_h_