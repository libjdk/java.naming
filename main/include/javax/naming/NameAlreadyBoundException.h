#ifndef _javax_naming_NameAlreadyBoundException_h_
#define _javax_naming_NameAlreadyBoundException_h_
//$ class javax.naming.NameAlreadyBoundException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import NameAlreadyBoundException : public ::javax::naming::NamingException {
	$class(NameAlreadyBoundException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NameAlreadyBoundException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x8A285766568BE5D6;
	NameAlreadyBoundException(const NameAlreadyBoundException& e);
	NameAlreadyBoundException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NameAlreadyBoundException_h_