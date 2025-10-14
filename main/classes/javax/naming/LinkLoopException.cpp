#include <javax/naming/LinkLoopException.h>

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

$FieldInfo _LinkLoopException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkLoopException, serialVersionUID)},
	{}
};

$MethodInfo _LinkLoopException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkLoopException::*)($String*)>(&LinkLoopException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LinkLoopException::*)()>(&LinkLoopException::init$))},
	{}
};

$ClassInfo _LinkLoopException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.LinkLoopException",
	"javax.naming.LinkException",
	nullptr,
	_LinkLoopException_FieldInfo_,
	_LinkLoopException_MethodInfo_
};

$Object* allocate$LinkLoopException($Class* clazz) {
	return $of($alloc(LinkLoopException));
}

void LinkLoopException::init$($String* explanation) {
	$LinkException::init$(explanation);
}

void LinkLoopException::init$() {
	$LinkException::init$();
}

LinkLoopException::LinkLoopException() {
}

LinkLoopException::LinkLoopException(const LinkLoopException& e) {
}

LinkLoopException LinkLoopException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LinkLoopException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LinkLoopException::load$($String* name, bool initialize) {
	$loadClass(LinkLoopException, name, initialize, &_LinkLoopException_ClassInfo_, allocate$LinkLoopException);
	return class$;
}

$Class* LinkLoopException::class$ = nullptr;

	} // naming
} // javax