#ifndef _com_sun_jndi_ldap_pool_Pool_h_
#define _com_sun_jndi_ldap_pool_Pool_h_
//$ class com.sun.jndi.ldap.pool.Pool
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class Connections;
					class PooledConnection;
					class PooledConnectionFactory;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

class Pool : public ::java::lang::Object {
	$class(Pool, 0, ::java::lang::Object)
public:
	Pool();
	void init$(int32_t initSize, int32_t prefSize, int32_t maxSize);
	void d($String* msg, int32_t i);
	void d($String* msg, Object$* obj);
	void expire(int64_t threshold);
	static void expungeStaleConnections();
	::com::sun::jndi::ldap::pool::Connections* getConnections(Object$* id);
	::com::sun::jndi::ldap::pool::PooledConnection* getPooledConnection(Object$* id, int64_t timeout, ::com::sun::jndi::ldap::pool::PooledConnectionFactory* factory);
	void showStats(::java::io::PrintStream* out);
	virtual $String* toString() override;
	static bool debug;
	static ::java::lang::ref::ReferenceQueue* queue;
	static ::java::util::Collection* weakRefs;
	int32_t maxSize = 0;
	int32_t prefSize = 0;
	int32_t initSize = 0;
	::java::util::Map* map = nullptr;
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_Pool_h_