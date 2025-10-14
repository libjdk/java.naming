#include <javax/naming/ldap/LdapReferralException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/ReferralException.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $ReferralException = ::javax::naming::ReferralException;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _LdapReferralException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapReferralException, serialVersionUID)},
	{}
};

$MethodInfo _LdapReferralException_MethodInfo_[] = {
	{"getReferralContext", "()Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferralContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(LdapReferralException::*)($String*)>(&LdapReferralException::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LdapReferralException::*)()>(&LdapReferralException::init$))},
	{"getReferralContext", "(Ljava/util/Hashtable;[Ljavax/naming/ldap/Control;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;[Ljavax/naming/ldap/Control;)Ljavax/naming/Context;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapReferralException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.naming.ldap.LdapReferralException",
	"javax.naming.ReferralException",
	nullptr,
	_LdapReferralException_FieldInfo_,
	_LdapReferralException_MethodInfo_
};

$Object* allocate$LdapReferralException($Class* clazz) {
	return $of($alloc(LdapReferralException));
}

void LdapReferralException::init$($String* explanation) {
	$ReferralException::init$(explanation);
}

void LdapReferralException::init$() {
	$ReferralException::init$();
}

LdapReferralException::LdapReferralException() {
}

LdapReferralException::LdapReferralException(const LdapReferralException& e) {
}

LdapReferralException LdapReferralException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LdapReferralException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LdapReferralException::load$($String* name, bool initialize) {
	$loadClass(LdapReferralException, name, initialize, &_LdapReferralException_ClassInfo_, allocate$LdapReferralException);
	return class$;
}

$Class* LdapReferralException::class$ = nullptr;

		} // ldap
	} // naming
} // javax