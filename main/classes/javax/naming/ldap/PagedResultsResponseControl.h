#ifndef _javax_naming_ldap_PagedResultsResponseControl_h_
#define _javax_naming_ldap_PagedResultsResponseControl_h_
//$ class javax.naming.ldap.PagedResultsResponseControl
//$ extends javax.naming.ldap.BasicControl

#include <java/lang/Array.h>
#include <javax/naming/ldap/BasicControl.h>

#pragma push_macro("OID")
#undef OID

namespace javax {
	namespace naming {
		namespace ldap {

class $export PagedResultsResponseControl : public ::javax::naming::ldap::BasicControl {
	$class(PagedResultsResponseControl, 0, ::javax::naming::ldap::BasicControl)
public:
	PagedResultsResponseControl();
	void init$($String* id, bool criticality, $bytes* value);
	$bytes* getCookie();
	int32_t getResultSize();
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0x8599D9F5F4008A96;
	int32_t resultSize = 0;
	$bytes* cookie = nullptr;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("OID")

#endif // _javax_naming_ldap_PagedResultsResponseControl_h_