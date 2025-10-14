#ifndef _javax_naming_directory_InvalidSearchFilterException_h_
#define _javax_naming_directory_InvalidSearchFilterException_h_
//$ class javax.naming.directory.InvalidSearchFilterException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $export InvalidSearchFilterException : public ::javax::naming::NamingException {
	$class(InvalidSearchFilterException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InvalidSearchFilterException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x284877205A985231;
	InvalidSearchFilterException(const InvalidSearchFilterException& e);
	InvalidSearchFilterException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_InvalidSearchFilterException_h_