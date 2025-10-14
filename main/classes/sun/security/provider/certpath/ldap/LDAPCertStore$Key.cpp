#include <sun/security/provider/certpath/ldap/LDAPCertStore$Key.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStore.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $LDAPCertStore = ::sun::security::provider::certpath::ldap::LDAPCertStore;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

$FieldInfo _LDAPCertStore$Key_FieldInfo_[] = {
	{"hashCode", "I", nullptr, $VOLATILE, $field(LDAPCertStore$Key, hashCode$)},
	{"serverName", "Ljava/lang/String;", nullptr, 0, $field(LDAPCertStore$Key, serverName)},
	{"port", "I", nullptr, 0, $field(LDAPCertStore$Key, port)},
	{}
};

$MethodInfo _LDAPCertStore$Key_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(LDAPCertStore$Key::*)($String*,int32_t)>(&LDAPCertStore$Key::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LDAPCertStore$Key_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ldap.LDAPCertStore$Key", "sun.security.provider.certpath.ldap.LDAPCertStore", "Key", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LDAPCertStore$Key_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.ldap.LDAPCertStore$Key",
	"java.lang.Object",
	nullptr,
	_LDAPCertStore$Key_FieldInfo_,
	_LDAPCertStore$Key_MethodInfo_,
	nullptr,
	nullptr,
	_LDAPCertStore$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ldap.LDAPCertStore"
};

$Object* allocate$LDAPCertStore$Key($Class* clazz) {
	return $of($alloc(LDAPCertStore$Key));
}

void LDAPCertStore$Key::init$($String* serverName, int32_t port) {
	$set(this, serverName, serverName);
	this->port = port;
}

bool LDAPCertStore$Key::equals(Object$* obj) {
	if (!($instanceOf(LDAPCertStore$Key, obj))) {
		return false;
	}
	$var(LDAPCertStore$Key, key, $cast(LDAPCertStore$Key, obj));
	return (this->port == $nc(key)->port && $nc(this->serverName)->equalsIgnoreCase(key->serverName));
}

int32_t LDAPCertStore$Key::hashCode() {
	if (this->hashCode$ == 0) {
		int32_t result = 17;
		result = 37 * result + this->port;
		$init($Locale);
		result = 37 * result + $($nc(this->serverName)->toLowerCase($Locale::ENGLISH))->hashCode();
		this->hashCode$ = result;
	}
	return this->hashCode$;
}

LDAPCertStore$Key::LDAPCertStore$Key() {
}

$Class* LDAPCertStore$Key::load$($String* name, bool initialize) {
	$loadClass(LDAPCertStore$Key, name, initialize, &_LDAPCertStore$Key_ClassInfo_, allocate$LDAPCertStore$Key);
	return class$;
}

$Class* LDAPCertStore$Key::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun