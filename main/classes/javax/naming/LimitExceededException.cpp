#include <javax/naming/LimitExceededException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _LimitExceededException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LimitExceededException, serialVersionUID)},
	{}
};

$MethodInfo _LimitExceededException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LimitExceededException::*)()>(&LimitExceededException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LimitExceededException::*)($String*)>(&LimitExceededException::init$))},
	{}
};

$ClassInfo _LimitExceededException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.LimitExceededException",
	"javax.naming.NamingException",
	nullptr,
	_LimitExceededException_FieldInfo_,
	_LimitExceededException_MethodInfo_
};

$Object* allocate$LimitExceededException($Class* clazz) {
	return $of($alloc(LimitExceededException));
}

void LimitExceededException::init$() {
	$NamingException::init$();
}

void LimitExceededException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

LimitExceededException::LimitExceededException() {
}

LimitExceededException::LimitExceededException(const LimitExceededException& e) {
}

LimitExceededException LimitExceededException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LimitExceededException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LimitExceededException::load$($String* name, bool initialize) {
	$loadClass(LimitExceededException, name, initialize, &_LimitExceededException_ClassInfo_, allocate$LimitExceededException);
	return class$;
}

$Class* LimitExceededException::class$ = nullptr;

	} // naming
} // javax