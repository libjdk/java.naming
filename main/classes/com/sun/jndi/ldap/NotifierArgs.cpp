#include <com/sun/jndi/ldap/NotifierArgs.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/NamespaceChangeListener.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/event/ObjectChangeListener.h>
#include <jcpp.h>

#undef ADDED_MASK
#undef CHANGED_MASK
#undef ONELEVEL_SCOPE
#undef REMOVED_MASK
#undef RENAMED_MASK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $EventContext = ::javax::naming::event::EventContext;
using $NamespaceChangeListener = ::javax::naming::event::NamespaceChangeListener;
using $NamingListener = ::javax::naming::event::NamingListener;
using $ObjectChangeListener = ::javax::naming::event::ObjectChangeListener;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _NotifierArgs_FieldInfo_[] = {
	{"ADDED_MASK", "I", nullptr, $STATIC | $FINAL, $constField(NotifierArgs, ADDED_MASK)},
	{"REMOVED_MASK", "I", nullptr, $STATIC | $FINAL, $constField(NotifierArgs, REMOVED_MASK)},
	{"CHANGED_MASK", "I", nullptr, $STATIC | $FINAL, $constField(NotifierArgs, CHANGED_MASK)},
	{"RENAMED_MASK", "I", nullptr, $STATIC | $FINAL, $constField(NotifierArgs, RENAMED_MASK)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(NotifierArgs, name)},
	{"filter", "Ljava/lang/String;", nullptr, 0, $field(NotifierArgs, filter)},
	{"controls", "Ljavax/naming/directory/SearchControls;", nullptr, 0, $field(NotifierArgs, controls)},
	{"mask", "I", nullptr, 0, $field(NotifierArgs, mask)},
	{"sum", "I", nullptr, $PRIVATE, $field(NotifierArgs, sum)},
	{}
};

$MethodInfo _NotifierArgs_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjavax/naming/event/NamingListener;)V", nullptr, 0, $method(static_cast<void(NotifierArgs::*)($String*,int32_t,$NamingListener*)>(&NotifierArgs::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, 0, $method(static_cast<void(NotifierArgs::*)($String*,$String*,$SearchControls*,$NamingListener*)>(&NotifierArgs::init$))},
	{"checkControls", "(Ljavax/naming/directory/SearchControls;)Z", nullptr, $PRIVATE, $method(static_cast<bool(NotifierArgs::*)($SearchControls*)>(&NotifierArgs::checkControls))},
	{"checkStringArrays", "([Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($StringArray*,$StringArray*)>(&NotifierArgs::checkStringArrays))},
	{"controlsCode", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(NotifierArgs::*)()>(&NotifierArgs::controlsCode))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NotifierArgs_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.NotifierArgs",
	"java.lang.Object",
	nullptr,
	_NotifierArgs_FieldInfo_,
	_NotifierArgs_MethodInfo_
};

$Object* allocate$NotifierArgs($Class* clazz) {
	return $of($alloc(NotifierArgs));
}

void NotifierArgs::init$($String* name, int32_t scope, $NamingListener* l) {
	NotifierArgs::init$(name, "(objectclass=*)"_s, nullptr, l);
	if (scope != $EventContext::ONELEVEL_SCOPE) {
		$set(this, controls, $new($SearchControls));
		$nc(this->controls)->setSearchScope(scope);
	}
}

void NotifierArgs::init$($String* name, $String* filter, $SearchControls* ctls, $NamingListener* l) {
	this->sum = -1;
	$set(this, name, name);
	$set(this, filter, filter);
	$set(this, controls, ctls);
	if ($instanceOf($NamespaceChangeListener, l)) {
		this->mask |= (NotifierArgs::ADDED_MASK | NotifierArgs::REMOVED_MASK) | NotifierArgs::RENAMED_MASK;
	}
	if ($instanceOf($ObjectChangeListener, l)) {
		this->mask |= NotifierArgs::CHANGED_MASK;
	}
}

bool NotifierArgs::equals(Object$* obj) {
	if ($instanceOf(NotifierArgs, obj)) {
		$var(NotifierArgs, target, $cast(NotifierArgs, obj));
		bool var$1 = this->mask == $nc(target)->mask && $nc(this->name)->equals(target->name);
		bool var$0 = var$1 && $nc(this->filter)->equals(target->filter);
		return var$0 && checkControls(target->controls);
	}
	return false;
}

bool NotifierArgs::checkControls($SearchControls* ctls) {
	if (this->controls == nullptr || ctls == nullptr) {
		return ctls == this->controls;
	}
	int32_t var$5 = $nc(this->controls)->getSearchScope();
	bool var$4 = (var$5 == $nc(ctls)->getSearchScope());
	if (var$4) {
		int32_t var$6 = $nc(this->controls)->getTimeLimit();
		var$4 = (var$6 == ctls->getTimeLimit());
	}
	bool var$3 = var$4;
	if (var$3) {
		bool var$7 = $nc(this->controls)->getDerefLinkFlag();
		var$3 = (var$7 == ctls->getDerefLinkFlag());
	}
	bool var$2 = var$3;
	if (var$2) {
		bool var$8 = $nc(this->controls)->getReturningObjFlag();
		var$2 = (var$8 == ctls->getReturningObjFlag());
	}
	bool var$1 = var$2;
	if (var$1) {
		int64_t var$9 = $nc(this->controls)->getCountLimit();
		var$1 = (var$9 == ctls->getCountLimit());
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($StringArray, var$10, $nc(this->controls)->getReturningAttributes());
		var$0 = checkStringArrays(var$10, $(ctls->getReturningAttributes()));
	}
	return var$0;
}

bool NotifierArgs::checkStringArrays($StringArray* s1, $StringArray* s2) {
	if ((s1 == nullptr) || (s2 == nullptr)) {
		return s1 == s2;
	}
	if ($nc(s1)->length != $nc(s2)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(s1)->length; ++i) {
		if (!$nc(s1->get(i))->equals($nc(s2)->get(i))) {
			return false;
		}
	}
	return true;
}

int32_t NotifierArgs::hashCode() {
	if (this->sum == -1) {
		int32_t var$1 = this->mask + $nc(this->name)->hashCode();
		int32_t var$0 = var$1 + $nc(this->filter)->hashCode();
		this->sum = var$0 + controlsCode();
	}
	return this->sum;
}

int32_t NotifierArgs::controlsCode() {
	if (this->controls == nullptr) {
		return 0;
	}
	int32_t var$2 = $nc(this->controls)->getTimeLimit();
	int32_t var$1 = var$2 + (int32_t)$nc(this->controls)->getCountLimit();
	int32_t var$0 = var$1 + ($nc(this->controls)->getDerefLinkFlag() ? 1 : 0);
	int32_t total = var$0 + ($nc(this->controls)->getReturningObjFlag() ? 1 : 0);
	$var($StringArray, attrs, $nc(this->controls)->getReturningAttributes());
	if (attrs != nullptr) {
		for (int32_t i = 0; i < attrs->length; ++i) {
			total += $nc(attrs->get(i))->hashCode();
		}
	}
	return total;
}

NotifierArgs::NotifierArgs() {
}

$Class* NotifierArgs::load$($String* name, bool initialize) {
	$loadClass(NotifierArgs, name, initialize, &_NotifierArgs_ClassInfo_, allocate$NotifierArgs);
	return class$;
}

$Class* NotifierArgs::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com