#include <com/sun/jndi/ldap/pool/Pool.h>

#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/pool/Connections.h>
#include <com/sun/jndi/ldap/pool/ConnectionsRef.h>
#include <com/sun/jndi/ldap/pool/ConnectionsWeakRef.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $LdapPoolManager = ::com::sun::jndi::ldap::LdapPoolManager;
using $Connections = ::com::sun::jndi::ldap::pool::Connections;
using $ConnectionsRef = ::com::sun::jndi::ldap::pool::ConnectionsRef;
using $ConnectionsWeakRef = ::com::sun::jndi::ldap::pool::ConnectionsWeakRef;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $PooledConnectionFactory = ::com::sun::jndi::ldap::pool::PooledConnectionFactory;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {

$FieldInfo _Pool_FieldInfo_[] = {
	{"debug", "Z", nullptr, $STATIC | $FINAL, $staticField(Pool, debug)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Lcom/sun/jndi/ldap/pool/ConnectionsRef;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Pool, queue)},
	{"weakRefs", "Ljava/util/Collection;", "Ljava/util/Collection<Ljava/lang/ref/Reference<Lcom/sun/jndi/ldap/pool/ConnectionsRef;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Pool, weakRefs)},
	{"maxSize", "I", nullptr, $PRIVATE | $FINAL, $field(Pool, maxSize)},
	{"prefSize", "I", nullptr, $PRIVATE | $FINAL, $field(Pool, prefSize)},
	{"initSize", "I", nullptr, $PRIVATE | $FINAL, $field(Pool, initSize)},
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lcom/sun/jndi/ldap/pool/ConnectionsRef;>;", $PRIVATE | $FINAL, $field(Pool, map)},
	{}
};

$MethodInfo _Pool_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(Pool::*)(int32_t,int32_t,int32_t)>(&Pool::init$))},
	{"d", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Pool::*)($String*,int32_t)>(&Pool::d))},
	{"d", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Pool::*)($String*,Object$*)>(&Pool::d))},
	{"expire", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(Pool::*)(int64_t)>(&Pool::expire))},
	{"expungeStaleConnections", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Pool::expungeStaleConnections))},
	{"getConnections", "(Ljava/lang/Object;)Lcom/sun/jndi/ldap/pool/Connections;", nullptr, $PRIVATE, $method(static_cast<$Connections*(Pool::*)(Object$*)>(&Pool::getConnections))},
	{"getPooledConnection", "(Ljava/lang/Object;JLcom/sun/jndi/ldap/pool/PooledConnectionFactory;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PUBLIC, $method(static_cast<$PooledConnection*(Pool::*)(Object$*,int64_t,$PooledConnectionFactory*)>(&Pool::getPooledConnection)), "javax.naming.NamingException"},
	{"showStats", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Pool::*)($PrintStream*)>(&Pool::showStats))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Pool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.pool.Pool",
	"java.lang.Object",
	nullptr,
	_Pool_FieldInfo_,
	_Pool_MethodInfo_
};

$Object* allocate$Pool($Class* clazz) {
	return $of($alloc(Pool));
}

bool Pool::debug = false;
$ReferenceQueue* Pool::queue = nullptr;
$Collection* Pool::weakRefs = nullptr;

void Pool::init$(int32_t initSize, int32_t prefSize, int32_t maxSize) {
	$set(this, map, $new($WeakHashMap));
	this->prefSize = prefSize;
	this->maxSize = maxSize;
	this->initSize = initSize;
}

$PooledConnection* Pool::getPooledConnection(Object$* id, int64_t timeout, $PooledConnectionFactory* factory) {
	d("get(): "_s, id);
	if (Pool::debug) {
		$synchronized(this->map) {
			d("size: "_s, $nc(this->map)->size());
		}
	}
	expungeStaleConnections();
	$var($Connections, conns, nullptr);
	$synchronized(this->map) {
		$assign(conns, getConnections(id));
		if (conns == nullptr) {
			d("get(): creating new connections list for "_s, id);
			$assign(conns, $new($Connections, id, this->initSize, this->prefSize, this->maxSize, factory));
			$var($ConnectionsRef, connsRef, $new($ConnectionsRef, conns));
			$nc(this->map)->put(id, connsRef);
			$var($Reference, weakRef, $new($ConnectionsWeakRef, connsRef, Pool::queue));
			$nc(Pool::weakRefs)->add(weakRef);
		}
		d("get(): size after: "_s, $nc(this->map)->size());
	}
	return $nc(conns)->get(timeout, factory);
}

$Connections* Pool::getConnections(Object$* id) {
	$var($ConnectionsRef, ref, $cast($ConnectionsRef, $nc(this->map)->get(id)));
	return (ref != nullptr) ? $nc(ref)->getConnections() : ($Connections*)nullptr;
}

void Pool::expire(int64_t threshold) {
	$var($Collection, copy, nullptr);
	$synchronized(this->map) {
		$assign(copy, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($new($ArrayList, $($nc(this->map)->values()))))));
	}
	$var($ArrayList, removed, $new($ArrayList));
	$var($Connections, conns, nullptr);
	{
		$var($Iterator, i$, $nc(copy)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ConnectionsRef, ref, $cast($ConnectionsRef, i$->next()));
			{
				$assign(conns, $nc(ref)->getConnections());
				if ($nc(conns)->expire(threshold)) {
					d("expire(): removing "_s, $of(conns));
					removed->add(ref);
				}
			}
		}
	}
	$synchronized(this->map) {
		$nc($($nc(this->map)->values()))->removeAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(removed))));
	}
	expungeStaleConnections();
}

void Pool::expungeStaleConnections() {
	$init(Pool);
	$var($ConnectionsWeakRef, releaseRef, nullptr);
	while (($assign(releaseRef, $cast($ConnectionsWeakRef, $nc(Pool::queue)->poll()))) != nullptr) {
		$var($Connections, conns, $nc(releaseRef)->getConnections());
		if (Pool::debug) {
			$init($System);
			$nc($System::err)->println($$str({"weak reference cleanup: Closing Connections:"_s, conns}));
		}
		$nc(conns)->close();
		$nc(Pool::weakRefs)->remove(releaseRef);
		releaseRef->clear();
	}
}

void Pool::showStats($PrintStream* out) {
	$var($Object, id, nullptr);
	$var($Connections, conns, nullptr);
	$nc(out)->println("===== Pool start ======================"_s);
	out->println($$str({"maximum pool size: "_s, $$str(this->maxSize)}));
	out->println($$str({"preferred pool size: "_s, $$str(this->prefSize)}));
	out->println($$str({"initial pool size: "_s, $$str(this->initSize)}));
	$synchronized(this->map) {
		out->println($$str({"current pool size: "_s, $$str($nc(this->map)->size())}));
		{
			$var($Iterator, i$, $nc($($nc(this->map)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$assign(id, $nc(entry)->getKey());
					$assign(conns, $nc(($cast($ConnectionsRef, $(entry->getValue()))))->getConnections());
					$var($String, var$0, $$str({"   "_s, id, ":"_s}));
					out->println($$concat(var$0, $($nc(conns)->getStats())));
				}
			}
		}
	}
	out->println("====== Pool end ====================="_s);
}

$String* Pool::toString() {
	$synchronized(this->map) {
		$var($String, var$0, $$str({$($Object::toString()), " "_s}));
		return $concat(var$0, $($nc($of(this->map))->toString()));
	}
}

void Pool::d($String* msg, int32_t i) {
	if (Pool::debug) {
		$init($System);
		$nc($System::err)->println($$str({this, "."_s, msg, $$str(i)}));
	}
}

void Pool::d($String* msg, Object$* obj) {
	if (Pool::debug) {
		$init($System);
		$nc($System::err)->println($$str({this, "."_s, msg, obj}));
	}
}

void clinit$Pool($Class* class$) {
	$init($LdapPoolManager);
	Pool::debug = $LdapPoolManager::debug;
	$assignStatic(Pool::queue, $new($ReferenceQueue));
	$assignStatic(Pool::weakRefs, $Collections::synchronizedList($$new($LinkedList)));
}

Pool::Pool() {
}

$Class* Pool::load$($String* name, bool initialize) {
	$loadClass(Pool, name, initialize, &_Pool_ClassInfo_, clinit$Pool, allocate$Pool);
	return class$;
}

$Class* Pool::class$ = nullptr;

				} // pool
			} // ldap
		} // jndi
	} // sun
} // com