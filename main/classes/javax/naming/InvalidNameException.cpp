#include <javax/naming/InvalidNameException.h>

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

$FieldInfo _InvalidNameException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidNameException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidNameException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidNameException::*)($String*)>(&InvalidNameException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidNameException::*)()>(&InvalidNameException::init$))},
	{}
};

$ClassInfo _InvalidNameException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.InvalidNameException",
	"javax.naming.NamingException",
	nullptr,
	_InvalidNameException_FieldInfo_,
	_InvalidNameException_MethodInfo_
};

$Object* allocate$InvalidNameException($Class* clazz) {
	return $of($alloc(InvalidNameException));
}

void InvalidNameException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidNameException::init$() {
	$NamingException::init$();
}

InvalidNameException::InvalidNameException() {
}

InvalidNameException::InvalidNameException(const InvalidNameException& e) {
}

InvalidNameException InvalidNameException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidNameException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidNameException::load$($String* name, bool initialize) {
	$loadClass(InvalidNameException, name, initialize, &_InvalidNameException_ClassInfo_, allocate$InvalidNameException);
	return class$;
}

$Class* InvalidNameException::class$ = nullptr;

	} // naming
} // javax