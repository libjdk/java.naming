#include <javax/naming/ReferralException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _ReferralException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferralException, serialVersionUID)},
	{}
};

$MethodInfo _ReferralException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ReferralException::*)($String*)>(&ReferralException::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ReferralException::*)()>(&ReferralException::init$))},
	{"getReferralContext", "()Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getReferralContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getReferralInfo", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"retryReferral", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"skipReferral", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferralException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.naming.ReferralException",
	"javax.naming.NamingException",
	nullptr,
	_ReferralException_FieldInfo_,
	_ReferralException_MethodInfo_
};

$Object* allocate$ReferralException($Class* clazz) {
	return $of($alloc(ReferralException));
}

void ReferralException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ReferralException::init$() {
	$NamingException::init$();
}

ReferralException::ReferralException() {
}

ReferralException::ReferralException(const ReferralException& e) {
}

ReferralException ReferralException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ReferralException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ReferralException::load$($String* name, bool initialize) {
	$loadClass(ReferralException, name, initialize, &_ReferralException_ClassInfo_, allocate$ReferralException);
	return class$;
}

$Class* ReferralException::class$ = nullptr;

	} // naming
} // javax