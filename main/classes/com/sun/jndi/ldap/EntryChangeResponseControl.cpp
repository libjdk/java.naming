#include <com/sun/jndi/ldap/EntryChangeResponseControl.h>

#include <com/sun/jndi/ldap/BasicControl.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerDecoder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ADD
#undef ASN_INTEGER
#undef ASN_OCTET_STR
#undef DELETE
#undef MODIFY
#undef OID
#undef RENAME

using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerDecoder = ::com::sun::jndi::ldap::BerDecoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _EntryChangeResponseControl_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EntryChangeResponseControl, OID)},
	{"ADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EntryChangeResponseControl, ADD)},
	{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EntryChangeResponseControl, DELETE)},
	{"MODIFY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EntryChangeResponseControl, MODIFY)},
	{"RENAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EntryChangeResponseControl, RENAME)},
	{"changeType", "I", nullptr, $PRIVATE, $field(EntryChangeResponseControl, changeType)},
	{"previousDN", "Ljava/lang/String;", nullptr, $PRIVATE, $field(EntryChangeResponseControl, previousDN)},
	{"changeNumber", "J", nullptr, $PRIVATE, $field(EntryChangeResponseControl, changeNumber)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EntryChangeResponseControl, serialVersionUID)},
	{}
};

$MethodInfo _EntryChangeResponseControl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Z[B)V", nullptr, $PUBLIC, $method(static_cast<void(EntryChangeResponseControl::*)($String*,bool,$bytes*)>(&EntryChangeResponseControl::init$)), "java.io.IOException"},
	{"getChangeNumber", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(EntryChangeResponseControl::*)()>(&EntryChangeResponseControl::getChangeNumber))},
	{"getChangeType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(EntryChangeResponseControl::*)()>(&EntryChangeResponseControl::getChangeType))},
	{"getPreviousDN", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(EntryChangeResponseControl::*)()>(&EntryChangeResponseControl::getPreviousDN))},
	{}
};

$ClassInfo _EntryChangeResponseControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.EntryChangeResponseControl",
	"com.sun.jndi.ldap.BasicControl",
	nullptr,
	_EntryChangeResponseControl_FieldInfo_,
	_EntryChangeResponseControl_MethodInfo_
};

$Object* allocate$EntryChangeResponseControl($Class* clazz) {
	return $of($alloc(EntryChangeResponseControl));
}


$String* EntryChangeResponseControl::OID = nullptr;

void EntryChangeResponseControl::init$($String* id, bool criticality, $bytes* value) {
	$BasicControl::init$(id, criticality, value);
	$set(this, previousDN, nullptr);
	this->changeNumber = -1;
	if ((value != nullptr) && (value->length > 0)) {
		$var($BerDecoder, ber, $new($BerDecoder, value, 0, value->length));
		ber->parseSeq(nullptr);
		this->changeType = ber->parseEnumeration();
		bool var$0 = (ber->bytesLeft() > 0);
		if (var$0 && (ber->peekByte() == $Ber::ASN_OCTET_STR)) {
			$set(this, previousDN, ber->parseString(true));
		}
		bool var$1 = (ber->bytesLeft() > 0);
		if (var$1 && (ber->peekByte() == $Ber::ASN_INTEGER)) {
			this->changeNumber = ber->parseInt();
		}
	}
}

int32_t EntryChangeResponseControl::getChangeType() {
	return this->changeType;
}

$String* EntryChangeResponseControl::getPreviousDN() {
	return this->previousDN;
}

int64_t EntryChangeResponseControl::getChangeNumber() {
	return this->changeNumber;
}

EntryChangeResponseControl::EntryChangeResponseControl() {
}

void clinit$EntryChangeResponseControl($Class* class$) {
	$assignStatic(EntryChangeResponseControl::OID, "2.16.840.1.113730.3.4.7"_s);
}

$Class* EntryChangeResponseControl::load$($String* name, bool initialize) {
	$loadClass(EntryChangeResponseControl, name, initialize, &_EntryChangeResponseControl_ClassInfo_, clinit$EntryChangeResponseControl, allocate$EntryChangeResponseControl);
	return class$;
}

$Class* EntryChangeResponseControl::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com