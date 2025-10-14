#ifndef _javax_naming_InvalidNameException_h_
#define _javax_naming_InvalidNameException_h_
//$ class javax.naming.InvalidNameException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import InvalidNameException : public ::javax::naming::NamingException {
	$class(InvalidNameException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InvalidNameException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x8BD565D1C1D2F2EF;
	InvalidNameException(const InvalidNameException& e);
	InvalidNameException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_InvalidNameException_h_