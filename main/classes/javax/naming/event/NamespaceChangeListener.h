#ifndef _javax_naming_event_NamespaceChangeListener_h_
#define _javax_naming_event_NamespaceChangeListener_h_
//$ interface javax.naming.event.NamespaceChangeListener
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

class $export NamespaceChangeListener : public ::javax::naming::event::NamingListener {
	$interface(NamespaceChangeListener, $NO_CLASS_INIT, ::javax::naming::event::NamingListener)
public:
	virtual void objectAdded(::javax::naming::event::NamingEvent* evt) {}
	virtual void objectRemoved(::javax::naming::event::NamingEvent* evt) {}
	virtual void objectRenamed(::javax::naming::event::NamingEvent* evt) {}
};

		} // event
	} // naming
} // javax

#endif // _javax_naming_event_NamespaceChangeListener_h_