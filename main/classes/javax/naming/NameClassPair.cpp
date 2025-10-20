#include <javax/naming/NameClassPair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace javax {
	namespace naming {

$FieldInfo _NameClassPair_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameClassPair, name)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameClassPair, className)},
	{"fullName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameClassPair, fullName)},
	{"isRel", "Z", nullptr, $PRIVATE, $field(NameClassPair, isRel)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameClassPair, serialVersionUID)},
	{}
};

$MethodInfo _NameClassPair_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NameClassPair::*)($String*,$String*)>(&NameClassPair::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(NameClassPair::*)($String*,$String*,bool)>(&NameClassPair::init$))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isRelative", "()Z", nullptr, $PUBLIC},
	{"setClassName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setNameInNamespace", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setRelative", "(Z)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameClassPair_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NameClassPair",
	"java.lang.Object",
	"java.io.Serializable",
	_NameClassPair_FieldInfo_,
	_NameClassPair_MethodInfo_
};

$Object* allocate$NameClassPair($Class* clazz) {
	return $of($alloc(NameClassPair));
}

void NameClassPair::init$($String* name, $String* className) {
	$set(this, fullName, nullptr);
	this->isRel = true;
	$set(this, name, name);
	$set(this, className, className);
}

void NameClassPair::init$($String* name, $String* className, bool isRelative) {
	$set(this, fullName, nullptr);
	this->isRel = true;
	$set(this, name, name);
	$set(this, className, className);
	this->isRel = isRelative;
}

$String* NameClassPair::getClassName() {
	return this->className;
}

$String* NameClassPair::getName() {
	return this->name;
}

void NameClassPair::setName($String* name) {
	$set(this, name, name);
}

void NameClassPair::setClassName($String* name) {
	$set(this, className, name);
}

bool NameClassPair::isRelative() {
	return this->isRel;
}

void NameClassPair::setRelative(bool r) {
	this->isRel = r;
}

$String* NameClassPair::getNameInNamespace() {
	if (this->fullName == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return this->fullName;
}

void NameClassPair::setNameInNamespace($String* fullName) {
	$set(this, fullName, fullName);
}

$String* NameClassPair::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, (isRelative() ? ""_s : "(not relative)"_s));
	$var($String, var$1, $$concat(var$2, $(getName())));
	$var($String, var$0, $$concat(var$1, ": "));
	return $concat(var$0, $(getClassName()));
}

NameClassPair::NameClassPair() {
}

$Class* NameClassPair::load$($String* name, bool initialize) {
	$loadClass(NameClassPair, name, initialize, &_NameClassPair_ClassInfo_, allocate$NameClassPair);
	return class$;
}

$Class* NameClassPair::class$ = nullptr;

	} // naming
} // javax