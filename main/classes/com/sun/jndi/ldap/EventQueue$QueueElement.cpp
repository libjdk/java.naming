#include <com/sun/jndi/ldap/EventQueue$QueueElement.h>

#include <com/sun/jndi/ldap/EventQueue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $EventQueue = ::com::sun::jndi::ldap::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _EventQueue$QueueElement_FieldInfo_[] = {
	{"next", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, 0, $field(EventQueue$QueueElement, next)},
	{"prev", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, 0, $field(EventQueue$QueueElement, prev)},
	{"event", "Ljava/util/EventObject;", nullptr, 0, $field(EventQueue$QueueElement, event)},
	{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;", 0, $field(EventQueue$QueueElement, vector)},
	{}
};

$MethodInfo _EventQueue$QueueElement_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EventObject;Ljava/util/Vector;)V", "(Ljava/util/EventObject;Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;)V", 0, $method(static_cast<void(EventQueue$QueueElement::*)($EventObject*,$Vector*)>(&EventQueue$QueueElement::init$))},
	{}
};

$InnerClassInfo _EventQueue$QueueElement_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.EventQueue$QueueElement", "com.sun.jndi.ldap.EventQueue", "QueueElement", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EventQueue$QueueElement_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.EventQueue$QueueElement",
	"java.lang.Object",
	nullptr,
	_EventQueue$QueueElement_FieldInfo_,
	_EventQueue$QueueElement_MethodInfo_,
	nullptr,
	nullptr,
	_EventQueue$QueueElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.EventQueue"
};

$Object* allocate$EventQueue$QueueElement($Class* clazz) {
	return $of($alloc(EventQueue$QueueElement));
}

void EventQueue$QueueElement::init$($EventObject* event, $Vector* vector) {
	$set(this, next, nullptr);
	$set(this, prev, nullptr);
	$set(this, event, nullptr);
	$set(this, vector, nullptr);
	$set(this, event, event);
	$set(this, vector, vector);
}

EventQueue$QueueElement::EventQueue$QueueElement() {
}

$Class* EventQueue$QueueElement::load$($String* name, bool initialize) {
	$loadClass(EventQueue$QueueElement, name, initialize, &_EventQueue$QueueElement_ClassInfo_, allocate$EventQueue$QueueElement);
	return class$;
}

$Class* EventQueue$QueueElement::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com