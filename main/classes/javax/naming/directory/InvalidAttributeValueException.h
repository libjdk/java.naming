#ifndef _javax_naming_directory_InvalidAttributeValueException_h_
#define _javax_naming_directory_InvalidAttributeValueException_h_
//$ class javax.naming.directory.InvalidAttributeValueException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $export InvalidAttributeValueException : public ::javax::naming::NamingException {
	$class(InvalidAttributeValueException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InvalidAttributeValueException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x7903D78AFEC63B03;
	InvalidAttributeValueException(const InvalidAttributeValueException& e);
	InvalidAttributeValueException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_InvalidAttributeValueException_h_