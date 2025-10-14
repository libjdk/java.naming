#ifndef _javax_naming_ldap_StartTlsRequest_h_
#define _javax_naming_ldap_StartTlsRequest_h_
//$ class javax.naming.ldap.StartTlsRequest
//$ extends javax.naming.ldap.ExtendedRequest

#include <java/lang/Array.h>
#include <javax/naming/ldap/ExtendedRequest.h>

#pragma push_macro("OID")
#undef OID

namespace java {
	namespace lang {
		class ClassLoader;
		class Exception;
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace naming {
		class ConfigurationException;
	}
}
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

class $export StartTlsRequest : public ::javax::naming::ldap::ExtendedRequest {
	$class(StartTlsRequest, 0, ::javax::naming::ldap::ExtendedRequest)
public:
	StartTlsRequest();
	void init$();
	virtual ::javax::naming::ldap::ExtendedResponse* createExtendedResponse($String* id, $bytes* berValue, int32_t offset, int32_t length) override;
	::java::lang::ClassLoader* getContextClassLoader();
	virtual $bytes* getEncodedValue() override;
	virtual $String* getID() override;
	static bool privilegedHasNext(::java::util::Iterator* iter);
	::javax::naming::ConfigurationException* wrapException(::java::lang::Exception* e);
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0x3DA4040AAB1718F5;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("OID")

#endif // _javax_naming_ldap_StartTlsRequest_h_