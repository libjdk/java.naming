#ifndef _javax_naming_spi_NamingManager_h_
#define _javax_naming_spi_NamingManager_h_
//$ class javax.naming.spi.NamingManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CPE")
#undef CPE
#pragma push_macro("FACTORIES_CACHE")
#undef FACTORIES_CACHE

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {
				class VersionHelper;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class ServiceLoader$Provider;
	}
}
namespace javax {
	namespace naming {
		class CannotProceedException;
		class Context;
		class Name;
		class Reference;
	}
}
namespace javax {
	namespace naming {
		namespace spi {
			class InitialContextFactory;
			class InitialContextFactoryBuilder;
			class ObjectFactory;
			class ObjectFactoryBuilder;
			class Resolver;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class AbstractClassLoaderValue$Sub;
			class ClassLoaderValue;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $export NamingManager : public ::java::lang::Object {
	$class(NamingManager, 0, ::java::lang::Object)
public:
	NamingManager();
	void init$();
	static $Object* createObjectFromFactories(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static ::javax::naming::Context* getContext(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static ::javax::naming::Context* getContinuationContext(::javax::naming::CannotProceedException* cpe);
	static ::javax::naming::spi::InitialContextFactory* getFactory($String* className);
	static ::javax::naming::Context* getInitialContext(::java::util::Hashtable* env);
	static ::javax::naming::spi::InitialContextFactoryBuilder* getInitialContextFactoryBuilder();
	static ::javax::naming::spi::ObjectFactoryBuilder* getObjectFactoryBuilder();
	static ::javax::naming::spi::ObjectFactory* getObjectFactoryFromReference(::javax::naming::Reference* ref, $String* factoryName);
	static $Object* getObjectInstance(Object$* refInfo, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static ::javax::naming::spi::Resolver* getResolver(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static $Object* getStateToBind(Object$* obj, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static ::javax::naming::Context* getURLContext($String* scheme, ::java::util::Hashtable* environment);
	static $Object* getURLObject($String* scheme, Object$* urlInfo, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static $String* getURLScheme($String* str);
	static bool hasInitialContextFactoryBuilder();
	static bool lambda$getFactory$2($String* className, ::java::util::ServiceLoader$Provider* p);
	static ::java::lang::ClassLoader* lambda$getInitialContext$0();
	static ::javax::naming::spi::InitialContextFactory* lambda$getInitialContext$1(::java::lang::ClassLoader* ld, ::jdk::internal::loader::AbstractClassLoaderValue$Sub* ky);
	static $Object* processURL(Object$* refInfo, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static $Object* processURLAddrs(::javax::naming::Reference* ref, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* environment);
	static void setInitialContextFactoryBuilder(::javax::naming::spi::InitialContextFactoryBuilder* builder);
	static void setObjectFactoryBuilder(::javax::naming::spi::ObjectFactoryBuilder* builder);
	static ::com::sun::naming::internal::VersionHelper* helper;
	static ::javax::naming::spi::ObjectFactoryBuilder* object_factory_builder;
	static ::jdk::internal::loader::ClassLoaderValue* FACTORIES_CACHE;
	static $String* defaultPkgPrefix;
	static ::javax::naming::spi::InitialContextFactoryBuilder* initctx_factory_builder;
	static $String* CPE;
};

		} // spi
	} // naming
} // javax

#pragma pop_macro("CPE")
#pragma pop_macro("FACTORIES_CACHE")

#endif // _javax_naming_spi_NamingManager_h_