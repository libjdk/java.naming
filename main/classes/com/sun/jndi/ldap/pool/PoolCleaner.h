#ifndef _com_sun_jndi_ldap_pool_PoolCleaner_h_
#define _com_sun_jndi_ldap_pool_PoolCleaner_h_
//$ class com.sun.jndi.ldap.pool.PoolCleaner
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class Pool;
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

class PoolCleaner : public ::java::lang::Runnable {
	$class(PoolCleaner, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	PoolCleaner();
	void init$(int64_t period, $Array<::com::sun::jndi::ldap::pool::Pool>* pools);
	virtual void run() override;
	$Array<::com::sun::jndi::ldap::pool::Pool>* pools = nullptr;
	int64_t period = 0;
};

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_pool_PoolCleaner_h_