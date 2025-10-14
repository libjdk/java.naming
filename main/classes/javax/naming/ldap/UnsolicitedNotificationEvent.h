#ifndef _javax_naming_ldap_UnsolicitedNotificationEvent_h_
#define _javax_naming_ldap_UnsolicitedNotificationEvent_h_
//$ class javax.naming.ldap.UnsolicitedNotificationEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace naming {
		namespace ldap {
			class UnsolicitedNotification;
			class UnsolicitedNotificationListener;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export UnsolicitedNotificationEvent : public ::java::util::EventObject {
	$class(UnsolicitedNotificationEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	UnsolicitedNotificationEvent();
	void init$(Object$* src, ::javax::naming::ldap::UnsolicitedNotification* notice);
	virtual void dispatch(::javax::naming::ldap::UnsolicitedNotificationListener* listener);
	virtual ::javax::naming::ldap::UnsolicitedNotification* getNotification();
	::javax::naming::ldap::UnsolicitedNotification* notice = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xDEEF4AD946C73647;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_UnsolicitedNotificationEvent_h_