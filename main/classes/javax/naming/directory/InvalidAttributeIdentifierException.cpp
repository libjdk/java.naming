#include <javax/naming/directory/InvalidAttributeIdentifierException.h>

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

$FieldInfo _InvalidAttributeIdentifierException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidAttributeIdentifierException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidAttributeIdentifierException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributeIdentifierException::*)($String*)>(&InvalidAttributeIdentifierException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidAttributeIdentifierException::*)()>(&InvalidAttributeIdentifierException::init$))},
	{}
};

$ClassInfo _InvalidAttributeIdentifierException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.InvalidAttributeIdentifierException",
	"javax.naming.NamingException",
	nullptr,
	_InvalidAttributeIdentifierException_FieldInfo_,
	_InvalidAttributeIdentifierException_MethodInfo_
};

$Object* allocate$InvalidAttributeIdentifierException($Class* clazz) {
	return $of($alloc(InvalidAttributeIdentifierException));
}

void InvalidAttributeIdentifierException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void InvalidAttributeIdentifierException::init$() {
	$NamingException::init$();
}

InvalidAttributeIdentifierException::InvalidAttributeIdentifierException() {
}

InvalidAttributeIdentifierException::InvalidAttributeIdentifierException(const InvalidAttributeIdentifierException& e) {
}

InvalidAttributeIdentifierException InvalidAttributeIdentifierException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidAttributeIdentifierException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidAttributeIdentifierException::load$($String* name, bool initialize) {
	$loadClass(InvalidAttributeIdentifierException, name, initialize, &_InvalidAttributeIdentifierException_ClassInfo_, allocate$InvalidAttributeIdentifierException);
	return class$;
}

$Class* InvalidAttributeIdentifierException::class$ = nullptr;

		} // directory
	} // naming
} // javax