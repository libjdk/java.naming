#include <com/sun/jndi/ldap/ManageReferralControl.h>

#include <com/sun/jndi/ldap/BasicControl.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef OID

using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _ManageReferralControl_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManageReferralControl, OID)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManageReferralControl, serialVersionUID)},
	{}
};

$MethodInfo _ManageReferralControl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ManageReferralControl::*)()>(&ManageReferralControl::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(ManageReferralControl::*)(bool)>(&ManageReferralControl::init$))},
	{}
};

$ClassInfo _ManageReferralControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.ManageReferralControl",
	"com.sun.jndi.ldap.BasicControl",
	nullptr,
	_ManageReferralControl_FieldInfo_,
	_ManageReferralControl_MethodInfo_
};

$Object* allocate$ManageReferralControl($Class* clazz) {
	return $of($alloc(ManageReferralControl));
}


$String* ManageReferralControl::OID = nullptr;

void ManageReferralControl::init$() {
	$BasicControl::init$(ManageReferralControl::OID, true, nullptr);
}

void ManageReferralControl::init$(bool criticality) {
	$BasicControl::init$(ManageReferralControl::OID, criticality, nullptr);
}

ManageReferralControl::ManageReferralControl() {
}

void clinit$ManageReferralControl($Class* class$) {
	$assignStatic(ManageReferralControl::OID, "2.16.840.1.113730.3.4.2"_s);
}

$Class* ManageReferralControl::load$($String* name, bool initialize) {
	$loadClass(ManageReferralControl, name, initialize, &_ManageReferralControl_ClassInfo_, clinit$ManageReferralControl, allocate$ManageReferralControl);
	return class$;
}

$Class* ManageReferralControl::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com