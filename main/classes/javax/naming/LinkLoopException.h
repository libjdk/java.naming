#ifndef _javax_naming_LinkLoopException_h_
#define _javax_naming_LinkLoopException_h_
//$ class javax.naming.LinkLoopException
//$ extends javax.naming.LinkException

#include <javax/naming/LinkException.h>

namespace javax {
	namespace naming {

class $export LinkLoopException : public ::javax::naming::LinkException {
	$class(LinkLoopException, $NO_CLASS_INIT, ::javax::naming::LinkException)
public:
	LinkLoopException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xD4B669459586AF47;
	LinkLoopException(const LinkLoopException& e);
	LinkLoopException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_LinkLoopException_h_