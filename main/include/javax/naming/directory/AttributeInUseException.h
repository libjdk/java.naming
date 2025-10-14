#ifndef _javax_naming_directory_AttributeInUseException_h_
#define _javax_naming_directory_AttributeInUseException_h_
//$ class javax.naming.directory.AttributeInUseException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $import AttributeInUseException : public ::javax::naming::NamingException {
	$class(AttributeInUseException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	AttributeInUseException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x3D95EA02C92A5C44;
	AttributeInUseException(const AttributeInUseException& e);
	AttributeInUseException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_AttributeInUseException_h_