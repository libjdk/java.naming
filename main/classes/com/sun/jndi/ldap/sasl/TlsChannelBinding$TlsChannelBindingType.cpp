#include <com/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType.h>

#include <com/sun/jndi/ldap/sasl/TlsChannelBinding.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TLS_SERVER_END_POINT
#undef TLS_UNIQUE

using $TlsChannelBinding$TlsChannelBindingTypeArray = $Array<::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType>;
using $TlsChannelBinding = ::com::sun::jndi::ldap::sasl::TlsChannelBinding;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

$FieldInfo _TlsChannelBinding$TlsChannelBindingType_FieldInfo_[] = {
	{"TLS_UNIQUE", "Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TlsChannelBinding$TlsChannelBindingType, TLS_UNIQUE)},
	{"TLS_SERVER_END_POINT", "Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TlsChannelBinding$TlsChannelBindingType, TLS_SERVER_END_POINT)},
	{"$VALUES", "[Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TlsChannelBinding$TlsChannelBindingType, $VALUES)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TlsChannelBinding$TlsChannelBindingType, name$)},
	{}
};

$MethodInfo _TlsChannelBinding$TlsChannelBindingType_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TlsChannelBinding$TlsChannelBindingTypeArray*(*)()>(&TlsChannelBinding$TlsChannelBindingType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(TlsChannelBinding$TlsChannelBindingType::*)($String*,int32_t,$String*)>(&TlsChannelBinding$TlsChannelBindingType::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(TlsChannelBinding$TlsChannelBindingType::*)()>(&TlsChannelBinding$TlsChannelBindingType::getName))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TlsChannelBinding$TlsChannelBindingType*(*)($String*)>(&TlsChannelBinding$TlsChannelBindingType::valueOf))},
	{"values", "()[Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TlsChannelBinding$TlsChannelBindingTypeArray*(*)()>(&TlsChannelBinding$TlsChannelBindingType::values))},
	{}
};

$InnerClassInfo _TlsChannelBinding$TlsChannelBindingType_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.sasl.TlsChannelBinding$TlsChannelBindingType", "com.sun.jndi.ldap.sasl.TlsChannelBinding", "TlsChannelBindingType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TlsChannelBinding$TlsChannelBindingType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.jndi.ldap.sasl.TlsChannelBinding$TlsChannelBindingType",
	"java.lang.Enum",
	nullptr,
	_TlsChannelBinding$TlsChannelBindingType_FieldInfo_,
	_TlsChannelBinding$TlsChannelBindingType_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType;>;",
	nullptr,
	_TlsChannelBinding$TlsChannelBindingType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.sasl.TlsChannelBinding"
};

$Object* allocate$TlsChannelBinding$TlsChannelBindingType($Class* clazz) {
	return $of($alloc(TlsChannelBinding$TlsChannelBindingType));
}


TlsChannelBinding$TlsChannelBindingType* TlsChannelBinding$TlsChannelBindingType::TLS_UNIQUE = nullptr;

TlsChannelBinding$TlsChannelBindingType* TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT = nullptr;
$TlsChannelBinding$TlsChannelBindingTypeArray* TlsChannelBinding$TlsChannelBindingType::$VALUES = nullptr;

$TlsChannelBinding$TlsChannelBindingTypeArray* TlsChannelBinding$TlsChannelBindingType::$values() {
	$init(TlsChannelBinding$TlsChannelBindingType);
	return $new($TlsChannelBinding$TlsChannelBindingTypeArray, {
		TlsChannelBinding$TlsChannelBindingType::TLS_UNIQUE,
		TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT
	});
}

$TlsChannelBinding$TlsChannelBindingTypeArray* TlsChannelBinding$TlsChannelBindingType::values() {
	$init(TlsChannelBinding$TlsChannelBindingType);
	return $cast($TlsChannelBinding$TlsChannelBindingTypeArray, TlsChannelBinding$TlsChannelBindingType::$VALUES->clone());
}

TlsChannelBinding$TlsChannelBindingType* TlsChannelBinding$TlsChannelBindingType::valueOf($String* name) {
	$init(TlsChannelBinding$TlsChannelBindingType);
	return $cast(TlsChannelBinding$TlsChannelBindingType, $Enum::valueOf(TlsChannelBinding$TlsChannelBindingType::class$, name));
}

$String* TlsChannelBinding$TlsChannelBindingType::getName() {
	return this->name$;
}

void TlsChannelBinding$TlsChannelBindingType::init$($String* $enum$name, int32_t $enum$ordinal, $String* name) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, name$, name);
}

void clinit$TlsChannelBinding$TlsChannelBindingType($Class* class$) {
	$assignStatic(TlsChannelBinding$TlsChannelBindingType::TLS_UNIQUE, $new(TlsChannelBinding$TlsChannelBindingType, "TLS_UNIQUE"_s, 0, "tls-unique"_s));
	$assignStatic(TlsChannelBinding$TlsChannelBindingType::TLS_SERVER_END_POINT, $new(TlsChannelBinding$TlsChannelBindingType, "TLS_SERVER_END_POINT"_s, 1, "tls-server-end-point"_s));
	$assignStatic(TlsChannelBinding$TlsChannelBindingType::$VALUES, TlsChannelBinding$TlsChannelBindingType::$values());
}

TlsChannelBinding$TlsChannelBindingType::TlsChannelBinding$TlsChannelBindingType() {
}

$Class* TlsChannelBinding$TlsChannelBindingType::load$($String* name, bool initialize) {
	$loadClass(TlsChannelBinding$TlsChannelBindingType, name, initialize, &_TlsChannelBinding$TlsChannelBindingType_ClassInfo_, clinit$TlsChannelBinding$TlsChannelBindingType, allocate$TlsChannelBinding$TlsChannelBindingType);
	return class$;
}

$Class* TlsChannelBinding$TlsChannelBindingType::class$ = nullptr;

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com