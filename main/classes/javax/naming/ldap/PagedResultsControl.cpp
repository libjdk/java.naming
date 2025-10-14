#include <javax/naming/ldap/PagedResultsControl.h>

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
#include <jcpp.h>

#undef ASN_CONSTRUCTOR
#undef ASN_OCTET_STR
#undef ASN_SEQUENCE
#undef EMPTY_COOKIE
#undef OID

using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerEncoder = ::com::sun::jndi::ldap::BerEncoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicControl = ::javax::naming::ldap::BasicControl;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _PagedResultsControl_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PagedResultsControl, OID)},
	{"EMPTY_COOKIE", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PagedResultsControl, EMPTY_COOKIE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PagedResultsControl, serialVersionUID)},
	{}
};

$MethodInfo _PagedResultsControl_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(PagedResultsControl::*)(int32_t,bool)>(&PagedResultsControl::init$)), "java.io.IOException"},
	{"<init>", "(I[BZ)V", nullptr, $PUBLIC, $method(static_cast<void(PagedResultsControl::*)(int32_t,$bytes*,bool)>(&PagedResultsControl::init$)), "java.io.IOException"},
	{"setEncodedValue", "(I[B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(PagedResultsControl::*)(int32_t,$bytes*)>(&PagedResultsControl::setEncodedValue)), "java.io.IOException"},
	{}
};

$ClassInfo _PagedResultsControl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.naming.ldap.PagedResultsControl",
	"javax.naming.ldap.BasicControl",
	nullptr,
	_PagedResultsControl_FieldInfo_,
	_PagedResultsControl_MethodInfo_
};

$Object* allocate$PagedResultsControl($Class* clazz) {
	return $of($alloc(PagedResultsControl));
}


$String* PagedResultsControl::OID = nullptr;
$bytes* PagedResultsControl::EMPTY_COOKIE = nullptr;

void PagedResultsControl::init$(int32_t pageSize, bool criticality) {
	$BasicControl::init$(PagedResultsControl::OID, criticality, nullptr);
	$set(this, value, setEncodedValue(pageSize, PagedResultsControl::EMPTY_COOKIE));
}

void PagedResultsControl::init$(int32_t pageSize, $bytes* cookie$renamed, bool criticality) {
	$var($bytes, cookie, cookie$renamed);
	$BasicControl::init$(PagedResultsControl::OID, criticality, nullptr);
	if (cookie == nullptr) {
		$assign(cookie, PagedResultsControl::EMPTY_COOKIE);
	}
	$set(this, value, setEncodedValue(pageSize, cookie));
}

$bytes* PagedResultsControl::setEncodedValue(int32_t pageSize, $bytes* cookie) {
	$var($BerEncoder, ber, $new($BerEncoder, 10 + $nc(cookie)->length));
	ber->beginSeq($Ber::ASN_SEQUENCE | $Ber::ASN_CONSTRUCTOR);
	ber->encodeInt(pageSize);
	ber->encodeOctetString(cookie, $Ber::ASN_OCTET_STR);
	ber->endSeq();
	return ber->getTrimmedBuf();
}

void clinit$PagedResultsControl($Class* class$) {
	$assignStatic(PagedResultsControl::OID, "1.2.840.113556.1.4.319"_s);
	$assignStatic(PagedResultsControl::EMPTY_COOKIE, $new($bytes, 0));
}

PagedResultsControl::PagedResultsControl() {
}

$Class* PagedResultsControl::load$($String* name, bool initialize) {
	$loadClass(PagedResultsControl, name, initialize, &_PagedResultsControl_ClassInfo_, clinit$PagedResultsControl, allocate$PagedResultsControl);
	return class$;
}

$Class* PagedResultsControl::class$ = nullptr;

		} // ldap
	} // naming
} // javax