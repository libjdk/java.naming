#include <javax/naming/event/NamingExceptionEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/NamingListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $NamingException = ::javax::naming::NamingException;
using $EventContext = ::javax::naming::event::EventContext;
using $NamingListener = ::javax::naming::event::NamingListener;

namespace javax {
	namespace naming {
		namespace event {

$FieldInfo _NamingExceptionEvent_FieldInfo_[] = {
	{"exception", "Ljavax/naming/NamingException;", nullptr, $PRIVATE, $field(NamingExceptionEvent, exception)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingExceptionEvent, serialVersionUID)},
	{}
};

$MethodInfo _NamingExceptionEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/event/EventContext;Ljavax/naming/NamingException;)V", nullptr, $PUBLIC, $method(static_cast<void(NamingExceptionEvent::*)($EventContext*,$NamingException*)>(&NamingExceptionEvent::init$))},
	{"dispatch", "(Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC},
	{"getEventContext", "()Ljavax/naming/event/EventContext;", nullptr, $PUBLIC},
	{"getException", "()Ljavax/naming/NamingException;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamingExceptionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.event.NamingExceptionEvent",
	"java.util.EventObject",
	nullptr,
	_NamingExceptionEvent_FieldInfo_,
	_NamingExceptionEvent_MethodInfo_
};

$Object* allocate$NamingExceptionEvent($Class* clazz) {
	return $of($alloc(NamingExceptionEvent));
}

void NamingExceptionEvent::init$($EventContext* source, $NamingException* exc) {
	$EventObject::init$(source);
	$set(this, exception, exc);
}

$NamingException* NamingExceptionEvent::getException() {
	return this->exception;
}

$EventContext* NamingExceptionEvent::getEventContext() {
	return $cast($EventContext, getSource());
}

void NamingExceptionEvent::dispatch($NamingListener* listener) {
	$nc(listener)->namingExceptionThrown(this);
}

NamingExceptionEvent::NamingExceptionEvent() {
}

$Class* NamingExceptionEvent::load$($String* name, bool initialize) {
	$loadClass(NamingExceptionEvent, name, initialize, &_NamingExceptionEvent_ClassInfo_, allocate$NamingExceptionEvent);
	return class$;
}

$Class* NamingExceptionEvent::class$ = nullptr;

		} // event
	} // naming
} // javax