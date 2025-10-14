#include <javax/naming/InterruptedNamingException.h>

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

$FieldInfo _InterruptedNamingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InterruptedNamingException, serialVersionUID)},
	{}
};

$MethodInfo _InterruptedNamingException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InterruptedNamingException::*)($String*)>(&InterruptedNamingException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InterruptedNamingException::*)()>(&InterruptedNamingException::init$))},
	{}
};

$ClassInfo _InterruptedNamingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.InterruptedNamingException",
	"javax.naming.NamingException",
	nullptr,
	_InterruptedNamingException_FieldInfo_,
	_InterruptedNamingException_MethodInfo_
};

$Object* allocate$InterruptedNamingException($Class* clazz) {
	return $of($alloc(InterruptedNamingException));
}

void InterruptedNamingException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InterruptedNamingException::init$() {
	$NamingException::init$();
}

InterruptedNamingException::InterruptedNamingException() {
}

InterruptedNamingException::InterruptedNamingException(const InterruptedNamingException& e) {
}

InterruptedNamingException InterruptedNamingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InterruptedNamingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InterruptedNamingException::load$($String* name, bool initialize) {
	$loadClass(InterruptedNamingException, name, initialize, &_InterruptedNamingException_ClassInfo_, allocate$InterruptedNamingException);
	return class$;
}

$Class* InterruptedNamingException::class$ = nullptr;

	} // naming
} // javax