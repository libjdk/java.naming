#include <com/sun/jndi/ldap/UnsolicitedResponseImpl.h>

#include <com/sun/jndi/ldap/LdapCtx.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $NamingException = ::javax::naming::NamingException;
using $Control = ::javax::naming::ldap::Control;
using $UnsolicitedNotification = ::javax::naming::ldap::UnsolicitedNotification;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _UnsolicitedResponseImpl_FieldInfo_[] = {
	{"oid", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnsolicitedResponseImpl, oid)},
	{"referrals", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(UnsolicitedResponseImpl, referrals)},
	{"extensionValue", "[B", nullptr, $PRIVATE, $field(UnsolicitedResponseImpl, extensionValue)},
	{"exception", "Ljavax/naming/NamingException;", nullptr, $PRIVATE, $field(UnsolicitedResponseImpl, exception)},
	{"controls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(UnsolicitedResponseImpl, controls)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsolicitedResponseImpl, serialVersionUID)},
	{}
};

$MethodInfo _UnsolicitedResponseImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[BLjava/util/Vector;ILjava/lang/String;Ljava/lang/String;[Ljavax/naming/ldap/Control;)V", "(Ljava/lang/String;[BLjava/util/Vector<Ljava/util/Vector<Ljava/lang/String;>;>;ILjava/lang/String;Ljava/lang/String;[Ljavax/naming/ldap/Control;)V", 0, $method(static_cast<void(UnsolicitedResponseImpl::*)($String*,$bytes*,$Vector*,int32_t,$String*,$String*,$ControlArray*)>(&UnsolicitedResponseImpl::init$))},
	{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getEncodedValue", "()[B", nullptr, $PUBLIC},
	{"getException", "()Ljavax/naming/NamingException;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReferrals", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnsolicitedResponseImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.UnsolicitedResponseImpl",
	"java.lang.Object",
	"javax.naming.ldap.UnsolicitedNotification",
	_UnsolicitedResponseImpl_FieldInfo_,
	_UnsolicitedResponseImpl_MethodInfo_
};

$Object* allocate$UnsolicitedResponseImpl($Class* clazz) {
	return $of($alloc(UnsolicitedResponseImpl));
}

void UnsolicitedResponseImpl::init$($String* oid, $bytes* berVal, $Vector* ref, int32_t status, $String* msg, $String* matchedDN, $ControlArray* controls) {
	$useLocalCurrentObjectStackCache();
	$set(this, oid, oid);
	$set(this, extensionValue, berVal);
	if (ref != nullptr && ref->size() > 0) {
		int32_t len = ref->size();
		$set(this, referrals, $new($StringArray, len));
		for (int32_t i = 0; i < len; ++i) {
			$nc(this->referrals)->set(i, $cast($String, $($nc(($cast($Vector, $(ref->elementAt(i)))))->elementAt(0))));
		}
	}
	$set(this, exception, $LdapCtx::mapErrorCode(status, msg));
	$set(this, controls, controls);
}

$String* UnsolicitedResponseImpl::getID() {
	return this->oid;
}

$bytes* UnsolicitedResponseImpl::getEncodedValue() {
	return this->extensionValue;
}

$StringArray* UnsolicitedResponseImpl::getReferrals() {
	return this->referrals;
}

$NamingException* UnsolicitedResponseImpl::getException() {
	return this->exception;
}

$ControlArray* UnsolicitedResponseImpl::getControls() {
	return this->controls;
}

UnsolicitedResponseImpl::UnsolicitedResponseImpl() {
}

$Class* UnsolicitedResponseImpl::load$($String* name, bool initialize) {
	$loadClass(UnsolicitedResponseImpl, name, initialize, &_UnsolicitedResponseImpl_ClassInfo_, allocate$UnsolicitedResponseImpl);
	return class$;
}

$Class* UnsolicitedResponseImpl::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com