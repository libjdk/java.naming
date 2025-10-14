#include <javax/naming/event/NamespaceChangeListener.h>

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

$MethodInfo _NamespaceChangeListener_MethodInfo_[] = {
	{"objectAdded", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"objectRemoved", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"objectRenamed", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NamespaceChangeListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.event.NamespaceChangeListener",
	nullptr,
	"javax.naming.event.NamingListener",
	nullptr,
	_NamespaceChangeListener_MethodInfo_
};

$Object* allocate$NamespaceChangeListener($Class* clazz) {
	return $of($alloc(NamespaceChangeListener));
}

$Class* NamespaceChangeListener::load$($String* name, bool initialize) {
	$loadClass(NamespaceChangeListener, name, initialize, &_NamespaceChangeListener_ClassInfo_, allocate$NamespaceChangeListener);
	return class$;
}

$Class* NamespaceChangeListener::class$ = nullptr;

		} // event
	} // naming
} // javax