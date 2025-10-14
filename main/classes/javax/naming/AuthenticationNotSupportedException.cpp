#include <javax/naming/AuthenticationNotSupportedException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingSecurityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingSecurityException = ::javax::naming::NamingSecurityException;

namespace javax {
	namespace naming {

$FieldInfo _AuthenticationNotSupportedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthenticationNotSupportedException, serialVersionUID)},
	{}
};

$MethodInfo _AuthenticationNotSupportedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthenticationNotSupportedException::*)($String*)>(&AuthenticationNotSupportedException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthenticationNotSupportedException::*)()>(&AuthenticationNotSupportedException::init$))},
	{}
};

$ClassInfo _AuthenticationNotSupportedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.AuthenticationNotSupportedException",
	"javax.naming.NamingSecurityException",
	nullptr,
	_AuthenticationNotSupportedException_FieldInfo_,
	_AuthenticationNotSupportedException_MethodInfo_
};

$Object* allocate$AuthenticationNotSupportedException($Class* clazz) {
	return $of($alloc(AuthenticationNotSupportedException));
}

void AuthenticationNotSupportedException::init$($String* explanation) {
	$NamingSecurityException::init$(explanation);
}

void AuthenticationNotSupportedException::init$() {
	$NamingSecurityException::init$();
}

AuthenticationNotSupportedException::AuthenticationNotSupportedException() {
}

AuthenticationNotSupportedException::AuthenticationNotSupportedException(const AuthenticationNotSupportedException& e) {
}

AuthenticationNotSupportedException AuthenticationNotSupportedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AuthenticationNotSupportedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AuthenticationNotSupportedException::load$($String* name, bool initialize) {
	$loadClass(AuthenticationNotSupportedException, name, initialize, &_AuthenticationNotSupportedException_ClassInfo_, allocate$AuthenticationNotSupportedException);
	return class$;
}

$Class* AuthenticationNotSupportedException::class$ = nullptr;

	} // naming
} // javax