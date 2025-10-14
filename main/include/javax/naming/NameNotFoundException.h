#ifndef _javax_naming_NameNotFoundException_h_
#define _javax_naming_NameNotFoundException_h_
//$ class javax.naming.NameNotFoundException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import NameNotFoundException : public ::javax::naming::NamingException {
	$class(NameNotFoundException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NameNotFoundException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x90E0DD61CB91DAFB;
	NameNotFoundException(const NameNotFoundException& e);
	NameNotFoundException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NameNotFoundException_h_