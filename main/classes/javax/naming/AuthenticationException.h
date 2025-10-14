#ifndef _javax_naming_AuthenticationException_h_
#define _javax_naming_AuthenticationException_h_
//$ class javax.naming.AuthenticationException
//$ extends javax.naming.NamingSecurityException

#include <javax/naming/NamingSecurityException.h>

namespace javax {
	namespace naming {

class $export AuthenticationException : public ::javax::naming::NamingSecurityException {
	$class(AuthenticationException, $NO_CLASS_INIT, ::javax::naming::NamingSecurityException)
public:
	AuthenticationException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x330CA61885881B20;
	AuthenticationException(const AuthenticationException& e);
	AuthenticationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_AuthenticationException_h_