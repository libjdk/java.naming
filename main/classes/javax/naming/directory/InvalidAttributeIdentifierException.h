#ifndef _javax_naming_directory_InvalidAttributeIdentifierException_h_
#define _javax_naming_directory_InvalidAttributeIdentifierException_h_
//$ class javax.naming.directory.InvalidAttributeIdentifierException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $export InvalidAttributeIdentifierException : public ::javax::naming::NamingException {
	$class(InvalidAttributeIdentifierException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	InvalidAttributeIdentifierException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x829668E5BE4A058D;
	InvalidAttributeIdentifierException(const InvalidAttributeIdentifierException& e);
	InvalidAttributeIdentifierException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_InvalidAttributeIdentifierException_h_