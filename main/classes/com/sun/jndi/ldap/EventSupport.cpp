#include <com/sun/jndi/ldap/EventSupport.h>

#include <com/sun/jndi/ldap/EventQueue.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/NamingEventNotifier.h>
#include <com/sun/jndi/ldap/NotifierArgs.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/EventDirContext.h>
#include <javax/naming/event/NamespaceChangeListener.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/event/ObjectChangeListener.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <jcpp.h>

using $EventQueue = ::com::sun::jndi::ldap::EventQueue;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $NamingEventNotifier = ::com::sun::jndi::ldap::NamingEventNotifier;
using $NotifierArgs = ::com::sun::jndi::ldap::NotifierArgs;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $EventObject = ::java::util::EventObject;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $NamingException = ::javax::naming::NamingException;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $EventContext = ::javax::naming::event::EventContext;
using $EventDirContext = ::javax::naming::event::EventDirContext;
using $NamespaceChangeListener = ::javax::naming::event::NamespaceChangeListener;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;
using $NamingListener = ::javax::naming::event::NamingListener;
using $ObjectChangeListener = ::javax::naming::event::ObjectChangeListener;
using $UnsolicitedNotification = ::javax::naming::ldap::UnsolicitedNotification;
using $UnsolicitedNotificationEvent = ::javax::naming::ldap::UnsolicitedNotificationEvent;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _EventSupport_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventSupport, debug)},
	{"ctx", "Lcom/sun/jndi/ldap/LdapCtx;", nullptr, $PRIVATE, $field(EventSupport, ctx)},
	{"notifiers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Lcom/sun/jndi/ldap/NotifierArgs;Lcom/sun/jndi/ldap/NamingEventNotifier;>;", $PRIVATE, $field(EventSupport, notifiers)},
	{"unsolicited", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/ldap/UnsolicitedNotificationListener;>;", $PRIVATE, $field(EventSupport, unsolicited)},
	{"eventQueue", "Lcom/sun/jndi/ldap/EventQueue;", nullptr, $PRIVATE, $field(EventSupport, eventQueue)},
	{}
};

$MethodInfo _EventSupport_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;)V", nullptr, 0, $method(static_cast<void(EventSupport::*)($LdapCtx*)>(&EventSupport::init$))},
	{"addNamingListener", "(Ljava/lang/String;ILjavax/naming/event/NamingListener;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)($String*,int32_t,$NamingListener*)>(&EventSupport::addNamingListener)), "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)($String*,$String*,$SearchControls*,$NamingListener*)>(&EventSupport::addNamingListener)), "javax.naming.NamingException"},
	{"cleanup", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)()>(&EventSupport::cleanup))},
	{"fireUnsolicited", "(Ljava/lang/Object;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)(Object$*)>(&EventSupport::fireUnsolicited))},
	{"hasUnsolicited", "()Z", nullptr, $SYNCHRONIZED, $method(static_cast<bool(EventSupport::*)()>(&EventSupport::hasUnsolicited))},
	{"queueEvent", "(Ljava/util/EventObject;Ljava/util/Vector;)V", "(Ljava/util/EventObject;Ljava/util/Vector<+Ljavax/naming/event/NamingListener;>;)V", $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)($EventObject*,$Vector*)>(&EventSupport::queueEvent))},
	{"removeDeadNotifier", "(Lcom/sun/jndi/ldap/NotifierArgs;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)($NotifierArgs*)>(&EventSupport::removeDeadNotifier))},
	{"removeNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, $SYNCHRONIZED, $method(static_cast<void(EventSupport::*)($NamingListener*)>(&EventSupport::removeNamingListener))},
	{}
};

$ClassInfo _EventSupport_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.EventSupport",
	"java.lang.Object",
	nullptr,
	_EventSupport_FieldInfo_,
	_EventSupport_MethodInfo_
};

$Object* allocate$EventSupport($Class* clazz) {
	return $of($alloc(EventSupport));
}

void EventSupport::init$($LdapCtx* ctx) {
	$set(this, notifiers, $new($Hashtable, 11));
	$set(this, unsolicited, nullptr);
	$set(this, ctx, ctx);
}

void EventSupport::addNamingListener($String* nm, int32_t scope, $NamingListener* l) {
	$synchronized(this) {
		if ($instanceOf($ObjectChangeListener, l) || $instanceOf($NamespaceChangeListener, l)) {
			$var($NotifierArgs, args, $new($NotifierArgs, nm, scope, l));
			$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, $nc(this->notifiers)->get(args)));
			if (notifier == nullptr) {
				$assign(notifier, $new($NamingEventNotifier, this, this->ctx, args, l));
				$nc(this->notifiers)->put(args, notifier);
			} else {
				$nc(notifier)->addNamingListener(l);
			}
		}
		if ($instanceOf($UnsolicitedNotificationListener, l)) {
			if (this->unsolicited == nullptr) {
				$set(this, unsolicited, $new($Vector, 3));
			}
			$nc(this->unsolicited)->addElement($cast($UnsolicitedNotificationListener, l));
		}
	}
}

void EventSupport::addNamingListener($String* nm, $String* filter, $SearchControls* ctls, $NamingListener* l) {
	$synchronized(this) {
		if ($instanceOf($ObjectChangeListener, l) || $instanceOf($NamespaceChangeListener, l)) {
			$var($NotifierArgs, args, $new($NotifierArgs, nm, filter, ctls, l));
			$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, $nc(this->notifiers)->get(args)));
			if (notifier == nullptr) {
				$assign(notifier, $new($NamingEventNotifier, this, this->ctx, args, l));
				$nc(this->notifiers)->put(args, notifier);
			} else {
				$nc(notifier)->addNamingListener(l);
			}
		}
		if ($instanceOf($UnsolicitedNotificationListener, l)) {
			if (this->unsolicited == nullptr) {
				$set(this, unsolicited, $new($Vector, 3));
			}
			$nc(this->unsolicited)->addElement($cast($UnsolicitedNotificationListener, l));
		}
	}
}

void EventSupport::removeNamingListener($NamingListener* l) {
	$synchronized(this) {
		$var($Iterator, iterator, $nc($($nc(this->notifiers)->values()))->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, iterator->next()));
			if (notifier != nullptr) {
				notifier->removeNamingListener(l);
				if (!notifier->hasNamingListeners()) {
					notifier->stop();
					iterator->remove();
				}
			}
		}
		if (this->unsolicited != nullptr) {
			$nc(this->unsolicited)->removeElement(l);
		}
	}
}

bool EventSupport::hasUnsolicited() {
	$synchronized(this) {
		return (this->unsolicited != nullptr && $nc(this->unsolicited)->size() > 0);
	}
}

void EventSupport::removeDeadNotifier($NotifierArgs* info) {
	$synchronized(this) {
		if (this->notifiers != nullptr) {
			$nc(this->notifiers)->remove(info);
		}
	}
}

void EventSupport::fireUnsolicited(Object$* obj) {
	$synchronized(this) {
		if (this->unsolicited == nullptr || $nc(this->unsolicited)->size() == 0) {
			return;
		}
		if ($instanceOf($UnsolicitedNotification, obj)) {
			$var($UnsolicitedNotificationEvent, evt, $new($UnsolicitedNotificationEvent, this->ctx, $cast($UnsolicitedNotification, obj)));
			queueEvent(evt, this->unsolicited);
		} else if ($instanceOf($NamingException, obj)) {
			$var($NamingExceptionEvent, evt, $new($NamingExceptionEvent, this->ctx, $cast($NamingException, obj)));
			queueEvent(evt, this->unsolicited);
			$set(this, unsolicited, nullptr);
		}
	}
}

void EventSupport::cleanup() {
	$synchronized(this) {
		if (this->notifiers != nullptr) {
			{
				$var($Iterator, i$, $nc($($nc(this->notifiers)->values()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, i$->next()));
					{
						$nc(notifier)->stop();
					}
				}
			}
			$set(this, notifiers, nullptr);
		}
		if (this->eventQueue != nullptr) {
			$nc(this->eventQueue)->stop();
			$set(this, eventQueue, nullptr);
		}
	}
}

void EventSupport::queueEvent($EventObject* event, $Vector* vector) {
	$synchronized(this) {
		if (this->notifiers == nullptr) {
			return;
		}
		if (this->eventQueue == nullptr) {
			$set(this, eventQueue, $new($EventQueue));
		}
		$var($Vector, v, $cast($Vector, $nc(vector)->clone()));
		$nc(this->eventQueue)->enqueue(event, v);
	}
}

EventSupport::EventSupport() {
}

$Class* EventSupport::load$($String* name, bool initialize) {
	$loadClass(EventSupport, name, initialize, &_EventSupport_ClassInfo_, allocate$EventSupport);
	return class$;
}

$Class* EventSupport::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com