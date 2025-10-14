#include <javax/naming/ldap/spi/LdapDnsProvider.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef DNSPROVIDER_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;

namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {

$FieldInfo _LdapDnsProvider_FieldInfo_[] = {
	{"DNSPROVIDER_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapDnsProvider, DNSPROVIDER_PERMISSION)},
	{}
};

$MethodInfo _LdapDnsProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(LdapDnsProvider::*)()>(&LdapDnsProvider::init$))},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapDnsProvider::*)($Void*)>(&LdapDnsProvider::init$))},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&LdapDnsProvider::checkPermission))},
	{"lookupEndpoints", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/util/Map<**>;)Ljava/util/Optional<Ljavax/naming/ldap/spi/LdapDnsProviderResult;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapDnsProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.naming.ldap.spi.LdapDnsProvider",
	"java.lang.Object",
	nullptr,
	_LdapDnsProvider_FieldInfo_,
	_LdapDnsProvider_MethodInfo_
};

$Object* allocate$LdapDnsProvider($Class* clazz) {
	return $of($alloc(LdapDnsProvider));
}

$RuntimePermission* LdapDnsProvider::DNSPROVIDER_PERMISSION = nullptr;

void LdapDnsProvider::init$() {
	LdapDnsProvider::init$($(checkPermission()));
}

void LdapDnsProvider::init$($Void* unused) {
}

$Void* LdapDnsProvider::checkPermission() {
	$init(LdapDnsProvider);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(LdapDnsProvider::DNSPROVIDER_PERMISSION);
	}
	return nullptr;
}

void clinit$LdapDnsProvider($Class* class$) {
	$assignStatic(LdapDnsProvider::DNSPROVIDER_PERMISSION, $new($RuntimePermission, "ldapDnsProvider"_s));
}

LdapDnsProvider::LdapDnsProvider() {
}

$Class* LdapDnsProvider::load$($String* name, bool initialize) {
	$loadClass(LdapDnsProvider, name, initialize, &_LdapDnsProvider_ClassInfo_, clinit$LdapDnsProvider, allocate$LdapDnsProvider);
	return class$;
}

$Class* LdapDnsProvider::class$ = nullptr;

			} // spi
		} // ldap
	} // naming
} // javax