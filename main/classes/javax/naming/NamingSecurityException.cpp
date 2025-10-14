#include <javax/naming/NamingSecurityException.h>

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

$FieldInfo _NamingSecurityException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingSecurityException, serialVersionUID)},
	{}
};

$MethodInfo _NamingSecurityException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NamingSecurityException::*)($String*)>(&NamingSecurityException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NamingSecurityException::*)()>(&NamingSecurityException::init$))},
	{}
};

$ClassInfo _NamingSecurityException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.naming.NamingSecurityException",
	"javax.naming.NamingException",
	nullptr,
	_NamingSecurityException_FieldInfo_,
	_NamingSecurityException_MethodInfo_
};

$Object* allocate$NamingSecurityException($Class* clazz) {
	return $of($alloc(NamingSecurityException));
}

void NamingSecurityException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NamingSecurityException::init$() {
	$NamingException::init$();
}

NamingSecurityException::NamingSecurityException() {
}

NamingSecurityException::NamingSecurityException(const NamingSecurityException& e) {
}

NamingSecurityException NamingSecurityException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NamingSecurityException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NamingSecurityException::load$($String* name, bool initialize) {
	$loadClass(NamingSecurityException, name, initialize, &_NamingSecurityException_ClassInfo_, allocate$NamingSecurityException);
	return class$;
}

$Class* NamingSecurityException::class$ = nullptr;

	} // naming
} // javax