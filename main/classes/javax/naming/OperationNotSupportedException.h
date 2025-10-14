#ifndef _javax_naming_OperationNotSupportedException_h_
#define _javax_naming_OperationNotSupportedException_h_
//$ class javax.naming.OperationNotSupportedException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $export OperationNotSupportedException : public ::javax::naming::NamingException {
	$class(OperationNotSupportedException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	OperationNotSupportedException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0x4C3BE225C9518510;
	OperationNotSupportedException(const OperationNotSupportedException& e);
	OperationNotSupportedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_OperationNotSupportedException_h_