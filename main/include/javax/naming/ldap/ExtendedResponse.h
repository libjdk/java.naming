#ifndef _javax_naming_ldap_ExtendedResponse_h_
#define _javax_naming_ldap_ExtendedResponse_h_
//$ interface javax.naming.ldap.ExtendedResponse
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace javax {
	namespace naming {
		namespace ldap {

class $import ExtendedResponse : public ::java::io::Serializable {
	$interface(ExtendedResponse, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual $bytes* getEncodedValue() {return nullptr;}
	virtual $String* getID() {return nullptr;}
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_ExtendedResponse_h_