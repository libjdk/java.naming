#include <javax/naming/StringRefAddr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RefAddr = ::javax::naming::RefAddr;

namespace javax {
	namespace naming {

$FieldInfo _StringRefAddr_FieldInfo_[] = {
	{"contents", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringRefAddr, contents)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringRefAddr, serialVersionUID)},
	{}
};

$MethodInfo _StringRefAddr_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringRefAddr::*)($String*,$String*)>(&StringRefAddr::init$))},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringRefAddr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.StringRefAddr",
	"javax.naming.RefAddr",
	nullptr,
	_StringRefAddr_FieldInfo_,
	_StringRefAddr_MethodInfo_
};

$Object* allocate$StringRefAddr($Class* clazz) {
	return $of($alloc(StringRefAddr));
}

void StringRefAddr::init$($String* addrType, $String* addr) {
	$RefAddr::init$(addrType);
	$set(this, contents, addr);
}

$Object* StringRefAddr::getContent() {
	return $of(this->contents);
}

StringRefAddr::StringRefAddr() {
}

$Class* StringRefAddr::load$($String* name, bool initialize) {
	$loadClass(StringRefAddr, name, initialize, &_StringRefAddr_ClassInfo_, allocate$StringRefAddr);
	return class$;
}

$Class* StringRefAddr::class$ = nullptr;

	} // naming
} // javax