#include <javax/naming/PartialResultException.h>

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

$FieldInfo _PartialResultException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PartialResultException, serialVersionUID)},
	{}
};

$MethodInfo _PartialResultException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PartialResultException::*)($String*)>(&PartialResultException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PartialResultException::*)()>(&PartialResultException::init$))},
	{}
};

$ClassInfo _PartialResultException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.PartialResultException",
	"javax.naming.NamingException",
	nullptr,
	_PartialResultException_FieldInfo_,
	_PartialResultException_MethodInfo_
};

$Object* allocate$PartialResultException($Class* clazz) {
	return $of($alloc(PartialResultException));
}

void PartialResultException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void PartialResultException::init$() {
	$NamingException::init$();
}

PartialResultException::PartialResultException() {
}

PartialResultException::PartialResultException(const PartialResultException& e) {
}

PartialResultException PartialResultException::wrapper$() {
	$pendingException(this);
	return *this;
}

void PartialResultException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* PartialResultException::load$($String* name, bool initialize) {
	$loadClass(PartialResultException, name, initialize, &_PartialResultException_ClassInfo_, allocate$PartialResultException);
	return class$;
}

$Class* PartialResultException::class$ = nullptr;

	} // naming
} // javax