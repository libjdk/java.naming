#ifndef _javax_naming_InsufficientResourcesException_h_
#define _javax_naming_InsufficientResourcesException_h_
//$ class javax.naming.InsufficientResourcesException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import InsufficientResourcesException : public ::javax::naming::NamingException {
	$class(InsufficientResourcesException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InsufficientResourcesException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x566D235195EBC834;
	InsufficientResourcesException(const InsufficientResourcesException& e);
	InsufficientResourcesException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_InsufficientResourcesException_h_