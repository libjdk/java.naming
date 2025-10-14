#include <javax/naming/ldap/HasControls.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$MethodInfo _HasControls_MethodInfo_[] = {
	{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _HasControls_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.HasControls",
	nullptr,
	nullptr,
	nullptr,
	_HasControls_MethodInfo_
};

$Object* allocate$HasControls($Class* clazz) {
	return $of($alloc(HasControls));
}

$Class* HasControls::load$($String* name, bool initialize) {
	$loadClass(HasControls, name, initialize, &_HasControls_ClassInfo_, allocate$HasControls);
	return class$;
}

$Class* HasControls::class$ = nullptr;

		} // ldap
	} // naming
} // javax