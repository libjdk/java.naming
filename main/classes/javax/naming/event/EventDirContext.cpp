#include <javax/naming/event/EventDirContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/NamingListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $EventContext = ::javax::naming::event::EventContext;
using $NamingListener = ::javax::naming::event::NamingListener;

namespace javax {
	namespace naming {
		namespace event {

$MethodInfo _EventDirContext_MethodInfo_[] = {
	{"addNamingListener", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"*lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC | $ABSTRACT},
	{"*list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC | $ABSTRACT},
	{"*listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC | $ABSTRACT},
	{"*listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC | $ABSTRACT},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT},
	{"*lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC | $ABSTRACT},
	{"*composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getEnvironment", "()Ljava/util/Hashtable;", nullptr, $PUBLIC | $ABSTRACT},
	{"*close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _EventDirContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.event.EventDirContext",
	nullptr,
	"javax.naming.event.EventContext,javax.naming.directory.DirContext",
	nullptr,
	_EventDirContext_MethodInfo_
};

$Object* allocate$EventDirContext($Class* clazz) {
	return $of($alloc(EventDirContext));
}

int32_t EventDirContext::hashCode() {
	 return this->$EventContext::hashCode();
}

bool EventDirContext::equals(Object$* arg0) {
	 return this->$EventContext::equals(arg0);
}

$Object* EventDirContext::clone() {
	 return this->$EventContext::clone();
}

$String* EventDirContext::toString() {
	 return this->$EventContext::toString();
}

void EventDirContext::finalize() {
	this->$EventContext::finalize();
}

$Class* EventDirContext::load$($String* name, bool initialize) {
	$loadClass(EventDirContext, name, initialize, &_EventDirContext_ClassInfo_, allocate$EventDirContext);
	return class$;
}

$Class* EventDirContext::class$ = nullptr;

		} // event
	} // naming
} // javax