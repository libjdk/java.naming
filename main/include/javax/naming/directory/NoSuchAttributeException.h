#ifndef _javax_naming_directory_NoSuchAttributeException_h_
#define _javax_naming_directory_NoSuchAttributeException_h_
//$ class javax.naming.directory.NoSuchAttributeException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {

class $import NoSuchAttributeException : public ::javax::naming::NamingException {
	$class(NoSuchAttributeException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NoSuchAttributeException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x431E6668495BFB09;
	NoSuchAttributeException(const NoSuchAttributeException& e);
	NoSuchAttributeException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_NoSuchAttributeException_h_