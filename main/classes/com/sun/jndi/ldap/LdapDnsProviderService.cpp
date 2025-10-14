#include <com/sun/jndi/ldap/LdapDnsProviderService.h>

#include <com/sun/jndi/ldap/DefaultLdapDnsProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/Predicate.h>
#include <javax/naming/ldap/spi/LdapDnsProvider.h>
#include <javax/naming/ldap/spi/LdapDnsProviderResult.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef GET_CLASSLOADER_PERMISSION
#undef LOCK

using $PermissionArray = $Array<::java::security::Permission>;
using $DefaultLdapDnsProvider = ::com::sun::jndi::ldap::DefaultLdapDnsProvider;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Predicate = ::java::util::function::Predicate;
using $LdapDnsProvider = ::javax::naming::ldap::spi::LdapDnsProvider;
using $LdapDnsProviderResult = ::javax::naming::ldap::spi::LdapDnsProviderResult;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapDnsProviderService$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(LdapDnsProviderService$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(LdapDnsProviderService::lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapDnsProviderService$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LdapDnsProviderService$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapDnsProviderService$$Lambda$lambda$new$0::*)()>(&LdapDnsProviderService$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapDnsProviderService$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapDnsProviderService$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* LdapDnsProviderService$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(LdapDnsProviderService$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapDnsProviderService$$Lambda$lambda$new$0::class$ = nullptr;

class LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1 : public $Predicate {
	$class(LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* r) override {
		 return LdapDnsProviderService::lambda$lookupEndpoints$1($cast($LdapDnsProviderResult, r));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::*)()>(&LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::load$($String* name, bool initialize) {
	$loadClass(LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::class$ = nullptr;

$FieldInfo _LdapDnsProviderService_FieldInfo_[] = {
	{"service", "Lcom/sun/jndi/ldap/LdapDnsProviderService;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(LdapDnsProviderService, service)},
	{"LOCK", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapDnsProviderService, LOCK)},
	{"providers", "Ljava/util/ServiceLoader;", "Ljava/util/ServiceLoader<Ljavax/naming/ldap/spi/LdapDnsProvider;>;", $PRIVATE | $FINAL, $field(LdapDnsProviderService, providers)},
	{}
};

$MethodInfo _LdapDnsProviderService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapDnsProviderService::*)()>(&LdapDnsProviderService::init$))},
	{"getInstance", "()Lcom/sun/jndi/ldap/LdapDnsProviderService;", nullptr, $STATIC, $method(static_cast<LdapDnsProviderService*(*)()>(&LdapDnsProviderService::getInstance))},
	{"lambda$lookupEndpoints$1", "(Ljavax/naming/ldap/spi/LdapDnsProviderResult;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($LdapDnsProviderResult*)>(&LdapDnsProviderService::lambda$lookupEndpoints$1))},
	{"lambda$new$0", "()Ljava/util/ServiceLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ServiceLoader*(*)()>(&LdapDnsProviderService::lambda$new$0))},
	{"lookupEndpoints", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/ldap/spi/LdapDnsProviderResult;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/ldap/spi/LdapDnsProviderResult;", 0, $method(static_cast<$LdapDnsProviderResult*(LdapDnsProviderService::*)($String*,$Hashtable*)>(&LdapDnsProviderService::lookupEndpoints)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapDnsProviderService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapDnsProviderService",
	"java.lang.Object",
	nullptr,
	_LdapDnsProviderService_FieldInfo_,
	_LdapDnsProviderService_MethodInfo_
};

$Object* allocate$LdapDnsProviderService($Class* clazz) {
	return $of($alloc(LdapDnsProviderService));
}

$volatile(LdapDnsProviderService*) LdapDnsProviderService::service = nullptr;
$Object* LdapDnsProviderService::LOCK = nullptr;

void LdapDnsProviderService::init$() {
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$load($LdapDnsProvider);
		$set(this, providers, $ServiceLoader::load($LdapDnsProvider::class$, $($ClassLoader::getSystemClassLoader())));
	} else {
		$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(LdapDnsProviderService$$Lambda$lambda$new$0)));
			$init($SecurityConstants);
		$set(this, providers, $cast($ServiceLoader, $AccessController::doPrivileged(pa, ($AccessControlContext*)nullptr, $$new($PermissionArray, {
			static_cast<$Permission*>($$new($RuntimePermission, "ldapDnsProvider"_s)),
			static_cast<$Permission*>($SecurityConstants::GET_CLASSLOADER_PERMISSION)
		}))));
	}
}

LdapDnsProviderService* LdapDnsProviderService::getInstance() {
	$init(LdapDnsProviderService);
	if (LdapDnsProviderService::service != nullptr) {
		return LdapDnsProviderService::service;
	}
	$synchronized(LdapDnsProviderService::LOCK) {
		if (LdapDnsProviderService::service != nullptr) {
			return LdapDnsProviderService::service;
		}
		$assignStatic(LdapDnsProviderService::service, $new(LdapDnsProviderService));
	}
	return LdapDnsProviderService::service;
}

$LdapDnsProviderResult* LdapDnsProviderService::lookupEndpoints($String* url, $Hashtable* env) {
	$var($LdapDnsProviderResult, result, nullptr);
	$var($Hashtable, envCopy, $new($Hashtable, static_cast<$Map*>(env)));
	$synchronized(LdapDnsProviderService::LOCK) {
		$var($Iterator, iterator, $nc(this->providers)->iterator());
		while (result == nullptr && $nc(iterator)->hasNext()) {
			$assign(result, $cast($LdapDnsProviderResult, $nc($($nc($($nc(($cast($LdapDnsProvider, $(iterator->next()))))->lookupEndpoints(url, envCopy)))->filter(static_cast<$Predicate*>($$new(LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1)))))->orElse(nullptr)));
		}
	}
	if (result == nullptr) {
		return $cast($LdapDnsProviderResult, $nc($($$new($DefaultLdapDnsProvider)->lookupEndpoints(url, env)))->orElse($$new($LdapDnsProviderResult, ""_s, $($List::of()))));
	}
	return result;
}

bool LdapDnsProviderService::lambda$lookupEndpoints$1($LdapDnsProviderResult* r) {
	$init(LdapDnsProviderService);
	return !$nc($($nc(r)->getEndpoints()))->isEmpty();
}

$ServiceLoader* LdapDnsProviderService::lambda$new$0() {
	$init(LdapDnsProviderService);
	$beforeCallerSensitive();
	$load($LdapDnsProvider);
	return $ServiceLoader::load($LdapDnsProvider::class$, $($ClassLoader::getSystemClassLoader()));
}

void clinit$LdapDnsProviderService($Class* class$) {
	$assignStatic(LdapDnsProviderService::LOCK, $new($ints, 0));
}

LdapDnsProviderService::LdapDnsProviderService() {
}

$Class* LdapDnsProviderService::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LdapDnsProviderService$$Lambda$lambda$new$0::classInfo$.name)) {
			return LdapDnsProviderService$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::classInfo$.name)) {
			return LdapDnsProviderService$$Lambda$lambda$lookupEndpoints$1$1::load$(name, initialize);
		}
	}
	$loadClass(LdapDnsProviderService, name, initialize, &_LdapDnsProviderService_ClassInfo_, clinit$LdapDnsProviderService, allocate$LdapDnsProviderService);
	return class$;
}

$Class* LdapDnsProviderService::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com