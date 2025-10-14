#ifndef _javax_naming_directory_SchemaViolationException_h_
#define _javax_naming_directory_SchemaViolationException_h_
//$ class javax.naming.directory.SchemaViolationException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $export SchemaViolationException : public ::javax::naming::NamingException {
	$class(SchemaViolationException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	SchemaViolationException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0xD5C97D2FB107BEC1;
	SchemaViolationException(const SchemaViolationException& e);
	SchemaViolationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_SchemaViolationException_h_