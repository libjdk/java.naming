#ifndef _javax_naming_directory_InvalidAttributesException_h_
#define _javax_naming_directory_InvalidAttributesException_h_
//$ class javax.naming.directory.InvalidAttributesException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $export InvalidAttributesException : public ::javax::naming::NamingException {
	$class(InvalidAttributesException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InvalidAttributesException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x24301A12642C8465;
	InvalidAttributesException(const InvalidAttributesException& e);
	InvalidAttributesException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_InvalidAttributesException_h_