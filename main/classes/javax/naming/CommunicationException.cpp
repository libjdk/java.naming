#include <javax/naming/CommunicationException.h>

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

$FieldInfo _CommunicationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CommunicationException, serialVersionUID)},
	{}
};

$MethodInfo _CommunicationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CommunicationException::*)($String*)>(&CommunicationException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CommunicationException::*)()>(&CommunicationException::init$))},
	{}
};

$ClassInfo _CommunicationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.CommunicationException",
	"javax.naming.NamingException",
	nullptr,
	_CommunicationException_FieldInfo_,
	_CommunicationException_MethodInfo_
};

$Object* allocate$CommunicationException($Class* clazz) {
	return $of($alloc(CommunicationException));
}

void CommunicationException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void CommunicationException::init$() {
	$NamingException::init$();
}

CommunicationException::CommunicationException() {
}

CommunicationException::CommunicationException(const CommunicationException& e) {
}

CommunicationException CommunicationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CommunicationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CommunicationException::load$($String* name, bool initialize) {
	$loadClass(CommunicationException, name, initialize, &_CommunicationException_ClassInfo_, allocate$CommunicationException);
	return class$;
}

$Class* CommunicationException::class$ = nullptr;

	} // naming
} // javax