#ifndef _javax_naming_CommunicationException_h_
#define _javax_naming_CommunicationException_h_
//$ class javax.naming.CommunicationException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $export CommunicationException : public ::javax::naming::NamingException {
	$class(CommunicationException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	CommunicationException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x323785A78DC496B3;
	CommunicationException(const CommunicationException& e);
	CommunicationException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_CommunicationException_h_