#include <javax/naming/ldap/UnsolicitedNotification.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;
using $HasControls = ::javax::naming::ldap::HasControls;

namespace javax {
	namespace naming {
		namespace ldap {

$MethodInfo _UnsolicitedNotification_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getException", "()Ljavax/naming/NamingException;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferrals", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnsolicitedNotification_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.UnsolicitedNotification",
	nullptr,
	"javax.naming.ldap.ExtendedResponse,javax.naming.ldap.HasControls",
	nullptr,
	_UnsolicitedNotification_MethodInfo_
};

$Object* allocate$UnsolicitedNotification($Class* clazz) {
	return $of($alloc(UnsolicitedNotification));
}

int32_t UnsolicitedNotification::hashCode() {
	 return this->$ExtendedResponse::hashCode();
}

bool UnsolicitedNotification::equals(Object$* arg0) {
	 return this->$ExtendedResponse::equals(arg0);
}

$Object* UnsolicitedNotification::clone() {
	 return this->$ExtendedResponse::clone();
}

$String* UnsolicitedNotification::toString() {
	 return this->$ExtendedResponse::toString();
}

void UnsolicitedNotification::finalize() {
	this->$ExtendedResponse::finalize();
}

$Class* UnsolicitedNotification::load$($String* name, bool initialize) {
	$loadClass(UnsolicitedNotification, name, initialize, &_UnsolicitedNotification_ClassInfo_, allocate$UnsolicitedNotification);
	return class$;
}

$Class* UnsolicitedNotification::class$ = nullptr;

		} // ldap
	} // naming
} // javax