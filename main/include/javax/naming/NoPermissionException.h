#ifndef _javax_naming_NoPermissionException_h_
#define _javax_naming_NoPermissionException_h_
//$ class javax.naming.NoPermissionException
//$ extends javax.naming.NamingSecurityException

#include <javax/naming/NamingSecurityException.h>

namespace javax {
	namespace naming {

class $import NoPermissionException : public ::javax::naming::NamingSecurityException {
	$class(NoPermissionException, $NO_CLASS_INIT, ::javax::naming::NamingSecurityException)
public:
	NoPermissionException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x7482369E4144455F;
	NoPermissionException(const NoPermissionException& e);
	NoPermissionException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NoPermissionException_h_