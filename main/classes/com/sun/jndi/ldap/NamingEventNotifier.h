#ifndef _com_sun_jndi_ldap_NamingEventNotifier_h_
#define _com_sun_jndi_ldap_NamingEventNotifier_h_
//$ class com.sun.jndi.ldap.NamingEventNotifier
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class EventSupport;
				class LdapCtx;
				class NotifierArgs;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace naming {
		class Binding;
		class NamingEnumeration;
		class NamingException;
	}
}
namespace javax {
	namespace naming {
		namespace event {
			class EventContext;
			class NamingListener;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class NamingEventNotifier : public ::java::lang::Runnable {
	$class(NamingEventNotifier, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	NamingEventNotifier();
	void init$(::com::sun::jndi::ldap::EventSupport* support, ::com::sun::jndi::ldap::LdapCtx* ctx, ::com::sun::jndi::ldap::NotifierArgs* info, ::javax::naming::event::NamingListener* firstListener);
	void addNamingListener(::javax::naming::event::NamingListener* l);
	void cleanup();
	void fireNamingException(::javax::naming::NamingException* e);
	void fireObjectAdded(::javax::naming::Binding* newBd, int64_t changeID);
	void fireObjectChanged(::javax::naming::Binding* newBd, int64_t changeID);
	void fireObjectRemoved(::javax::naming::Binding* oldBd, int64_t changeID);
	void fireObjectRenamed(::javax::naming::Binding* newBd, $String* oldDN, int64_t changeID);
	bool hasNamingListeners();
	void removeNamingListener(::javax::naming::event::NamingListener* l);
	virtual void run() override;
	void stop();
	static const bool debug = false;
	::java::util::Vector* namingListeners = nullptr;
	$Thread* worker = nullptr;
	::com::sun::jndi::ldap::LdapCtx* context = nullptr;
	::javax::naming::event::EventContext* eventSrc = nullptr;
	::com::sun::jndi::ldap::EventSupport* support = nullptr;
	::javax::naming::NamingEnumeration* results = nullptr;
	::com::sun::jndi::ldap::NotifierArgs* info = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_NamingEventNotifier_h_