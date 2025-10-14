#ifndef _com_sun_naming_internal_ObjectFactoriesFilter_h_
#define _com_sun_naming_internal_ObjectFactoriesFilter_h_
//$ class com.sun.naming.internal.ObjectFactoriesFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_SP_VALUE")
#undef DEFAULT_SP_VALUE
#pragma push_macro("FACTORIES_FILTER_PROPNAME")
#undef FACTORIES_FILTER_PROPNAME
#pragma push_macro("GLOBAL")
#undef GLOBAL

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {
				class ObjectFactoriesFilter$FactoryInfo;
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputFilter;
	}
}

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class ObjectFactoriesFilter : public ::java::lang::Object {
	$class(ObjectFactoriesFilter, 0, ::java::lang::Object)
public:
	ObjectFactoriesFilter();
	void init$();
	static bool canInstantiateObjectsFactory($Class* factoryClass);
	static bool checkInput(::com::sun::naming::internal::ObjectFactoriesFilter$FactoryInfo* factoryInfo);
	static $String* getFilterPropertyValue();
	static $Class* lambda$canInstantiateObjectsFactory$0($Class* factoryClass);
	static $String* FACTORIES_FILTER_PROPNAME;
	static $String* DEFAULT_SP_VALUE;
	static ::java::io::ObjectInputFilter* GLOBAL;
};

			} // internal
		} // naming
	} // sun
} // com

#pragma pop_macro("DEFAULT_SP_VALUE")
#pragma pop_macro("FACTORIES_FILTER_PROPNAME")
#pragma pop_macro("GLOBAL")

#endif // _com_sun_naming_internal_ObjectFactoriesFilter_h_