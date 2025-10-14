#ifndef _javax_naming_ServiceUnavailableException_h_
#define _javax_naming_ServiceUnavailableException_h_
//$ class javax.naming.ServiceUnavailableException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import ServiceUnavailableException : public ::javax::naming::NamingException {
	$class(ServiceUnavailableException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	ServiceUnavailableException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xBAA7370E65D49D3C;
	ServiceUnavailableException(const ServiceUnavailableException& e);
	ServiceUnavailableException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_ServiceUnavailableException_h_