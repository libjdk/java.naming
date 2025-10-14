#include <com/sun/naming/internal/ResourceManager.h>

#include <com/sun/naming/internal/FactoryEnumeration.h>
#include <com/sun/naming/internal/NamedWeakReference.h>
#include <com/sun/naming/internal/VersionHelper.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/WeakHashMap.h>
#include <javax/naming/ConfigurationException.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ldap/LdapContext.h>
#include <jcpp.h>

#undef APP_RESOURCE_FILE_NAME
#undef CONTROL_FACTORIES
#undef DISABLE_APP_RESOURCE_FILES
#undef JRE_CONF_PROPERTY_FILE_NAME
#undef NO_FACTORY
#undef OBJECT_FACTORIES
#undef PROPS
#undef PROVIDER_RESOURCE_FILE_NAME
#undef STATE_FACTORIES
#undef URL_PKG_PREFIXES

using $FactoryEnumeration = ::com::sun::naming::internal::FactoryEnumeration;
using $NamedWeakReference = ::com::sun::naming::internal::NamedWeakReference;
using $VersionHelper = ::com::sun::naming::internal::VersionHelper;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ConfigurationException = ::javax::naming::ConfigurationException;
using $Context = ::javax::naming::Context;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $LdapContext = ::javax::naming::ldap::LdapContext;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

$FieldInfo _ResourceManager_FieldInfo_[] = {
	{"PROVIDER_RESOURCE_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, PROVIDER_RESOURCE_FILE_NAME)},
	{"APP_RESOURCE_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, APP_RESOURCE_FILE_NAME)},
	{"JRE_CONF_PROPERTY_FILE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, JRE_CONF_PROPERTY_FILE_NAME)},
	{"DISABLE_APP_RESOURCE_FILES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, DISABLE_APP_RESOURCE_FILES)},
	{"listProperties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, listProperties)},
	{"helper", "Lcom/sun/naming/internal/VersionHelper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, helper)},
	{"propertiesCache", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/Object;Ljava/util/Hashtable<-Ljava/lang/String;Ljava/lang/Object;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, propertiesCache)},
	{"factoryCache", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/ClassLoader;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Lcom/sun/naming/internal/NamedWeakReference<Ljava/lang/Object;>;>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, factoryCache)},
	{"urlFactoryCache", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/ClassLoader;Ljava/util/Map<Ljava/lang/String;Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, urlFactoryCache)},
	{"NO_FACTORY", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceManager, NO_FACTORY)},
	{}
};

$MethodInfo _ResourceManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ResourceManager::*)()>(&ResourceManager::init$))},
	{"getApplicationResources", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<-Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)()>(&ResourceManager::getApplicationResources)), "javax.naming.NamingException"},
	{"getFactories", "(Ljava/lang/String;Ljava/util/Hashtable;Ljavax/naming/Context;)Lcom/sun/naming/internal/FactoryEnumeration;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;Ljavax/naming/Context;)Lcom/sun/naming/internal/FactoryEnumeration;", $PUBLIC | $STATIC, $method(static_cast<$FactoryEnumeration*(*)($String*,$Hashtable*,$Context*)>(&ResourceManager::getFactories)), "javax.naming.NamingException"},
	{"getFactory", "(Ljava/lang/String;Ljava/util/Hashtable;Ljavax/naming/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;Ljavax/naming/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*,$Hashtable*,$Context*,$String*,$String*)>(&ResourceManager::getFactory)), "javax.naming.NamingException"},
	{"getInitialEnvironment", "(Ljava/util/Hashtable;)Ljava/util/Hashtable;", "(Ljava/util/Hashtable<**>;)Ljava/util/Hashtable<**>;", $PUBLIC | $STATIC, $method(static_cast<$Hashtable*(*)($Hashtable*)>(&ResourceManager::getInitialEnvironment)), "javax.naming.NamingException"},
	{"getProperty", "(Ljava/lang/String;Ljava/util/Hashtable;Ljavax/naming/Context;Z)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;Ljavax/naming/Context;Z)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$Hashtable*,$Context*,bool)>(&ResourceManager::getProperty)), "javax.naming.NamingException"},
	{"getProviderResource", "(Ljava/lang/Object;)Ljava/util/Hashtable;", "(Ljava/lang/Object;)Ljava/util/Hashtable<-Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)(Object$*)>(&ResourceManager::getProviderResource)), "javax.naming.NamingException"},
	{"isListProperty", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&ResourceManager::isListProperty))},
	{"mergeTables", "(Ljava/util/Hashtable;Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<-Ljava/lang/String;Ljava/lang/Object;>;Ljava/util/Hashtable<-Ljava/lang/String;Ljava/lang/Object;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Hashtable*,$Hashtable*)>(&ResourceManager::mergeTables))},
	{}
};

$ClassInfo _ResourceManager_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.naming.internal.ResourceManager",
	"java.lang.Object",
	nullptr,
	_ResourceManager_FieldInfo_,
	_ResourceManager_MethodInfo_
};

$Object* allocate$ResourceManager($Class* clazz) {
	return $of($alloc(ResourceManager));
}

$String* ResourceManager::PROVIDER_RESOURCE_FILE_NAME = nullptr;
$String* ResourceManager::APP_RESOURCE_FILE_NAME = nullptr;
$String* ResourceManager::JRE_CONF_PROPERTY_FILE_NAME = nullptr;
$String* ResourceManager::DISABLE_APP_RESOURCE_FILES = nullptr;
$StringArray* ResourceManager::listProperties = nullptr;
$VersionHelper* ResourceManager::helper = nullptr;
$WeakHashMap* ResourceManager::propertiesCache = nullptr;
$WeakHashMap* ResourceManager::factoryCache = nullptr;
$WeakHashMap* ResourceManager::urlFactoryCache = nullptr;
$WeakReference* ResourceManager::NO_FACTORY = nullptr;

void ResourceManager::init$() {
}

$Hashtable* ResourceManager::getInitialEnvironment($Hashtable* env$renamed) {
	$init(ResourceManager);
	$var($Hashtable, env, env$renamed);
	$init($VersionHelper);
	$var($StringArray, props, $VersionHelper::PROPS);
	if (env == nullptr) {
		$assign(env, $new($Hashtable, 11));
	}
	$var($StringArray, jndiSysProps, $nc(ResourceManager::helper)->getJndiProperties());
	for (int32_t i = 0; i < $nc(props)->length; ++i) {
		$var($Object, val, $nc(env)->get(props->get(i)));
		if (val == nullptr) {
			$assign(val, (jndiSysProps != nullptr) ? $of($nc(jndiSysProps)->get(i)) : $of($nc(ResourceManager::helper)->getJndiProperty(i)));
		}
		if (val != nullptr) {
			$nc((env))->put(props->get(i), val);
		}
	}
	$var($String, disableAppRes, $cast($String, $nc(env)->get(ResourceManager::DISABLE_APP_RESOURCE_FILES)));
	if (disableAppRes != nullptr && disableAppRes->equalsIgnoreCase("true"_s)) {
		return env;
	}
	mergeTables(env, $(getApplicationResources()));
	return env;
}

$String* ResourceManager::getProperty($String* propName, $Hashtable* env, $Context* ctx, bool concat) {
	$init(ResourceManager);
	$var($String, val1, (env != nullptr) ? $cast($String, $nc(env)->get(propName)) : ($String*)nullptr);
	if ((ctx == nullptr) || ((val1 != nullptr) && !concat)) {
		return val1;
	}
	$var($String, val2, $cast($String, $nc($(getProviderResource(ctx)))->get(propName)));
	if (val1 == nullptr) {
		return val2;
	} else if ((val2 == nullptr) || !concat) {
		return val1;
	} else {
		return ($str({val1, ":"_s, val2}));
	}
}

$FactoryEnumeration* ResourceManager::getFactories($String* propName, $Hashtable* env, $Context* ctx) {
	$init(ResourceManager);
	$var($String, facProp, getProperty(propName, env, ctx, true));
	if (facProp == nullptr) {
		return nullptr;
	}
	$var($ClassLoader, loader, $nc(ResourceManager::helper)->getContextClassLoader());
	$var($Map, perLoaderCache, nullptr);
	$synchronized(ResourceManager::factoryCache) {
		$assign(perLoaderCache, $cast($Map, $nc(ResourceManager::factoryCache)->get(loader)));
		if (perLoaderCache == nullptr) {
			$assign(perLoaderCache, $new($HashMap, 11));
			$nc(ResourceManager::factoryCache)->put(loader, perLoaderCache);
		}
	}
	$synchronized(perLoaderCache) {
		$var($List, factories, $cast($List, $nc(perLoaderCache)->get(facProp)));
		if (factories != nullptr) {
			return factories->size() == 0 ? ($FactoryEnumeration*)nullptr : $new($FactoryEnumeration, factories, loader);
		} else {
			$var($StringTokenizer, parser, $new($StringTokenizer, facProp, ":"_s));
			$assign(factories, $new($ArrayList, 5));
			while (parser->hasMoreTokens()) {
				try {
					$var($String, className, parser->nextToken());
					$Class* c = $nc(ResourceManager::helper)->loadClass(className, loader);
					factories->add($$new($NamedWeakReference, c, className));
				} catch ($Exception&) {
					$catch();
				}
			}
			perLoaderCache->put(facProp, factories);
			return $new($FactoryEnumeration, factories, loader);
		}
	}
}

$Object* ResourceManager::getFactory($String* propName, $Hashtable* env, $Context* ctx, $String* classSuffix, $String* defaultPkgPrefix) {
	$init(ResourceManager);
	$beforeCallerSensitive();
	$var($String, facProp, getProperty(propName, env, ctx, true));
	if (facProp != nullptr) {
		$plusAssign(facProp, ($$str({":"_s, defaultPkgPrefix})));
	} else {
		$assign(facProp, defaultPkgPrefix);
	}
	$var($ClassLoader, loader, $nc(ResourceManager::helper)->getContextClassLoader());
	$var($String, key, $str({classSuffix, " "_s, facProp}));
	$var($Map, perLoaderCache, nullptr);
	$synchronized(ResourceManager::urlFactoryCache) {
		$assign(perLoaderCache, $cast($Map, $nc(ResourceManager::urlFactoryCache)->get(loader)));
		if (perLoaderCache == nullptr) {
			$assign(perLoaderCache, $new($HashMap, 11));
			$nc(ResourceManager::urlFactoryCache)->put(loader, perLoaderCache);
		}
	}
	$synchronized(perLoaderCache) {
		$var($Object, factory, nullptr);
		$var($WeakReference, factoryRef, $cast($WeakReference, $nc(perLoaderCache)->get(key)));
		if (factoryRef == ResourceManager::NO_FACTORY) {
			return $of(nullptr);
		} else if (factoryRef != nullptr) {
			$assign(factory, factoryRef->get());
			if (factory != nullptr) {
				return $of(factory);
			}
		}
		$var($StringTokenizer, parser, $new($StringTokenizer, facProp, ":"_s));
		$var($String, className, nullptr);
		while (factory == nullptr && parser->hasMoreTokens()) {
			$assign(className, $str({$(parser->nextToken()), classSuffix}));
			try {
				$var($Object, tmp, $nc($nc(ResourceManager::helper)->loadClass(className, loader))->newInstance());
				$assign(factory, tmp);
			} catch ($InstantiationException&) {
				$var($InstantiationException, e, $catch());
				$var($NamingException, ne, $new($NamingException, $$str({"Cannot instantiate "_s, className})));
				ne->setRootCause(e);
				$throw(ne);
			} catch ($IllegalAccessException&) {
				$var($IllegalAccessException, e, $catch());
				$var($NamingException, ne, $new($NamingException, $$str({"Cannot access "_s, className})));
				ne->setRootCause(e);
				$throw(ne);
			} catch ($Exception&) {
				$catch();
			}
		}
		perLoaderCache->put(key, (factory != nullptr) ? $$new($WeakReference, factory) : ResourceManager::NO_FACTORY);
		return $of(factory);
	}
}

$Hashtable* ResourceManager::getProviderResource(Object$* obj) {
	$init(ResourceManager);
	if (obj == nullptr) {
		return ($new($Hashtable, 1));
	}
	$synchronized(ResourceManager::propertiesCache) {
		$Class* c = $nc($of(obj))->getClass();
		$var($Hashtable, props, $cast($Hashtable, $nc(ResourceManager::propertiesCache)->get(c)));
		if (props != nullptr) {
			return props;
		}
		$assign(props, $new($Properties));
		$var($InputStream, istream, $nc(ResourceManager::helper)->getResourceAsStream(c, ResourceManager::PROVIDER_RESOURCE_FILE_NAME));
		if (istream != nullptr) {
			try {
				$nc(($cast($Properties, props)))->load(istream);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$var($NamingException, ne, $new($ConfigurationException, $$str({"Error reading provider resource file for "_s, c})));
				ne->setRootCause(e);
				$throw(ne);
			}
		}
		$nc(ResourceManager::propertiesCache)->put(c, props);
		return props;
	}
}

$Hashtable* ResourceManager::getApplicationResources() {
	$init(ResourceManager);
	$var($ClassLoader, cl, $nc(ResourceManager::helper)->getContextClassLoader());
	$synchronized(ResourceManager::propertiesCache) {
		$var($Hashtable, result, $cast($Hashtable, $nc(ResourceManager::propertiesCache)->get(cl)));
		if (result != nullptr) {
			return result;
		}
		try {
			$var($NamingEnumeration, resources, $nc(ResourceManager::helper)->getResources(cl, ResourceManager::APP_RESOURCE_FILE_NAME));
			{
				$var($Throwable, var$0, nullptr);
				try {
					while ($nc(resources)->hasMore()) {
						$var($Properties, props, $new($Properties));
						$var($InputStream, istream, $cast($InputStream, resources->next()));
						{
							$var($Throwable, var$1, nullptr);
							try {
								props->load(istream);
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								$nc(istream)->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
						if (result == nullptr) {
							$assign(result, props);
						} else {
							mergeTables(result, props);
						}
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					while ($nc(resources)->hasMore()) {
						$nc(($cast($InputStream, $(resources->next()))))->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
			$var($InputStream, istream, $nc(ResourceManager::helper)->getJavaHomeConfStream(ResourceManager::JRE_CONF_PROPERTY_FILE_NAME));
			if (istream != nullptr) {
				{
					$var($Throwable, var$2, nullptr);
					try {
						$var($Properties, props, $new($Properties));
						props->load(istream);
						if (result == nullptr) {
							$assign(result, props);
						} else {
							mergeTables(result, props);
						}
					} catch ($Throwable&) {
						$assign(var$2, $catch());
					} /*finally*/ {
						istream->close();
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
			}
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$var($NamingException, ne, $new($ConfigurationException, "Error reading application resource file"_s));
			ne->setRootCause(e);
			$throw(ne);
		}
		if (result == nullptr) {
			$assign(result, $new($Hashtable, 11));
		}
		$nc(ResourceManager::propertiesCache)->put(cl, result);
		return result;
	}
}

void ResourceManager::mergeTables($Hashtable* props1, $Hashtable* props2) {
	$init(ResourceManager);
	{
		$var($Iterator, i$, $nc($($nc(props2)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				$var($String, prop, $cast($String, key));
				$var($Object, val1, $nc(props1)->get(prop));
				if (val1 == nullptr) {
					props1->put(prop, $(props2->get(prop)));
				} else if (isListProperty(prop)) {
					$var($String, val2, $cast($String, props2->get(prop)));
					props1->put(prop, $$str({($cast($String, val1)), ":"_s, val2}));
				}
			}
		}
	}
}

bool ResourceManager::isListProperty($String* prop$renamed) {
	$init(ResourceManager);
	$var($String, prop, prop$renamed);
	$assign(prop, $nc(prop)->intern());
	for (int32_t i = 0; i < $nc(ResourceManager::listProperties)->length; ++i) {
		if (prop == $nc(ResourceManager::listProperties)->get(i)) {
			return true;
		}
	}
	return false;
}

void clinit$ResourceManager($Class* class$) {
	$assignStatic(ResourceManager::PROVIDER_RESOURCE_FILE_NAME, "jndiprovider.properties"_s);
	$assignStatic(ResourceManager::APP_RESOURCE_FILE_NAME, "jndi.properties"_s);
	$assignStatic(ResourceManager::JRE_CONF_PROPERTY_FILE_NAME, "jndi.properties"_s);
	$assignStatic(ResourceManager::DISABLE_APP_RESOURCE_FILES, "com.sun.naming.disable.app.resource.files"_s);
		$init($Context);
		$init($LdapContext);
	$assignStatic(ResourceManager::listProperties, $new($StringArray, {
		$Context::OBJECT_FACTORIES,
		$Context::URL_PKG_PREFIXES,
		$Context::STATE_FACTORIES,
		$LdapContext::CONTROL_FACTORIES
	}));
	$assignStatic(ResourceManager::helper, $VersionHelper::getVersionHelper());
	$assignStatic(ResourceManager::propertiesCache, $new($WeakHashMap, 11));
	$assignStatic(ResourceManager::factoryCache, $new($WeakHashMap, 11));
	$assignStatic(ResourceManager::urlFactoryCache, $new($WeakHashMap, 11));
	$assignStatic(ResourceManager::NO_FACTORY, $new($WeakReference, nullptr));
}

ResourceManager::ResourceManager() {
}

$Class* ResourceManager::load$($String* name, bool initialize) {
	$loadClass(ResourceManager, name, initialize, &_ResourceManager_ClassInfo_, clinit$ResourceManager, allocate$ResourceManager);
	return class$;
}

$Class* ResourceManager::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com