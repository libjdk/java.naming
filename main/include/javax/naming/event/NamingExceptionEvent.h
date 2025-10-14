#ifndef _javax_naming_event_NamingExceptionEvent_h_
#define _javax_naming_event_NamingExceptionEvent_h_
//$ class javax.naming.event.NamingExceptionEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace naming {
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

namespace javax {
	namespace naming {
		namespace event {

class $import NamingExceptionEvent : public ::java::util::EventObject {
	$class(NamingExceptionEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	NamingExceptionEvent();
	void init$(::javax::naming::event::EventContext* source, ::javax::naming::NamingException* exc);
	virtual void dispatch(::javax::naming::event::NamingListener* listener);
	virtual ::javax::naming::event::EventContext* getEventContext();
	virtual ::javax::naming::NamingException* getException();
	::javax::naming::NamingException* exception = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xBC4F019FAB3B5A30;
};

		} // event
	} // naming
} // javax

#endif // _javax_naming_event_NamingExceptionEvent_h_