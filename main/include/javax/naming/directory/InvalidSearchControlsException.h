#ifndef _javax_naming_directory_InvalidSearchControlsException_h_
#define _javax_naming_directory_InvalidSearchControlsException_h_
//$ class javax.naming.directory.InvalidSearchControlsException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $import InvalidSearchControlsException : public ::javax::naming::NamingException {
	$class(InvalidSearchControlsException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InvalidSearchControlsException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB8E38210910FE94F;
	InvalidSearchControlsException(const InvalidSearchControlsException& e);
	InvalidSearchControlsException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_InvalidSearchControlsException_h_