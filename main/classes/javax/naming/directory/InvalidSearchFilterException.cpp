#include <javax/naming/directory/InvalidSearchFilterException.h>

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

$FieldInfo _InvalidSearchFilterException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidSearchFilterException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidSearchFilterException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSearchFilterException::*)()>(&InvalidSearchFilterException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSearchFilterException::*)($String*)>(&InvalidSearchFilterException::init$))},
	{}
};

$ClassInfo _InvalidSearchFilterException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.InvalidSearchFilterException",
	"javax.naming.NamingException",
	nullptr,
	_InvalidSearchFilterException_FieldInfo_,
	_InvalidSearchFilterException_MethodInfo_
};

$Object* allocate$InvalidSearchFilterException($Class* clazz) {
	return $of($alloc(InvalidSearchFilterException));
}

void InvalidSearchFilterException::init$() {
	$NamingException::init$();
}

void InvalidSearchFilterException::init$($String* msg) {
	$NamingException::init$(msg);
}

InvalidSearchFilterException::InvalidSearchFilterException() {
}

InvalidSearchFilterException::InvalidSearchFilterException(const InvalidSearchFilterException& e) {
}

InvalidSearchFilterException InvalidSearchFilterException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidSearchFilterException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidSearchFilterException::load$($String* name, bool initialize) {
	$loadClass(InvalidSearchFilterException, name, initialize, &_InvalidSearchFilterException_ClassInfo_, allocate$InvalidSearchFilterException);
	return class$;
}

$Class* InvalidSearchFilterException::class$ = nullptr;

		} // directory
	} // naming
} // javax