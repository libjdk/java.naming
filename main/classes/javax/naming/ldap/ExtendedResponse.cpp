#include <javax/naming/ldap/ExtendedResponse.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace ldap {

$MethodInfo _ExtendedResponse_MethodInfo_[] = {
	{"getEncodedValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedResponse_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.ExtendedResponse",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_ExtendedResponse_MethodInfo_
};

$Object* allocate$ExtendedResponse($Class* clazz) {
	return $of($alloc(ExtendedResponse));
}

$Class* ExtendedResponse::load$($String* name, bool initialize) {
	$loadClass(ExtendedResponse, name, initialize, &_ExtendedResponse_ClassInfo_, allocate$ExtendedResponse);
	return class$;
}

$Class* ExtendedResponse::class$ = nullptr;

		} // ldap
	} // naming
} // javax