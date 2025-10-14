#ifndef _javax_naming_MalformedLinkException_h_
#define _javax_naming_MalformedLinkException_h_
//$ class javax.naming.MalformedLinkException
//$ extends javax.naming.LinkException

#include <javax/naming/LinkException.h>

namespace javax {
	namespace naming {

class $export MalformedLinkException : public ::javax::naming::LinkException {
	$class(MalformedLinkException, $NO_CLASS_INIT, ::javax::naming::LinkException)
public:
	MalformedLinkException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xD570BFD1F64F889E;
	MalformedLinkException(const MalformedLinkException& e);
	MalformedLinkException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_MalformedLinkException_h_