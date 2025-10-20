#include <com/sun/jndi/ldap/VersionHelper.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/SecureClassLoader.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

using $URLArray = $Array<::java::net::URL>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class VersionHelper$$Lambda$lambda$getPrivilegedProperty$0 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* propertyName, $String* defaultVal) {
		$set(this, propertyName, propertyName);
		$set(this, defaultVal, defaultVal);
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getPrivilegedProperty$0(propertyName, defaultVal));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getPrivilegedProperty$0>());
	}
	$String* propertyName = nullptr;
	$String* defaultVal = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::fieldInfos[3] = {
	{"propertyName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0, propertyName)},
	{"defaultVal", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0, defaultVal)},
	{}
};
$MethodInfo VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::*)($String*,$String*)>(&VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.VersionHelper$$Lambda$lambda$getPrivilegedProperty$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::class$ = nullptr;

class VersionHelper$$Lambda$lambda$createThread$1$1 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$createThread$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* r, $AccessControlContext* acc) {
		$set(this, r, r);
		$set(this, acc, acc);
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$createThread$1(r, acc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$createThread$1$1>());
	}
	$Runnable* r = nullptr;
	$AccessControlContext* acc = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$lambda$createThread$1$1::fieldInfos[3] = {
	{"r", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$createThread$1$1, r)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$createThread$1$1, acc)},
	{}
};
$MethodInfo VersionHelper$$Lambda$lambda$createThread$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$createThread$1$1::*)($Runnable*,$AccessControlContext*)>(&VersionHelper$$Lambda$lambda$createThread$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$createThread$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.VersionHelper$$Lambda$lambda$createThread$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$createThread$1$1::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$createThread$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$createThread$1$1::class$ = nullptr;

class VersionHelper$$Lambda$getContextClassLoader$2 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$getContextClassLoader$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Thread* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->getContextClassLoader());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$getContextClassLoader$2>());
	}
	$Thread* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$getContextClassLoader$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$getContextClassLoader$2, inst$)},
	{}
};
$MethodInfo VersionHelper$$Lambda$getContextClassLoader$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$getContextClassLoader$2::*)($Thread*)>(&VersionHelper$$Lambda$getContextClassLoader$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$getContextClassLoader$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.VersionHelper$$Lambda$getContextClassLoader$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$getContextClassLoader$2::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$getContextClassLoader$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$getContextClassLoader$2::class$ = nullptr;

$FieldInfo _VersionHelper_FieldInfo_[] = {
	{"helper", "Lcom/sun/jndi/ldap/VersionHelper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, helper)},
	{"trustURLCodebase", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, trustURLCodebase)},
	{"trustSerialData", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, trustSerialData)},
	{}
};

$MethodInfo _VersionHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VersionHelper::*)()>(&VersionHelper::init$))},
	{"createThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, 0, $method(static_cast<$Thread*(VersionHelper::*)($Runnable*)>(&VersionHelper::createThread))},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $method(static_cast<$ClassLoader*(VersionHelper::*)()>(&VersionHelper::getContextClassLoader))},
	{"getPrivilegedProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&VersionHelper::getPrivilegedProperty))},
	{"getURLClassLoader", "([Ljava/lang/String;)Ljava/lang/ClassLoader;", nullptr, 0, $method(static_cast<$ClassLoader*(VersionHelper::*)($StringArray*)>(&VersionHelper::getURLClassLoader)), "java.net.MalformedURLException"},
	{"getUrlArray", "([Ljava/lang/String;)[Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URLArray*(*)($StringArray*)>(&VersionHelper::getUrlArray)), "java.net.MalformedURLException"},
	{"getVersionHelper", "()Lcom/sun/jndi/ldap/VersionHelper;", nullptr, $STATIC, $method(static_cast<VersionHelper*(*)()>(&VersionHelper::getVersionHelper))},
	{"isSerialDataAllowed", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&VersionHelper::isSerialDataAllowed))},
	{"lambda$createThread$1", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Thread*(*)($Runnable*,$AccessControlContext*)>(&VersionHelper::lambda$createThread$1))},
	{"lambda$getPrivilegedProperty$0", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$String*)>(&VersionHelper::lambda$getPrivilegedProperty$0))},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", 0, $method(static_cast<$Class*(VersionHelper::*)($String*)>(&VersionHelper::loadClass)), "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _VersionHelper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.VersionHelper",
	"java.lang.Object",
	nullptr,
	_VersionHelper_FieldInfo_,
	_VersionHelper_MethodInfo_
};

$Object* allocate$VersionHelper($Class* clazz) {
	return $of($alloc(VersionHelper));
}

VersionHelper* VersionHelper::helper = nullptr;

bool VersionHelper::trustURLCodebase = false;

bool VersionHelper::trustSerialData = false;

$String* VersionHelper::getPrivilegedProperty($String* propertyName, $String* defaultVal) {
	$init(VersionHelper);
	$beforeCallerSensitive();
	$var($PrivilegedAction, action, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0, propertyName, defaultVal)));
	if ($System::getSecurityManager() == nullptr) {
		return $cast($String, $nc(action)->run());
	} else {
		return $cast($String, $AccessController::doPrivileged(action));
	}
}

void VersionHelper::init$() {
}

VersionHelper* VersionHelper::getVersionHelper() {
	$init(VersionHelper);
	return VersionHelper::helper;
}

bool VersionHelper::isSerialDataAllowed() {
	$init(VersionHelper);
	return VersionHelper::trustSerialData;
}

$ClassLoader* VersionHelper::getURLClassLoader($StringArray* url) {
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, parent, getContextClassLoader());
	if (url != nullptr && VersionHelper::trustURLCodebase) {
		return $URLClassLoader::newInstance($(getUrlArray(url)), parent);
	} else {
		return parent;
	}
}

$Class* VersionHelper::loadClass($String* className) {
	$beforeCallerSensitive();
	return $Class::forName(className, true, $(getContextClassLoader()));
}

$Thread* VersionHelper::createThread($Runnable* r) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AccessControlContext, acc, $AccessController::getContext());
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$createThread$1$1, r, acc)));
	return $cast($Thread, $AccessController::doPrivileged(act));
}

$ClassLoader* VersionHelper::getContextClassLoader() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$getContextClassLoader$2, static_cast<$Thread*>($($Thread::currentThread())))));
	return $cast($ClassLoader, $AccessController::doPrivileged(act));
}

$URLArray* VersionHelper::getUrlArray($StringArray* url) {
	$init(VersionHelper);
	$useLocalCurrentObjectStackCache();
	$var($URLArray, urlArray, $new($URLArray, $nc(url)->length));
	for (int32_t i = 0; i < urlArray->length; ++i) {
		urlArray->set(i, $$new($URL, url->get(i)));
	}
	return urlArray;
}

$Thread* VersionHelper::lambda$createThread$1($Runnable* r, $AccessControlContext* acc) {
	$init(VersionHelper);
	return $nc($($SharedSecrets::getJavaLangAccess()))->newThreadWithAcc(r, acc);
}

$String* VersionHelper::lambda$getPrivilegedProperty$0($String* propertyName, $String* defaultVal) {
	$init(VersionHelper);
	return $System::getProperty(propertyName, defaultVal);
}

void clinit$VersionHelper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(VersionHelper::helper, $new(VersionHelper));
	{
		$var($String, trust, VersionHelper::getPrivilegedProperty("com.sun.jndi.ldap.object.trustURLCodebase"_s, "false"_s));
		VersionHelper::trustURLCodebase = "true"_s->equalsIgnoreCase(trust);
		$var($String, trustSerialDataSp, VersionHelper::getPrivilegedProperty("com.sun.jndi.ldap.object.trustSerialData"_s, "true"_s));
		VersionHelper::trustSerialData = "true"_s->equalsIgnoreCase(trustSerialDataSp);
	}
}

VersionHelper::VersionHelper() {
}

$Class* VersionHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getPrivilegedProperty$0::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$createThread$1$1::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$createThread$1$1::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$getContextClassLoader$2::classInfo$.name)) {
			return VersionHelper$$Lambda$getContextClassLoader$2::load$(name, initialize);
		}
	}
	$loadClass(VersionHelper, name, initialize, &_VersionHelper_ClassInfo_, clinit$VersionHelper, allocate$VersionHelper);
	return class$;
}

$Class* VersionHelper::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com