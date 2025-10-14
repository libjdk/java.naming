#ifndef _com_sun_jndi_ldap_PersistentSearchControl_h_
#define _com_sun_jndi_ldap_PersistentSearchControl_h_
//$ class com.sun.jndi.ldap.PersistentSearchControl
//$ extends com.sun.jndi.ldap.BasicControl

#include <com/sun/jndi/ldap/BasicControl.h>
#include <java/lang/Array.h>

#pragma push_macro("ADD")
#undef ADD
#pragma push_macro("ANY")
#undef ANY
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

class PersistentSearchControl : public ::com::sun::jndi::ldap::BasicControl {
	$class(PersistentSearchControl, 0, ::com::sun::jndi::ldap::BasicControl)
public:
	PersistentSearchControl();
	void init$();
	void init$(int32_t changeTypes, bool changesOnly, bool returnControls, bool criticality);
	$bytes* setEncodedValue();
	static $String* OID;
	static const int32_t ADD = 1;
	static const int32_t DELETE = 2;
	static const int32_t MODIFY = 4;
	static const int32_t RENAME = 8;
	static const int32_t ANY = 15; // ADD | DELETE | MODIFY | RENAME
	int32_t changeTypes = 0;
	bool changesOnly = false;
	bool returnControls = false;
	static const int64_t serialVersionUID = (int64_t)0x57EAF0B6317A90E4;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ADD")
#pragma pop_macro("ANY")
#pragma pop_macro("DELETE")
#pragma pop_macro("MODIFY")
#pragma pop_macro("OID")
#pragma pop_macro("RENAME")

#endif // _com_sun_jndi_ldap_PersistentSearchControl_h_