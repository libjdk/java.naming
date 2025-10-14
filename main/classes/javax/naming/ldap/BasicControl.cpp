#include <javax/naming/ldap/BasicControl.h>

#include <java/lang/Array.h>
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
using $Control = ::javax::naming::ldap::Control;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _BasicControl_FieldInfo_[] = {
	{"id", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicControl, id)},
	{"criticality", "Z", nullptr, $PROTECTED, $field(BasicControl, criticality)},
	{"value", "[B", nullptr, $PROTECTED, $field(BasicControl, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicControl, serialVersionUID)},
	{}
};

$MethodInfo _BasicControl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicControl::*)($String*)>(&BasicControl::init$))},
	{"<init>", "(Ljava/lang/String;Z[B)V", nullptr, $PUBLIC, $method(static_cast<void(BasicControl::*)($String*,bool,$bytes*)>(&BasicControl::init$))},
	{"getEncodedValue", "()[B", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isCritical", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.BasicControl",
	"java.lang.Object",
	"javax.naming.ldap.Control",
	_BasicControl_FieldInfo_,
	_BasicControl_MethodInfo_
};

$Object* allocate$BasicControl($Class* clazz) {
	return $of($alloc(BasicControl));
}

void BasicControl::init$($String* id) {
	this->criticality = false;
	$set(this, value, nullptr);
	$set(this, id, id);
}

void BasicControl::init$($String* id, bool criticality, $bytes* value) {
	this->criticality = false;
	$set(this, value, nullptr);
	$set(this, id, id);
	this->criticality = criticality;
	$set(this, value, value);
}

$String* BasicControl::getID() {
	return this->id;
}

bool BasicControl::isCritical() {
	return this->criticality;
}

$bytes* BasicControl::getEncodedValue() {
	return this->value;
}

BasicControl::BasicControl() {
}

$Class* BasicControl::load$($String* name, bool initialize) {
	$loadClass(BasicControl, name, initialize, &_BasicControl_ClassInfo_, allocate$BasicControl);
	return class$;
}

$Class* BasicControl::class$ = nullptr;

		} // ldap
	} // naming
} // javax