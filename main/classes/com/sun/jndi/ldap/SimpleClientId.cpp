#include <com/sun/jndi/ldap/SimpleClientId.h>

#include <com/sun/jndi/ldap/ClientId.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClientId = ::com::sun::jndi::ldap::ClientId;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _SimpleClientId_FieldInfo_[] = {
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SimpleClientId, username)},
	{"passwd", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SimpleClientId, passwd)},
	{"myHash", "I", nullptr, $PRIVATE | $FINAL, $field(SimpleClientId, myHash)},
	{}
};

$MethodInfo _SimpleClientId_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(SimpleClientId::*)(int32_t,$String*,int32_t,$String*,$ControlArray*,$OutputStream*,$String*,$String*,Object$*)>(&SimpleClientId::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleClientId_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.SimpleClientId",
	"com.sun.jndi.ldap.ClientId",
	nullptr,
	_SimpleClientId_FieldInfo_,
	_SimpleClientId_MethodInfo_
};

$Object* allocate$SimpleClientId($Class* clazz) {
	return $of($alloc(SimpleClientId));
}

void SimpleClientId::init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $ControlArray* bindCtls, $OutputStream* trace, $String* socketFactory, $String* username, Object$* passwd) {
	$ClientId::init$(version, hostname, port, protocol, bindCtls, trace, socketFactory);
	$set(this, username, username);
	int32_t pwdHashCode = 0;
	if (passwd == nullptr) {
		$set(this, passwd, nullptr);
	} else if ($instanceOf($bytes, passwd)) {
		$set(this, passwd, $nc(($cast($bytes, passwd)))->clone());
		pwdHashCode = $Arrays::hashCode($cast($bytes, passwd));
	} else if ($instanceOf($chars, passwd)) {
		$set(this, passwd, $nc(($cast($chars, passwd)))->clone());
		pwdHashCode = $Arrays::hashCode($cast($chars, passwd));
	} else {
		$set(this, passwd, passwd);
		pwdHashCode = $nc($of(passwd))->hashCode();
	}
	int32_t var$0 = $ClientId::hashCode();
	this->myHash = (var$0 ^ (username != nullptr ? $nc(username)->hashCode() : 0)) ^ pwdHashCode;
}

bool SimpleClientId::equals(Object$* obj) {
	if (obj == nullptr || !($instanceOf(SimpleClientId, obj))) {
		return false;
	}
	$var(SimpleClientId, other, $cast(SimpleClientId, obj));
	bool var$1 = $ClientId::equals(obj);
	bool var$0 = var$1 && (this->username == $nc(other)->username || (this->username != nullptr && $nc(this->username)->equals($nc(other)->username)));
	if (var$0) {
		bool var$2 = ($equals(this->passwd, $nc(other)->passwd));
		if (!var$2) {
			bool var$3 = this->passwd != nullptr && $nc(other)->passwd != nullptr;
			if (var$3) {
				bool var$5 = (($instanceOf($String, this->passwd)) && $nc($of(this->passwd))->equals(other->passwd));
				bool var$4 = var$5 || (($instanceOf($bytes, this->passwd)) && ($instanceOf($bytes, $nc(other)->passwd)) && $Arrays::equals($cast($bytes, this->passwd), $cast($bytes, other->passwd)));
				var$3 = (var$4 || (($instanceOf($chars, this->passwd)) && ($instanceOf($chars, other->passwd)) && $Arrays::equals($cast($chars, this->passwd), $cast($chars, other->passwd))));
			}
			var$2 = (var$3);
		}
		var$0 = (var$2);
	}
	return var$0;
}

int32_t SimpleClientId::hashCode() {
	return this->myHash;
}

$String* SimpleClientId::toString() {
	return $str({$($ClientId::toString()), ":"_s, this->username});
}

SimpleClientId::SimpleClientId() {
}

$Class* SimpleClientId::load$($String* name, bool initialize) {
	$loadClass(SimpleClientId, name, initialize, &_SimpleClientId_ClassInfo_, allocate$SimpleClientId);
	return class$;
}

$Class* SimpleClientId::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com