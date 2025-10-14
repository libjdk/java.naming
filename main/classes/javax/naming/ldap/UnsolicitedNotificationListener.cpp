#include <javax/naming/ldap/UnsolicitedNotificationListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingListener = ::javax::naming::event::NamingListener;
using $UnsolicitedNotificationEvent = ::javax::naming::ldap::UnsolicitedNotificationEvent;

namespace javax {
	namespace naming {
		namespace ldap {

$MethodInfo _UnsolicitedNotificationListener_MethodInfo_[] = {
	{"notificationReceived", "(Ljavax/naming/ldap/UnsolicitedNotificationEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _UnsolicitedNotificationListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.UnsolicitedNotificationListener",
	nullptr,
	"javax.naming.event.NamingListener",
	nullptr,
	_UnsolicitedNotificationListener_MethodInfo_
};

$Object* allocate$UnsolicitedNotificationListener($Class* clazz) {
	return $of($alloc(UnsolicitedNotificationListener));
}

$Class* UnsolicitedNotificationListener::load$($String* name, bool initialize) {
	$loadClass(UnsolicitedNotificationListener, name, initialize, &_UnsolicitedNotificationListener_ClassInfo_, allocate$UnsolicitedNotificationListener);
	return class$;
}

$Class* UnsolicitedNotificationListener::class$ = nullptr;

		} // ldap
	} // naming
} // javax