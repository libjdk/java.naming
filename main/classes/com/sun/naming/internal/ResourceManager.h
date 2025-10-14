#ifndef _com_sun_naming_internal_ResourceManager_h_
#define _com_sun_naming_internal_ResourceManager_h_
//$ class com.sun.naming.internal.ResourceManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("APP_RESOURCE_FILE_NAME")
#undef APP_RESOURCE_FILE_NAME
#pragma push_macro("DISABLE_APP_RESOURCE_FILES")
#undef DISABLE_APP_RESOURCE_FILES
#pragma push_macro("JRE_CONF_PROPERTY_FILE_NAME")
#undef JRE_CONF_PROPERTY_FILE_NAME
#pragma push_macro("NO_FACTORY")
#undef NO_FACTORY
#pragma push_macro("PROVIDER_RESOURCE_FILE_NAME")
#undef PROVIDER_RESOURCE_FILE_NAME

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {
				class FactoryEnumeration;
				class VersionHelper;
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class WeakHashMap;
	}
}
namespace javax {
	namespace naming {
		class Context;
	}
}

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class ResourceManager : public ::java::lang::Object {
	$class(ResourceManager, 0, ::java::lang::Object)
public:
	ResourceManager();
	void init$();
	static ::java::util::Hashtable* getApplicationResources();
	static ::com::sun::naming::internal::FactoryEnumeration* getFactories($String* propName, ::java::util::Hashtable* env, ::javax::naming::Context* ctx);
	static $Object* getFactory($String* propName, ::java::util::Hashtable* env, ::javax::naming::Context* ctx, $String* classSuffix, $String* defaultPkgPrefix);
	static ::java::util::Hashtable* getInitialEnvironment(::java::util::Hashtable* env);
	static $String* getProperty($String* propName, ::java::util::Hashtable* env, ::javax::naming::Context* ctx, bool concat);
	static ::java::util::Hashtable* getProviderResource(Object$* obj);
	static bool isListProperty($String* prop);
	static void mergeTables(::java::util::Hashtable* props1, ::java::util::Hashtable* props2);
	static $String* PROVIDER_RESOURCE_FILE_NAME;
	static $String* APP_RESOURCE_FILE_NAME;
	static $String* JRE_CONF_PROPERTY_FILE_NAME;
	static $String* DISABLE_APP_RESOURCE_FILES;
	static $StringArray* listProperties;
	static ::com::sun::naming::internal::VersionHelper* helper;
	static ::java::util::WeakHashMap* propertiesCache;
	static ::java::util::WeakHashMap* factoryCache;
	static ::java::util::WeakHashMap* urlFactoryCache;
	static ::java::lang::ref::WeakReference* NO_FACTORY;
};

			} // internal
		} // naming
	} // sun
} // com

#pragma pop_macro("APP_RESOURCE_FILE_NAME")
#pragma pop_macro("DISABLE_APP_RESOURCE_FILES")
#pragma pop_macro("JRE_CONF_PROPERTY_FILE_NAME")
#pragma pop_macro("NO_FACTORY")
#pragma pop_macro("PROVIDER_RESOURCE_FILE_NAME")

#endif // _com_sun_naming_internal_ResourceManager_h_