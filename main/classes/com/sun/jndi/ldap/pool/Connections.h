#ifndef _com_sun_jndi_ldap_pool_Connections_h_
#define _com_sun_jndi_ldap_pool_Connections_h_
//$ class com.sun.jndi.ldap.pool.Connections
//$ extends com.sun.jndi.ldap.pool.PoolCallback

#include <com/sun/jndi/ldap/pool/PoolCallback.h>

#pragma push_macro("DEFAULT_SIZE")
#undef DEFAULT_SIZE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class PooledConnection;
					class PooledConnectionFactory;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

class Connections : public ::com::sun::jndi::ldap::pool::PoolCallback {
	$class(Connections, 0, ::com::sun::jndi::ldap::pool::PoolCallback)
public:
	Connections();
	void init$(Object$* id, int32_t initSize, int32_t prefSize, int32_t maxSize, ::com::sun::jndi::ldap::pool::PooledConnectionFactory* factory);
	void close();
	void d($String* msg, Object$* o1);
	void d($String* msg, int32_t i);
	void d($String* msg);
	bool expire(int64_t threshold);
	::com::sun::jndi::ldap::pool::PooledConnection* get(int64_t timeout, ::com::sun::jndi::ldap::pool::PooledConnectionFactory* factory);
	::com::sun::jndi::ldap::pool::PooledConnection* getOrCreateConnection(::com::sun::jndi::ldap::pool::PooledConnectionFactory* factory);
	$String* getStats();
	virtual bool releasePooledConnection(::com::sun::jndi::ldap::pool::PooledConnection* conn) override;
	virtual bool removePooledConnection(::com::sun::jndi::ldap::pool::PooledConnection* conn) override;
	void td($String* msg, Object$* o1, Object$* o2);
	void td($String* msg, Object$* o1);
	void td($String* msg);
	static bool debug;
	static bool trace;
	static const int32_t DEFAULT_SIZE = 10;
	int32_t maxSize = 0;
	int32_t prefSize = 0;
	::java::util::List* conns = nullptr;
	bool closed = false;
	::java::lang::ref::Reference* ref = nullptr;
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("DEFAULT_SIZE")

#endif // _com_sun_jndi_ldap_pool_Connections_h_