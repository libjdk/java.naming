#include <javax/naming/Binding.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NameClassPair.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NameClassPair = ::javax::naming::NameClassPair;

namespace javax {
	namespace naming {

$FieldInfo _Binding_FieldInfo_[] = {
	{"boundObj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Binding, boundObj)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Binding, serialVersionUID)},
	{}
};

$MethodInfo _Binding_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Binding::*)($String*,Object$*)>(&Binding::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Binding::*)($String*,Object$*,bool)>(&Binding::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Binding::*)($String*,$String*,Object$*)>(&Binding::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Binding::*)($String*,$String*,Object$*,bool)>(&Binding::init$))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Binding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.Binding",
	"javax.naming.NameClassPair",
	nullptr,
	_Binding_FieldInfo_,
	_Binding_MethodInfo_
};

$Object* allocate$Binding($Class* clazz) {
	return $of($alloc(Binding));
}

void Binding::init$($String* name, Object$* obj) {
	$NameClassPair::init$(name, nullptr);
	$set(this, boundObj, obj);
}

void Binding::init$($String* name, Object$* obj, bool isRelative) {
	$NameClassPair::init$(name, nullptr, isRelative);
	$set(this, boundObj, obj);
}

void Binding::init$($String* name, $String* className, Object$* obj) {
	$NameClassPair::init$(name, className);
	$set(this, boundObj, obj);
}

void Binding::init$($String* name, $String* className, Object$* obj, bool isRelative) {
	$NameClassPair::init$(name, className, isRelative);
	$set(this, boundObj, obj);
}

$String* Binding::getClassName() {
	$var($String, cname, $NameClassPair::getClassName());
	if (cname != nullptr) {
		return cname;
	}
	if (this->boundObj != nullptr) {
		return $nc($of(this->boundObj))->getClass()->getName();
	} else {
		return nullptr;
	}
}

$Object* Binding::getObject() {
	return $of(this->boundObj);
}

void Binding::setObject(Object$* obj) {
	$set(this, boundObj, obj);
}

$String* Binding::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($NameClassPair::toString()), ":"_s}));
	return $concat(var$0, $(getObject()));
}

Binding::Binding() {
}

$Class* Binding::load$($String* name, bool initialize) {
	$loadClass(Binding, name, initialize, &_Binding_ClassInfo_, allocate$Binding);
	return class$;
}

$Class* Binding::class$ = nullptr;

	} // naming
} // javax