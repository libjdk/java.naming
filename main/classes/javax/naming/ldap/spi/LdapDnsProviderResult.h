#ifndef _javax_naming_ldap_spi_LdapDnsProviderResult_h_
#define _javax_naming_ldap_spi_LdapDnsProviderResult_h_
//$ class javax.naming.ldap.spi.LdapDnsProviderResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {

class $export LdapDnsProviderResult : public ::java::lang::Object {
	$class(LdapDnsProviderResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapDnsProviderResult();
	void init$($String* domainName, ::java::util::List* endpoints);
	$String* getDomainName();
	::java::util::List* getEndpoints();
	$String* domainName = nullptr;
	::java::util::List* endpoints = nullptr;
};

			} // spi
		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_spi_LdapDnsProviderResult_h_