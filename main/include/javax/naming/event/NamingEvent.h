#ifndef _javax_naming_event_NamingEvent_h_
#define _javax_naming_event_NamingEvent_h_
//$ class javax.naming.event.NamingEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

#pragma push_macro("OBJECT_ADDED")
#undef OBJECT_ADDED
#pragma push_macro("OBJECT_CHANGED")
#undef OBJECT_CHANGED
#pragma push_macro("OBJECT_REMOVED")
#undef OBJECT_REMOVED
#pragma push_macro("OBJECT_RENAMED")
#undef OBJECT_RENAMED

namespace javax {
	namespace naming {
		class Binding;
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

class $import NamingEvent : public ::java::util::EventObject {
	$class(NamingEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	NamingEvent();
	void init$(::javax::naming::event::EventContext* source, int32_t type, ::javax::naming::Binding* newBd, ::javax::naming::Binding* oldBd, Object$* changeInfo);
	virtual void dispatch(::javax::naming::event::NamingListener* listener);
	virtual $Object* getChangeInfo();
	virtual ::javax::naming::event::EventContext* getEventContext();
	virtual ::javax::naming::Binding* getNewBinding();
	virtual ::javax::naming::Binding* getOldBinding();
	virtual int32_t getType();
	static const int32_t OBJECT_ADDED = 0;
	static const int32_t OBJECT_REMOVED = 1;
	static const int32_t OBJECT_RENAMED = 2;
	static const int32_t OBJECT_CHANGED = 3;
	$Object* changeInfo = nullptr;
	int32_t type = 0;
	::javax::naming::Binding* oldBinding = nullptr;
	::javax::naming::Binding* newBinding = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x9D18B00289D22F45;
};

		} // event
	} // naming
} // javax

#pragma pop_macro("OBJECT_ADDED")
#pragma pop_macro("OBJECT_CHANGED")
#pragma pop_macro("OBJECT_REMOVED")
#pragma pop_macro("OBJECT_RENAMED")

#endif // _javax_naming_event_NamingEvent_h_