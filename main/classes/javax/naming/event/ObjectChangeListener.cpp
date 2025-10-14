#include <javax/naming/event/ObjectChangeListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/event/NamingEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEvent = ::javax::naming::event::NamingEvent;
using $NamingListener = ::javax::naming::event::NamingListener;

namespace javax {
	namespace naming {
		namespace event {

$MethodInfo _ObjectChangeListener_MethodInfo_[] = {
	{"objectChanged", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ObjectChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.event.ObjectChangeListener",
	nullptr,
	"javax.naming.event.NamingListener",
	nullptr,
	_ObjectChangeListener_MethodInfo_
};

$Object* allocate$ObjectChangeListener($Class* clazz) {
	return $of($alloc(ObjectChangeListener));
}

$Class* ObjectChangeListener::load$($String* name, bool initialize) {
	$loadClass(ObjectChangeListener, name, initialize, &_ObjectChangeListener_ClassInfo_, allocate$ObjectChangeListener);
	return class$;
}

$Class* ObjectChangeListener::class$ = nullptr;

		} // event
	} // naming
} // javax