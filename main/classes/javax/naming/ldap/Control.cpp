#include <javax/naming/ldap/Control.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CRITICAL
#undef NONCRITICAL

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _Control_FieldInfo_[] = {
	{"CRITICAL", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Control, CRITICAL)},
	{"NONCRITICAL", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Control, NONCRITICAL)},
	{}
};

$MethodInfo _Control_MethodInfo_[] = {
	{"getEncodedValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isCritical", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Control_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.Control",
	nullptr,
	"java.io.Serializable",
	_Control_FieldInfo_,
	_Control_MethodInfo_
};

$Object* allocate$Control($Class* clazz) {
	return $of($alloc(Control));
}

$Class* Control::load$($String* name, bool initialize) {
	$loadClass(Control, name, initialize, &_Control_ClassInfo_, allocate$Control);
	return class$;
}

$Class* Control::class$ = nullptr;

		} // ldap
	} // naming
} // javax