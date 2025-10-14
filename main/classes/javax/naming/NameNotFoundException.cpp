#include <javax/naming/NameNotFoundException.h>

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

$FieldInfo _NameNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _NameNotFoundException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NameNotFoundException::*)($String*)>(&NameNotFoundException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NameNotFoundException::*)()>(&NameNotFoundException::init$))},
	{}
};

$ClassInfo _NameNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NameNotFoundException",
	"javax.naming.NamingException",
	nullptr,
	_NameNotFoundException_FieldInfo_,
	_NameNotFoundException_MethodInfo_
};

$Object* allocate$NameNotFoundException($Class* clazz) {
	return $of($alloc(NameNotFoundException));
}

void NameNotFoundException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NameNotFoundException::init$() {
	$NamingException::init$();
}

NameNotFoundException::NameNotFoundException() {
}

NameNotFoundException::NameNotFoundException(const NameNotFoundException& e) {
}

NameNotFoundException NameNotFoundException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NameNotFoundException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NameNotFoundException::load$($String* name, bool initialize) {
	$loadClass(NameNotFoundException, name, initialize, &_NameNotFoundException_ClassInfo_, allocate$NameNotFoundException);
	return class$;
}

$Class* NameNotFoundException::class$ = nullptr;

	} // naming
} // javax