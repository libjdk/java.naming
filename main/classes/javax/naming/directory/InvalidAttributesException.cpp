#include <javax/naming/directory/InvalidAttributesException.h>

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
		namespace directory {

$FieldInfo _InvalidAttributesException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributesException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidAttributesException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributesException::*)($String*)>(&InvalidAttributesException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributesException::*)()>(&InvalidAttributesException::init$))},
	{}
};

$ClassInfo _InvalidAttributesException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.InvalidAttributesException",
	"javax.naming.NamingException",
	nullptr,
	_InvalidAttributesException_FieldInfo_,
	_InvalidAttributesException_MethodInfo_
};

$Object* allocate$InvalidAttributesException($Class* clazz) {
	return $of($alloc(InvalidAttributesException));
}

void InvalidAttributesException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidAttributesException::init$() {
	$NamingException::init$();
}

InvalidAttributesException::InvalidAttributesException() {
}

InvalidAttributesException::InvalidAttributesException(const InvalidAttributesException& e) {
}

InvalidAttributesException InvalidAttributesException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidAttributesException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidAttributesException::load$($String* name, bool initialize) {
	$loadClass(InvalidAttributesException, name, initialize, &_InvalidAttributesException_ClassInfo_, allocate$InvalidAttributesException);
	return class$;
}

$Class* InvalidAttributesException::class$ = nullptr;

		} // directory
	} // naming
} // javax