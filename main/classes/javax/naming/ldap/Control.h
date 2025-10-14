#ifndef _javax_naming_ldap_Control_h_
#define _javax_naming_ldap_Control_h_
//$ interface javax.naming.ldap.Control
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CRITICAL")
#undef CRITICAL
#pragma push_macro("NONCRITICAL")
#undef NONCRITICAL

namespace javax {
	namespace naming {
		namespace ldap {

class $export Control : public ::java::io::Serializable {
	$interface(Control, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual $bytes* getEncodedValue() {return nullptr;}
	virtual $String* getID() {return nullptr;}
	virtual bool isCritical() {return false;}
	static const bool CRITICAL = true;
	static const bool NONCRITICAL = false;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("CRITICAL")
#pragma pop_macro("NONCRITICAL")

#endif // _javax_naming_ldap_Control_h_