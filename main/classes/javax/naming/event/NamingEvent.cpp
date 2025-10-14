#include <javax/naming/event/NamingEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/naming/Binding.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/NamespaceChangeListener.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/event/ObjectChangeListener.h>
#include <jcpp.h>

#undef OBJECT_ADDED
#undef OBJECT_CHANGED
#undef OBJECT_REMOVED
#undef OBJECT_RENAMED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Binding = ::javax::naming::Binding;
using $EventContext = ::javax::naming::event::EventContext;
using $NamespaceChangeListener = ::javax::naming::event::NamespaceChangeListener;
using $NamingListener = ::javax::naming::event::NamingListener;
using $ObjectChangeListener = ::javax::naming::event::ObjectChangeListener;

namespace javax {
	namespace naming {
		namespace event {

$FieldInfo _NamingEvent_FieldInfo_[] = {
	{"OBJECT_ADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NamingEvent, OBJECT_ADDED)},
	{"OBJECT_REMOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NamingEvent, OBJECT_REMOVED)},
	{"OBJECT_RENAMED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NamingEvent, OBJECT_RENAMED)},
	{"OBJECT_CHANGED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NamingEvent, OBJECT_CHANGED)},
	{"changeInfo", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(NamingEvent, changeInfo)},
	{"type", "I", nullptr, $PROTECTED, $field(NamingEvent, type)},
	{"oldBinding", "Ljavax/naming/Binding;", nullptr, $PROTECTED, $field(NamingEvent, oldBinding)},
	{"newBinding", "Ljavax/naming/Binding;", nullptr, $PROTECTED, $field(NamingEvent, newBinding)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingEvent, serialVersionUID)},
	{}
};

$MethodInfo _NamingEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/event/EventContext;ILjavax/naming/Binding;Ljavax/naming/Binding;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(NamingEvent::*)($EventContext*,int32_t,$Binding*,$Binding*,Object$*)>(&NamingEvent::init$))},
	{"dispatch", "(Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC},
	{"getChangeInfo", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getEventContext", "()Ljavax/naming/event/EventContext;", nullptr, $PUBLIC},
	{"getNewBinding", "()Ljavax/naming/Binding;", nullptr, $PUBLIC},
	{"getOldBinding", "()Ljavax/naming/Binding;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamingEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.event.NamingEvent",
	"java.util.EventObject",
	nullptr,
	_NamingEvent_FieldInfo_,
	_NamingEvent_MethodInfo_
};

$Object* allocate$NamingEvent($Class* clazz) {
	return $of($alloc(NamingEvent));
}

void NamingEvent::init$($EventContext* source, int32_t type, $Binding* newBd, $Binding* oldBd, Object$* changeInfo) {
	$EventObject::init$(source);
	this->type = type;
	$set(this, oldBinding, oldBd);
	$set(this, newBinding, newBd);
	$set(this, changeInfo, changeInfo);
}

int32_t NamingEvent::getType() {
	return this->type;
}

$EventContext* NamingEvent::getEventContext() {
	return $cast($EventContext, getSource());
}

$Binding* NamingEvent::getOldBinding() {
	return this->oldBinding;
}

$Binding* NamingEvent::getNewBinding() {
	return this->newBinding;
}

$Object* NamingEvent::getChangeInfo() {
	return $of(this->changeInfo);
}

void NamingEvent::dispatch($NamingListener* listener) {
	switch (this->type) {
	case NamingEvent::OBJECT_ADDED:
		{
			$nc(($cast($NamespaceChangeListener, listener)))->objectAdded(this);
			break;
		}
	case NamingEvent::OBJECT_REMOVED:
		{
			$nc(($cast($NamespaceChangeListener, listener)))->objectRemoved(this);
			break;
		}
	case NamingEvent::OBJECT_RENAMED:
		{
			$nc(($cast($NamespaceChangeListener, listener)))->objectRenamed(this);
			break;
		}
	case NamingEvent::OBJECT_CHANGED:
		{
			$nc(($cast($ObjectChangeListener, listener)))->objectChanged(this);
			break;
		}
	}
}

NamingEvent::NamingEvent() {
}

$Class* NamingEvent::load$($String* name, bool initialize) {
	$loadClass(NamingEvent, name, initialize, &_NamingEvent_ClassInfo_, allocate$NamingEvent);
	return class$;
}

$Class* NamingEvent::class$ = nullptr;

		} // event
	} // naming
} // javax