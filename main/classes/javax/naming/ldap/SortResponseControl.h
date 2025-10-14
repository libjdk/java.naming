#ifndef _javax_naming_ldap_SortResponseControl_h_
#define _javax_naming_ldap_SortResponseControl_h_
//$ class javax.naming.ldap.SortResponseControl
//$ extends javax.naming.ldap.BasicControl

#include <java/lang/Array.h>
#include <javax/naming/ldap/BasicControl.h>

#pragma push_macro("OID")
#undef OID

namespace javax {
	namespace naming {
		class NamingException;
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export SortResponseControl : public ::javax::naming::ldap::BasicControl {
	$class(SortResponseControl, 0, ::javax::naming::ldap::BasicControl)
public:
	SortResponseControl();
	void init$($String* id, bool criticality, $bytes* value);
	$String* getAttributeID();
	::javax::naming::NamingException* getException();
	int32_t getResultCode();
	bool isSorted();
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0x475F63EE9F4BDBDD;
	int32_t resultCode = 0;
	$String* badAttrId = nullptr;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("OID")

#endif // _javax_naming_ldap_SortResponseControl_h_