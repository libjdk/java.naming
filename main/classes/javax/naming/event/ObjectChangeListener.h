#ifndef _javax_naming_event_ObjectChangeListener_h_
#define _javax_naming_event_ObjectChangeListener_h_
//$ interface javax.naming.event.ObjectChangeListener
//$ extends javax.naming.event.NamingListener

#include <javax/naming/event/NamingListener.h>

namespace javax {
	namespace naming {
		namespace event {
			class NamingEvent;
		}
	}
}

namespace javax {
	namespace naming {
		namespace event {

class $export ObjectChangeListener : public ::javax::naming::event::NamingListener {
	$interface(ObjectChangeListener, $NO_CLASS_INIT, ::javax::naming::event::NamingListener)
public:
	virtual void objectChanged(::javax::naming::event::NamingEvent* evt) {}
};

		} // event
	} // naming
} // javax

#endif // _javax_naming_event_ObjectChangeListener_h_