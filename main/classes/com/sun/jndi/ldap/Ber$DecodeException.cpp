#include <com/sun/jndi/ldap/Ber$DecodeException.h>

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

$FieldInfo _Ber$DecodeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ber$DecodeException, serialVersionUID)},
	{}
};

$MethodInfo _Ber$DecodeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Ber$DecodeException::*)($String*)>(&Ber$DecodeException::init$))},
	{}
};

$InnerClassInfo _Ber$DecodeException_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Ber$DecodeException", "com.sun.jndi.ldap.Ber", "DecodeException", $STATIC | $FINAL},
	{}
};

$ClassInfo _Ber$DecodeException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.Ber$DecodeException",
	"java.io.IOException",
	nullptr,
	_Ber$DecodeException_FieldInfo_,
	_Ber$DecodeException_MethodInfo_,
	nullptr,
	nullptr,
	_Ber$DecodeException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Ber"
};

$Object* allocate$Ber$DecodeException($Class* clazz) {
	return $of($alloc(Ber$DecodeException));
}

void Ber$DecodeException::init$($String* msg) {
	$IOException::init$(msg);
}

Ber$DecodeException::Ber$DecodeException() {
}

Ber$DecodeException::Ber$DecodeException(const Ber$DecodeException& e) {
}

Ber$DecodeException Ber$DecodeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void Ber$DecodeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Ber$DecodeException::load$($String* name, bool initialize) {
	$loadClass(Ber$DecodeException, name, initialize, &_Ber$DecodeException_ClassInfo_, allocate$Ber$DecodeException);
	return class$;
}

$Class* Ber$DecodeException::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com