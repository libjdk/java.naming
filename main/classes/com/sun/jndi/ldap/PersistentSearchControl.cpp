#include <com/sun/jndi/ldap/PersistentSearchControl.h>

#include <com/sun/jndi/ldap/BasicControl.h>
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
#include <jcpp.h>

#undef ADD
#undef ANY
#undef ASN_CONSTRUCTOR
#undef ASN_SEQUENCE
#undef DELETE
#undef MODIFY
#undef OID
#undef RENAME

using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerEncoder = ::com::sun::jndi::ldap::BerEncoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _PersistentSearchControl_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PersistentSearchControl, OID)},
	{"ADD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PersistentSearchControl, ADD)},
	{"DELETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PersistentSearchControl, DELETE)},
	{"MODIFY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PersistentSearchControl, MODIFY)},
	{"RENAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PersistentSearchControl, RENAME)},
	{"ANY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PersistentSearchControl, ANY)},
	{"changeTypes", "I", nullptr, $PRIVATE, $field(PersistentSearchControl, changeTypes)},
	{"changesOnly", "Z", nullptr, $PRIVATE, $field(PersistentSearchControl, changesOnly)},
	{"returnControls", "Z", nullptr, $PRIVATE, $field(PersistentSearchControl, returnControls)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PersistentSearchControl, serialVersionUID)},
	{}
};

$MethodInfo _PersistentSearchControl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PersistentSearchControl::*)()>(&PersistentSearchControl::init$)), "java.io.IOException"},
	{"<init>", "(IZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(PersistentSearchControl::*)(int32_t,bool,bool,bool)>(&PersistentSearchControl::init$)), "java.io.IOException"},
	{"setEncodedValue", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PersistentSearchControl::*)()>(&PersistentSearchControl::setEncodedValue)), "java.io.IOException"},
	{}
};

$ClassInfo _PersistentSearchControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.PersistentSearchControl",
	"com.sun.jndi.ldap.BasicControl",
	nullptr,
	_PersistentSearchControl_FieldInfo_,
	_PersistentSearchControl_MethodInfo_
};

$Object* allocate$PersistentSearchControl($Class* clazz) {
	return $of($alloc(PersistentSearchControl));
}


$String* PersistentSearchControl::OID = nullptr;

void PersistentSearchControl::init$() {
	$BasicControl::init$(PersistentSearchControl::OID);
	this->changeTypes = PersistentSearchControl::ANY;
	this->changesOnly = false;
	this->returnControls = true;
	$set(this, value, setEncodedValue());
}

void PersistentSearchControl::init$(int32_t changeTypes, bool changesOnly, bool returnControls, bool criticality) {
	$BasicControl::init$(PersistentSearchControl::OID, criticality, nullptr);
	this->changeTypes = PersistentSearchControl::ANY;
	this->changesOnly = false;
	this->returnControls = true;
	this->changeTypes = changeTypes;
	this->changesOnly = changesOnly;
	this->returnControls = returnControls;
	$set(this, value, setEncodedValue());
}

$bytes* PersistentSearchControl::setEncodedValue() {
	$var($BerEncoder, ber, $new($BerEncoder, 32));
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(this->changeTypes);
	ber->encodeBoolean(this->changesOnly);
	ber->encodeBoolean(this->returnControls);
	ber->endSeq();
	return ber->getTrimmedBuf();
}

PersistentSearchControl::PersistentSearchControl() {
}

void clinit$PersistentSearchControl($Class* class$) {
	$assignStatic(PersistentSearchControl::OID, "2.16.840.1.113730.3.4.3"_s);
}

$Class* PersistentSearchControl::load$($String* name, bool initialize) {
	$loadClass(PersistentSearchControl, name, initialize, &_PersistentSearchControl_ClassInfo_, clinit$PersistentSearchControl, allocate$PersistentSearchControl);
	return class$;
}

$Class* PersistentSearchControl::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com