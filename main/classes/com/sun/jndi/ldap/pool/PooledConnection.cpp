#include <com/sun/jndi/ldap/pool/PooledConnection.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$MethodInfo _PooledConnection_MethodInfo_[] = {
	{"closeConnection", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PooledConnection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jndi.ldap.pool.PooledConnection",
	nullptr,
	nullptr,
	nullptr,
	_PooledConnection_MethodInfo_
};

$Object* allocate$PooledConnection($Class* clazz) {
	return $of($alloc(PooledConnection));
}

$Class* PooledConnection::load$($String* name, bool initialize) {
	$loadClass(PooledConnection, name, initialize, &_PooledConnection_ClassInfo_, allocate$PooledConnection);
	return class$;
}

$Class* PooledConnection::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com