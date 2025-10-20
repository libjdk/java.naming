#include <sun/security/provider/certpath/ldap/JdkLDAP.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <sun/security/provider/certpath/ldap/JdkLDAP$ProviderService.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef PROVIDER_VER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $JdkLDAP$ProviderService = ::sun::security::provider::certpath::ldap::JdkLDAP$ProviderService;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class JdkLDAP$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(JdkLDAP$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(JdkLDAP* inst, $Provider* p) {
		$set(this, inst$, inst);
		$set(this, p, p);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$new$0(p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JdkLDAP$$Lambda$lambda$new$0>());
	}
	JdkLDAP* inst$ = nullptr;
	$Provider* p = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JdkLDAP$$Lambda$lambda$new$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JdkLDAP$$Lambda$lambda$new$0, inst$)},
	{"p", "Ljava/security/Provider;", nullptr, $PUBLIC, $field(JdkLDAP$$Lambda$lambda$new$0, p)},
	{}
};
$MethodInfo JdkLDAP$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(Lsun/security/provider/certpath/ldap/JdkLDAP;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(JdkLDAP$$Lambda$lambda$new$0::*)(JdkLDAP*,$Provider*)>(&JdkLDAP$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JdkLDAP$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.provider.certpath.ldap.JdkLDAP$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* JdkLDAP$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(JdkLDAP$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JdkLDAP$$Lambda$lambda$new$0::class$ = nullptr;

$FieldInfo _JdkLDAP_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JdkLDAP, serialVersionUID)},
	{}
};

$MethodInfo _JdkLDAP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JdkLDAP::*)()>(&JdkLDAP::init$))},
	{"lambda$new$0", "(Ljava/security/Provider;)Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Void*(JdkLDAP::*)($Provider*)>(&JdkLDAP::lambda$new$0))},
	{}
};

$InnerClassInfo _JdkLDAP_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ldap.JdkLDAP$ProviderService", "sun.security.provider.certpath.ldap.JdkLDAP", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _JdkLDAP_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.certpath.ldap.JdkLDAP",
	"java.security.Provider",
	nullptr,
	_JdkLDAP_FieldInfo_,
	_JdkLDAP_MethodInfo_,
	nullptr,
	nullptr,
	_JdkLDAP_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ldap.JdkLDAP$ProviderService"
};

$Object* allocate$JdkLDAP($Class* clazz) {
	return $of($alloc(JdkLDAP));
}

void JdkLDAP::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("JdkLDAP"_s, $SecurityConstants::PROVIDER_VER, "JdkLDAP Provider (implements LDAP CertStore)"_s);
	$var($Provider, p, this);
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(JdkLDAP$$Lambda$lambda$new$0, this, p)));
	$AccessController::doPrivileged(pa);
}

$Void* JdkLDAP::lambda$new$0($Provider* p) {
	$useLocalCurrentObjectStackCache();
	$var($HashMap, attrs, $new($HashMap, 2));
	attrs->put("LDAPSchema"_s, "RFC2587"_s);
	attrs->put("ImplementedIn"_s, "Software"_s);
	putService($$new($JdkLDAP$ProviderService, p, "CertStore"_s, "LDAP"_s, "sun.security.provider.certpath.ldap.LDAPCertStore"_s, nullptr, attrs));
	return nullptr;
}

JdkLDAP::JdkLDAP() {
}

$Class* JdkLDAP::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JdkLDAP$$Lambda$lambda$new$0::classInfo$.name)) {
			return JdkLDAP$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(JdkLDAP, name, initialize, &_JdkLDAP_ClassInfo_, allocate$JdkLDAP);
	return class$;
}

$Class* JdkLDAP::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun