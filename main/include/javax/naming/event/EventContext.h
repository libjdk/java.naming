#ifndef _javax_naming_event_EventContext_h_
#define _javax_naming_event_EventContext_h_
//$ interface javax.naming.event.EventContext
//$ extends javax.naming.Context

#include <javax/naming/Context.h>

#pragma push_macro("OBJECT_SCOPE")
#undef OBJECT_SCOPE
#pragma push_macro("ONELEVEL_SCOPE")
#undef ONELEVEL_SCOPE
#pragma push_macro("SUBTREE_SCOPE")
#undef SUBTREE_SCOPE

namespace javax {
	namespace naming {
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace event {
			class NamingListener;
		}
	}
}

namespace javax {
	namespace naming {
		namespace event {

class $import EventContext : public ::javax::naming::Context {
	$interface(EventContext, $NO_CLASS_INIT, ::javax::naming::Context)
public:
	virtual void addNamingListener(::javax::naming::Name* target, int32_t scope, ::javax::naming::event::NamingListener* l) {}
	virtual void addNamingListener($String* target, int32_t scope, ::javax::naming::event::NamingListener* l) {}
	virtual void removeNamingListener(::javax::naming::event::NamingListener* l) {}
	virtual bool targetMustExist() {return false;}
	static const int32_t OBJECT_SCOPE = 0;
	static const int32_t ONELEVEL_SCOPE = 1;
	static const int32_t SUBTREE_SCOPE = 2;
};

		} // event
	} // naming
} // javax

#pragma pop_macro("OBJECT_SCOPE")
#pragma pop_macro("ONELEVEL_SCOPE")
#pragma pop_macro("SUBTREE_SCOPE")

#endif // _javax_naming_event_EventContext_h_