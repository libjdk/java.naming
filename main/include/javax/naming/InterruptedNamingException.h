#ifndef _javax_naming_InterruptedNamingException_h_
#define _javax_naming_InterruptedNamingException_h_
//$ class javax.naming.InterruptedNamingException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import InterruptedNamingException : public ::javax::naming::NamingException {
	$class(InterruptedNamingException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InterruptedNamingException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x58E169F5A75AA1E8;
	InterruptedNamingException(const InterruptedNamingException& e);
	InterruptedNamingException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_InterruptedNamingException_h_