#ifndef _com_sun_jndi_ldap_EventQueue$QueueElement_h_
#define _com_sun_jndi_ldap_EventQueue$QueueElement_h_
//$ class com.sun.jndi.ldap.EventQueue$QueueElement
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class EventQueue$QueueElement : public ::java::lang::Object {
	$class(EventQueue$QueueElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EventQueue$QueueElement();
	void init$(::java::util::EventObject* event, ::java::util::Vector* vector);
	::com::sun::jndi::ldap::EventQueue$QueueElement* next = nullptr;
	::com::sun::jndi::ldap::EventQueue$QueueElement* prev = nullptr;
	::java::util::EventObject* event = nullptr;
	::java::util::Vector* vector = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_EventQueue$QueueElement_h_