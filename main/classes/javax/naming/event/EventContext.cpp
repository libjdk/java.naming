#include <javax/naming/event/EventContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/event/NamingListener.h>
#include <jcpp.h>

#undef OBJECT_SCOPE
#undef ONELEVEL_SCOPE
#undef SUBTREE_SCOPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NamingListener = ::javax::naming::event::NamingListener;

namespace javax {
	namespace naming {
		namespace event {

$FieldInfo _EventContext_FieldInfo_[] = {
	{"OBJECT_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventContext, OBJECT_SCOPE)},
	{"ONELEVEL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventContext, ONELEVEL_SCOPE)},
	{"SUBTREE_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventContext, SUBTREE_SCOPE)},
	{}
};

$MethodInfo _EventContext_MethodInfo_[] = {
	{"addNamingListener", "(Ljavax/naming/Name;ILjavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"addNamingListener", "(Ljava/lang/String;ILjavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"removeNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"targetMustExist", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _EventContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.event.EventContext",
	nullptr,
	"javax.naming.Context",
	_EventContext_FieldInfo_,
	_EventContext_MethodInfo_
};

$Object* allocate$EventContext($Class* clazz) {
	return $of($alloc(EventContext));
}

$Class* EventContext::load$($String* name, bool initialize) {
	$loadClass(EventContext, name, initialize, &_EventContext_ClassInfo_, allocate$EventContext);
	return class$;
}

$Class* EventContext::class$ = nullptr;

		} // event
	} // naming
} // javax