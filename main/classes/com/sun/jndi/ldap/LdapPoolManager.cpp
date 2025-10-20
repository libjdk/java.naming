#include <com/sun/jndi/ldap/LdapPoolManager.h>

#include <com/sun/jndi/ldap/ClientId.h>
#include <com/sun/jndi/ldap/DigestClientId.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapClientFactory.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapPoolManager$1.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/SimpleClientId.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

#undef COMPARATOR
#undef DEBUG
#undef DEFAULT_AUTH_MECHS
#undef DEFAULT_INIT_POOL_SIZE
#undef DEFAULT_MAX_POOL_SIZE
#undef DEFAULT_PREF_POOL_SIZE
#undef DEFAULT_PROTOCOLS
#undef DEFAULT_SSL_FACTORY
#undef DEFAULT_TIMEOUT
#undef DIGEST
#undef ENGLISH
#undef INIT_POOL_SIZE
#undef MAX_POOL_SIZE
#undef NONE
#undef POOL_AUTH
#undef POOL_PROTOCOL
#undef POOL_TIMEOUT
#undef PREF_POOL_SIZE
#undef SASL_CALLBACK
#undef SIMPLE

using $PoolArray = $Array<::com::sun::jndi::ldap::pool::Pool>;
using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClientId = ::com::sun::jndi::ldap::ClientId;
using $DigestClientId = ::com::sun::jndi::ldap::DigestClientId;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapClientFactory = ::com::sun::jndi::ldap::LdapClientFactory;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapPoolManager$1 = ::com::sun::jndi::ldap::LdapPoolManager$1;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $SimpleClientId = ::com::sun::jndi::ldap::SimpleClientId;
using $VersionHelper = ::com::sun::jndi::ldap::VersionHelper;
using $Pool = ::com::sun::jndi::ldap::pool::Pool;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $PooledConnectionFactory = ::com::sun::jndi::ldap::pool::PooledConnectionFactory;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $StringTokenizer = ::java::util::StringTokenizer;
using $CommunicationException = ::javax::naming::CommunicationException;
using $NamingException = ::javax::naming::NamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapPoolManager$$Lambda$lambda$getProperty$0 : public $PrivilegedAction {
	$class(LdapPoolManager$$Lambda$lambda$getProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* propName, $String* defVal) {
		$set(this, propName, propName);
		$set(this, defVal, defVal);
	}
	virtual $Object* run() override {
		 return $of(LdapPoolManager::lambda$getProperty$0(propName, defVal));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapPoolManager$$Lambda$lambda$getProperty$0>());
	}
	$String* propName = nullptr;
	$String* defVal = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LdapPoolManager$$Lambda$lambda$getProperty$0::fieldInfos[3] = {
	{"propName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LdapPoolManager$$Lambda$lambda$getProperty$0, propName)},
	{"defVal", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LdapPoolManager$$Lambda$lambda$getProperty$0, defVal)},
	{}
};
$MethodInfo LdapPoolManager$$Lambda$lambda$getProperty$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LdapPoolManager$$Lambda$lambda$getProperty$0::*)($String*,$String*)>(&LdapPoolManager$$Lambda$lambda$getProperty$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapPoolManager$$Lambda$lambda$getProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapPoolManager$$Lambda$lambda$getProperty$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* LdapPoolManager$$Lambda$lambda$getProperty$0::load$($String* name, bool initialize) {
	$loadClass(LdapPoolManager$$Lambda$lambda$getProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapPoolManager$$Lambda$lambda$getProperty$0::class$ = nullptr;

class LdapPoolManager$$Lambda$lambda$getInteger$1$1 : public $PrivilegedAction {
	$class(LdapPoolManager$$Lambda$lambda$getInteger$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* propName, int32_t defVal) {
		$set(this, propName, propName);
		this->defVal = defVal;
	}
	virtual $Object* run() override {
		 return $of(LdapPoolManager::lambda$getInteger$1(propName, defVal));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapPoolManager$$Lambda$lambda$getInteger$1$1>());
	}
	$String* propName = nullptr;
	int32_t defVal = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LdapPoolManager$$Lambda$lambda$getInteger$1$1::fieldInfos[3] = {
	{"propName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LdapPoolManager$$Lambda$lambda$getInteger$1$1, propName)},
	{"defVal", "I", nullptr, $PUBLIC, $field(LdapPoolManager$$Lambda$lambda$getInteger$1$1, defVal)},
	{}
};
$MethodInfo LdapPoolManager$$Lambda$lambda$getInteger$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(LdapPoolManager$$Lambda$lambda$getInteger$1$1::*)($String*,int32_t)>(&LdapPoolManager$$Lambda$lambda$getInteger$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapPoolManager$$Lambda$lambda$getInteger$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapPoolManager$$Lambda$lambda$getInteger$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* LdapPoolManager$$Lambda$lambda$getInteger$1$1::load$($String* name, bool initialize) {
	$loadClass(LdapPoolManager$$Lambda$lambda$getInteger$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapPoolManager$$Lambda$lambda$getInteger$1$1::class$ = nullptr;

class LdapPoolManager$$Lambda$lambda$getLong$2$2 : public $PrivilegedAction {
	$class(LdapPoolManager$$Lambda$lambda$getLong$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* propName, int64_t defVal) {
		$set(this, propName, propName);
		this->defVal = defVal;
	}
	virtual $Object* run() override {
		 return $of(LdapPoolManager::lambda$getLong$2(propName, defVal));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapPoolManager$$Lambda$lambda$getLong$2$2>());
	}
	$String* propName = nullptr;
	int64_t defVal = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LdapPoolManager$$Lambda$lambda$getLong$2$2::fieldInfos[3] = {
	{"propName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LdapPoolManager$$Lambda$lambda$getLong$2$2, propName)},
	{"defVal", "J", nullptr, $PUBLIC, $field(LdapPoolManager$$Lambda$lambda$getLong$2$2, defVal)},
	{}
};
$MethodInfo LdapPoolManager$$Lambda$lambda$getLong$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(LdapPoolManager$$Lambda$lambda$getLong$2$2::*)($String*,int64_t)>(&LdapPoolManager$$Lambda$lambda$getLong$2$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapPoolManager$$Lambda$lambda$getLong$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapPoolManager$$Lambda$lambda$getLong$2$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* LdapPoolManager$$Lambda$lambda$getLong$2$2::load$($String* name, bool initialize) {
	$loadClass(LdapPoolManager$$Lambda$lambda$getLong$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapPoolManager$$Lambda$lambda$getLong$2$2::class$ = nullptr;

$FieldInfo _LdapPoolManager_FieldInfo_[] = {
	{"DEBUG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, DEBUG)},
	{"debug", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LdapPoolManager, debug)},
	{"trace", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LdapPoolManager, trace)},
	{"POOL_AUTH", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, POOL_AUTH)},
	{"POOL_PROTOCOL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, POOL_PROTOCOL)},
	{"MAX_POOL_SIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, MAX_POOL_SIZE)},
	{"PREF_POOL_SIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, PREF_POOL_SIZE)},
	{"INIT_POOL_SIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, INIT_POOL_SIZE)},
	{"POOL_TIMEOUT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, POOL_TIMEOUT)},
	{"SASL_CALLBACK", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, SASL_CALLBACK)},
	{"DEFAULT_MAX_POOL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, DEFAULT_MAX_POOL_SIZE)},
	{"DEFAULT_PREF_POOL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, DEFAULT_PREF_POOL_SIZE)},
	{"DEFAULT_INIT_POOL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, DEFAULT_INIT_POOL_SIZE)},
	{"DEFAULT_TIMEOUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, DEFAULT_TIMEOUT)},
	{"DEFAULT_AUTH_MECHS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, DEFAULT_AUTH_MECHS)},
	{"DEFAULT_PROTOCOLS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, DEFAULT_PROTOCOLS)},
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, NONE)},
	{"SIMPLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, SIMPLE)},
	{"DIGEST", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapPoolManager, DIGEST)},
	{"idleTimeout", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, idleTimeout)},
	{"maxSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, maxSize)},
	{"prefSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, prefSize)},
	{"initSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, initSize)},
	{"supportPlainProtocol", "Z", nullptr, $PRIVATE | $STATIC, $staticField(LdapPoolManager, supportPlainProtocol)},
	{"supportSslProtocol", "Z", nullptr, $PRIVATE | $STATIC, $staticField(LdapPoolManager, supportSslProtocol)},
	{"pools", "[Lcom/sun/jndi/ldap/pool/Pool;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapPoolManager, pools)},
	{}
};

$MethodInfo _LdapPoolManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapPoolManager::*)()>(&LdapPoolManager::init$))},
	{"d", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&LdapPoolManager::d))},
	{"d", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&LdapPoolManager::d))},
	{"expire", "(J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int64_t)>(&LdapPoolManager::expire))},
	{"findPool", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&LdapPoolManager::findPool))},
	{"getInteger", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)($String*,int32_t)>(&LdapPoolManager::getInteger))},
	{"getLdapClient", "(Ljava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapClient;", "(Ljava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable<**>;)Lcom/sun/jndi/ldap/LdapClient;", $STATIC, $method(static_cast<$LdapClient*(*)($String*,int32_t,$String*,int32_t,int32_t,$OutputStream*,int32_t,$String*,$ControlArray*,$String*,$String*,Object$*,$Hashtable*)>(&LdapPoolManager::getLdapClient)), "javax.naming.NamingException"},
	{"getLong", "(Ljava/lang/String;J)J", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int64_t(*)($String*,int64_t)>(&LdapPoolManager::getLong))},
	{"getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$String*(*)($String*,$String*)>(&LdapPoolManager::getProperty))},
	{"isPoolingAllowed", "(Ljava/lang/String;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/util/Hashtable;)Z", "(Ljava/lang/String;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/util/Hashtable<**>;)Z", $STATIC, $method(static_cast<bool(*)($String*,$OutputStream*,$String*,$String*,$Hashtable*)>(&LdapPoolManager::isPoolingAllowed)), "javax.naming.NamingException"},
	{"lambda$getInteger$1", "(Ljava/lang/String;I)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)($String*,int32_t)>(&LdapPoolManager::lambda$getInteger$1))},
	{"lambda$getLong$2", "(Ljava/lang/String;J)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Long*(*)($String*,int64_t)>(&LdapPoolManager::lambda$getLong$2))},
	{"lambda$getProperty$0", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*,$String*)>(&LdapPoolManager::lambda$getProperty$0))},
	{"showStats", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrintStream*)>(&LdapPoolManager::showStats))},
	{}
};

$InnerClassInfo _LdapPoolManager_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapPoolManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LdapPoolManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapPoolManager",
	"java.lang.Object",
	nullptr,
	_LdapPoolManager_FieldInfo_,
	_LdapPoolManager_MethodInfo_,
	nullptr,
	nullptr,
	_LdapPoolManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapPoolManager$1"
};

$Object* allocate$LdapPoolManager($Class* clazz) {
	return $of($alloc(LdapPoolManager));
}

$String* LdapPoolManager::DEBUG = nullptr;
bool LdapPoolManager::debug = false;
bool LdapPoolManager::trace = false;
$String* LdapPoolManager::POOL_AUTH = nullptr;
$String* LdapPoolManager::POOL_PROTOCOL = nullptr;
$String* LdapPoolManager::MAX_POOL_SIZE = nullptr;
$String* LdapPoolManager::PREF_POOL_SIZE = nullptr;
$String* LdapPoolManager::INIT_POOL_SIZE = nullptr;
$String* LdapPoolManager::POOL_TIMEOUT = nullptr;
$String* LdapPoolManager::SASL_CALLBACK = nullptr;
$String* LdapPoolManager::DEFAULT_AUTH_MECHS = nullptr;
$String* LdapPoolManager::DEFAULT_PROTOCOLS = nullptr;
int64_t LdapPoolManager::idleTimeout = 0;
int32_t LdapPoolManager::maxSize = 0;
int32_t LdapPoolManager::prefSize = 0;
int32_t LdapPoolManager::initSize = 0;
bool LdapPoolManager::supportPlainProtocol = false;
bool LdapPoolManager::supportSslProtocol = false;
$PoolArray* LdapPoolManager::pools = nullptr;

void LdapPoolManager::init$() {
}

int32_t LdapPoolManager::findPool($String* mech) {
	$init(LdapPoolManager);
	if ("none"_s->equalsIgnoreCase(mech)) {
		return LdapPoolManager::NONE;
	} else if ("simple"_s->equalsIgnoreCase(mech)) {
		return LdapPoolManager::SIMPLE;
	} else if ("digest-md5"_s->equalsIgnoreCase(mech)) {
		return LdapPoolManager::DIGEST;
	}
	return -1;
}

bool LdapPoolManager::isPoolingAllowed($String* socketFactory, $OutputStream* trace, $String* authMech, $String* protocol, $Hashtable* env) {
	$init(LdapPoolManager);
	$useLocalCurrentObjectStackCache();
	if (trace != nullptr && !LdapPoolManager::debug || (protocol == nullptr && !LdapPoolManager::supportPlainProtocol) || ("ssl"_s->equalsIgnoreCase(protocol) && !LdapPoolManager::supportSslProtocol)) {
		d("Pooling disallowed due to tracing or unsupported pooling of protocol"_s);
		return false;
	}
	$var($String, COMPARATOR, "java.util.Comparator"_s);
	bool foundSockCmp = false;
	$init($LdapCtx);
	if ((socketFactory != nullptr) && !socketFactory->equals($LdapCtx::DEFAULT_SSL_FACTORY)) {
		try {
			$init($Obj);
			$Class* socketFactoryClass = $nc($Obj::helper)->loadClass(socketFactory);
			$var($ClassArray, interfaces, $nc(socketFactoryClass)->getInterfaces());
			for (int32_t i = 0; i < interfaces->length; ++i) {
				if ($nc($($nc(interfaces->get(i))->getCanonicalName()))->equals(COMPARATOR)) {
					foundSockCmp = true;
				}
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($CommunicationException, ce, $new($CommunicationException, "Loading the socket factory"_s));
			ce->setRootCause(e);
			$throw(ce);
		}
		if (!foundSockCmp) {
			return false;
		}
	}
	int32_t p = findPool(authMech);
	if (p < 0 || $nc(LdapPoolManager::pools)->get(p) == nullptr) {
		d("authmech not found: "_s, authMech);
		return false;
	}
	d("using authmech: "_s, authMech);
	switch (p) {
	case LdapPoolManager::NONE:
		{}
	case LdapPoolManager::SIMPLE:
		{
			return true;
		}
	case LdapPoolManager::DIGEST:
		{
			return (env == nullptr || $nc(env)->get(LdapPoolManager::SASL_CALLBACK) == nullptr);
		}
	}
	return false;
}

$LdapClient* LdapPoolManager::getLdapClient($String* host, int32_t port, $String* socketFactory, int32_t connTimeout, int32_t readTimeout, $OutputStream* trace, int32_t version, $String* authMech, $ControlArray* ctls, $String* protocol, $String* user, Object$* passwd, $Hashtable* env) {
	$init(LdapPoolManager);
	$useLocalCurrentObjectStackCache();
	$var($ClientId, id, nullptr);
	$var($Pool, pool, nullptr);
	int32_t p = findPool(authMech);
	if (p < 0 || ($assign(pool, $nc(LdapPoolManager::pools)->get(p))) == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Attempting to use pooling for an unsupported mechanism: "_s, authMech}));
	}
	switch (p) {
	case LdapPoolManager::NONE:
		{
			$assign(id, $new($ClientId, version, host, port, protocol, ctls, trace, socketFactory));
			break;
		}
	case LdapPoolManager::SIMPLE:
		{
			$assign(id, $new($SimpleClientId, version, host, port, protocol, ctls, trace, socketFactory, user, passwd));
			break;
		}
	case LdapPoolManager::DIGEST:
		{
			$assign(id, $new($DigestClientId, version, host, port, protocol, ctls, trace, socketFactory, user, passwd, env));
			break;
		}
	}
	return $cast($LdapClient, $nc(pool)->getPooledConnection(id, connTimeout, $$new($LdapClientFactory, host, port, socketFactory, connTimeout, readTimeout, trace)));
}

void LdapPoolManager::showStats($PrintStream* out) {
	$init(LdapPoolManager);
	$useLocalCurrentObjectStackCache();
	$nc(out)->println("***** start *****"_s);
	out->println($$str({"idle timeout: "_s, $$str(LdapPoolManager::idleTimeout)}));
	out->println($$str({"maximum pool size: "_s, $$str(LdapPoolManager::maxSize)}));
	out->println($$str({"preferred pool size: "_s, $$str(LdapPoolManager::prefSize)}));
	out->println($$str({"initial pool size: "_s, $$str(LdapPoolManager::initSize)}));
	out->println($$str({"protocol types: "_s, (LdapPoolManager::supportPlainProtocol ? "plain "_s : ""_s), (LdapPoolManager::supportSslProtocol ? "ssl"_s : ""_s)}));
	out->println($$str({"authentication types: "_s, ($nc(LdapPoolManager::pools)->get(LdapPoolManager::NONE) != nullptr ? "none "_s : ""_s), ($nc(LdapPoolManager::pools)->get(LdapPoolManager::SIMPLE) != nullptr ? "simple "_s : ""_s), ($nc(LdapPoolManager::pools)->get(LdapPoolManager::DIGEST) != nullptr ? "DIGEST-MD5 "_s : ""_s)}));
	for (int32_t i = 0; i < $nc(LdapPoolManager::pools)->length; ++i) {
		if ($nc(LdapPoolManager::pools)->get(i) != nullptr) {
			out->println($$str({(i == LdapPoolManager::NONE ? "anonymous pools"_s : i == LdapPoolManager::SIMPLE ? "simple auth pools"_s : i == LdapPoolManager::DIGEST ? "digest pools"_s : ""_s), ":"_s}));
			$nc($nc(LdapPoolManager::pools)->get(i))->showStats(out);
		}
	}
	out->println("***** end *****"_s);
}

void LdapPoolManager::expire(int64_t threshold) {
	$init(LdapPoolManager);
	for (int32_t i = 0; i < $nc(LdapPoolManager::pools)->length; ++i) {
		if ($nc(LdapPoolManager::pools)->get(i) != nullptr) {
			$nc($nc(LdapPoolManager::pools)->get(i))->expire(threshold);
		}
	}
}

void LdapPoolManager::d($String* msg) {
	$init(LdapPoolManager);
	if (LdapPoolManager::debug) {
		$init($System);
		$nc($System::err)->println($$str({"LdapPoolManager: "_s, msg}));
	}
}

void LdapPoolManager::d($String* msg, $String* o) {
	$init(LdapPoolManager);
	if (LdapPoolManager::debug) {
		$init($System);
		$nc($System::err)->println($$str({"LdapPoolManager: "_s, msg, o}));
	}
}

$String* LdapPoolManager::getProperty($String* propName, $String* defVal) {
	$init(LdapPoolManager);
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(LdapPoolManager$$Lambda$lambda$getProperty$0, propName, defVal)));
	return $cast($String, $AccessController::doPrivileged(pa));
}

int32_t LdapPoolManager::getInteger($String* propName, int32_t defVal) {
	$init(LdapPoolManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(LdapPoolManager$$Lambda$lambda$getInteger$1$1, propName, defVal)));
	return $nc(($cast($Integer, $($AccessController::doPrivileged(pa)))))->intValue();
}

int64_t LdapPoolManager::getLong($String* propName, int64_t defVal) {
	$init(LdapPoolManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(LdapPoolManager$$Lambda$lambda$getLong$2$2, propName, defVal)));
	return $nc(($cast($Long, $($AccessController::doPrivileged(pa)))))->longValue();
}

$Long* LdapPoolManager::lambda$getLong$2($String* propName, int64_t defVal) {
	$init(LdapPoolManager);
	return $Long::getLong(propName, defVal);
}

$Integer* LdapPoolManager::lambda$getInteger$1($String* propName, int32_t defVal) {
	$init(LdapPoolManager);
	return $Integer::getInteger(propName, defVal);
}

$String* LdapPoolManager::lambda$getProperty$0($String* propName, $String* defVal) {
	$init(LdapPoolManager);
	return $System::getProperty(propName, defVal);
}

void clinit$LdapPoolManager($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LdapPoolManager::DEBUG, "com.sun.jndi.ldap.connect.pool.debug"_s);
	$assignStatic(LdapPoolManager::POOL_AUTH, "com.sun.jndi.ldap.connect.pool.authentication"_s);
	$assignStatic(LdapPoolManager::POOL_PROTOCOL, "com.sun.jndi.ldap.connect.pool.protocol"_s);
	$assignStatic(LdapPoolManager::MAX_POOL_SIZE, "com.sun.jndi.ldap.connect.pool.maxsize"_s);
	$assignStatic(LdapPoolManager::PREF_POOL_SIZE, "com.sun.jndi.ldap.connect.pool.prefsize"_s);
	$assignStatic(LdapPoolManager::INIT_POOL_SIZE, "com.sun.jndi.ldap.connect.pool.initsize"_s);
	$assignStatic(LdapPoolManager::POOL_TIMEOUT, "com.sun.jndi.ldap.connect.pool.timeout"_s);
	$assignStatic(LdapPoolManager::SASL_CALLBACK, "java.naming.security.sasl.callback"_s);
	$assignStatic(LdapPoolManager::DEFAULT_AUTH_MECHS, "none simple"_s);
	$assignStatic(LdapPoolManager::DEFAULT_PROTOCOLS, "plain"_s);
	$beforeCallerSensitive();
	LdapPoolManager::debug = "all"_s->equalsIgnoreCase($(LdapPoolManager::getProperty(LdapPoolManager::DEBUG, nullptr)));
	LdapPoolManager::trace = LdapPoolManager::debug || "fine"_s->equalsIgnoreCase($(LdapPoolManager::getProperty(LdapPoolManager::DEBUG, nullptr)));
	LdapPoolManager::supportPlainProtocol = false;
	LdapPoolManager::supportSslProtocol = false;
	$assignStatic(LdapPoolManager::pools, $new($PoolArray, 3));
	{
		LdapPoolManager::maxSize = LdapPoolManager::getInteger(LdapPoolManager::MAX_POOL_SIZE, LdapPoolManager::DEFAULT_MAX_POOL_SIZE);
		LdapPoolManager::prefSize = LdapPoolManager::getInteger(LdapPoolManager::PREF_POOL_SIZE, LdapPoolManager::DEFAULT_PREF_POOL_SIZE);
		LdapPoolManager::initSize = LdapPoolManager::getInteger(LdapPoolManager::INIT_POOL_SIZE, LdapPoolManager::DEFAULT_INIT_POOL_SIZE);
		LdapPoolManager::idleTimeout = LdapPoolManager::getLong(LdapPoolManager::POOL_TIMEOUT, LdapPoolManager::DEFAULT_TIMEOUT);
		$var($String, str, LdapPoolManager::getProperty(LdapPoolManager::POOL_AUTH, LdapPoolManager::DEFAULT_AUTH_MECHS));
		$var($StringTokenizer, parser, $new($StringTokenizer, str));
		int32_t count = parser->countTokens();
		$var($String, mech, nullptr);
		int32_t p = 0;
		for (int32_t i = 0; i < count; ++i) {
			$init($Locale);
			$assign(mech, $nc($(parser->nextToken()))->toLowerCase($Locale::ENGLISH));
			if (mech->equals("anonymous"_s)) {
				$assign(mech, "none"_s);
			}
			p = LdapPoolManager::findPool(mech);
			if (p >= 0 && $nc(LdapPoolManager::pools)->get(p) == nullptr) {
				$nc(LdapPoolManager::pools)->set(p, $$new($Pool, LdapPoolManager::initSize, LdapPoolManager::prefSize, LdapPoolManager::maxSize));
			}
		}
		$assign(str, LdapPoolManager::getProperty(LdapPoolManager::POOL_PROTOCOL, LdapPoolManager::DEFAULT_PROTOCOLS));
		$assign(parser, $new($StringTokenizer, str));
		count = parser->countTokens();
		$var($String, proto, nullptr);
		for (int32_t i = 0; i < count; ++i) {
			$assign(proto, parser->nextToken());
			if ("plain"_s->equalsIgnoreCase(proto)) {
				LdapPoolManager::supportPlainProtocol = true;
			} else if ("ssl"_s->equalsIgnoreCase(proto)) {
				LdapPoolManager::supportSslProtocol = true;
			} else {
			}
		}
		if (LdapPoolManager::idleTimeout > 0) {
			$var($PrivilegedAction, pa, $new($LdapPoolManager$1));
			$AccessController::doPrivileged(pa);
		}
		if (LdapPoolManager::debug) {
			$init($System);
			LdapPoolManager::showStats($System::err);
		}
	}
}

LdapPoolManager::LdapPoolManager() {
}

$Class* LdapPoolManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LdapPoolManager$$Lambda$lambda$getProperty$0::classInfo$.name)) {
			return LdapPoolManager$$Lambda$lambda$getProperty$0::load$(name, initialize);
		}
		if (name->equals(LdapPoolManager$$Lambda$lambda$getInteger$1$1::classInfo$.name)) {
			return LdapPoolManager$$Lambda$lambda$getInteger$1$1::load$(name, initialize);
		}
		if (name->equals(LdapPoolManager$$Lambda$lambda$getLong$2$2::classInfo$.name)) {
			return LdapPoolManager$$Lambda$lambda$getLong$2$2::load$(name, initialize);
		}
	}
	$loadClass(LdapPoolManager, name, initialize, &_LdapPoolManager_ClassInfo_, clinit$LdapPoolManager, allocate$LdapPoolManager);
	return class$;
}

$Class* LdapPoolManager::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com