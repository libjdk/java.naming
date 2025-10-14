#include <com/sun/jndi/ldap/LdapPoolManager$1.h>

#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PoolCleaner.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $PoolArray = $Array<::com::sun::jndi::ldap::pool::Pool>;
using $LdapPoolManager = ::com::sun::jndi::ldap::LdapPoolManager;
using $PoolCleaner = ::com::sun::jndi::ldap::pool::PoolCleaner;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapPoolManager$1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LdapPoolManager$1, $assertionsDisabled)},
	{}
};

$MethodInfo _LdapPoolManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LdapPoolManager$1::*)()>(&LdapPoolManager$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LdapPoolManager$1_EnclosingMethodInfo_ = {
	"com.sun.jndi.ldap.LdapPoolManager",
	nullptr,
	nullptr
};

$InnerClassInfo _LdapPoolManager$1_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapPoolManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LdapPoolManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.LdapPoolManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_LdapPoolManager$1_FieldInfo_,
	_LdapPoolManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_LdapPoolManager$1_EnclosingMethodInfo_,
	_LdapPoolManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapPoolManager"
};

$Object* allocate$LdapPoolManager$1($Class* clazz) {
	return $of($alloc(LdapPoolManager$1));
}

bool LdapPoolManager$1::$assertionsDisabled = false;

void LdapPoolManager$1::init$() {
}

$Object* LdapPoolManager$1::run() {
	$beforeCallerSensitive();
	$init($LdapPoolManager);
	$var($Thread, t, $InnocuousThread::newSystemThread("LDAP PoolCleaner"_s, $$new($PoolCleaner, $LdapPoolManager::idleTimeout, $LdapPoolManager::pools)));
	if (!LdapPoolManager$1::$assertionsDisabled && !($nc(t)->getContextClassLoader() == nullptr)) {
		$throwNew($AssertionError);
	}
	$nc(t)->setDaemon(true);
	t->start();
	return $of(nullptr);
}

void clinit$LdapPoolManager$1($Class* class$) {
	$load($LdapPoolManager);
	LdapPoolManager$1::$assertionsDisabled = !$LdapPoolManager::class$->desiredAssertionStatus();
}

LdapPoolManager$1::LdapPoolManager$1() {
}

$Class* LdapPoolManager$1::load$($String* name, bool initialize) {
	$loadClass(LdapPoolManager$1, name, initialize, &_LdapPoolManager$1_ClassInfo_, clinit$LdapPoolManager$1, allocate$LdapPoolManager$1);
	return class$;
}

$Class* LdapPoolManager$1::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com