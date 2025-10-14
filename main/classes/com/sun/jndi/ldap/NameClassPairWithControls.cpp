#include <com/sun/jndi/ldap/NameClassPairWithControls.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NameClassPair.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NameClassPair = ::javax::naming::NameClassPair;
using $Control = ::javax::naming::ldap::Control;
using $HasControls = ::javax::naming::ldap::HasControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _NameClassPairWithControls_FieldInfo_[] = {
	{"controls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(NameClassPairWithControls, controls)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameClassPairWithControls, serialVersionUID)},
	{}
};

$MethodInfo _NameClassPairWithControls_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, $method(static_cast<void(NameClassPairWithControls::*)($String*,$String*,$ControlArray*)>(&NameClassPairWithControls::init$))},
	{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameClassPairWithControls_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.NameClassPairWithControls",
	"javax.naming.NameClassPair",
	"javax.naming.ldap.HasControls",
	_NameClassPairWithControls_FieldInfo_,
	_NameClassPairWithControls_MethodInfo_
};

$Object* allocate$NameClassPairWithControls($Class* clazz) {
	return $of($alloc(NameClassPairWithControls));
}

$String* NameClassPairWithControls::toString() {
	 return this->$NameClassPair::toString();
}

int32_t NameClassPairWithControls::hashCode() {
	 return this->$NameClassPair::hashCode();
}

bool NameClassPairWithControls::equals(Object$* arg0) {
	 return this->$NameClassPair::equals(arg0);
}

$Object* NameClassPairWithControls::clone() {
	 return this->$NameClassPair::clone();
}

void NameClassPairWithControls::finalize() {
	this->$NameClassPair::finalize();
}

void NameClassPairWithControls::init$($String* name, $String* className, $ControlArray* controls) {
	$NameClassPair::init$(name, className);
	$set(this, controls, controls);
}

$ControlArray* NameClassPairWithControls::getControls() {
	return this->controls;
}

NameClassPairWithControls::NameClassPairWithControls() {
}

$Class* NameClassPairWithControls::load$($String* name, bool initialize) {
	$loadClass(NameClassPairWithControls, name, initialize, &_NameClassPairWithControls_ClassInfo_, allocate$NameClassPairWithControls);
	return class$;
}

$Class* NameClassPairWithControls::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com