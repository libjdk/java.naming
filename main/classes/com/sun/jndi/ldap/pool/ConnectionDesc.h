#ifndef _com_sun_jndi_ldap_pool_ConnectionDesc_h_
#define _com_sun_jndi_ldap_pool_ConnectionDesc_h_
//$ class com.sun.jndi.ldap.pool.ConnectionDesc
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BUSY")
#undef BUSY
#pragma push_macro("EXPIRED")
#undef EXPIRED
#pragma push_macro("IDLE")
#undef IDLE

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

class ConnectionDesc : public ::java::lang::Object {
	$class(ConnectionDesc, 0, ::java::lang::Object)
public:
	ConnectionDesc();
	void init$(::com::sun::jndi::ldap::pool::PooledConnection* conn);
	void init$(::com::sun::jndi::ldap::pool::PooledConnection* conn, bool use);
	void d($String* msg);
	virtual bool equals(Object$* obj) override;
	bool expire(int64_t threshold);
	int32_t getState();
	int64_t getUseCount();
	virtual int32_t hashCode() override;
	bool release();
	virtual $String* toString() override;
	::com::sun::jndi::ldap::pool::PooledConnection* tryUse();
	static bool debug;
	static const int8_t BUSY = (int8_t)0;
	static const int8_t IDLE = (int8_t)1;
	static const int8_t EXPIRED = (int8_t)2;
	::com::sun::jndi::ldap::pool::PooledConnection* conn = nullptr;
	int8_t state = 0;
	int64_t idleSince = 0;
	int64_t useCount = 0;
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("BUSY")
#pragma pop_macro("EXPIRED")
#pragma pop_macro("IDLE")

#endif // _com_sun_jndi_ldap_pool_ConnectionDesc_h_