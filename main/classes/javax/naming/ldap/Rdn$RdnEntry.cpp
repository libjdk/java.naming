#include <javax/naming/ldap/Rdn$RdnEntry.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/naming/ldap/Rdn.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Rdn = ::javax::naming::ldap::Rdn;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _Rdn$RdnEntry_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Rdn$RdnEntry, type)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Rdn$RdnEntry, value)},
	{"comparable", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Rdn$RdnEntry, comparable)},
	{}
};

$MethodInfo _Rdn$RdnEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Rdn$RdnEntry::*)()>(&Rdn$RdnEntry::init$))},
	{"compareTo", "(Ljavax/naming/ldap/Rdn$RdnEntry;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, 0},
	{"getValue", "()Ljava/lang/Object;", nullptr, 0},
	{"getValueComparable", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Rdn$RdnEntry::*)()>(&Rdn$RdnEntry::getValueComparable))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Rdn$RdnEntry_InnerClassesInfo_[] = {
	{"javax.naming.ldap.Rdn$RdnEntry", "javax.naming.ldap.Rdn", "RdnEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Rdn$RdnEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.ldap.Rdn$RdnEntry",
	"java.lang.Object",
	"java.lang.Comparable",
	_Rdn$RdnEntry_FieldInfo_,
	_Rdn$RdnEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/naming/ldap/Rdn$RdnEntry;>;",
	nullptr,
	_Rdn$RdnEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.naming.ldap.Rdn"
};

$Object* allocate$Rdn$RdnEntry($Class* clazz) {
	return $of($alloc(Rdn$RdnEntry));
}

void Rdn$RdnEntry::init$() {
	$set(this, comparable, nullptr);
}

$String* Rdn$RdnEntry::getType() {
	return this->type;
}

$Object* Rdn$RdnEntry::getValue() {
	return $of(this->value);
}

int32_t Rdn$RdnEntry::compareTo(Rdn$RdnEntry* that) {
	int32_t diff = $nc(this->type)->compareToIgnoreCase($nc(that)->type);
	if (diff != 0) {
		return diff;
	}
	if ($nc($of(this->value))->equals($nc(that)->value)) {
		return 0;
	}
	return $nc($(getValueComparable()))->compareTo($($nc(that)->getValueComparable()));
}

bool Rdn$RdnEntry::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(Rdn$RdnEntry, obj))) {
		return false;
	}
	$var(Rdn$RdnEntry, that, $cast(Rdn$RdnEntry, obj));
	bool var$0 = ($nc(this->type)->equalsIgnoreCase($nc(that)->type));
	return var$0 && ($nc($(getValueComparable()))->equals($($nc(that)->getValueComparable())));
}

int32_t Rdn$RdnEntry::hashCode() {
	$init($Locale);
	int32_t var$0 = $($nc(this->type)->toUpperCase($Locale::ENGLISH))->hashCode();
	return (var$0 + $nc($(getValueComparable()))->hashCode());
}

$String* Rdn$RdnEntry::toString() {
	return $str({this->type, "="_s, $($Rdn::escapeValue(this->value))});
}

$String* Rdn$RdnEntry::getValueComparable() {
	if (this->comparable != nullptr) {
		return this->comparable;
	}
	if ($instanceOf($bytes, this->value)) {
		$set(this, comparable, $Rdn::escapeBinaryValue($cast($bytes, this->value)));
	} else {
		$init($Locale);
		$set(this, comparable, $nc(($cast($String, this->value)))->toUpperCase($Locale::ENGLISH));
	}
	return this->comparable;
}

int32_t Rdn$RdnEntry::compareTo(Object$* that) {
	return this->compareTo($cast(Rdn$RdnEntry, that));
}

Rdn$RdnEntry::Rdn$RdnEntry() {
}

$Class* Rdn$RdnEntry::load$($String* name, bool initialize) {
	$loadClass(Rdn$RdnEntry, name, initialize, &_Rdn$RdnEntry_ClassInfo_, allocate$Rdn$RdnEntry);
	return class$;
}

$Class* Rdn$RdnEntry::class$ = nullptr;

		} // ldap
	} // naming
} // javax