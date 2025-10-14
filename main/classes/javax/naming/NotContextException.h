#ifndef _javax_naming_NotContextException_h_
#define _javax_naming_NotContextException_h_
//$ class javax.naming.NotContextException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $export NotContextException : public ::javax::naming::NamingException {
	$class(NotContextException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NotContextException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x0BCAED718BC12E01;
	NotContextException(const NotContextException& e);
	NotContextException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NotContextException_h_