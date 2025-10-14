#ifndef _javax_naming_ldap_spi_LdapDnsProvider_h_
#define _javax_naming_ldap_spi_LdapDnsProvider_h_
//$ class javax.naming.ldap.spi.LdapDnsProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DNSPROVIDER_PERMISSION")
#undef DNSPROVIDER_PERMISSION

namespace java {
	namespace lang {
		class RuntimePermission;
		class Void;
	}
}
namespace java {
	namespace util {
		class Map;
		class Optional;
	}
}

namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {

class $export LdapDnsProvider : public ::java::lang::Object {
	$class(LdapDnsProvider, 0, ::java::lang::Object)
public:
	LdapDnsProvider();
	void init$();
	void init$(::java::lang::Void* unused);
	static ::java::lang::Void* checkPermission();
	virtual ::java::util::Optional* lookupEndpoints($String* url, ::java::util::Map* env) {return nullptr;}
	static ::java::lang::RuntimePermission* DNSPROVIDER_PERMISSION;
};

			} // spi
		} // ldap
	} // naming
} // javax

#pragma pop_macro("DNSPROVIDER_PERMISSION")

#endif // _javax_naming_ldap_spi_LdapDnsProvider_h_