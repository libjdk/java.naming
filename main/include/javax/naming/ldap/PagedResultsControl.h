#ifndef _javax_naming_ldap_PagedResultsControl_h_
#define _javax_naming_ldap_PagedResultsControl_h_
//$ class javax.naming.ldap.PagedResultsControl
//$ extends javax.naming.ldap.BasicControl

#include <java/lang/Array.h>
#include <javax/naming/ldap/BasicControl.h>

#pragma push_macro("EMPTY_COOKIE")
#undef EMPTY_COOKIE
#pragma push_macro("OID")
#undef OID

namespace javax {
	namespace naming {
		namespace ldap {

class $import PagedResultsControl : public ::javax::naming::ldap::BasicControl {
	$class(PagedResultsControl, 0, ::javax::naming::ldap::BasicControl)
public:
	PagedResultsControl();
	void init$(int32_t pageSize, bool criticality);
	void init$(int32_t pageSize, $bytes* cookie, bool criticality);
	$bytes* setEncodedValue(int32_t pageSize, $bytes* cookie);
	static $String* OID;
	static $bytes* EMPTY_COOKIE;
	static const int64_t serialVersionUID = (int64_t)0x5CC5344357803C0A;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("EMPTY_COOKIE")
#pragma pop_macro("OID")

#endif // _javax_naming_ldap_PagedResultsControl_h_