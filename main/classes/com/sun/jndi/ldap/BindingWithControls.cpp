#include <com/sun/jndi/ldap/BindingWithControls.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Binding.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Binding = ::javax::naming::Binding;
using $Control = ::javax::naming::ldap::Control;
using $HasControls = ::javax::naming::ldap::HasControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _BindingWithControls_FieldInfo_[] = {
	{"controls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(BindingWithControls, controls)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BindingWithControls, serialVersionUID)},
	{}
};

$MethodInfo _BindingWithControls_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;[Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, $method(static_cast<void(BindingWithControls::*)($String*,Object$*,$ControlArray*)>(&BindingWithControls::init$))},
	{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BindingWithControls_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.BindingWithControls",
	"javax.naming.Binding",
	"javax.naming.ldap.HasControls",
	_BindingWithControls_FieldInfo_,
	_BindingWithControls_MethodInfo_
};

$Object* allocate$BindingWithControls($Class* clazz) {
	return $of($alloc(BindingWithControls));
}

$String* BindingWithControls::toString() {
	 return this->$Binding::toString();
}

int32_t BindingWithControls::hashCode() {
	 return this->$Binding::hashCode();
}

bool BindingWithControls::equals(Object$* arg0) {
	 return this->$Binding::equals(arg0);
}

$Object* BindingWithControls::clone() {
	 return this->$Binding::clone();
}

void BindingWithControls::finalize() {
	this->$Binding::finalize();
}

void BindingWithControls::init$($String* name, Object$* obj, $ControlArray* controls) {
	$Binding::init$(name, obj);
	$set(this, controls, controls);
}

$ControlArray* BindingWithControls::getControls() {
	return this->controls;
}

BindingWithControls::BindingWithControls() {
}

$Class* BindingWithControls::load$($String* name, bool initialize) {
	$loadClass(BindingWithControls, name, initialize, &_BindingWithControls_ClassInfo_, allocate$BindingWithControls);
	return class$;
}

$Class* BindingWithControls::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com