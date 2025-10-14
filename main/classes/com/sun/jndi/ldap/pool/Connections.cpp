#include <com/sun/jndi/ldap/pool/Connections.h>

#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/pool/ConnectionDesc.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PoolCallback.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/InterruptedNamingException.h>
#include <jcpp.h>

#undef BUSY
#undef DEFAULT_SIZE
#undef EXPIRED
#undef IDLE

using $LdapPoolManager = ::com::sun::jndi::ldap::LdapPoolManager;
using $ConnectionDesc = ::com::sun::jndi::ldap::pool::ConnectionDesc;
using $Pool = ::com::sun::jndi::ldap::pool::Pool;
using $PoolCallback = ::com::sun::jndi::ldap::pool::PoolCallback;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $PooledConnectionFactory = ::com::sun::jndi::ldap::pool::PooledConnectionFactory;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CommunicationException = ::javax::naming::CommunicationException;
using $InterruptedNamingException = ::javax::naming::InterruptedNamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$FieldInfo _Connections_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Connections, debug)},
	{"trace", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Connections, trace)},
	{"DEFAULT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Connections, DEFAULT_SIZE)},
	{"maxSize", "I", nullptr, $PRIVATE | $FINAL, $field(Connections, maxSize)},
	{"prefSize", "I", nullptr, $PRIVATE | $FINAL, $field(Connections, prefSize)},
	{"conns", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/jndi/ldap/pool/ConnectionDesc;>;", $PRIVATE | $FINAL, $field(Connections, conns)},
	{"closed", "Z", nullptr, $PRIVATE, $field(Connections, closed)},
	{"ref", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<Ljava/lang/Object;>;", $PRIVATE, $field(Connections, ref)},
	{}
};

$MethodInfo _Connections_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;IIILcom/sun/jndi/ldap/pool/PooledConnectionFactory;)V", nullptr, 0, $method(static_cast<void(Connections::*)(Object$*,int32_t,int32_t,int32_t,$PooledConnectionFactory*)>(&Connections::init$)), "javax.naming.NamingException"},
	{"close", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(Connections::*)()>(&Connections::close))},
	{"d", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Connections::*)($String*,Object$*)>(&Connections::d))},
	{"d", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Connections::*)($String*,int32_t)>(&Connections::d))},
	{"d", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Connections::*)($String*)>(&Connections::d))},
	{"expire", "(J)Z", nullptr, 0, $method(static_cast<bool(Connections::*)(int64_t)>(&Connections::expire))},
	{"get", "(JLcom/sun/jndi/ldap/pool/PooledConnectionFactory;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $SYNCHRONIZED, $method(static_cast<$PooledConnection*(Connections::*)(int64_t,$PooledConnectionFactory*)>(&Connections::get)), "javax.naming.NamingException"},
	{"getOrCreateConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnectionFactory;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PRIVATE, $method(static_cast<$PooledConnection*(Connections::*)($PooledConnectionFactory*)>(&Connections::getOrCreateConnection)), "javax.naming.NamingException"},
	{"getStats", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(Connections::*)()>(&Connections::getStats))},
	{"releasePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removePooledConnection", "(Lcom/sun/jndi/ldap/pool/PooledConnection;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"td", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Connections::*)($String*,Object$*,Object$*)>(&Connections::td))},
	{"td", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Connections::*)($String*,Object$*)>(&Connections::td))},
	{"td", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Connections::*)($String*)>(&Connections::td))},
	{}
};

$ClassInfo _Connections_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.pool.Connections",
	"java.lang.Object",
	"com.sun.jndi.ldap.pool.PoolCallback",
	_Connections_FieldInfo_,
	_Connections_MethodInfo_
};

$Object* allocate$Connections($Class* clazz) {
	return $of($alloc(Connections));
}

bool Connections::debug = false;
bool Connections::trace = false;

void Connections::init$(Object$* id, int32_t initSize, int32_t prefSize, int32_t maxSize, $PooledConnectionFactory* factory) {
	this->closed = false;
	this->maxSize = maxSize;
	if (maxSize > 0) {
		this->prefSize = $Math::min(prefSize, maxSize);
		initSize = $Math::min(initSize, maxSize);
	} else {
		this->prefSize = prefSize;
	}
	$set(this, conns, $new($ArrayList, maxSize > 0 ? maxSize : Connections::DEFAULT_SIZE));
	$set(this, ref, $new($SoftReference, id));
	d("init size="_s, initSize);
	d("max size="_s, maxSize);
	d("preferred size="_s, prefSize);
	$var($PooledConnection, conn, nullptr);
	for (int32_t i = 0; i < initSize; ++i) {
		$assign(conn, $nc(factory)->createPooledConnection(this));
		td("Create "_s, conn, factory);
		$nc(this->conns)->add($$new($ConnectionDesc, conn));
	}
}

$PooledConnection* Connections::get(int64_t timeout, $PooledConnectionFactory* factory) {
	$synchronized(this) {
		$var($PooledConnection, conn, nullptr);
		int64_t start = (timeout > 0 ? $System::currentTimeMillis() : (int64_t)0);
		int64_t waittime = timeout;
		d("get(): before"_s);
		while (($assign(conn, getOrCreateConnection(factory))) == nullptr) {
			if (timeout > 0 && waittime <= 0) {
				$throwNew($CommunicationException, $$str({"Timeout exceeded while waiting for a connection: "_s, $$str(timeout), "ms"_s}));
			}
			try {
				d("get(): waiting"_s);
				if (waittime > 0) {
					$of(this)->wait(waittime);
				} else {
					$of(this)->wait();
				}
			} catch ($InterruptedException&) {
				$var($InterruptedException, e, $catch());
				$throwNew($InterruptedNamingException, "Interrupted while waiting for a connection"_s);
			}
			if (timeout > 0) {
				int64_t now = $System::currentTimeMillis();
				waittime = timeout - (now - start);
			}
		}
		d("get(): after"_s);
		return conn;
	}
}

$PooledConnection* Connections::getOrCreateConnection($PooledConnectionFactory* factory) {
	int32_t size = $nc(this->conns)->size();
	$var($PooledConnection, conn, nullptr);
	if (this->prefSize <= 0 || size >= this->prefSize) {
		$var($ConnectionDesc, entry, nullptr);
		for (int32_t i = 0; i < size; ++i) {
			$assign(entry, $cast($ConnectionDesc, $nc(this->conns)->get(i)));
			if (($assign(conn, $nc(entry)->tryUse())) != nullptr) {
				d("get(): use "_s, $of(conn));
				td("Use "_s, conn);
				return conn;
			}
		}
	}
	if (this->maxSize > 0 && size >= this->maxSize) {
		return nullptr;
	}
	$assign(conn, $nc(factory)->createPooledConnection(this));
	td("Create and use "_s, conn, factory);
	$nc(this->conns)->add($$new($ConnectionDesc, conn, true));
	return conn;
}

bool Connections::releasePooledConnection($PooledConnection* conn) {
	$synchronized(this) {
		$var($ConnectionDesc, entry, nullptr);
		int32_t loc = $nc(this->conns)->indexOf($assign(entry, $new($ConnectionDesc, conn)));
		d("release(): "_s, $of(conn));
		if (loc >= 0) {
			if (this->closed || (this->prefSize > 0 && $nc(this->conns)->size() > this->prefSize)) {
				d("release(): closing "_s, $of(conn));
				td("Close "_s, conn);
				$nc(this->conns)->remove($of(entry));
				$nc(conn)->closeConnection();
			} else {
				d("release(): release "_s, $of(conn));
				td("Release "_s, conn);
				$assign(entry, $cast($ConnectionDesc, $nc(this->conns)->get(loc)));
				$nc(entry)->release();
			}
			$of(this)->notifyAll();
			d("release(): notify"_s);
			return true;
		} else {
			return false;
		}
	}
}

bool Connections::removePooledConnection($PooledConnection* conn) {
	$synchronized(this) {
		if ($nc(this->conns)->remove($of($$new($ConnectionDesc, conn)))) {
			d("remove(): "_s, $of(conn));
			$of(this)->notifyAll();
			d("remove(): notify"_s);
			td("Remove "_s, conn);
			if ($nc(this->conns)->isEmpty()) {
				$set(this, ref, nullptr);
			}
			return true;
		} else {
			d("remove(): not found "_s, $of(conn));
			return false;
		}
	}
}

bool Connections::expire(int64_t threshold) {
	$var($List, clonedConns, nullptr);
	$synchronized(this) {
		$assign(clonedConns, $new($ArrayList, static_cast<$Collection*>(this->conns)));
	}
	$var($List, expired, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(clonedConns)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ConnectionDesc, entry, $cast($ConnectionDesc, i$->next()));
			{
				d("expire(): "_s, $of(entry));
				if ($nc(entry)->expire(threshold)) {
					expired->add(entry);
					td("expire(): Expired "_s, entry);
				}
			}
		}
	}
	$synchronized(this) {
		$nc(this->conns)->removeAll(expired);
		return $nc(this->conns)->isEmpty();
	}
}

void Connections::close() {
	$synchronized(this) {
		expire($System::currentTimeMillis());
		this->closed = true;
	}
}

$String* Connections::getStats() {
	int32_t idle = 0;
	int32_t busy = 0;
	int32_t expired = 0;
	int64_t use = 0;
	int32_t len = 0;
	$synchronized(this) {
		len = $nc(this->conns)->size();
		$var($ConnectionDesc, entry, nullptr);
		for (int32_t i = 0; i < len; ++i) {
			$assign(entry, $cast($ConnectionDesc, $nc(this->conns)->get(i)));
			use += $nc(entry)->getUseCount();
			switch (entry->getState()) {
			case $ConnectionDesc::BUSY:
				{
					++busy;
					break;
				}
			case $ConnectionDesc::IDLE:
				{
					++idle;
					break;
				}
			case $ConnectionDesc::EXPIRED:
				{
					++expired;
				}
			}
		}
	}
	return $str({"size="_s, $$str(len), "; use="_s, $$str(use), "; busy="_s, $$str(busy), "; idle="_s, $$str(idle), "; expired="_s, $$str(expired)});
}

void Connections::d($String* msg, Object$* o1) {
	if (Connections::debug) {
		d($$str({msg, o1}));
	}
}

void Connections::d($String* msg, int32_t i) {
	if (Connections::debug) {
		d($$str({msg, $$str(i)}));
	}
}

void Connections::d($String* msg) {
	if (Connections::debug) {
		$init($System);
		$var($String, var$0, $$str({this, "."_s, msg, "; size: "_s}));
		$nc($System::err)->println($$concat(var$0, $$str($nc(this->conns)->size())));
	}
}

void Connections::td($String* msg, Object$* o1, Object$* o2) {
	if (Connections::trace) {
		td($$str({msg, o1, "["_s, o2, "]"_s}));
	}
}

void Connections::td($String* msg, Object$* o1) {
	if (Connections::trace) {
		td($$str({msg, o1}));
	}
}

void Connections::td($String* msg) {
	if (Connections::trace) {
		$init($System);
		$nc($System::err)->println(msg);
	}
}

void clinit$Connections($Class* class$) {
	$init($Pool);
	Connections::debug = $Pool::debug;
	$init($LdapPoolManager);
	Connections::trace = $LdapPoolManager::trace;
}

Connections::Connections() {
}

$Class* Connections::load$($String* name, bool initialize) {
	$loadClass(Connections, name, initialize, &_Connections_ClassInfo_, clinit$Connections, allocate$Connections);
	return class$;
}

$Class* Connections::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com