#ifndef _javax_naming_PartialResultException_h_
#define _javax_naming_PartialResultException_h_
//$ class javax.naming.PartialResultException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import PartialResultException : public ::javax::naming::NamingException {
	$class(PartialResultException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	PartialResultException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x23B21838F29A9562;
	PartialResultException(const PartialResultException& e);
	PartialResultException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_PartialResultException_h_