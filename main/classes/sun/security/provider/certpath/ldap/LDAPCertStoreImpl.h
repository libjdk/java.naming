#ifndef _sun_security_provider_certpath_ldap_LDAPCertStoreImpl_h_
#define _sun_security_provider_certpath_ldap_LDAPCertStoreImpl_h_
//$ class sun.security.provider.certpath.ldap.LDAPCertStoreImpl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ARL")
#undef ARL
#pragma push_macro("BB0")
#undef BB0
#pragma push_macro("CA_CERT")
#undef CA_CERT
#pragma push_macro("CRL")
#undef CRL
#pragma push_macro("CROSS_CERT")
#undef CROSS_CERT
#pragma push_macro("DEFAULT_CACHE_LIFETIME")
#undef DEFAULT_CACHE_LIFETIME
#pragma push_macro("DEFAULT_CACHE_SIZE")
#undef DEFAULT_CACHE_SIZE
#pragma push_macro("EMPTY_ATTRIBUTES")
#undef EMPTY_ATTRIBUTES
#pragma push_macro("LIFETIME")
#undef LIFETIME
#pragma push_macro("PROP_DISABLE_APP_RESOURCE_FILES")
#undef PROP_DISABLE_APP_RESOURCE_FILES
#pragma push_macro("PROP_LIFETIME")
#undef PROP_LIFETIME
#pragma push_macro("STRING0")
#undef STRING0
#pragma push_macro("USER_CERT")
#undef USER_CERT

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertificateFactory;
			class X509CRLSelector;
			class X509CertSelector;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class LdapContext;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {
					class LDAPCertStoreImpl$LDAPRequest;
				}
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Cache;
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

class LDAPCertStoreImpl : public ::java::lang::Object {
	$class(LDAPCertStoreImpl, 0, ::java::lang::Object)
public:
	LDAPCertStoreImpl();
	void init$($String* serverName, int32_t port);
	void createInitialDirContext($String* server, int32_t port);
	::java::util::Collection* getCRLs(::sun::security::provider::certpath::ldap::LDAPCertStoreImpl$LDAPRequest* request, $String* id, ::java::security::cert::X509CRLSelector* sel);
	::java::util::Collection* getCRLs(::java::security::cert::X509CRLSelector* xsel, $String* ldapDN);
	::java::util::Collection* getCertPairs(::sun::security::provider::certpath::ldap::LDAPCertStoreImpl$LDAPRequest* request, $String* id);
	::java::util::Collection* getCertificates(::sun::security::provider::certpath::ldap::LDAPCertStoreImpl$LDAPRequest* request, $String* id, ::java::security::cert::X509CertSelector* sel);
	::java::util::Collection* getCertificates(::java::security::cert::X509CertSelector* xsel, $String* ldapDN);
	::java::util::Collection* getMatchingCrossCerts(::sun::security::provider::certpath::ldap::LDAPCertStoreImpl$LDAPRequest* request, ::java::security::cert::X509CertSelector* forward, ::java::security::cert::X509CertSelector* reverse);
	static ::java::lang::Boolean* lambda$createInitialDirContext$1();
	static $String* lambda$static$0();
	static ::sun::security::util::Debug* debug;
	static $String* USER_CERT;
	static $String* CA_CERT;
	static $String* CROSS_CERT;
	static $String* CRL;
	static $String* ARL;
	static $StringArray* STRING0;
	static $Array<int8_t, 2>* BB0;
	static ::javax::naming::directory::Attributes* EMPTY_ATTRIBUTES;
	static const int32_t DEFAULT_CACHE_SIZE = 750;
	static const int32_t DEFAULT_CACHE_LIFETIME = 30;
	static int32_t LIFETIME;
	static $String* PROP_LIFETIME;
	static $String* PROP_DISABLE_APP_RESOURCE_FILES;
	::java::security::cert::CertificateFactory* cf = nullptr;
	::javax::naming::ldap::LdapContext* ctx = nullptr;
	bool communicationError = false;
	bool prefetchCRLs = false;
	::sun::security::util::Cache* valueCache = nullptr;
	int32_t cacheHits = 0;
	int32_t cacheMisses = 0;
	int32_t requests = 0;
};

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("ARL")
#pragma pop_macro("BB0")
#pragma pop_macro("CA_CERT")
#pragma pop_macro("CRL")
#pragma pop_macro("CROSS_CERT")
#pragma pop_macro("DEFAULT_CACHE_LIFETIME")
#pragma pop_macro("DEFAULT_CACHE_SIZE")
#pragma pop_macro("EMPTY_ATTRIBUTES")
#pragma pop_macro("LIFETIME")
#pragma pop_macro("PROP_DISABLE_APP_RESOURCE_FILES")
#pragma pop_macro("PROP_LIFETIME")
#pragma pop_macro("STRING0")
#pragma pop_macro("USER_CERT")

#endif // _sun_security_provider_certpath_ldap_LDAPCertStoreImpl_h_