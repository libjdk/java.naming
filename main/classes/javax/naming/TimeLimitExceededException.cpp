#include <javax/naming/TimeLimitExceededException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/LimitExceededException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LimitExceededException = ::javax::naming::LimitExceededException;

namespace javax {
	namespace naming {

$FieldInfo _TimeLimitExceededException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TimeLimitExceededException, serialVersionUID)},
	{}
};

$MethodInfo _TimeLimitExceededException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TimeLimitExceededException::*)()>(&TimeLimitExceededException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TimeLimitExceededException::*)($String*)>(&TimeLimitExceededException::init$))},
	{}
};

$ClassInfo _TimeLimitExceededException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.TimeLimitExceededException",
	"javax.naming.LimitExceededException",
	nullptr,
	_TimeLimitExceededException_FieldInfo_,
	_TimeLimitExceededException_MethodInfo_
};

$Object* allocate$TimeLimitExceededException($Class* clazz) {
	return $of($alloc(TimeLimitExceededException));
}

void TimeLimitExceededException::init$() {
	$LimitExceededException::init$();
}

void TimeLimitExceededException::init$($String* explanation) {
	$LimitExceededException::init$(explanation);
}

TimeLimitExceededException::TimeLimitExceededException() {
}

TimeLimitExceededException::TimeLimitExceededException(const TimeLimitExceededException& e) {
}

TimeLimitExceededException TimeLimitExceededException::wrapper$() {
	$pendingException(this);
	return *this;
}

void TimeLimitExceededException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* TimeLimitExceededException::load$($String* name, bool initialize) {
	$loadClass(TimeLimitExceededException, name, initialize, &_TimeLimitExceededException_ClassInfo_, allocate$TimeLimitExceededException);
	return class$;
}

$Class* TimeLimitExceededException::class$ = nullptr;

	} // naming
} // javax