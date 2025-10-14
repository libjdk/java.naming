#include <javax/naming/Referenceable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Reference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::javax::naming::Reference;

namespace javax {
	namespace naming {

$MethodInfo _Referenceable_MethodInfo_[] = {
	{"getReference", "()Ljavax/naming/Reference;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _Referenceable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.Referenceable",
	nullptr,
	nullptr,
	nullptr,
	_Referenceable_MethodInfo_
};

$Object* allocate$Referenceable($Class* clazz) {
	return $of($alloc(Referenceable));
}

$Class* Referenceable::load$($String* name, bool initialize) {
	$loadClass(Referenceable, name, initialize, &_Referenceable_ClassInfo_, allocate$Referenceable);
	return class$;
}

$Class* Referenceable::class$ = nullptr;

	} // naming
} // javax