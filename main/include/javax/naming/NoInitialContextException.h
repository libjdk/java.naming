#ifndef _javax_naming_NoInitialContextException_h_
#define _javax_naming_NoInitialContextException_h_
//$ class javax.naming.NoInitialContextException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import NoInitialContextException : public ::javax::naming::NamingException {
	$class(NoInitialContextException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NoInitialContextException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0xD09FFBC0D4C9CE81;
	NoInitialContextException(const NoInitialContextException& e);
	NoInitialContextException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NoInitialContextException_h_