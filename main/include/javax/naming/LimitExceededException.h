#ifndef _javax_naming_LimitExceededException_h_
#define _javax_naming_LimitExceededException_h_
//$ class javax.naming.LimitExceededException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import LimitExceededException : public ::javax::naming::NamingException {
	$class(LimitExceededException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	LimitExceededException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0xF537E6B69FB59310;
	LimitExceededException(const LimitExceededException& e);
	LimitExceededException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_LimitExceededException_h_