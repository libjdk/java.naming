#ifndef _javax_naming_ldap_ExtendedRequest_h_
#define _javax_naming_ldap_ExtendedRequest_h_
//$ interface javax.naming.ldap.ExtendedRequest
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace javax {
	namespace naming {
		namespace ldap {
			class ExtendedResponse;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export ExtendedRequest : public ::java::io::Serializable {
	$interface(ExtendedRequest, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual ::javax::naming::ldap::ExtendedResponse* createExtendedResponse($String* id, $bytes* berValue, int32_t offset, int32_t length) {return nullptr;}
	virtual $bytes* getEncodedValue() {return nullptr;}
	virtual $String* getID() {return nullptr;}
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_ExtendedRequest_h_