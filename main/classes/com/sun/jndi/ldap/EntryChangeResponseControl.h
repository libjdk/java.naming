#ifndef _com_sun_jndi_ldap_EntryChangeResponseControl_h_
#define _com_sun_jndi_ldap_EntryChangeResponseControl_h_
//$ class com.sun.jndi.ldap.EntryChangeResponseControl
//$ extends com.sun.jndi.ldap.BasicControl

#include <com/sun/jndi/ldap/BasicControl.h>
#include <java/lang/Array.h>

#pragma push_macro("ADD")
#undef ADD
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("MODIFY")
#undef MODIFY
#pragma push_macro("OID")
#undef OID
#pragma push_macro("RENAME")
#undef RENAME

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class EntryChangeResponseControl : public ::com::sun::jndi::ldap::BasicControl {
	$class(EntryChangeResponseControl, 0, ::com::sun::jndi::ldap::BasicControl)
public:
	EntryChangeResponseControl();
	void init$($String* id, bool criticality, $bytes* value);
	int64_t getChangeNumber();
	int32_t getChangeType();
	$String* getPreviousDN();
	static $String* OID;
	static const int32_t ADD = 1;
	static const int32_t DELETE = 2;
	static const int32_t MODIFY = 4;
	static const int32_t RENAME = 8;
	int32_t changeType = 0;
	$String* previousDN = nullptr;
	int64_t changeNumber = 0;
	static const int64_t serialVersionUID = (int64_t)0xE3083A78CE903761;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ADD")
#pragma pop_macro("DELETE")
#pragma pop_macro("MODIFY")
#pragma pop_macro("OID")
#pragma pop_macro("RENAME")

#endif // _com_sun_jndi_ldap_EntryChangeResponseControl_h_