#ifndef _javax_naming_event_EventDirContext_h_
#define _javax_naming_event_EventDirContext_h_
//$ interface javax.naming.event.EventDirContext
//$ extends javax.naming.event.EventContext,javax.naming.directory.DirContext

#include <java/lang/Array.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/event/EventContext.h>

namespace javax {
	namespace naming {
		class Name;
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

namespace javax {
	namespace naming {
		namespace event {

class $import EventDirContext : public ::javax::naming::event::EventContext, public ::javax::naming::directory::DirContext {
	$interface(EventDirContext, $NO_CLASS_INIT, ::javax::naming::event::EventContext, ::javax::naming::directory::DirContext)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::naming::event::EventContext::addNamingListener;
	virtual void addNamingListener(::javax::naming::Name* target, $String* filter, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) {}
	virtual void addNamingListener($String* target, $String* filter, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) {}
	virtual void addNamingListener(::javax::naming::Name* target, $String* filter, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) {}
	virtual void addNamingListener($String* target, $String* filter, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l) {}
	using ::javax::naming::directory::DirContext::bind;
	using ::javax::naming::directory::DirContext::rebind;
	using ::javax::naming::directory::DirContext::createSubcontext;
	virtual $Object* addToEnvironment($String* propName, Object$* propVal) override {return nullptr;}
	virtual void bind(::javax::naming::Name* name, Object$* obj) override {}
	virtual void bind($String* name, Object$* obj) override {}
	virtual $Object* clone() override;
	virtual void close() override {}
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override {return nullptr;}
	virtual $String* composeName($String* name, $String* prefix) override {return nullptr;}
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override {return nullptr;}
	virtual ::javax::naming::Context* createSubcontext($String* name) override {return nullptr;}
	virtual void destroySubcontext(::javax::naming::Name* name) override {}
	virtual void destroySubcontext($String* name) override {}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::util::Hashtable* getEnvironment() override {return nullptr;}
	virtual $String* getNameInNamespace() override {return nullptr;}
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override {return nullptr;}
	virtual ::javax::naming::NameParser* getNameParser($String* name) override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) override {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* list($String* name) override {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) override {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) override {return nullptr;}
	virtual $Object* lookup(::javax::naming::Name* name) override {return nullptr;}
	virtual $Object* lookup($String* name) override {return nullptr;}
	virtual $Object* lookupLink(::javax::naming::Name* name) override {return nullptr;}
	virtual $Object* lookupLink($String* name) override {return nullptr;}
	virtual void rebind(::javax::naming::Name* name, Object$* obj) override {}
	virtual void rebind($String* name, Object$* obj) override {}
	virtual $Object* removeFromEnvironment($String* propName) override {return nullptr;}
	virtual void rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName) override {}
	virtual void rename($String* oldName, $String* newName) override {}
	virtual $String* toString() override;
	virtual void unbind(::javax::naming::Name* name) override {}
	virtual void unbind($String* name) override {}
};

		} // event
	} // naming
} // javax

#endif // _javax_naming_event_EventDirContext_h_