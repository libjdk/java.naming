#include <com/sun/jndi/ldap/pool/ConnectionsWeakRef.h>

#include <com/sun/jndi/ldap/pool/Connections.h>
#include <com/sun/jndi/ldap/pool/ConnectionsRef.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Connections = ::com::sun::jndi::ldap::pool::Connections;
using $ConnectionsRef = ::com::sun::jndi::ldap::pool::ConnectionsRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$FieldInfo _ConnectionsWeakRef_FieldInfo_[] = {
	{"conns", "Lcom/sun/jndi/ldap/pool/Connections;", nullptr, $PRIVATE | $FINAL, $field(ConnectionsWeakRef, conns)},
	{}
};

$MethodInfo _ConnectionsWeakRef_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/pool/ConnectionsRef;Ljava/lang/ref/ReferenceQueue;)V", "(Lcom/sun/jndi/ldap/pool/ConnectionsRef;Ljava/lang/ref/ReferenceQueue<-Lcom/sun/jndi/ldap/pool/ConnectionsRef;>;)V", 0, $method(static_cast<void(ConnectionsWeakRef::*)($ConnectionsRef*,$ReferenceQueue*)>(&ConnectionsWeakRef::init$))},
	{"getConnections", "()Lcom/sun/jndi/ldap/pool/Connections;", nullptr, 0},
	{}
};

$ClassInfo _ConnectionsWeakRef_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.pool.ConnectionsWeakRef",
	"java.lang.ref.WeakReference",
	nullptr,
	_ConnectionsWeakRef_FieldInfo_,
	_ConnectionsWeakRef_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Lcom/sun/jndi/ldap/pool/ConnectionsRef;>;"
};

$Object* allocate$ConnectionsWeakRef($Class* clazz) {
	return $of($alloc(ConnectionsWeakRef));
}

void ConnectionsWeakRef::init$($ConnectionsRef* connsRef, $ReferenceQueue* queue) {
	$WeakReference::init$(connsRef, queue);
	$set(this, conns, $nc(connsRef)->getConnections());
}

$Connections* ConnectionsWeakRef::getConnections() {
	return this->conns;
}

ConnectionsWeakRef::ConnectionsWeakRef() {
}

$Class* ConnectionsWeakRef::load$($String* name, bool initialize) {
	$loadClass(ConnectionsWeakRef, name, initialize, &_ConnectionsWeakRef_ClassInfo_, allocate$ConnectionsWeakRef);
	return class$;
}

$Class* ConnectionsWeakRef::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com