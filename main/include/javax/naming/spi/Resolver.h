#ifndef _javax_naming_spi_Resolver_h_
#define _javax_naming_spi_Resolver_h_
//$ interface javax.naming.spi.Resolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace spi {
			class ResolveResult;
		}
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $import Resolver : public ::java::lang::Object {
	$interface(Resolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::naming::spi::ResolveResult* resolveToClass(::javax::naming::Name* name, $Class* contextType) {return nullptr;}
	virtual ::javax::naming::spi::ResolveResult* resolveToClass($String* name, $Class* contextType) {return nullptr;}
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_Resolver_h_