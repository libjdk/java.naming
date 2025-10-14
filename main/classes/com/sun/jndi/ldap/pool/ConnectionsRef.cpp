#include <com/sun/jndi/ldap/pool/ConnectionsRef.h>

#include <com/sun/jndi/ldap/pool/Connections.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Connections = ::com::sun::jndi::ldap::pool::Connections;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$FieldInfo _ConnectionsRef_FieldInfo_[] = {
	{"conns", "Lcom/sun/jndi/ldap/pool/Connections;", nullptr, $PRIVATE | $FINAL, $field(ConnectionsRef, conns)},
	{}
};

$MethodInfo _ConnectionsRef_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/pool/Connections;)V", nullptr, 0, $method(static_cast<void(ConnectionsRef::*)($Connections*)>(&ConnectionsRef::init$))},
	{"getConnections", "()Lcom/sun/jndi/ldap/pool/Connections;", nullptr, 0, $method(static_cast<$Connections*(ConnectionsRef::*)()>(&ConnectionsRef::getConnections))},
	{}
};

$ClassInfo _ConnectionsRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.pool.ConnectionsRef",
	"java.lang.Object",
	nullptr,
	_ConnectionsRef_FieldInfo_,
	_ConnectionsRef_MethodInfo_
};

$Object* allocate$ConnectionsRef($Class* clazz) {
	return $of($alloc(ConnectionsRef));
}

void ConnectionsRef::init$($Connections* conns) {
	$set(this, conns, conns);
}

$Connections* ConnectionsRef::getConnections() {
	return this->conns;
}

ConnectionsRef::ConnectionsRef() {
}

$Class* ConnectionsRef::load$($String* name, bool initialize) {
	$loadClass(ConnectionsRef, name, initialize, &_ConnectionsRef_ClassInfo_, allocate$ConnectionsRef);
	return class$;
}

$Class* ConnectionsRef::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com