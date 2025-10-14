#include <javax/naming/ldap/SortKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _SortKey_FieldInfo_[] = {
	{"attrID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SortKey, attrID)},
	{"reverseOrder", "Z", nullptr, $PRIVATE, $field(SortKey, reverseOrder)},
	{"matchingRuleID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SortKey, matchingRuleID)},
	{}
};

$MethodInfo _SortKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SortKey::*)($String*)>(&SortKey::init$))},
	{"<init>", "(Ljava/lang/String;ZLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SortKey::*)($String*,bool,$String*)>(&SortKey::init$))},
	{"getAttributeID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMatchingRuleID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isAscending", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SortKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.SortKey",
	"java.lang.Object",
	nullptr,
	_SortKey_FieldInfo_,
	_SortKey_MethodInfo_
};

$Object* allocate$SortKey($Class* clazz) {
	return $of($alloc(SortKey));
}

void SortKey::init$($String* attrID) {
	this->reverseOrder = false;
	$set(this, matchingRuleID, nullptr);
	$set(this, attrID, attrID);
}

void SortKey::init$($String* attrID, bool ascendingOrder, $String* matchingRuleID) {
	this->reverseOrder = false;
	$set(this, matchingRuleID, nullptr);
	$set(this, attrID, attrID);
	this->reverseOrder = (!ascendingOrder);
	$set(this, matchingRuleID, matchingRuleID);
}

$String* SortKey::getAttributeID() {
	return this->attrID;
}

bool SortKey::isAscending() {
	return (!this->reverseOrder);
}

$String* SortKey::getMatchingRuleID() {
	return this->matchingRuleID;
}

SortKey::SortKey() {
}

$Class* SortKey::load$($String* name, bool initialize) {
	$loadClass(SortKey, name, initialize, &_SortKey_ClassInfo_, allocate$SortKey);
	return class$;
}

$Class* SortKey::class$ = nullptr;

		} // ldap
	} // naming
} // javax