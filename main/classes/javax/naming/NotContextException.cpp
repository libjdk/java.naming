#include <javax/naming/NotContextException.h>

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

$FieldInfo _NotContextException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotContextException, serialVersionUID)},
	{}
};

$MethodInfo _NotContextException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NotContextException::*)($String*)>(&NotContextException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotContextException::*)()>(&NotContextException::init$))},
	{}
};

$ClassInfo _NotContextException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NotContextException",
	"javax.naming.NamingException",
	nullptr,
	_NotContextException_FieldInfo_,
	_NotContextException_MethodInfo_
};

$Object* allocate$NotContextException($Class* clazz) {
	return $of($alloc(NotContextException));
}

void NotContextException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void NotContextException::init$() {
	$NamingException::init$();
}

NotContextException::NotContextException() {
}

NotContextException::NotContextException(const NotContextException& e) {
}

NotContextException NotContextException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NotContextException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NotContextException::load$($String* name, bool initialize) {
	$loadClass(NotContextException, name, initialize, &_NotContextException_ClassInfo_, allocate$NotContextException);
	return class$;
}

$Class* NotContextException::class$ = nullptr;

	} // naming
} // javax