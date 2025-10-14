#ifndef _javax_naming_event_NamingListener_h_
#define _javax_naming_event_NamingListener_h_
//$ interface javax.naming.event.NamingListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace naming {
		namespace event {
			class NamingExceptionEvent;
		}
	}
}

namespace javax {
	namespace naming {
		namespace event {

class $import NamingListener : public ::java::util::EventListener {
	$interface(NamingListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void namingExceptionThrown(::javax::naming::event::NamingExceptionEvent* evt) {}
};

		} // event
	} // naming
} // javax

#endif // _javax_naming_event_NamingListener_h_