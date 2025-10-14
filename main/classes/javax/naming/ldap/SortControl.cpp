#include <javax/naming/ldap/SortControl.h>

#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerEncoder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/ldap/BasicControl.h>
#include <javax/naming/ldap/SortKey.h>
#include <jcpp.h>

#undef ASN_CONSTRUCTOR
#undef ASN_CONTEXT
#undef ASN_SEQUENCE
#undef OID

using $SortKeyArray = $Array<::javax::naming::ldap::SortKey>;
using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerEncoder = ::com::sun::jndi::ldap::BerEncoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicControl = ::javax::naming::ldap::BasicControl;
using $SortKey = ::javax::naming::ldap::SortKey;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _SortControl_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SortControl, OID)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortControl, serialVersionUID)},
	{}
};

$MethodInfo _SortControl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(SortControl::*)($String*,bool)>(&SortControl::init$)), "java.io.IOException"},
	{"<init>", "([Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(SortControl::*)($StringArray*,bool)>(&SortControl::init$)), "java.io.IOException"},
	{"<init>", "([Ljavax/naming/ldap/SortKey;Z)V", nullptr, $PUBLIC, $method(static_cast<void(SortControl::*)($SortKeyArray*,bool)>(&SortControl::init$)), "java.io.IOException"},
	{"setEncodedValue", "([Ljavax/naming/ldap/SortKey;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(SortControl::*)($SortKeyArray*)>(&SortControl::setEncodedValue)), "java.io.IOException"},
	{}
};

$ClassInfo _SortControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.naming.ldap.SortControl",
	"javax.naming.ldap.BasicControl",
	nullptr,
	_SortControl_FieldInfo_,
	_SortControl_MethodInfo_
};

$Object* allocate$SortControl($Class* clazz) {
	return $of($alloc(SortControl));
}


$String* SortControl::OID = nullptr;

void SortControl::init$($String* sortBy, bool criticality) {
	$BasicControl::init$(SortControl::OID, criticality, nullptr);
	$set(this, value, setEncodedValue($$new($SortKeyArray, {$$new($SortKey, sortBy)})));
}

void SortControl::init$($StringArray* sortBy, bool criticality) {
	$BasicControl::init$(SortControl::OID, criticality, nullptr);
	$var($SortKeyArray, sortKeys, $new($SortKeyArray, $nc(sortBy)->length));
	for (int32_t i = 0; i < sortBy->length; ++i) {
		sortKeys->set(i, $$new($SortKey, sortBy->get(i)));
	}
	$set(this, value, setEncodedValue(sortKeys));
}

void SortControl::init$($SortKeyArray* sortBy, bool criticality) {
	$BasicControl::init$(SortControl::OID, criticality, nullptr);
	$set(this, value, setEncodedValue(sortBy));
}

$bytes* SortControl::setEncodedValue($SortKeyArray* sortKeys) {
	$var($BerEncoder, ber, $new($BerEncoder, 30 * $nc(sortKeys)->length + 10));
	$var($String, matchingRule, nullptr);
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	for (int32_t i = 0; i < $nc(sortKeys)->length; ++i) {
		ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
		ber->encodeString($($nc(sortKeys->get(i))->getAttributeID()), true);
		if (($assign(matchingRule, $nc(sortKeys->get(i))->getMatchingRuleID())) != nullptr) {
			ber->encodeString(matchingRule, ($Ber::ASN_CONTEXT | 0), true);
		}
		if (!$nc(sortKeys->get(i))->isAscending()) {
			ber->encodeBoolean(true, ($Ber::ASN_CONTEXT | 1));
		}
		ber->endSeq();
	}
	ber->endSeq();
	return ber->getTrimmedBuf();
}

SortControl::SortControl() {
}

void clinit$SortControl($Class* class$) {
	$assignStatic(SortControl::OID, "1.2.840.113556.1.4.473"_s);
}

$Class* SortControl::load$($String* name, bool initialize) {
	$loadClass(SortControl, name, initialize, &_SortControl_ClassInfo_, clinit$SortControl, allocate$SortControl);
	return class$;
}

$Class* SortControl::class$ = nullptr;

		} // ldap
	} // naming
} // javax