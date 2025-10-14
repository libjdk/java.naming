#ifndef _com_sun_naming_internal_VersionHelper_h_
#define _com_sun_naming_internal_VersionHelper_h_
//$ class com.sun.naming.internal.VersionHelper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CONTROL_FACTORIES")
#undef CONTROL_FACTORIES
#pragma push_macro("DNS_URL")
#undef DNS_URL
#pragma push_macro("INITIAL_CONTEXT_FACTORY")
#undef INITIAL_CONTEXT_FACTORY
#pragma push_macro("OBJECT_FACTORIES")
#undef OBJECT_FACTORIES
#pragma push_macro("PROPS")
#undef PROPS
#pragma push_macro("PROVIDER_URL")
#undef PROVIDER_URL
#pragma push_macro("STATE_FACTORIES")
#undef STATE_FACTORIES
#pragma push_macro("TRUST_URL_CODE_BASE")
#undef TRUST_URL_CODE_BASE
#pragma push_macro("URL_PKG_PREFIXES")
#undef URL_PKG_PREFIXES

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Properties;
	}
}
namespace javax {
	namespace naming {
		class NamingEnumeration;
	}
}

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class VersionHelper : public ::java::lang::Object {
	$class(VersionHelper, 0, ::java::lang::Object)
public:
	VersionHelper();
	void init$();
	::java::lang::ClassLoader* getContextClassLoader();
	::java::io::InputStream* getJavaHomeConfStream($String* filename);
	$StringArray* getJndiProperties();
	$String* getJndiProperty(int32_t i);
	::java::io::InputStream* getResourceAsStream($Class* c, $String* name);
	::javax::naming::NamingEnumeration* getResources(::java::lang::ClassLoader* cl, $String* name);
	static $Array<::java::net::URL>* getUrlArray($String* codebase);
	static ::com::sun::naming::internal::VersionHelper* getVersionHelper();
	static ::java::lang::ClassLoader* lambda$getContextClassLoader$6();
	static ::java::io::InputStream* lambda$getJavaHomeConfStream$4($String* filename);
	static ::java::util::Properties* lambda$getJndiProperties$2();
	static $String* lambda$getJndiProperty$1(int32_t i);
	static ::java::io::InputStream* lambda$getResourceAsStream$3($Class* c, $String* name);
	static ::java::util::Enumeration* lambda$getResources$5(::java::lang::ClassLoader* cl, $String* name);
	static $String* lambda$static$0();
	$Class* loadClass($String* className);
	$Class* loadClass($String* className, $String* codebase);
	$Class* loadClass($String* className, bool initialize, ::java::lang::ClassLoader* cl);
	$Class* loadClass($String* className, ::java::lang::ClassLoader* cl);
	$Class* loadClassWithoutInit($String* className);
	static $String* resolveName($Class* c, $String* name);
	static ::com::sun::naming::internal::VersionHelper* helper;
	static bool TRUST_URL_CODE_BASE;
	static $StringArray* PROPS;
	static const int32_t INITIAL_CONTEXT_FACTORY = 0;
	static const int32_t OBJECT_FACTORIES = 1;
	static const int32_t URL_PKG_PREFIXES = 2;
	static const int32_t STATE_FACTORIES = 3;
	static const int32_t PROVIDER_URL = 4;
	static const int32_t DNS_URL = 5;
	static const int32_t CONTROL_FACTORIES = 6;
};

			} // internal
		} // naming
	} // sun
} // com

#pragma pop_macro("CONTROL_FACTORIES")
#pragma pop_macro("DNS_URL")
#pragma pop_macro("INITIAL_CONTEXT_FACTORY")
#pragma pop_macro("OBJECT_FACTORIES")
#pragma pop_macro("PROPS")
#pragma pop_macro("PROVIDER_URL")
#pragma pop_macro("STATE_FACTORIES")
#pragma pop_macro("TRUST_URL_CODE_BASE")
#pragma pop_macro("URL_PKG_PREFIXES")

#endif // _com_sun_naming_internal_VersionHelper_h_