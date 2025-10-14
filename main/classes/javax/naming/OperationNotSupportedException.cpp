#include <javax/naming/OperationNotSupportedException.h>

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

$FieldInfo _OperationNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OperationNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _OperationNotSupportedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OperationNotSupportedException::*)()>(&OperationNotSupportedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(OperationNotSupportedException::*)($String*)>(&OperationNotSupportedException::init$))},
	{}
};

$ClassInfo _OperationNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.OperationNotSupportedException",
	"javax.naming.NamingException",
	nullptr,
	_OperationNotSupportedException_FieldInfo_,
	_OperationNotSupportedException_MethodInfo_
};

$Object* allocate$OperationNotSupportedException($Class* clazz) {
	return $of($alloc(OperationNotSupportedException));
}

void OperationNotSupportedException::init$() {
	$NamingException::init$();
}

void OperationNotSupportedException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

OperationNotSupportedException::OperationNotSupportedException() {
}

OperationNotSupportedException::OperationNotSupportedException(const OperationNotSupportedException& e) {
}

OperationNotSupportedException OperationNotSupportedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void OperationNotSupportedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* OperationNotSupportedException::load$($String* name, bool initialize) {
	$loadClass(OperationNotSupportedException, name, initialize, &_OperationNotSupportedException_ClassInfo_, allocate$OperationNotSupportedException);
	return class$;
}

$Class* OperationNotSupportedException::class$ = nullptr;

	} // naming
} // javax