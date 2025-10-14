#include <javax/naming/RefAddr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {

$FieldInfo _RefAddr_FieldInfo_[] = {
	{"addrType", "Ljava/lang/String;", nullptr, $PROTECTED, $field(RefAddr, addrType)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RefAddr, serialVersionUID)},
	{}
};

$MethodInfo _RefAddr_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(RefAddr::*)($String*)>(&RefAddr::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RefAddr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.naming.RefAddr",
	"java.lang.Object",
	"java.io.Serializable",
	_RefAddr_FieldInfo_,
	_RefAddr_MethodInfo_
};

$Object* allocate$RefAddr($Class* clazz) {
	return $of($alloc(RefAddr));
}

void RefAddr::init$($String* addrType) {
	$set(this, addrType, addrType);
}

$String* RefAddr::getType() {
	return this->addrType;
}

bool RefAddr::equals(Object$* obj) {
	if ((obj != nullptr) && ($instanceOf(RefAddr, obj))) {
		$var(RefAddr, target, $cast(RefAddr, obj));
		if ($nc(this->addrType)->compareTo(target->addrType) == 0) {
			$var($Object, thisobj, this->getContent());
			$var($Object, thatobj, target->getContent());
			if ($equals(thisobj, thatobj)) {
				return true;
			}
			if (thisobj != nullptr) {
				return $of(thisobj)->equals(thatobj);
			}
		}
	}
	return false;
}

int32_t RefAddr::hashCode() {
	int32_t var$0 = 0;
	if (getContent() == nullptr) {
		var$0 = $nc(this->addrType)->hashCode();
	} else {
		int32_t var$1 = $nc(this->addrType)->hashCode();
		var$0 = var$1 + $nc($of($(getContent())))->hashCode();
	}
	return var$0;
}

$String* RefAddr::toString() {
	$var($StringBuilder, str, $new($StringBuilder, $$str({"Type: "_s, this->addrType, "\n"_s})));
	str->append($$str({"Content: "_s, $(getContent()), "\n"_s}));
	return (str->toString());
}

RefAddr::RefAddr() {
}

$Class* RefAddr::load$($String* name, bool initialize) {
	$loadClass(RefAddr, name, initialize, &_RefAddr_ClassInfo_, allocate$RefAddr);
	return class$;
}

$Class* RefAddr::class$ = nullptr;

	} // naming
} // javax