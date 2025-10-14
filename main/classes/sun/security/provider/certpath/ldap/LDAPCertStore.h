#ifndef _sun_security_provider_certpath_ldap_LDAPCertStore_h_
#define _sun_security_provider_certpath_ldap_LDAPCertStore_h_
//$ class sun.security.provider.certpath.ldap.LDAPCertStore
//$ extends java.security.cert.CertStoreSpi

#include <java/security/cert/CertStoreSpi.h>

namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStoreParameters;
			class LDAPCertStoreParameters;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {
					class LDAPCertStoreImpl;
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

class LDAPCertStore : public ::java::security::cert::CertStoreSpi {
	$class(LDAPCertStore, 0, ::java::security::cert::CertStoreSpi)
public:
	LDAPCertStore();
	void init$(::java::security::cert::CertStoreParameters* params);
	virtual ::java::util::Collection* engineGetCRLs(::java::security::cert::CRLSelector* selector) override;
	virtual ::java::util::Collection* engineGetCertificates(::java::security::cert::CertSelector* selector) override;
	static ::sun::security::provider::certpath::ldap::LDAPCertStoreImpl* getInstance(::java::security::cert::LDAPCertStoreParameters* params);
	static ::sun::security::util::Debug* debug;
	$String* ldapDN = nullptr;
	::sun::security::provider::certpath::ldap::LDAPCertStoreImpl* impl = nullptr;
	static ::sun::security::util::Cache* certStoreCache;
};

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ldap_LDAPCertStore_h_