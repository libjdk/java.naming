#include <javax/naming/ldap/SortResponseControl.h>

#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerDecoder.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ldap/BasicControl.h>
#include <jcpp.h>

#undef ASN_CONTEXT
#undef OID

using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerDecoder = ::com::sun::jndi::ldap::BerDecoder;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;
using $BasicControl = ::javax::naming::ldap::BasicControl;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _SortResponseControl_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SortResponseControl, OID)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortResponseControl, serialVersionUID)},
	{"resultCode", "I", nullptr, $PRIVATE, $field(SortResponseControl, resultCode)},
	{"badAttrId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SortResponseControl, badAttrId)},
	{}
};

$MethodInfo _SortResponseControl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z[B)V", nullptr, $PUBLIC, $method(static_cast<void(SortResponseControl::*)($String*,bool,$bytes*)>(&SortResponseControl::init$)), "java.io.IOException"},
	{"getAttributeID", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SortResponseControl::*)()>(&SortResponseControl::getAttributeID))},
	{"getException", "()Ljavax/naming/NamingException;", nullptr, $PUBLIC, $method(static_cast<$NamingException*(SortResponseControl::*)()>(&SortResponseControl::getException))},
	{"getResultCode", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SortResponseControl::*)()>(&SortResponseControl::getResultCode))},
	{"isSorted", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(SortResponseControl::*)()>(&SortResponseControl::isSorted))},
	{}
};

$ClassInfo _SortResponseControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.naming.ldap.SortResponseControl",
	"javax.naming.ldap.BasicControl",
	nullptr,
	_SortResponseControl_FieldInfo_,
	_SortResponseControl_MethodInfo_
};

$Object* allocate$SortResponseControl($Class* clazz) {
	return $of($alloc(SortResponseControl));
}


$String* SortResponseControl::OID = nullptr;

void SortResponseControl::init$($String* id, bool criticality, $bytes* value) {
	$BasicControl::init$(id, criticality, value);
	this->resultCode = 0;
	$set(this, badAttrId, nullptr);
	$var($BerDecoder, ber, $new($BerDecoder, value, 0, $nc(value)->length));
	ber->parseSeq(nullptr);
	this->resultCode = ber->parseEnumeration();
	bool var$0 = (ber->bytesLeft() > 0);
	if (var$0 && (ber->peekByte() == $Ber::ASN_CONTEXT)) {
		$set(this, badAttrId, ber->parseStringWithTag($Ber::ASN_CONTEXT, true, nullptr));
	}
}

bool SortResponseControl::isSorted() {
	return (this->resultCode == 0);
}

int32_t SortResponseControl::getResultCode() {
	return this->resultCode;
}

$String* SortResponseControl::getAttributeID() {
	return this->badAttrId;
}

$NamingException* SortResponseControl::getException() {
	return $LdapCtx::mapErrorCode(this->resultCode, nullptr);
}

SortResponseControl::SortResponseControl() {
}

void clinit$SortResponseControl($Class* class$) {
	$assignStatic(SortResponseControl::OID, "1.2.840.113556.1.4.474"_s);
}

$Class* SortResponseControl::load$($String* name, bool initialize) {
	$loadClass(SortResponseControl, name, initialize, &_SortResponseControl_ClassInfo_, clinit$SortResponseControl, allocate$SortResponseControl);
	return class$;
}

$Class* SortResponseControl::class$ = nullptr;

		} // ldap
	} // naming
} // javax