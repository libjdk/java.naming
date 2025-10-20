#include <com/sun/naming/internal/VersionHelper.h>

#include <com/sun/naming/internal/VersionHelper$InputStreamEnumeration.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
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
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/SecureClassLoader.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/ldap/LdapContext.h>
#include <jcpp.h>

#undef CONTROL_FACTORIES
#undef DNS_URL
#undef INITIAL_CONTEXT_FACTORY
#undef OBJECT_FACTORIES
#undef PROPS
#undef PROVIDER_URL
#undef STATE_FACTORIES
#undef TRUST_URL_CODE_BASE
#undef URL_PKG_PREFIXES

using $URLArray = $Array<::java::net::URL>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $VersionHelper$InputStreamEnumeration = ::com::sun::naming::internal::VersionHelper$InputStreamEnumeration;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Context = ::javax::naming::Context;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $LdapContext = ::javax::naming::ldap::LdapContext;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class VersionHelper$$Lambda$lambda$getJndiProperty$1 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getJndiProperty$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(int32_t i) {
		this->i = i;
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getJndiProperty$1(i));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getJndiProperty$1>());
	}
	int32_t i = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$lambda$getJndiProperty$1::fieldInfos[2] = {
	{"i", "I", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getJndiProperty$1, i)},
	{}
};
$MethodInfo VersionHelper$$Lambda$lambda$getJndiProperty$1::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getJndiProperty$1::*)(int32_t)>(&VersionHelper$$Lambda$lambda$getJndiProperty$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getJndiProperty$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJndiProperty$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getJndiProperty$1::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getJndiProperty$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getJndiProperty$1::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getJndiProperties$2$1 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getJndiProperties$2$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getJndiProperties$2());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getJndiProperties$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VersionHelper$$Lambda$lambda$getJndiProperties$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getJndiProperties$2$1::*)()>(&VersionHelper$$Lambda$lambda$getJndiProperties$2$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getJndiProperties$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJndiProperties$2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getJndiProperties$2$1::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getJndiProperties$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getJndiProperties$2$1::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getResourceAsStream$3$2 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* c, $String* name) {
		this->c = c;
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getResourceAsStream$3(c, name));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getResourceAsStream$3$2>());
	}
	$Class* c = nullptr;
	$String* name = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::fieldInfos[3] = {
	{"c", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, c)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, name)},
	{}
};
$MethodInfo VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::*)($Class*,$String*)>(&VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getResourceAsStream$3$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* filename) {
		$set(this, filename, filename);
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getJavaHomeConfStream$4(filename));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3>());
	}
	$String* filename = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::fieldInfos[2] = {
	{"filename", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, filename)},
	{}
};
$MethodInfo VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::*)($String*)>(&VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getResources$5$4 : public $PrivilegedExceptionAction {
	$class(VersionHelper$$Lambda$lambda$getResources$5$4, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($ClassLoader* cl, $String* name) {
		$set(this, cl, cl);
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getResources$5(cl, name));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getResources$5$4>());
	}
	$ClassLoader* cl = nullptr;
	$String* name = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$$Lambda$lambda$getResources$5$4::fieldInfos[3] = {
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResources$5$4, cl)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResources$5$4, name)},
	{}
};
$MethodInfo VersionHelper$$Lambda$lambda$getResources$5$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getResources$5$4::*)($ClassLoader*,$String*)>(&VersionHelper$$Lambda$lambda$getResources$5$4::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getResources$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getResources$5$4",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getResources$5$4::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getResources$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getResources$5$4::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getContextClassLoader$6$5 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getContextClassLoader$6());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$getContextClassLoader$6$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::*)()>(&VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getContextClassLoader$6$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::class$ = nullptr;

class VersionHelper$$Lambda$lambda$static$0$6 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$static$0$6, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$$Lambda$lambda$static$0$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VersionHelper$$Lambda$lambda$static$0$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$$Lambda$lambda$static$0$6::*)()>(&VersionHelper$$Lambda$lambda$static$0$6::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$$Lambda$lambda$static$0$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$$Lambda$lambda$static$0$6",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* VersionHelper$$Lambda$lambda$static$0$6::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$$Lambda$lambda$static$0$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$static$0$6::class$ = nullptr;

$FieldInfo _VersionHelper_FieldInfo_[] = {
	{"helper", "Lcom/sun/naming/internal/VersionHelper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, helper)},
	{"TRUST_URL_CODE_BASE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, TRUST_URL_CODE_BASE)},
	{"PROPS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(VersionHelper, PROPS)},
	{"INITIAL_CONTEXT_FACTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, INITIAL_CONTEXT_FACTORY)},
	{"OBJECT_FACTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, OBJECT_FACTORIES)},
	{"URL_PKG_PREFIXES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, URL_PKG_PREFIXES)},
	{"STATE_FACTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, STATE_FACTORIES)},
	{"PROVIDER_URL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, PROVIDER_URL)},
	{"DNS_URL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, DNS_URL)},
	{"CONTROL_FACTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, CONTROL_FACTORIES)},
	{}
};

$MethodInfo _VersionHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VersionHelper::*)()>(&VersionHelper::init$))},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, 0, $method(static_cast<$ClassLoader*(VersionHelper::*)()>(&VersionHelper::getContextClassLoader))},
	{"getJavaHomeConfStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, 0, $method(static_cast<$InputStream*(VersionHelper::*)($String*)>(&VersionHelper::getJavaHomeConfStream))},
	{"getJndiProperties", "()[Ljava/lang/String;", nullptr, 0, $method(static_cast<$StringArray*(VersionHelper::*)()>(&VersionHelper::getJndiProperties))},
	{"getJndiProperty", "(I)Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(VersionHelper::*)(int32_t)>(&VersionHelper::getJndiProperty))},
	{"getResourceAsStream", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/io/InputStream;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/io/InputStream;", 0, $method(static_cast<$InputStream*(VersionHelper::*)($Class*,$String*)>(&VersionHelper::getResourceAsStream))},
	{"getResources", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljava/io/InputStream;>;", 0, $method(static_cast<$NamingEnumeration*(VersionHelper::*)($ClassLoader*,$String*)>(&VersionHelper::getResources)), "java.io.IOException"},
	{"getUrlArray", "(Ljava/lang/String;)[Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URLArray*(*)($String*)>(&VersionHelper::getUrlArray)), "java.net.MalformedURLException"},
	{"getVersionHelper", "()Lcom/sun/naming/internal/VersionHelper;", nullptr, $PUBLIC | $STATIC, $method(static_cast<VersionHelper*(*)()>(&VersionHelper::getVersionHelper))},
	{"lambda$getContextClassLoader$6", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClassLoader*(*)()>(&VersionHelper::lambda$getContextClassLoader$6))},
	{"lambda$getJavaHomeConfStream$4", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InputStream*(*)($String*)>(&VersionHelper::lambda$getJavaHomeConfStream$4))},
	{"lambda$getJndiProperties$2", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Properties*(*)()>(&VersionHelper::lambda$getJndiProperties$2))},
	{"lambda$getJndiProperty$1", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)(int32_t)>(&VersionHelper::lambda$getJndiProperty$1))},
	{"lambda$getResourceAsStream$3", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InputStream*(*)($Class*,$String*)>(&VersionHelper::lambda$getResourceAsStream$3))},
	{"lambda$getResources$5", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/util/Enumeration;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Enumeration*(*)($ClassLoader*,$String*)>(&VersionHelper::lambda$getResources$5)), "java.lang.Exception"},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&VersionHelper::lambda$static$0))},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(VersionHelper::*)($String*)>(&VersionHelper::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(VersionHelper::*)($String*,$String*)>(&VersionHelper::loadClass)), "java.lang.ClassNotFoundException,java.net.MalformedURLException"},
	{"loadClass", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class<*>;", 0, $method(static_cast<$Class*(VersionHelper::*)($String*,bool,$ClassLoader*)>(&VersionHelper::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", 0, $method(static_cast<$Class*(VersionHelper::*)($String*,$ClassLoader*)>(&VersionHelper::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClassWithoutInit", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(static_cast<$Class*(VersionHelper::*)($String*)>(&VersionHelper::loadClassWithoutInit)), "java.lang.ClassNotFoundException"},
	{"resolveName", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/String;", $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Class*,$String*)>(&VersionHelper::resolveName))},
	{}
};

$InnerClassInfo _VersionHelper_InnerClassesInfo_[] = {
	{"com.sun.naming.internal.VersionHelper$InputStreamEnumeration", "com.sun.naming.internal.VersionHelper", "InputStreamEnumeration", $PRIVATE},
	{}
};

$ClassInfo _VersionHelper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.naming.internal.VersionHelper",
	"java.lang.Object",
	nullptr,
	_VersionHelper_FieldInfo_,
	_VersionHelper_MethodInfo_,
	nullptr,
	nullptr,
	_VersionHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.naming.internal.VersionHelper$InputStreamEnumeration"
};

$Object* allocate$VersionHelper($Class* clazz) {
	return $of($alloc(VersionHelper));
}

VersionHelper* VersionHelper::helper = nullptr;

bool VersionHelper::TRUST_URL_CODE_BASE = false;
$StringArray* VersionHelper::PROPS = nullptr;

void VersionHelper::init$() {
}

VersionHelper* VersionHelper::getVersionHelper() {
	$init(VersionHelper);
	return VersionHelper::helper;
}

$Class* VersionHelper::loadClass($String* className) {
	return loadClass(className, $(getContextClassLoader()));
}

$Class* VersionHelper::loadClassWithoutInit($String* className) {
	return loadClass(className, false, $(getContextClassLoader()));
}

$Class* VersionHelper::loadClass($String* className, $String* codebase) {
	$useLocalCurrentObjectStackCache();
	if (VersionHelper::TRUST_URL_CODE_BASE) {
		$var($ClassLoader, parent, getContextClassLoader());
		$var($ClassLoader, cl, $URLClassLoader::newInstance($(getUrlArray(codebase)), parent));
		return loadClass(className, cl);
	} else {
		return nullptr;
	}
}

$Class* VersionHelper::loadClass($String* className, bool initialize, $ClassLoader* cl) {
	$beforeCallerSensitive();
	$Class* cls = $Class::forName(className, initialize, cl);
	return cls;
}

$Class* VersionHelper::loadClass($String* className, $ClassLoader* cl) {
	return loadClass(className, true, cl);
}

$String* VersionHelper::getJndiProperty(int32_t i) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$getJndiProperty$1, i)));
	return $cast($String, $AccessController::doPrivileged(act));
}

$StringArray* VersionHelper::getJndiProperties() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$getJndiProperties$2$1)));
	$var($Properties, sysProps, $cast($Properties, $AccessController::doPrivileged(act)));
	if (sysProps == nullptr) {
		return nullptr;
	}
	$var($StringArray, jProps, $new($StringArray, $nc(VersionHelper::PROPS)->length));
	for (int32_t i = 0; i < $nc(VersionHelper::PROPS)->length; ++i) {
		jProps->set(i, $($nc(sysProps)->getProperty($nc(VersionHelper::PROPS)->get(i))));
	}
	return jProps;
}

$String* VersionHelper::resolveName($Class* c, $String* name$renamed) {
	$init(VersionHelper);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	if (name == nullptr) {
		return name;
	}
	if (!$nc(name)->startsWith("/"_s)) {
		if (!$nc(c)->isPrimitive()) {
			$var($String, baseName, c->getPackageName());
			if (!$nc(baseName)->isEmpty()) {
				$assign(name, $str({$(baseName->replace(u'.', u'/')), "/"_s, name}));
			}
		}
	} else {
		$assign(name, name->substring(1));
	}
	return name;
}

$InputStream* VersionHelper::getResourceAsStream($Class* c, $String* name) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, c, name)));
	return $cast($InputStream, $AccessController::doPrivileged(act));
}

$InputStream* VersionHelper::getJavaHomeConfStream($String* filename) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, filename)));
	return $cast($InputStream, $AccessController::doPrivileged(act));
}

$NamingEnumeration* VersionHelper::getResources($ClassLoader* cl, $String* name) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Enumeration, urls, nullptr);
	$var($PrivilegedExceptionAction, act, static_cast<$PrivilegedExceptionAction*>($new(VersionHelper$$Lambda$lambda$getResources$5$4, cl, name)));
	try {
		$assign(urls, $cast($Enumeration, $AccessController::doPrivileged(act)));
	} catch ($PrivilegedActionException&) {
		$var($PrivilegedActionException, e, $catch());
		$throw($cast($IOException, $(e->getException())));
	}
	return $new($VersionHelper$InputStreamEnumeration, this, urls);
}

$ClassLoader* VersionHelper::getContextClassLoader() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5)));
	return $cast($ClassLoader, $AccessController::doPrivileged(act));
}

$URLArray* VersionHelper::getUrlArray($String* codebase) {
	$init(VersionHelper);
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, parser, $new($StringTokenizer, codebase));
	$var($List, list, $new($ArrayList));
	while (parser->hasMoreTokens()) {
		list->add($$new($URL, $(parser->nextToken())));
	}
	return $fcast($URLArray, list->toArray($$new($URLArray, 0)));
}

$ClassLoader* VersionHelper::lambda$getContextClassLoader$6() {
	$init(VersionHelper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	if (loader == nullptr) {
		$assign(loader, $ClassLoader::getSystemClassLoader());
	}
	return loader;
}

$Enumeration* VersionHelper::lambda$getResources$5($ClassLoader* cl, $String* name) {
	$init(VersionHelper);
	return (cl == nullptr) ? $ClassLoader::getSystemResources(name) : $nc(cl)->getResources(name);
}

$InputStream* VersionHelper::lambda$getJavaHomeConfStream$4($String* filename) {
	$init(VersionHelper);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, javahome, $System::getProperty("java.home"_s));
		if (javahome == nullptr) {
			return nullptr;
		}
		return $Files::newInputStream($($Path::of(javahome, $$new($StringArray, {
			"conf"_s,
			filename
		}))), $$new($OpenOptionArray, 0));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$InputStream* VersionHelper::lambda$getResourceAsStream$3($Class* c, $String* name) {
	$init(VersionHelper);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $nc($($nc(c)->getModule()))->getResourceAsStream($(resolveName(c, name)));
	} catch ($IOException&) {
		$var($IOException, x, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$Properties* VersionHelper::lambda$getJndiProperties$2() {
	$init(VersionHelper);
	try {
		return $System::getProperties();
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* VersionHelper::lambda$getJndiProperty$1(int32_t i) {
	$init(VersionHelper);
	try {
		return $System::getProperty($nc(VersionHelper::PROPS)->get(i));
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* VersionHelper::lambda$static$0() {
	$init(VersionHelper);
	return $System::getProperty("com.sun.jndi.ldap.object.trustURLCodebase"_s, "false"_s);
}

void clinit$VersionHelper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(VersionHelper::helper, $new(VersionHelper));
	{
		$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$$Lambda$lambda$static$0$6)));
		$var($String, trust, $cast($String, $AccessController::doPrivileged(act)));
		VersionHelper::TRUST_URL_CODE_BASE = "true"_s->equalsIgnoreCase(trust);
	}
		$init($Context);
		$init($LdapContext);
	$assignStatic(VersionHelper::PROPS, $new($StringArray, {
		$Context::INITIAL_CONTEXT_FACTORY,
		$Context::OBJECT_FACTORIES,
		$Context::URL_PKG_PREFIXES,
		$Context::STATE_FACTORIES,
		$Context::PROVIDER_URL,
		$Context::DNS_URL,
		$LdapContext::CONTROL_FACTORIES
	}));
}

VersionHelper::VersionHelper() {
}

$Class* VersionHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VersionHelper$$Lambda$lambda$getJndiProperty$1::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getJndiProperty$1::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$getJndiProperties$2$1::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getJndiProperties$2$1::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$getResources$5$4::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getResources$5$4::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::load$(name, initialize);
		}
		if (name->equals(VersionHelper$$Lambda$lambda$static$0$6::classInfo$.name)) {
			return VersionHelper$$Lambda$lambda$static$0$6::load$(name, initialize);
		}
	}
	$loadClass(VersionHelper, name, initialize, &_VersionHelper_ClassInfo_, clinit$VersionHelper, allocate$VersionHelper);
	return class$;
}

$Class* VersionHelper::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com