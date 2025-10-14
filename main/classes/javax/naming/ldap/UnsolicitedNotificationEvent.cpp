#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $UnsolicitedNotification = ::javax::naming::ldap::UnsolicitedNotification;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _UnsolicitedNotificationEvent_FieldInfo_[] = {
	{"notice", "Ljavax/naming/ldap/UnsolicitedNotification;", nullptr, $PRIVATE, $field(UnsolicitedNotificationEvent, notice)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsolicitedNotificationEvent, serialVersionUID)},
	{}
};

$MethodInfo _UnsolicitedNotificationEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/naming/ldap/UnsolicitedNotification;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsolicitedNotificationEvent::*)(Object$*,$UnsolicitedNotification*)>(&UnsolicitedNotificationEvent::init$))},
	{"dispatch", "(Ljavax/naming/ldap/UnsolicitedNotificationListener;)V", nullptr, $PUBLIC},
	{"getNotification", "()Ljavax/naming/ldap/UnsolicitedNotification;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnsolicitedNotificationEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.UnsolicitedNotificationEvent",
	"java.util.EventObject",
	nullptr,
	_UnsolicitedNotificationEvent_FieldInfo_,
	_UnsolicitedNotificationEvent_MethodInfo_
};

$Object* allocate$UnsolicitedNotificationEvent($Class* clazz) {
	return $of($alloc(UnsolicitedNotificationEvent));
}

void UnsolicitedNotificationEvent::init$(Object$* src, $UnsolicitedNotification* notice) {
	$EventObject::init$(src);
	$set(this, notice, notice);
}

$UnsolicitedNotification* UnsolicitedNotificationEvent::getNotification() {
	return this->notice;
}

void UnsolicitedNotificationEvent::dispatch($UnsolicitedNotificationListener* listener) {
	$nc(listener)->notificationReceived(this);
}

UnsolicitedNotificationEvent::UnsolicitedNotificationEvent() {
}

$Class* UnsolicitedNotificationEvent::load$($String* name, bool initialize) {
	$loadClass(UnsolicitedNotificationEvent, name, initialize, &_UnsolicitedNotificationEvent_ClassInfo_, allocate$UnsolicitedNotificationEvent);
	return class$;
}

$Class* UnsolicitedNotificationEvent::class$ = nullptr;

		} // ldap
	} // naming
} // javax