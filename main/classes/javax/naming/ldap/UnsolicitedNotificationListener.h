#ifndef _javax_naming_ldap_UnsolicitedNotificationListener_h_
#define _javax_naming_ldap_UnsolicitedNotificationListener_h_
//$ interface javax.naming.ldap.UnsolicitedNotificationListener
//$ extends javax.naming.event.NamingListener

#include <javax/naming/event/NamingListener.h>

namespace javax {
	namespace naming {
		namespace ldap {
			class UnsolicitedNotificationEvent;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export UnsolicitedNotificationListener : public ::javax::naming::event::NamingListener {
	$interface(UnsolicitedNotificationListener, $NO_CLASS_INIT, ::javax::naming::event::NamingListener)
public:
	virtual void notificationReceived(::javax::naming::ldap::UnsolicitedNotificationEvent* evt) {}
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_UnsolicitedNotificationListener_h_