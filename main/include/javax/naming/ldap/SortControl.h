#ifndef _javax_naming_ldap_SortControl_h_
#define _javax_naming_ldap_SortControl_h_
//$ class javax.naming.ldap.SortControl
//$ extends javax.naming.ldap.BasicControl

#include <java/lang/Array.h>
#include <javax/naming/ldap/BasicControl.h>

#pragma push_macro("OID")
#undef OID

namespace javax {
	namespace naming {
		namespace ldap {
			class SortKey;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $import SortControl : public ::javax::naming::ldap::BasicControl {
	$class(SortControl, 0, ::javax::naming::ldap::BasicControl)
public:
	SortControl();
	void init$($String* sortBy, bool criticality);
	void init$($StringArray* sortBy, bool criticality);
	void init$($Array<::javax::naming::ldap::SortKey>* sortBy, bool criticality);
	$bytes* setEncodedValue($Array<::javax::naming::ldap::SortKey>* sortKeys);
	static $String* OID;
	static const int64_t serialVersionUID = (int64_t)0xE4B7804497A987C8;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("OID")

#endif // _javax_naming_ldap_SortControl_h_