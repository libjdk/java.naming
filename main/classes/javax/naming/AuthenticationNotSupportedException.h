#ifndef _javax_naming_AuthenticationNotSupportedException_h_
#define _javax_naming_AuthenticationNotSupportedException_h_
//$ class javax.naming.AuthenticationNotSupportedException
//$ extends javax.naming.NamingSecurityException

#include <javax/naming/NamingSecurityException.h>

namespace javax {
	namespace naming {

class $export AuthenticationNotSupportedException : public ::javax::naming::NamingSecurityException {
	$class(AuthenticationNotSupportedException, $NO_CLASS_INIT, ::javax::naming::NamingSecurityException)
public:
	AuthenticationNotSupportedException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x9CC98783D0DAB434;
	AuthenticationNotSupportedException(const AuthenticationNotSupportedException& e);
	AuthenticationNotSupportedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_AuthenticationNotSupportedException_h_