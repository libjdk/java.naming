#include <javax/naming/MalformedLinkException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/LinkException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkException = ::javax::naming::LinkException;

namespace javax {
	namespace naming {

$FieldInfo _MalformedLinkException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedLinkException, serialVersionUID)},
	{}
};

$MethodInfo _MalformedLinkException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MalformedLinkException::*)($String*)>(&MalformedLinkException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MalformedLinkException::*)()>(&MalformedLinkException::init$))},
	{}
};

$ClassInfo _MalformedLinkException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.MalformedLinkException",
	"javax.naming.LinkException",
	nullptr,
	_MalformedLinkException_FieldInfo_,
	_MalformedLinkException_MethodInfo_
};

$Object* allocate$MalformedLinkException($Class* clazz) {
	return $of($alloc(MalformedLinkException));
}

void MalformedLinkException::init$($String* explanation) {
	$LinkException::init$(explanation);
}

void MalformedLinkException::init$() {
	$LinkException::init$();
}

MalformedLinkException::MalformedLinkException() {
}

MalformedLinkException::MalformedLinkException(const MalformedLinkException& e) {
}

MalformedLinkException MalformedLinkException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MalformedLinkException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MalformedLinkException::load$($String* name, bool initialize) {
	$loadClass(MalformedLinkException, name, initialize, &_MalformedLinkException_ClassInfo_, allocate$MalformedLinkException);
	return class$;
}

$Class* MalformedLinkException::class$ = nullptr;

	} // naming
} // javax