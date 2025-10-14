#include <javax/naming/directory/InvalidAttributeValueException.h>

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

$FieldInfo _InvalidAttributeValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributeValueException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidAttributeValueException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributeValueException::*)($String*)>(&InvalidAttributeValueException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributeValueException::*)()>(&InvalidAttributeValueException::init$))},
	{}
};

$ClassInfo _InvalidAttributeValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.InvalidAttributeValueException",
	"javax.naming.NamingException",
	nullptr,
	_InvalidAttributeValueException_FieldInfo_,
	_InvalidAttributeValueException_MethodInfo_
};

$Object* allocate$InvalidAttributeValueException($Class* clazz) {
	return $of($alloc(InvalidAttributeValueException));
}

void InvalidAttributeValueException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidAttributeValueException::init$() {
	$NamingException::init$();
}

InvalidAttributeValueException::InvalidAttributeValueException() {
}

InvalidAttributeValueException::InvalidAttributeValueException(const InvalidAttributeValueException& e) {
}

InvalidAttributeValueException InvalidAttributeValueException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidAttributeValueException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidAttributeValueException::load$($String* name, bool initialize) {
	$loadClass(InvalidAttributeValueException, name, initialize, &_InvalidAttributeValueException_ClassInfo_, allocate$InvalidAttributeValueException);
	return class$;
}

$Class* InvalidAttributeValueException::class$ = nullptr;

		} // directory
	} // naming
} // javax