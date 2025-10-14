#ifndef _com_sun_jndi_ldap_Filter_h_
#define _com_sun_jndi_ldap_Filter_h_
//$ class com.sun.jndi.ldap.Filter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LDAP_FILTER_AND")
#undef LDAP_FILTER_AND
#pragma push_macro("LDAP_FILTER_APPROX")
#undef LDAP_FILTER_APPROX
#pragma push_macro("LDAP_FILTER_EQUALITY")
#undef LDAP_FILTER_EQUALITY
#pragma push_macro("LDAP_FILTER_EXT")
#undef LDAP_FILTER_EXT
#pragma push_macro("LDAP_FILTER_EXT_DN")
#undef LDAP_FILTER_EXT_DN
#pragma push_macro("LDAP_FILTER_EXT_RULE")
#undef LDAP_FILTER_EXT_RULE
#pragma push_macro("LDAP_FILTER_EXT_TYPE")
#undef LDAP_FILTER_EXT_TYPE
#pragma push_macro("LDAP_FILTER_EXT_VAL")
#undef LDAP_FILTER_EXT_VAL
#pragma push_macro("LDAP_FILTER_GE")
#undef LDAP_FILTER_GE
#pragma push_macro("LDAP_FILTER_LE")
#undef LDAP_FILTER_LE
#pragma push_macro("LDAP_FILTER_NOT")
#undef LDAP_FILTER_NOT
#pragma push_macro("LDAP_FILTER_OR")
#undef LDAP_FILTER_OR
#pragma push_macro("LDAP_FILTER_PRESENT")
#undef LDAP_FILTER_PRESENT
#pragma push_macro("LDAP_FILTER_SUBSTRINGS")
#undef LDAP_FILTER_SUBSTRINGS
#pragma push_macro("LDAP_SUBSTRING_ANY")
#undef LDAP_SUBSTRING_ANY
#pragma push_macro("LDAP_SUBSTRING_FINAL")
#undef LDAP_SUBSTRING_FINAL
#pragma push_macro("LDAP_SUBSTRING_INITIAL")
#undef LDAP_SUBSTRING_INITIAL

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class BerEncoder;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Filter : public ::java::lang::Object {
	$class(Filter, 0, ::java::lang::Object)
public:
	Filter();
	void init$();
	static void dprint($String* msg);
	static void dprint($String* msg, $bytes* str);
	static void dprint($String* msg, $bytes* str, int32_t start, int32_t end);
	static void encodeComplexFilter(::com::sun::jndi::ldap::BerEncoder* ber, $bytes* filter, int32_t filterType, $ints* filtOffset, int32_t filtEnd);
	static void encodeExtensibleMatch(::com::sun::jndi::ldap::BerEncoder* ber, $bytes* filter, int32_t matchStart, int32_t matchEnd, int32_t valueStart, int32_t valueEnd);
	static void encodeFilter(::com::sun::jndi::ldap::BerEncoder* ber, $bytes* filter, int32_t filterStart, int32_t filterEnd);
	static void encodeFilterList(::com::sun::jndi::ldap::BerEncoder* ber, $bytes* filter, int32_t filterType, int32_t start, int32_t end);
	static void encodeFilterString(::com::sun::jndi::ldap::BerEncoder* ber, $String* filterStr, bool isLdapv3);
	static void encodeSimpleFilter(::com::sun::jndi::ldap::BerEncoder* ber, $bytes* filter, int32_t filtStart, int32_t filtEnd);
	static void encodeSubstringFilter(::com::sun::jndi::ldap::BerEncoder* ber, $bytes* filter, int32_t typeStart, int32_t typeEnd, int32_t valueStart, int32_t valueEnd);
	static $ints* findRightParen($bytes* filter, $ints* filtOffset, int32_t end);
	static int32_t findUnescaped($bytes* str, char16_t ch, int32_t start, int32_t end);
	static int32_t indexOf($bytes* str, char16_t ch, int32_t start, int32_t end);
	static int32_t indexOf($bytes* str, $String* target, int32_t start, int32_t end);
	static $bytes* unescapeFilterValue($bytes* orig, int32_t start, int32_t end);
	static const bool dbg = false;
	static int32_t dbgIndent;
	static const int32_t LDAP_FILTER_AND = 160;
	static const int32_t LDAP_FILTER_OR = 161;
	static const int32_t LDAP_FILTER_NOT = 162;
	static const int32_t LDAP_FILTER_EQUALITY = 163;
	static const int32_t LDAP_FILTER_SUBSTRINGS = 164;
	static const int32_t LDAP_FILTER_GE = 165;
	static const int32_t LDAP_FILTER_LE = 166;
	static const int32_t LDAP_FILTER_PRESENT = 135;
	static const int32_t LDAP_FILTER_APPROX = 168;
	static const int32_t LDAP_FILTER_EXT = 169;
	static const int32_t LDAP_FILTER_EXT_RULE = 129;
	static const int32_t LDAP_FILTER_EXT_TYPE = 130;
	static const int32_t LDAP_FILTER_EXT_VAL = 131;
	static const int32_t LDAP_FILTER_EXT_DN = 132;
	static const int32_t LDAP_SUBSTRING_INITIAL = 128;
	static const int32_t LDAP_SUBSTRING_ANY = 129;
	static const int32_t LDAP_SUBSTRING_FINAL = 130;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("LDAP_FILTER_AND")
#pragma pop_macro("LDAP_FILTER_APPROX")
#pragma pop_macro("LDAP_FILTER_EQUALITY")
#pragma pop_macro("LDAP_FILTER_EXT")
#pragma pop_macro("LDAP_FILTER_EXT_DN")
#pragma pop_macro("LDAP_FILTER_EXT_RULE")
#pragma pop_macro("LDAP_FILTER_EXT_TYPE")
#pragma pop_macro("LDAP_FILTER_EXT_VAL")
#pragma pop_macro("LDAP_FILTER_GE")
#pragma pop_macro("LDAP_FILTER_LE")
#pragma pop_macro("LDAP_FILTER_NOT")
#pragma pop_macro("LDAP_FILTER_OR")
#pragma pop_macro("LDAP_FILTER_PRESENT")
#pragma pop_macro("LDAP_FILTER_SUBSTRINGS")
#pragma pop_macro("LDAP_SUBSTRING_ANY")
#pragma pop_macro("LDAP_SUBSTRING_FINAL")
#pragma pop_macro("LDAP_SUBSTRING_INITIAL")

#endif // _com_sun_jndi_ldap_Filter_h_