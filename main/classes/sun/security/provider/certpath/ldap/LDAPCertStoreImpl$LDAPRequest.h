#ifndef _sun_security_provider_certpath_ldap_LDAPCertStoreImpl$LDAPRequest_h_
#define _sun_security_provider_certpath_ldap_LDAPCertStoreImpl$LDAPRequest_h_
//$ class sun.security.provider.certpath.ldap.LDAPCertStoreImpl$LDAPRequest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attribute;
		}
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
		namespace provider {
			namespace certpath {
				namespace ldap {

class LDAPCertStoreImpl$LDAPRequest : public ::java::lang::Object {
	$class(LDAPCertStoreImpl$LDAPRequest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LDAPCertStoreImpl$LDAPRequest();
	void init$(::sun::security::provider::certpath::ldap::LDAPCertStoreImpl* this$0, $String* name);
	virtual void addRequestedAttribute($String* attrId);
	void cacheAttribute($String* attrId, $Array<int8_t, 2>* values);
	$String* checkName($String* name);
	$Array<int8_t, 2>* getAttributeValues(::javax::naming::directory::Attribute* attr);
	::java::util::Map* getValueMap();
	virtual $Array<int8_t, 2>* getValues($String* attrId);
	::sun::security::provider::certpath::ldap::LDAPCertStoreImpl* this$0 = nullptr;
	$String* name = nullptr;
	::java::util::Map* valueMap = nullptr;
	::java::util::List* requestedAttributes = nullptr;
};

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ldap_LDAPCertStoreImpl$LDAPRequest_h_