#ifndef _com_sun_jndi_ldap_EventQueue_h_
#define _com_sun_jndi_ldap_EventQueue_h_
//$ class com.sun.jndi.ldap.EventQueue
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class EventQueue$QueueElement;
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
		class EventObject;
		class Vector;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class EventQueue : public ::java::lang::Runnable {
	$class(EventQueue, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	EventQueue();
	void init$();
	::com::sun::jndi::ldap::EventQueue$QueueElement* dequeue();
	void enqueue(::java::util::EventObject* event, ::java::util::Vector* vector);
	virtual void run() override;
	void stop();
	static const bool debug = false;
	::com::sun::jndi::ldap::EventQueue$QueueElement* head = nullptr;
	::com::sun::jndi::ldap::EventQueue$QueueElement* tail = nullptr;
	$Thread* qThread = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_EventQueue_h_