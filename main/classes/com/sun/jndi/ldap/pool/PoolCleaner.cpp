#include <com/sun/jndi/ldap/pool/PoolCleaner.h>

#include <com/sun/jndi/ldap/pool/Pool.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PoolArray = $Array<::com::sun::jndi::ldap::pool::Pool>;
using $Pool = ::com::sun::jndi::ldap::pool::Pool;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$FieldInfo _PoolCleaner_FieldInfo_[] = {
	{"pools", "[Lcom/sun/jndi/ldap/pool/Pool;", nullptr, $PRIVATE | $FINAL, $field(PoolCleaner, pools)},
	{"period", "J", nullptr, $PRIVATE | $FINAL, $field(PoolCleaner, period)},
	{}
};

$MethodInfo _PoolCleaner_MethodInfo_[] = {
	{"<init>", "(J[Lcom/sun/jndi/ldap/pool/Pool;)V", nullptr, $PUBLIC, $method(static_cast<void(PoolCleaner::*)(int64_t,$PoolArray*)>(&PoolCleaner::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PoolCleaner_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.pool.PoolCleaner",
	"java.lang.Object",
	"java.lang.Runnable",
	_PoolCleaner_FieldInfo_,
	_PoolCleaner_MethodInfo_
};

$Object* allocate$PoolCleaner($Class* clazz) {
	return $of($alloc(PoolCleaner));
}

void PoolCleaner::init$(int64_t period, $PoolArray* pools) {
	this->period = period;
	$set(this, pools, $cast($PoolArray, $nc(pools)->clone()));
}

void PoolCleaner::run() {
	int64_t threshold = 0;
	while (true) {
		$synchronized(this) {
			try {
				$of(this)->wait(this->period);
			} catch ($InterruptedException&) {
				$catch();
			}
			threshold = $System::currentTimeMillis() - this->period;
			for (int32_t i = 0; i < $nc(this->pools)->length; ++i) {
				if ($nc(this->pools)->get(i) != nullptr) {
					$nc($nc(this->pools)->get(i))->expire(threshold);
				}
			}
		}
	}
}

PoolCleaner::PoolCleaner() {
}

$Class* PoolCleaner::load$($String* name, bool initialize) {
	$loadClass(PoolCleaner, name, initialize, &_PoolCleaner_ClassInfo_, allocate$PoolCleaner);
	return class$;
}

$Class* PoolCleaner::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com