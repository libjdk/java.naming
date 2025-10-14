#ifndef _com_sun_jndi_ldap_EventSupport_h_
#define _com_sun_jndi_ldap_EventSupport_h_
//$ class com.sun.jndi.ldap.EventSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class EventQueue;
				class LdapCtx;
				class NotifierArgs;
			}
		}
	}
}
namespace java {
	namespace util {
		class EventObject;
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class SearchControls;
		}
	}
}
namespace javax {
	namespace naming {
		namespace event {
			class NamingListener;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class EventSupport : public ::java::lang::Object {
	$class(EventSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EventSupport();
	void init$(::com::sun::jndi::ldap::LdapCtx* ctx);
	void addNamingListener($String* nm, int32_t scope, ::javax::naming::event::NamingListener* l);
	void addNamingListener($String* nm, $String* filter, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l);
	void cleanup();
	void fireUnsolicited(Object$* obj);
	bool hasUnsolicited();
	void queueEvent(::java::util::EventObject* event, ::java::util::Vector* vector);
	void removeDeadNotifier(::com::sun::jndi::ldap::NotifierArgs* info);
	void removeNamingListener(::javax::naming::event::NamingListener* l);
	static const bool debug = false;
	::com::sun::jndi::ldap::LdapCtx* ctx = nullptr;
	::java::util::Hashtable* notifiers = nullptr;
	::java::util::Vector* unsolicited = nullptr;
	::com::sun::jndi::ldap::EventQueue* eventQueue = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_EventSupport_h_