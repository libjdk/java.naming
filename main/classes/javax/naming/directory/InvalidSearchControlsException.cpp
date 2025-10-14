#include <javax/naming/directory/InvalidSearchControlsException.h>

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

$FieldInfo _InvalidSearchControlsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidSearchControlsException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidSearchControlsException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSearchControlsException::*)()>(&InvalidSearchControlsException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSearchControlsException::*)($String*)>(&InvalidSearchControlsException::init$))},
	{}
};

$ClassInfo _InvalidSearchControlsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.InvalidSearchControlsException",
	"javax.naming.NamingException",
	nullptr,
	_InvalidSearchControlsException_FieldInfo_,
	_InvalidSearchControlsException_MethodInfo_
};

$Object* allocate$InvalidSearchControlsException($Class* clazz) {
	return $of($alloc(InvalidSearchControlsException));
}

void InvalidSearchControlsException::init$() {
	$NamingException::init$();
}

void InvalidSearchControlsException::init$($String* msg) {
	$NamingException::init$(msg);
}

InvalidSearchControlsException::InvalidSearchControlsException() {
}

InvalidSearchControlsException::InvalidSearchControlsException(const InvalidSearchControlsException& e) {
}

InvalidSearchControlsException InvalidSearchControlsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidSearchControlsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidSearchControlsException::load$($String* name, bool initialize) {
	$loadClass(InvalidSearchControlsException, name, initialize, &_InvalidSearchControlsException_ClassInfo_, allocate$InvalidSearchControlsException);
	return class$;
}

$Class* InvalidSearchControlsException::class$ = nullptr;

		} // directory
	} // naming
} // javax