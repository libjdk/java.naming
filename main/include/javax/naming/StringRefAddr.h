#ifndef _javax_naming_StringRefAddr_h_
#define _javax_naming_StringRefAddr_h_
//$ class javax.naming.StringRefAddr
//$ extends javax.naming.RefAddr

#include <javax/naming/RefAddr.h>

namespace javax {
	namespace naming {

class $import StringRefAddr : public ::javax::naming::RefAddr {
	$class(StringRefAddr, $NO_CLASS_INIT, ::javax::naming::RefAddr)
public:
	StringRefAddr();
	void init$($String* addrType, $String* addr);
	virtual $Object* getContent() override;
	$String* contents = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x844BF43CE111DCC9;
};

	} // naming
} // javax

#endif // _javax_naming_StringRefAddr_h_