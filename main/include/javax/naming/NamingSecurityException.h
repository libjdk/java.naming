#ifndef _javax_naming_NamingSecurityException_h_
#define _javax_naming_NamingSecurityException_h_
//$ class javax.naming.NamingSecurityException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import NamingSecurityException : public ::javax::naming::NamingException {
	$class(NamingSecurityException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NamingSecurityException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x51422917B2BB824F;
	NamingSecurityException(const NamingSecurityException& e);
	NamingSecurityException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NamingSecurityException_h_