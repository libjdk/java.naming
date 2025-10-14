#include <com/sun/jndi/ldap/pool/PoolCallback.h>

#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$MethodInfo _PoolCallback_MethodInfo_[] = {
	{"releasePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PoolCallback_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jndi.ldap.pool.PoolCallback",
	nullptr,
	nullptr,
	nullptr,
	_PoolCallback_MethodInfo_
};

$Object* allocate$PoolCallback($Class* clazz) {
	return $of($alloc(PoolCallback));
}

$Class* PoolCallback::load$($String* name, bool initialize) {
	$loadClass(PoolCallback, name, initialize, &_PoolCallback_ClassInfo_, allocate$PoolCallback);
	return class$;
}

$Class* PoolCallback::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com