#ifndef _com_sun_jndi_ldap_sasl_TlsChannelBinding$TlsChannelBindingType_h_
#define _com_sun_jndi_ldap_sasl_TlsChannelBinding$TlsChannelBindingType_h_
//$ class com.sun.jndi.ldap.sasl.TlsChannelBinding$TlsChannelBindingType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("TLS_SERVER_END_POINT")
#undef TLS_SERVER_END_POINT
#pragma push_macro("TLS_UNIQUE")
#undef TLS_UNIQUE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

class TlsChannelBinding$TlsChannelBindingType : public ::java::lang::Enum {
	$class(TlsChannelBinding$TlsChannelBindingType, 0, ::java::lang::Enum)
public:
	TlsChannelBinding$TlsChannelBindingType();
	static $Array<::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* name);
	virtual $String* getName();
	static ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* valueOf($String* name);
	static $Array<::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType>* values();
	static ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* TLS_UNIQUE;
	static ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* TLS_SERVER_END_POINT;
	static $Array<::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType>* $VALUES;
	$String* name$ = nullptr;
};

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("TLS_SERVER_END_POINT")
#pragma pop_macro("TLS_UNIQUE")

#endif // _com_sun_jndi_ldap_sasl_TlsChannelBinding$TlsChannelBindingType_h_