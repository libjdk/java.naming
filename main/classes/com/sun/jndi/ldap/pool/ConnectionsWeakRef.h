#ifndef _com_sun_jndi_ldap_pool_ConnectionsWeakRef_h_
#define _com_sun_jndi_ldap_pool_ConnectionsWeakRef_h_
//$ class com.sun.jndi.ldap.pool.ConnectionsWeakRef
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class Connections;
					class ConnectionsRef;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

class ConnectionsWeakRef : public ::java::lang::ref::WeakReference {
	$class(ConnectionsWeakRef, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	ConnectionsWeakRef();
	void init$(::com::sun::jndi::ldap::pool::ConnectionsRef* connsRef, ::java::lang::ref::ReferenceQueue* queue);
	virtual ::com::sun::jndi::ldap::pool::Connections* getConnections();
	::com::sun::jndi::ldap::pool::Connections* conns = nullptr;
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_ConnectionsWeakRef_h_