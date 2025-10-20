#include <javax/naming/spi/DirectoryManager.h>

#include <com/sun/naming/internal/FactoryEnumeration.h>
#include <com/sun/naming/internal/ResourceManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/Reference.h>
#include <javax/naming/Referenceable.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/spi/ContinuationDirContext.h>
#include <javax/naming/spi/DirObjectFactory.h>
#include <javax/naming/spi/DirStateFactory$Result.h>
#include <javax/naming/spi/DirStateFactory.h>
#include <javax/naming/spi/NamingManager.h>
#include <javax/naming/spi/ObjectFactory.h>
#include <javax/naming/spi/ObjectFactoryBuilder.h>
#include <javax/naming/spi/StateFactory.h>
#include <jcpp.h>

#undef CPE
#undef OBJECT_FACTORIES
#undef STATE_FACTORIES

using $FactoryEnumeration = ::com::sun::naming::internal::FactoryEnumeration;
using $ResourceManager = ::com::sun::naming::internal::ResourceManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $Reference = ::javax::naming::Reference;
using $Referenceable = ::javax::naming::Referenceable;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $ContinuationDirContext = ::javax::naming::spi::ContinuationDirContext;
using $DirObjectFactory = ::javax::naming::spi::DirObjectFactory;
using $DirStateFactory = ::javax::naming::spi::DirStateFactory;
using $DirStateFactory$Result = ::javax::naming::spi::DirStateFactory$Result;
using $NamingManager = ::javax::naming::spi::NamingManager;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;
using $ObjectFactoryBuilder = ::javax::naming::spi::ObjectFactoryBuilder;
using $StateFactory = ::javax::naming::spi::StateFactory;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _DirectoryManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DirectoryManager::*)()>(&DirectoryManager::init$))},
	{"createObjectFromFactories", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Name*,$Context*,$Hashtable*,$Attributes*)>(&DirectoryManager::createObjectFromFactories)), "java.lang.Exception"},
	{"getContinuationDirContext", "(Ljavax/naming/CannotProceedException;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DirContext*(*)($CannotProceedException*)>(&DirectoryManager::getContinuationDirContext)), "javax.naming.NamingException"},
	{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Name*,$Context*,$Hashtable*,$Attributes*)>(&DirectoryManager::getObjectInstance)), "java.lang.Exception"},
	{"getStateToBind", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;Ljavax/naming/directory/Attributes;)Ljavax/naming/spi/DirStateFactory$Result;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;Ljavax/naming/directory/Attributes;)Ljavax/naming/spi/DirStateFactory$Result;", $PUBLIC | $STATIC, $method(static_cast<$DirStateFactory$Result*(*)(Object$*,$Name*,$Context*,$Hashtable*,$Attributes*)>(&DirectoryManager::getStateToBind)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _DirectoryManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.spi.DirectoryManager",
	"javax.naming.spi.NamingManager",
	nullptr,
	nullptr,
	_DirectoryManager_MethodInfo_
};

$Object* allocate$DirectoryManager($Class* clazz) {
	return $of($alloc(DirectoryManager));
}

void DirectoryManager::init$() {
	$NamingManager::init$();
}

$DirContext* DirectoryManager::getContinuationDirContext($CannotProceedException* cpe) {
	$init(DirectoryManager);
	$var($Hashtable, env, $nc(cpe)->getEnvironment());
	if (env == nullptr) {
		$assign(env, $new($Hashtable, 7));
	} else {
		$assign(env, $cast($Hashtable, $nc(env)->clone()));
	}
	$init($NamingManager);
	$nc(env)->put($NamingManager::CPE, cpe);
	return ($new($ContinuationDirContext, cpe, env));
}

$Object* DirectoryManager::getObjectInstance(Object$* refInfo, $Name* name, $Context* nameCtx, $Hashtable* environment, $Attributes* attrs) {
	$init(DirectoryManager);
	$useLocalCurrentObjectStackCache();
	$var($ObjectFactory, factory, nullptr);
	$var($ObjectFactoryBuilder, builder, getObjectFactoryBuilder());
	if (builder != nullptr) {
		$assign(factory, builder->createObjectFactory(refInfo, environment));
		if ($instanceOf($DirObjectFactory, factory)) {
			return $of($nc(($cast($DirObjectFactory, factory)))->getObjectInstance(refInfo, name, nameCtx, environment, attrs));
		} else {
			return $of($nc(factory)->getObjectInstance(refInfo, name, nameCtx, environment));
		}
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
			if ($instanceOf($DirObjectFactory, factory)) {
				return $of($nc(($cast($DirObjectFactory, factory)))->getObjectInstance(ref, name, nameCtx, environment, attrs));
			} else if (factory != nullptr) {
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
	$assign(answer, createObjectFromFactories(refInfo, name, nameCtx, environment, attrs));
	return $of((answer != nullptr) ? answer : $of(refInfo));
}

$Object* DirectoryManager::createObjectFromFactories(Object$* obj, $Name* name, $Context* nameCtx, $Hashtable* environment, $Attributes* attrs) {
	$init(DirectoryManager);
	$useLocalCurrentObjectStackCache();
	$init($Context);
	$var($FactoryEnumeration, factories, $ResourceManager::getFactories($Context::OBJECT_FACTORIES, environment, nameCtx));
	if (factories == nullptr) {
		return $of(nullptr);
	}
	$var($ObjectFactory, factory, nullptr);
	$var($Object, answer, nullptr);
	while (answer == nullptr && $nc(factories)->hasMore()) {
		$assign(factory, $cast($ObjectFactory, factories->next()));
		if ($instanceOf($DirObjectFactory, factory)) {
			$assign(answer, $nc(($cast($DirObjectFactory, factory)))->getObjectInstance(obj, name, nameCtx, environment, attrs));
		} else {
			$assign(answer, $nc(factory)->getObjectInstance(obj, name, nameCtx, environment));
		}
	}
	return $of(answer);
}

$DirStateFactory$Result* DirectoryManager::getStateToBind(Object$* obj, $Name* name, $Context* nameCtx, $Hashtable* environment, $Attributes* attrs) {
	$init(DirectoryManager);
	$useLocalCurrentObjectStackCache();
	$init($Context);
	$var($FactoryEnumeration, factories, $ResourceManager::getFactories($Context::STATE_FACTORIES, environment, nameCtx));
	if (factories == nullptr) {
		return $new($DirStateFactory$Result, obj, attrs);
	}
	$var($StateFactory, factory, nullptr);
	$var($Object, objanswer, nullptr);
	$var($DirStateFactory$Result, answer, nullptr);
	while (answer == nullptr && $nc(factories)->hasMore()) {
		$assign(factory, $cast($StateFactory, factories->next()));
		if ($instanceOf($DirStateFactory, factory)) {
			$assign(answer, $nc(($cast($DirStateFactory, factory)))->getStateToBind(obj, name, nameCtx, environment, attrs));
		} else {
			$assign(objanswer, $nc(factory)->getStateToBind(obj, name, nameCtx, environment));
			if (objanswer != nullptr) {
				$assign(answer, $new($DirStateFactory$Result, objanswer, attrs));
			}
		}
	}
	return (answer != nullptr) ? answer : $new($DirStateFactory$Result, obj, attrs);
}

DirectoryManager::DirectoryManager() {
}

$Class* DirectoryManager::load$($String* name, bool initialize) {
	$loadClass(DirectoryManager, name, initialize, &_DirectoryManager_ClassInfo_, allocate$DirectoryManager);
	return class$;
}

$Class* DirectoryManager::class$ = nullptr;

		} // spi
	} // naming
} // javax