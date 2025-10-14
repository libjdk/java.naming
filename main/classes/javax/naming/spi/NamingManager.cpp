#include <javax/naming/spi/NamingManager.h>

#include <com/sun/naming/internal/FactoryEnumeration.h>
#include <com/sun/naming/internal/ObjectFactoriesFilter.h>
#include <com/sun/naming/internal/ResourceManager.h>
#include <com/sun/naming/internal/VersionHelper.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
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
#include <java/util/Optional.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/Referenceable.h>
#include <javax/naming/StringRefAddr.h>
#include <javax/naming/spi/ContinuationContext.h>
#include <javax/naming/spi/InitialContextFactory.h>
#include <javax/naming/spi/InitialContextFactoryBuilder.h>
#include <javax/naming/spi/NamingManager$FactoryInitializationError.h>
#include <javax/naming/spi/ObjectFactory.h>
#include <javax/naming/spi/ObjectFactoryBuilder.h>
#include <javax/naming/spi/Resolver.h>
#include <javax/naming/spi/StateFactory.h>
#include <jdk/internal/loader/AbstractClassLoaderValue$Sub.h>
#include <jdk/internal/loader/ClassLoaderValue.h>
#include <jcpp.h>

#undef CPE
#undef FACTORIES_CACHE
#undef INITIAL_CONTEXT_FACTORY
#undef OBJECT_FACTORIES
#undef STATE_FACTORIES
#undef URL_PKG_PREFIXES

using $FactoryEnumeration = ::com::sun::naming::internal::FactoryEnumeration;
using $ObjectFactoriesFilter = ::com::sun::naming::internal::ObjectFactoriesFilter;
using $ResourceManager = ::com::sun::naming::internal::ResourceManager;
using $VersionHelper = ::com::sun::naming::internal::VersionHelper;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $Optional = ::java::util::Optional;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;
using $NoInitialContextException = ::javax::naming::NoInitialContextException;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $Referenceable = ::javax::naming::Referenceable;
using $StringRefAddr = ::javax::naming::StringRefAddr;
using $ContinuationContext = ::javax::naming::spi::ContinuationContext;
using $InitialContextFactory = ::javax::naming::spi::InitialContextFactory;
using $InitialContextFactoryBuilder = ::javax::naming::spi::InitialContextFactoryBuilder;
using $NamingManager$FactoryInitializationError = ::javax::naming::spi::NamingManager$FactoryInitializationError;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;
using $ObjectFactoryBuilder = ::javax::naming::spi::ObjectFactoryBuilder;
using $Resolver = ::javax::naming::spi::Resolver;
using $StateFactory = ::javax::naming::spi::StateFactory;
using $AbstractClassLoaderValue = ::jdk::internal::loader::AbstractClassLoaderValue;
using $AbstractClassLoaderValue$Sub = ::jdk::internal::loader::AbstractClassLoaderValue$Sub;
using $ClassLoaderValue = ::jdk::internal::loader::ClassLoaderValue;

namespace javax {
	namespace naming {
		namespace spi {

class NamingManager$$Lambda$lambda$getInitialContext$0 : public $PrivilegedAction {
	$class(NamingManager$$Lambda$lambda$getInitialContext$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(NamingManager::lambda$getInitialContext$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NamingManager$$Lambda$lambda$getInitialContext$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NamingManager$$Lambda$lambda$getInitialContext$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NamingManager$$Lambda$lambda$getInitialContext$0::*)()>(&NamingManager$$Lambda$lambda$getInitialContext$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo NamingManager$$Lambda$lambda$getInitialContext$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.naming.spi.NamingManager$$Lambda$lambda$getInitialContext$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* NamingManager$$Lambda$lambda$getInitialContext$0::load$($String* name, bool initialize) {
	$loadClass(NamingManager$$Lambda$lambda$getInitialContext$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NamingManager$$Lambda$lambda$getInitialContext$0::class$ = nullptr;

class NamingManager$$Lambda$lambda$getInitialContext$1$1 : public $BiFunction {
	$class(NamingManager$$Lambda$lambda$getInitialContext$1$1, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* ld, Object$* ky) override {
		 return $of(NamingManager::lambda$getInitialContext$1($cast($ClassLoader, ld), $cast($AbstractClassLoaderValue$Sub, ky)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NamingManager$$Lambda$lambda$getInitialContext$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NamingManager$$Lambda$lambda$getInitialContext$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NamingManager$$Lambda$lambda$getInitialContext$1$1::*)()>(&NamingManager$$Lambda$lambda$getInitialContext$1$1::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo NamingManager$$Lambda$lambda$getInitialContext$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.naming.spi.NamingManager$$Lambda$lambda$getInitialContext$1$1",
	"java.lang.Object",
	"java.util.function.BiFunction",
	nullptr,
	methodInfos
};
$Class* NamingManager$$Lambda$lambda$getInitialContext$1$1::load$($String* name, bool initialize) {
	$loadClass(NamingManager$$Lambda$lambda$getInitialContext$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NamingManager$$Lambda$lambda$getInitialContext$1$1::class$ = nullptr;

class NamingManager$$Lambda$lambda$getFactory$2$2 : public $Predicate {
	$class(NamingManager$$Lambda$lambda$getFactory$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* className) {
		$set(this, className, className);
	}
	virtual bool test(Object$* p) override {
		 return NamingManager::lambda$getFactory$2(className, $cast($ServiceLoader$Provider, p));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NamingManager$$Lambda$lambda$getFactory$2$2>());
	}
	$String* className = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo NamingManager$$Lambda$lambda$getFactory$2$2::fieldInfos[2] = {
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(NamingManager$$Lambda$lambda$getFactory$2$2, className)},
	{}
};
$MethodInfo NamingManager$$Lambda$lambda$getFactory$2$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NamingManager$$Lambda$lambda$getFactory$2$2::*)($String*)>(&NamingManager$$Lambda$lambda$getFactory$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo NamingManager$$Lambda$lambda$getFactory$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.naming.spi.NamingManager$$Lambda$lambda$getFactory$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* NamingManager$$Lambda$lambda$getFactory$2$2::load$($String* name, bool initialize) {
	$loadClass(NamingManager$$Lambda$lambda$getFactory$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NamingManager$$Lambda$lambda$getFactory$2$2::class$ = nullptr;

class NamingManager$$Lambda$get$3 : public $Function {
	$class(NamingManager$$Lambda$get$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($ServiceLoader$Provider, inst$)->get();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NamingManager$$Lambda$get$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NamingManager$$Lambda$get$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NamingManager$$Lambda$get$3::*)()>(&NamingManager$$Lambda$get$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo NamingManager$$Lambda$get$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.naming.spi.NamingManager$$Lambda$get$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* NamingManager$$Lambda$get$3::load$($String* name, bool initialize) {
	$loadClass(NamingManager$$Lambda$get$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NamingManager$$Lambda$get$3::class$ = nullptr;

$FieldInfo _NamingManager_FieldInfo_[] = {
	{"helper", "Lcom/sun/naming/internal/VersionHelper;", nullptr, $STATIC | $FINAL, $staticField(NamingManager, helper)},
	{"object_factory_builder", "Ljavax/naming/spi/ObjectFactoryBuilder;", nullptr, $PRIVATE | $STATIC, $staticField(NamingManager, object_factory_builder)},
	{"FACTORIES_CACHE", "Ljdk/internal/loader/ClassLoaderValue;", "Ljdk/internal/loader/ClassLoaderValue<Ljavax/naming/spi/InitialContextFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(NamingManager, FACTORIES_CACHE)},
	{"defaultPkgPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NamingManager, defaultPkgPrefix)},
	{"initctx_factory_builder", "Ljavax/naming/spi/InitialContextFactoryBuilder;", nullptr, $PRIVATE | $STATIC, $staticField(NamingManager, initctx_factory_builder)},
	{"CPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NamingManager, CPE)},
	{}
};

$MethodInfo _NamingManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NamingManager::*)()>(&NamingManager::init$))},
	{"createObjectFromFactories", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::createObjectFromFactories)), "java.lang.Exception"},
	{"getContext", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $STATIC, $method(static_cast<$Context*(*)(Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::getContext)), "javax.naming.NamingException"},
	{"getContinuationContext", "(Ljavax/naming/CannotProceedException;)Ljavax/naming/Context;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Context*(*)($CannotProceedException*)>(&NamingManager::getContinuationContext)), "javax.naming.NamingException"},
	{"getFactory", "(Ljava/lang/String;)Ljavax/naming/spi/InitialContextFactory;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InitialContextFactory*(*)($String*)>(&NamingManager::getFactory))},
	{"getInitialContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC | $STATIC, $method(static_cast<$Context*(*)($Hashtable*)>(&NamingManager::getInitialContext)), "javax.naming.NamingException"},
	{"getInitialContextFactoryBuilder", "()Ljavax/naming/spi/InitialContextFactoryBuilder;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$InitialContextFactoryBuilder*(*)()>(&NamingManager::getInitialContextFactoryBuilder))},
	{"getObjectFactoryBuilder", "()Ljavax/naming/spi/ObjectFactoryBuilder;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$ObjectFactoryBuilder*(*)()>(&NamingManager::getObjectFactoryBuilder))},
	{"getObjectFactoryFromReference", "(Ljavax/naming/Reference;Ljava/lang/String;)Ljavax/naming/spi/ObjectFactory;", nullptr, $STATIC, $method(static_cast<$ObjectFactory*(*)($Reference*,$String*)>(&NamingManager::getObjectFactoryFromReference)), "java.lang.IllegalAccessException,java.lang.InstantiationException,java.net.MalformedURLException"},
	{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::getObjectInstance)), "java.lang.Exception"},
	{"getResolver", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljavax/naming/spi/Resolver;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/Resolver;", $STATIC, $method(static_cast<$Resolver*(*)(Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::getResolver)), "javax.naming.NamingException"},
	{"getStateToBind", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::getStateToBind)), "javax.naming.NamingException"},
	{"getURLContext", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC | $STATIC, $method(static_cast<$Context*(*)($String*,$Hashtable*)>(&NamingManager::getURLContext)), "javax.naming.NamingException"},
	{"getURLObject", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($String*,Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::getURLObject)), "javax.naming.NamingException"},
	{"getURLScheme", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&NamingManager::getURLScheme))},
	{"hasInitialContextFactoryBuilder", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&NamingManager::hasInitialContextFactoryBuilder))},
	{"lambda$getFactory$2", "(Ljava/lang/String;Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$ServiceLoader$Provider*)>(&NamingManager::lambda$getFactory$2))},
	{"lambda$getInitialContext$0", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ClassLoader*(*)()>(&NamingManager::lambda$getInitialContext$0))},
	{"lambda$getInitialContext$1", "(Ljava/lang/ClassLoader;Ljdk/internal/loader/AbstractClassLoaderValue$Sub;)Ljavax/naming/spi/InitialContextFactory;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InitialContextFactory*(*)($ClassLoader*,$AbstractClassLoaderValue$Sub*)>(&NamingManager::lambda$getInitialContext$1))},
	{"processURL", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Name*,$Context*,$Hashtable*)>(&NamingManager::processURL)), "javax.naming.NamingException"},
	{"processURLAddrs", "(Ljavax/naming/Reference;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljavax/naming/Reference;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($Reference*,$Name*,$Context*,$Hashtable*)>(&NamingManager::processURLAddrs)), "javax.naming.NamingException"},
	{"setInitialContextFactoryBuilder", "(Ljavax/naming/spi/InitialContextFactoryBuilder;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($InitialContextFactoryBuilder*)>(&NamingManager::setInitialContextFactoryBuilder)), "javax.naming.NamingException"},
	{"setObjectFactoryBuilder", "(Ljavax/naming/spi/ObjectFactoryBuilder;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ObjectFactoryBuilder*)>(&NamingManager::setObjectFactoryBuilder)), "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _NamingManager_InnerClassesInfo_[] = {
	{"javax.naming.spi.NamingManager$FactoryInitializationError", "javax.naming.spi.NamingManager", "FactoryInitializationError", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NamingManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.spi.NamingManager",
	"java.lang.Object",
	nullptr,
	_NamingManager_FieldInfo_,
	_NamingManager_MethodInfo_,
	nullptr,
	nullptr,
	_NamingManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.naming.spi.NamingManager$FactoryInitializationError"
};

$Object* allocate$NamingManager($Class* clazz) {
	return $of($alloc(NamingManager));
}

$VersionHelper* NamingManager::helper = nullptr;

$ObjectFactoryBuilder* NamingManager::object_factory_builder = nullptr;
$ClassLoaderValue* NamingManager::FACTORIES_CACHE = nullptr;
$String* NamingManager::defaultPkgPrefix = nullptr;
$InitialContextFactoryBuilder* NamingManager::initctx_factory_builder = nullptr;

$String* NamingManager::CPE = nullptr;

void NamingManager::init$() {
}

void NamingManager::setObjectFactoryBuilder($ObjectFactoryBuilder* builder) {
	$load(NamingManager);
	$synchronized(class$) {
		$init(NamingManager);
		if (NamingManager::object_factory_builder != nullptr) {
			$throwNew($IllegalStateException, "ObjectFactoryBuilder already set"_s);
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$assignStatic(NamingManager::object_factory_builder, builder);
	}
}

$ObjectFactoryBuilder* NamingManager::getObjectFactoryBuilder() {
	$load(NamingManager);
	$synchronized(class$) {
		$init(NamingManager);
		return NamingManager::object_factory_builder;
	}
}

$ObjectFactory* NamingManager::getObjectFactoryFromReference($Reference* ref, $String* factoryName) {
	$init(NamingManager);
	$beforeCallerSensitive();
	$Class* clas = nullptr;
	try {
		clas = $nc(NamingManager::helper)->loadClassWithoutInit(factoryName);
		if (!$ObjectFactoriesFilter::canInstantiateObjectsFactory(clas)) {
			return nullptr;
		}
	} catch ($ClassNotFoundException&) {
		$catch();
	}
	$var($String, codebase, nullptr);
	if (clas == nullptr && ($assign(codebase, $nc(ref)->getFactoryClassLocation())) != nullptr) {
		try {
			clas = $nc(NamingManager::helper)->loadClass(factoryName, codebase);
			if (clas == nullptr || !$ObjectFactoriesFilter::canInstantiateObjectsFactory(clas)) {
				return nullptr;
			}
		} catch ($ClassNotFoundException&) {
			$catch();
		}
	}
	$var($ObjectFactory, result, (clas != nullptr) ? $cast($ObjectFactory, $nc(clas)->newInstance()) : ($ObjectFactory*)nullptr);
	return result;
}

$Object* NamingManager::createObjectFromFactories(Object$* obj, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$init($Context);
	$var($FactoryEnumeration, factories, $ResourceManager::getFactories($Context::OBJECT_FACTORIES, environment, nameCtx));
	if (factories == nullptr) {
		return $of(nullptr);
	}
	$var($ObjectFactory, factory, nullptr);
	$var($Object, answer, nullptr);
	while (answer == nullptr && $nc(factories)->hasMore()) {
		$assign(factory, $cast($ObjectFactory, factories->next()));
		$assign(answer, $nc(factory)->getObjectInstance(obj, name, nameCtx, environment));
	}
	return $of(answer);
}

$String* NamingManager::getURLScheme($String* str) {
	$init(NamingManager);
	int32_t colon_posn = $nc(str)->indexOf((int32_t)u':');
	int32_t slash_posn = str->indexOf((int32_t)u'/');
	if (colon_posn > 0 && (slash_posn == -1 || colon_posn < slash_posn)) {
		return str->substring(0, colon_posn);
	}
	return nullptr;
}

$Object* NamingManager::getObjectInstance(Object$* refInfo, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$var($ObjectFactory, factory, nullptr);
	$var($ObjectFactoryBuilder, builder, getObjectFactoryBuilder());
	if (builder != nullptr) {
		$assign(factory, builder->createObjectFactory(refInfo, environment));
		return $of($nc(factory)->getObjectInstance(refInfo, name, nameCtx, environment));
	}
	$var($Reference, ref, nullptr);
	if ($instanceOf($Reference, refInfo)) {
		$assign(ref, $cast($Reference, refInfo));
	} else if ($instanceOf($Referenceable, refInfo)) {
		$assign(ref, $nc((($cast($Referenceable, refInfo))))->getReference());
	}
	$var($Object, answer, nullptr);
	if (ref != nullptr) {
		$var($String, f, ref->getFactoryClassName());
		if (f != nullptr) {
			$assign(factory, getObjectFactoryFromReference(ref, f));
			if (factory != nullptr) {
				return $of(factory->getObjectInstance(ref, name, nameCtx, environment));
			}
			return $of(refInfo);
		} else {
			$assign(answer, processURLAddrs(ref, name, nameCtx, environment));
			if (answer != nullptr) {
				return $of(answer);
			}
		}
	}
	$assign(answer, createObjectFromFactories(refInfo, name, nameCtx, environment));
	return $of((answer != nullptr) ? answer : $of(refInfo));
}

$Object* NamingManager::processURLAddrs($Reference* ref, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	for (int32_t i = 0; i < $nc(ref)->size(); ++i) {
		$var($RefAddr, addr, ref->get(i));
		if ($instanceOf($StringRefAddr, addr) && $nc($($nc(addr)->getType()))->equalsIgnoreCase("URL"_s)) {
			$var($String, url, $cast($String, addr->getContent()));
			$var($Object, answer, processURL(url, name, nameCtx, environment));
			if (answer != nullptr) {
				return $of(answer);
			}
		}
	}
	return $of(nullptr);
}

$Object* NamingManager::processURL(Object$* refInfo, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$var($Object, answer, nullptr);
	if ($instanceOf($String, refInfo)) {
		$var($String, url, $cast($String, refInfo));
		$var($String, scheme, getURLScheme(url));
		if (scheme != nullptr) {
			$assign(answer, getURLObject(scheme, refInfo, name, nameCtx, environment));
			if (answer != nullptr) {
				return $of(answer);
			}
		}
	}
	if ($instanceOf($StringArray, refInfo)) {
		$var($StringArray, urls, $cast($StringArray, refInfo));
		for (int32_t i = 0; i < $nc(urls)->length; ++i) {
			$var($String, scheme, getURLScheme(urls->get(i)));
			if (scheme != nullptr) {
				$assign(answer, getURLObject(scheme, refInfo, name, nameCtx, environment));
				if (answer != nullptr) {
					return $of(answer);
				}
			}
		}
	}
	return $of(nullptr);
}

$Context* NamingManager::getContext(Object$* obj, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$var($Object, answer, nullptr);
	if ($instanceOf($Context, obj)) {
		return $cast($Context, obj);
	}
	try {
		$assign(answer, getObjectInstance(obj, name, nameCtx, environment));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	return ($instanceOf($Context, answer)) ? $cast($Context, answer) : ($Context*)nullptr;
}

$Resolver* NamingManager::getResolver(Object$* obj, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$var($Object, answer, nullptr);
	if ($instanceOf($Resolver, obj)) {
		return $cast($Resolver, obj);
	}
	try {
		$assign(answer, getObjectInstance(obj, name, nameCtx, environment));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	return ($instanceOf($Resolver, answer)) ? $cast($Resolver, answer) : ($Resolver*)nullptr;
}

$Context* NamingManager::getURLContext($String* scheme, $Hashtable* environment) {
	$init(NamingManager);
	$var($Object, answer, getURLObject(scheme, nullptr, nullptr, nullptr, environment));
	if ($instanceOf($Context, answer)) {
		return $cast($Context, answer);
	} else {
		return nullptr;
	}
}

$Object* NamingManager::getURLObject($String* scheme, Object$* urlInfo, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$init($Context);
	$var($ObjectFactory, factory, $cast($ObjectFactory, $ResourceManager::getFactory($Context::URL_PKG_PREFIXES, environment, nameCtx, $$str({"."_s, scheme, "."_s, scheme, "URLContextFactory"_s}), NamingManager::defaultPkgPrefix)));
	if (factory == nullptr) {
		return $of(nullptr);
	}
	try {
		return $of($nc(factory)->getObjectInstance(urlInfo, name, nameCtx, environment));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	$shouldNotReachHere();
}

$InitialContextFactoryBuilder* NamingManager::getInitialContextFactoryBuilder() {
	$load(NamingManager);
	$synchronized(class$) {
		$init(NamingManager);
		return NamingManager::initctx_factory_builder;
	}
}

$Context* NamingManager::getInitialContext($Hashtable* env) {
	$init(NamingManager);
	$beforeCallerSensitive();
	$var($ClassLoader, loader, nullptr);
	$var($InitialContextFactory, factory, nullptr);
	$var($InitialContextFactoryBuilder, builder, getInitialContextFactoryBuilder());
	if (builder == nullptr) {
		$init($Context);
		$var($String, className, env != nullptr ? $cast($String, $nc(env)->get($Context::INITIAL_CONTEXT_FACTORY)) : ($String*)nullptr);
		if (className == nullptr) {
			$var($NoInitialContextException, ne, $new($NoInitialContextException, $$str({"Need to specify class name in environment or system property, or in an application resource file: "_s, $Context::INITIAL_CONTEXT_FACTORY})));
			$throw(ne);
		}
		if ($System::getSecurityManager() == nullptr) {
			$assign(loader, $($Thread::currentThread())->getContextClassLoader());
			if (loader == nullptr) {
				$assign(loader, $ClassLoader::getSystemClassLoader());
			}
		} else {
			$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(NamingManager$$Lambda$lambda$getInitialContext$0)));
			$assign(loader, $cast($ClassLoader, $AccessController::doPrivileged(pa)));
		}
		$var($AbstractClassLoaderValue$Sub, key, $nc(NamingManager::FACTORIES_CACHE)->sub(className));
		try {
			$assign(factory, $cast($InitialContextFactory, $nc(key)->computeIfAbsent(loader, static_cast<$BiFunction*>($$new(NamingManager$$Lambda$lambda$getInitialContext$1$1)))));
		} catch ($NamingManager$FactoryInitializationError&) {
			$var($NamingManager$FactoryInitializationError, e, $catch());
			$throw($($cast($NoInitialContextException, e->getCause())));
		}
	} else {
		$assign(factory, $nc(builder)->createInitialContextFactory(env));
	}
	return $nc(factory)->getInitialContext(env);
}

$InitialContextFactory* NamingManager::getFactory($String* className) {
	$init(NamingManager);
	$beforeCallerSensitive();
	$var($InitialContextFactory, factory, nullptr);
	try {
		$load($InitialContextFactory);
		$var($ServiceLoader, loader, $ServiceLoader::load($InitialContextFactory::class$));
		$assign(factory, $cast($InitialContextFactory, $nc($($nc($($nc($($nc($($nc(loader)->stream()))->filter(static_cast<$Predicate*>($$new(NamingManager$$Lambda$lambda$getFactory$2$2, className)))))->findFirst()))->map(static_cast<$Function*>($$new(NamingManager$$Lambda$get$3)))))->orElse(nullptr)));
	} catch ($ServiceConfigurationError&) {
		$var($ServiceConfigurationError, e, $catch());
		$var($NoInitialContextException, ne, $new($NoInitialContextException, $$str({"Cannot load initial context factory \'"_s, className, "\'"_s})));
		ne->setRootCause(e);
		$throwNew($NamingManager$FactoryInitializationError, ne);
	}
	if (factory == nullptr) {
		try {
			$var($Object, o, $nc($nc(NamingManager::helper)->loadClass(className))->newInstance());
			$assign(factory, $cast($InitialContextFactory, o));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($NoInitialContextException, ne, $new($NoInitialContextException, $$str({"Cannot instantiate class: "_s, className})));
			ne->setRootCause(e);
			$throwNew($NamingManager$FactoryInitializationError, ne);
		}
	}
	return factory;
}

void NamingManager::setInitialContextFactoryBuilder($InitialContextFactoryBuilder* builder) {
	$load(NamingManager);
	$synchronized(class$) {
		$init(NamingManager);
		if (NamingManager::initctx_factory_builder != nullptr) {
			$throwNew($IllegalStateException, "InitialContextFactoryBuilder already set"_s);
		}
		$var($SecurityManager, security, $System::getSecurityManager());
		if (security != nullptr) {
			security->checkSetFactory();
		}
		$assignStatic(NamingManager::initctx_factory_builder, builder);
	}
}

bool NamingManager::hasInitialContextFactoryBuilder() {
	$init(NamingManager);
	return (getInitialContextFactoryBuilder() != nullptr);
}

$Context* NamingManager::getContinuationContext($CannotProceedException* cpe) {
	$init(NamingManager);
	$var($Hashtable, env, $nc(cpe)->getEnvironment());
	if (env == nullptr) {
		$assign(env, $new($Hashtable, 7));
	} else {
		$assign(env, $cast($Hashtable, $nc(env)->clone()));
	}
	$nc(env)->put(NamingManager::CPE, cpe);
	$var($ContinuationContext, cctx, $new($ContinuationContext, cpe, env));
	return cctx->getTargetContext();
}

$Object* NamingManager::getStateToBind(Object$* obj, $Name* name, $Context* nameCtx, $Hashtable* environment) {
	$init(NamingManager);
	$init($Context);
	$var($FactoryEnumeration, factories, $ResourceManager::getFactories($Context::STATE_FACTORIES, environment, nameCtx));
	if (factories == nullptr) {
		return $of(obj);
	}
	$var($StateFactory, factory, nullptr);
	$var($Object, answer, nullptr);
	while (answer == nullptr && $nc(factories)->hasMore()) {
		$assign(factory, $cast($StateFactory, factories->next()));
		$assign(answer, $nc(factory)->getStateToBind(obj, name, nameCtx, environment));
	}
	return $of((answer != nullptr) ? answer : $of(obj));
}

bool NamingManager::lambda$getFactory$2($String* className, $ServiceLoader$Provider* p) {
	$init(NamingManager);
	return $nc($($nc($nc(p)->type())->getName()))->equals(className);
}

$InitialContextFactory* NamingManager::lambda$getInitialContext$1($ClassLoader* ld, $AbstractClassLoaderValue$Sub* ky) {
	$init(NamingManager);
	return getFactory($cast($String, $($nc(ky)->key())));
}

$ClassLoader* NamingManager::lambda$getInitialContext$0() {
	$init(NamingManager);
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
	return (cl == nullptr) ? $ClassLoader::getSystemClassLoader() : cl;
}

void clinit$NamingManager($Class* class$) {
	$assignStatic(NamingManager::defaultPkgPrefix, "com.sun.jndi.url"_s);
	$assignStatic(NamingManager::CPE, "java.naming.spi.CannotProceedException"_s);
	$assignStatic(NamingManager::helper, $VersionHelper::getVersionHelper());
	$assignStatic(NamingManager::object_factory_builder, nullptr);
	$assignStatic(NamingManager::FACTORIES_CACHE, $new($ClassLoaderValue));
	$assignStatic(NamingManager::initctx_factory_builder, nullptr);
}

NamingManager::NamingManager() {
}

$Class* NamingManager::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(NamingManager$$Lambda$lambda$getInitialContext$0::classInfo$.name)) {
			return NamingManager$$Lambda$lambda$getInitialContext$0::load$(name, initialize);
		}
		if (name->equals(NamingManager$$Lambda$lambda$getInitialContext$1$1::classInfo$.name)) {
			return NamingManager$$Lambda$lambda$getInitialContext$1$1::load$(name, initialize);
		}
		if (name->equals(NamingManager$$Lambda$lambda$getFactory$2$2::classInfo$.name)) {
			return NamingManager$$Lambda$lambda$getFactory$2$2::load$(name, initialize);
		}
		if (name->equals(NamingManager$$Lambda$get$3::classInfo$.name)) {
			return NamingManager$$Lambda$get$3::load$(name, initialize);
		}
	}
	$loadClass(NamingManager, name, initialize, &_NamingManager_ClassInfo_, clinit$NamingManager, allocate$NamingManager);
	return class$;
}

$Class* NamingManager::class$ = nullptr;

		} // spi
	} // naming
} // javax