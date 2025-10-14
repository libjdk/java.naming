#include <com/sun/jndi/ldap/pool/ConnectionDesc.h>

#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BUSY
#undef EXPIRED
#undef IDLE

using $Pool = ::com::sun::jndi::ldap::pool::Pool;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$FieldInfo _ConnectionDesc_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ConnectionDesc, debug)},
	{"BUSY", "B", nullptr, $STATIC | $FINAL, $constField(ConnectionDesc, BUSY)},
	{"IDLE", "B", nullptr, $STATIC | $FINAL, $constField(ConnectionDesc, IDLE)},
	{"EXPIRED", "B", nullptr, $STATIC | $FINAL, $constField(ConnectionDesc, EXPIRED)},
	{"conn", "Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PRIVATE | $FINAL, $field(ConnectionDesc, conn)},
	{"state", "B", nullptr, $PRIVATE, $field(ConnectionDesc, state)},
	{"idleSince", "J", nullptr, $PRIVATE, $field(ConnectionDesc, idleSince)},
	{"useCount", "J", nullptr, $PRIVATE, $field(ConnectionDesc, useCount)},
	{}
};

$MethodInfo _ConnectionDesc_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)V", nullptr, 0, $method(static_cast<void(ConnectionDesc::*)($PooledConnection*)>(&ConnectionDesc::init$))},
	{"<init>", "(Lcom/sun/jndi/ldap/pool/PooledConnection;Z)V", nullptr, 0, $method(static_cast<void(ConnectionDesc::*)($PooledConnection*,bool)>(&ConnectionDesc::init$))},
	{"d", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ConnectionDesc::*)($String*)>(&ConnectionDesc::d))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"expire", "(J)Z", nullptr, $SYNCHRONIZED, $method(static_cast<bool(ConnectionDesc::*)(int64_t)>(&ConnectionDesc::expire))},
	{"getState", "()I", nullptr, 0, $method(static_cast<int32_t(ConnectionDesc::*)()>(&ConnectionDesc::getState))},
	{"getUseCount", "()J", nullptr, 0, $method(static_cast<int64_t(ConnectionDesc::*)()>(&ConnectionDesc::getUseCount))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"release", "()Z", nullptr, $SYNCHRONIZED, $method(static_cast<bool(ConnectionDesc::*)()>(&ConnectionDesc::release))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryUse", "()Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $SYNCHRONIZED, $method(static_cast<$PooledConnection*(ConnectionDesc::*)()>(&ConnectionDesc::tryUse))},
	{}
};

$ClassInfo _ConnectionDesc_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.pool.ConnectionDesc",
	"java.lang.Object",
	nullptr,
	_ConnectionDesc_FieldInfo_,
	_ConnectionDesc_MethodInfo_
};

$Object* allocate$ConnectionDesc($Class* clazz) {
	return $of($alloc(ConnectionDesc));
}

bool ConnectionDesc::debug = false;

void ConnectionDesc::init$($PooledConnection* conn) {
	this->state = ConnectionDesc::IDLE;
	this->useCount = 0;
	$set(this, conn, conn);
}

void ConnectionDesc::init$($PooledConnection* conn, bool use) {
	this->state = ConnectionDesc::IDLE;
	this->useCount = 0;
	$set(this, conn, conn);
	if (use) {
		this->state = ConnectionDesc::BUSY;
		++this->useCount;
	}
}

bool ConnectionDesc::equals(Object$* obj) {
	return obj != nullptr && $instanceOf(ConnectionDesc, obj) && $nc(($cast(ConnectionDesc, obj)))->conn == this->conn;
}

int32_t ConnectionDesc::hashCode() {
	return $nc($of(this->conn))->hashCode();
}

bool ConnectionDesc::release() {
	$synchronized(this) {
		d("release()"_s);
		if (this->state == ConnectionDesc::BUSY) {
			this->state = ConnectionDesc::IDLE;
			this->idleSince = $System::currentTimeMillis();
			return true;
		} else {
			return false;
		}
	}
}

$PooledConnection* ConnectionDesc::tryUse() {
	$synchronized(this) {
		d("tryUse()"_s);
		if (this->state == ConnectionDesc::IDLE) {
			this->state = ConnectionDesc::BUSY;
			++this->useCount;
			return this->conn;
		}
		return nullptr;
	}
}

bool ConnectionDesc::expire(int64_t threshold) {
	$synchronized(this) {
		if (this->state == ConnectionDesc::IDLE && this->idleSince < threshold) {
			d("expire(): expired"_s);
			this->state = ConnectionDesc::EXPIRED;
			$nc(this->conn)->closeConnection();
			return true;
		} else {
			d("expire(): not expired"_s);
			return false;
		}
	}
}

$String* ConnectionDesc::toString() {
	return $str({$($nc($of(this->conn))->toString()), " "_s, (this->state == ConnectionDesc::BUSY ? "busy"_s : (this->state == ConnectionDesc::IDLE ? "idle"_s : "expired"_s))});
}

int32_t ConnectionDesc::getState() {
	return this->state;
}

int64_t ConnectionDesc::getUseCount() {
	return this->useCount;
}

void ConnectionDesc::d($String* msg) {
	if (ConnectionDesc::debug) {
		$init($System);
		$nc($System::err)->println($$str({"ConnectionDesc."_s, msg, " "_s, $(toString())}));
	}
}

void clinit$ConnectionDesc($Class* class$) {
	$init($Pool);
	ConnectionDesc::debug = $Pool::debug;
}

ConnectionDesc::ConnectionDesc() {
}

$Class* ConnectionDesc::load$($String* name, bool initialize) {
	$loadClass(ConnectionDesc, name, initialize, &_ConnectionDesc_ClassInfo_, clinit$ConnectionDesc, allocate$ConnectionDesc);
	return class$;
}

$Class* ConnectionDesc::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com