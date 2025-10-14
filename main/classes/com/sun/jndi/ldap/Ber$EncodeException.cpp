#include <com/sun/jndi/ldap/Ber$EncodeException.h>

#include <com/sun/jndi/ldap/Ber.h>
#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Ber = ::com::sun::jndi::ldap::Ber;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _Ber$EncodeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ber$EncodeException, serialVersionUID)},
	{}
};

$MethodInfo _Ber$EncodeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Ber$EncodeException::*)($String*)>(&Ber$EncodeException::init$))},
	{}
};

$InnerClassInfo _Ber$EncodeException_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Ber$EncodeException", "com.sun.jndi.ldap.Ber", "EncodeException", $STATIC | $FINAL},
	{}
};

$ClassInfo _Ber$EncodeException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.Ber$EncodeException",
	"java.io.IOException",
	nullptr,
	_Ber$EncodeException_FieldInfo_,
	_Ber$EncodeException_MethodInfo_,
	nullptr,
	nullptr,
	_Ber$EncodeException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Ber"
};

$Object* allocate$Ber$EncodeException($Class* clazz) {
	return $of($alloc(Ber$EncodeException));
}

void Ber$EncodeException::init$($String* msg) {
	$IOException::init$(msg);
}

Ber$EncodeException::Ber$EncodeException() {
}

Ber$EncodeException::Ber$EncodeException(const Ber$EncodeException& e) {
}

Ber$EncodeException Ber$EncodeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void Ber$EncodeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Ber$EncodeException::load$($String* name, bool initialize) {
	$loadClass(Ber$EncodeException, name, initialize, &_Ber$EncodeException_ClassInfo_, allocate$Ber$EncodeException);
	return class$;
}

$Class* Ber$EncodeException::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com