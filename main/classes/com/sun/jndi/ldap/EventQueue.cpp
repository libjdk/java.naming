#include <com/sun/jndi/ldap/EventQueue.h>

#include <com/sun/jndi/ldap/EventQueue$QueueElement.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/Vector.h>
#include <javax/naming/event/NamingEvent.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <jcpp.h>

using $EventQueue$QueueElement = ::com::sun::jndi::ldap::EventQueue$QueueElement;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $VersionHelper = ::com::sun::jndi::ldap::VersionHelper;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $Vector = ::java::util::Vector;
using $NamingEvent = ::javax::naming::event::NamingEvent;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;
using $NamingListener = ::javax::naming::event::NamingListener;
using $UnsolicitedNotificationEvent = ::javax::naming::ldap::UnsolicitedNotificationEvent;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _EventQueue_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventQueue, debug)},
	{"head", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, $PRIVATE, $field(EventQueue, head)},
	{"tail", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, $PRIVATE, $field(EventQueue, tail)},
	{"qThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(EventQueue, qThread)},
	{}
};

$MethodInfo _EventQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EventQueue::*)()>(&EventQueue::init$))},
	{"dequeue", "()Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$EventQueue$QueueElement*(EventQueue::*)()>(&EventQueue::dequeue)), "java.lang.InterruptedException"},
	{"enqueue", "(Ljava/util/EventObject;Ljava/util/Vector;)V", "(Ljava/util/EventObject;Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;)V", $SYNCHRONIZED, $method(static_cast<void(EventQueue::*)($EventObject*,$Vector*)>(&EventQueue::enqueue))},
	{"run", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, 0, $method(static_cast<void(EventQueue::*)()>(&EventQueue::stop))},
	{}
};

$InnerClassInfo _EventQueue_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.EventQueue$QueueElement", "com.sun.jndi.ldap.EventQueue", "QueueElement", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EventQueue_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.EventQueue",
	"java.lang.Object",
	"java.lang.Runnable",
	_EventQueue_FieldInfo_,
	_EventQueue_MethodInfo_,
	nullptr,
	nullptr,
	_EventQueue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.EventQueue$QueueElement"
};

$Object* allocate$EventQueue($Class* clazz) {
	return $of($alloc(EventQueue));
}

void EventQueue::init$() {
	$set(this, head, nullptr);
	$set(this, tail, nullptr);
	$init($Obj);
	$set(this, qThread, $nc($Obj::helper)->createThread(this));
	$nc(this->qThread)->setDaemon(true);
	$nc(this->qThread)->start();
}

void EventQueue::enqueue($EventObject* event, $Vector* vector) {
	$synchronized(this) {
		$var($EventQueue$QueueElement, newElt, $new($EventQueue$QueueElement, event, vector));
		if (this->head == nullptr) {
			$set(this, head, newElt);
			$set(this, tail, newElt);
		} else {
			$set(newElt, next, this->head);
			$set($nc(this->head), prev, newElt);
			$set(this, head, newElt);
		}
		$of(this)->notify();
	}
}

$EventQueue$QueueElement* EventQueue::dequeue() {
	$synchronized(this) {
		while (this->tail == nullptr) {
			$of(this)->wait();
		}
		$var($EventQueue$QueueElement, elt, this->tail);
		$set(this, tail, $nc(elt)->prev);
		if (this->tail == nullptr) {
			$set(this, head, nullptr);
		} else {
			$set($nc(this->tail), next, nullptr);
		}
		$set(elt, prev, ($assignField(elt, next, nullptr)));
		return elt;
	}
}

void EventQueue::run() {
	$var($EventQueue$QueueElement, qe, nullptr);
	try {
		while (($assign(qe, dequeue())) != nullptr) {
			$var($EventObject, e, $nc(qe)->event);
			$var($Vector, v, qe->vector);
			for (int32_t i = 0; i < $nc(v)->size(); ++i) {
				if ($instanceOf($NamingEvent, e)) {
					$nc(($cast($NamingEvent, e)))->dispatch($cast($NamingListener, $(v->elementAt(i))));
				} else if ($instanceOf($NamingExceptionEvent, e)) {
					$nc(($cast($NamingExceptionEvent, e)))->dispatch($cast($NamingListener, $(v->elementAt(i))));
				} else if ($instanceOf($UnsolicitedNotificationEvent, e)) {
					$nc(($cast($UnsolicitedNotificationEvent, e)))->dispatch($cast($UnsolicitedNotificationListener, $(v->elementAt(i))));
				}
			}
			$assign(qe, nullptr);
			$assign(e, nullptr);
			$assign(v, nullptr);
		}
	} catch ($InterruptedException&) {
		$catch();
	}
}

void EventQueue::stop() {
	if (this->qThread != nullptr) {
		$nc(this->qThread)->interrupt();
		$set(this, qThread, nullptr);
	}
}

EventQueue::EventQueue() {
}

$Class* EventQueue::load$($String* name, bool initialize) {
	$loadClass(EventQueue, name, initialize, &_EventQueue_ClassInfo_, allocate$EventQueue);
	return class$;
}

$Class* EventQueue::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com