#ifndef _javax_naming_ConfigurationException_h_
#define _javax_naming_ConfigurationException_h_
//$ class javax.naming.ConfigurationException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $export ConfigurationException : public ::javax::naming::NamingException {
	$class(ConfigurationException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	ConfigurationException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xDCD15063AB2FD468;
	ConfigurationException(const ConfigurationException& e);
	ConfigurationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_ConfigurationException_h_