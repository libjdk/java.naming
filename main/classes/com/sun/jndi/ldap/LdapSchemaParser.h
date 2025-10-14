#ifndef _com_sun_jndi_ldap_LdapSchemaParser_h_
#define _com_sun_jndi_ldap_LdapSchemaParser_h_
//$ class com.sun.jndi.ldap.LdapSchemaParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ABSTRACT_ID")
#undef ABSTRACT_ID
#pragma push_macro("ATTRIBUTEDESC_ATTR_ID")
#undef ATTRIBUTEDESC_ATTR_ID
#pragma push_macro("ATTRIBUTE_DEFINITION_NAME")
#undef ATTRIBUTE_DEFINITION_NAME
#pragma push_macro("ATTR_DEF_ATTRS")
#undef ATTR_DEF_ATTRS
#pragma push_macro("AUXILIARY_ID")
#undef AUXILIARY_ID
#pragma push_macro("CLASS_DEF_ATTRS")
#undef CLASS_DEF_ATTRS
#pragma push_macro("COLLECTIVE_ID")
#undef COLLECTIVE_ID
#pragma push_macro("DESC_ID")
#undef DESC_ID
#pragma push_macro("EQUALITY_ID")
#undef EQUALITY_ID
#pragma push_macro("MATCHRULEDESC_ATTR_ID")
#undef MATCHRULEDESC_ATTR_ID
#pragma push_macro("MATCHRULE_DEFINITION_NAME")
#undef MATCHRULE_DEFINITION_NAME
#pragma push_macro("MATCHRULE_DEF_ATTRS")
#undef MATCHRULE_DEF_ATTRS
#pragma push_macro("MAY_ID")
#undef MAY_ID
#pragma push_macro("MUST_ID")
#undef MUST_ID
#pragma push_macro("NAME_ID")
#undef NAME_ID
#pragma push_macro("NO_USER_MOD_ID")
#undef NO_USER_MOD_ID
#pragma push_macro("NUMERICOID_ID")
#undef NUMERICOID_ID
#pragma push_macro("OBJECTCLASSDESC_ATTR_ID")
#undef OBJECTCLASSDESC_ATTR_ID
#pragma push_macro("OBJECTCLASS_DEFINITION_NAME")
#undef OBJECTCLASS_DEFINITION_NAME
#pragma push_macro("OBSOLETE_ID")
#undef OBSOLETE_ID
#pragma push_macro("OID_LIST_BEGIN")
#undef OID_LIST_BEGIN
#pragma push_macro("OID_LIST_END")
#undef OID_LIST_END
#pragma push_macro("OID_SEPARATOR")
#undef OID_SEPARATOR
#pragma push_macro("ORDERING_ID")
#undef ORDERING_ID
#pragma push_macro("PRIVATE_ID")
#undef PRIVATE_ID
#pragma push_macro("SCHEMA_TRUE_VALUE")
#undef SCHEMA_TRUE_VALUE
#pragma push_macro("SINGLE_QUOTE")
#undef SINGLE_QUOTE
#pragma push_macro("SINGLE_VAL_ID")
#undef SINGLE_VAL_ID
#pragma push_macro("STRUCTURAL_ID")
#undef STRUCTURAL_ID
#pragma push_macro("SUBSTR_ID")
#undef SUBSTR_ID
#pragma push_macro("SUP_ID")
#undef SUP_ID
#pragma push_macro("SYNTAXDESC_ATTR_ID")
#undef SYNTAXDESC_ATTR_ID
#pragma push_macro("SYNTAX_DEFINITION_NAME")
#undef SYNTAX_DEFINITION_NAME
#pragma push_macro("SYNTAX_DEF_ATTRS")
#undef SYNTAX_DEF_ATTRS
#pragma push_macro("SYNTAX_ID")
#undef SYNTAX_ID
#pragma push_macro("USAGE_ID")
#undef USAGE_ID
#pragma push_macro("WHSP")
#undef WHSP

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapSchemaCtx;
			}
		}
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attribute;
			class Attributes;
			class DirContext;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapSchemaParser : public ::java::lang::Object {
	$class(LdapSchemaParser, 0, ::java::lang::Object)
public:
	LdapSchemaParser();
	void init$(bool netscapeBug);
	static void LDAP2JNDISchema(::javax::naming::directory::Attributes* schemaAttrs, ::com::sun::jndi::ldap::LdapSchemaCtx* schemaRoot);
	$String* attrDef2AttrDesc(::javax::naming::directory::Attributes* attrs);
	static ::javax::naming::directory::DirContext* attrDescs2AttrDefs(::javax::naming::directory::Attribute* attributeDescAttr, ::com::sun::jndi::ldap::LdapSchemaCtx* schemaRoot);
	$String* classDef2ObjectDesc(::javax::naming::directory::Attributes* attrs);
	static $ObjectArray* desc2Def($String* desc);
	static int32_t findTrailingWhitespace($String* string, int32_t pos);
	$String* matchRuleDef2MatchRuleDesc(::javax::naming::directory::Attributes* attrs);
	static ::javax::naming::directory::DirContext* matchRuleDescs2MatchRuleDefs(::javax::naming::directory::Attribute* matchRuleDescAttr, ::com::sun::jndi::ldap::LdapSchemaCtx* schemaRoot);
	static ::javax::naming::directory::DirContext* objectDescs2ClassDefs(::javax::naming::directory::Attribute* objDescsAttr, ::com::sun::jndi::ldap::LdapSchemaCtx* schemaRoot);
	static ::javax::naming::directory::Attribute* readNextTag($String* string, $ints* pos);
	static ::javax::naming::directory::Attribute* readNumericOID($String* string, $ints* pos);
	static $StringArray* readOIDs($String* string, $ints* pos);
	static $StringArray* readQDString($String* string, $ints* pos);
	static $StringArray* readQDStrings($String* string, $ints* pos);
	static $StringArray* readQDescrList($String* string, $ints* pos);
	static $StringArray* readQDescrs($String* string, $ints* pos);
	static $StringArray* readTag($String* tag, $String* string, $ints* pos);
	static $StringArray* readWOID($String* string, $ints* pos);
	static void skipWhitespace($String* string, $ints* pos);
	::javax::naming::directory::Attribute* stringifyAttrDesc(::javax::naming::directory::Attributes* attrDefAttrs);
	::javax::naming::directory::Attribute* stringifyMatchRuleDesc(::javax::naming::directory::Attributes* matchRuleDefAttrs);
	::javax::naming::directory::Attribute* stringifyObjDesc(::javax::naming::directory::Attributes* classDefAttrs);
	::javax::naming::directory::Attribute* stringifySyntaxDesc(::javax::naming::directory::Attributes* syntaxDefAttrs);
	$String* syntaxDef2SyntaxDesc(::javax::naming::directory::Attributes* attrs);
	static ::javax::naming::directory::DirContext* syntaxDescs2SyntaxDefs(::javax::naming::directory::Attribute* syntaxDescAttr, ::com::sun::jndi::ldap::LdapSchemaCtx* schemaRoot);
	$String* writeBoolean(::javax::naming::directory::Attribute* booleanAttr);
	$String* writeNumericOID(::javax::naming::directory::Attribute* nOIDAttr);
	$String* writeOIDs(::javax::naming::directory::Attribute* oidsAttr);
	$String* writeQDString(::javax::naming::directory::Attribute* qdStringAttr);
	$String* writeQDStrings(::javax::naming::directory::Attribute* attr);
	$String* writeQDescrs(::javax::naming::directory::Attribute* attr);
	$String* writeWOID(::javax::naming::directory::Attribute* attr);
	static const bool debug = false;
	static $String* OBJECTCLASSDESC_ATTR_ID;
	static $String* ATTRIBUTEDESC_ATTR_ID;
	static $String* SYNTAXDESC_ATTR_ID;
	static $String* MATCHRULEDESC_ATTR_ID;
	static $String* OBJECTCLASS_DEFINITION_NAME;
	static $StringArray* CLASS_DEF_ATTRS;
	static $String* ATTRIBUTE_DEFINITION_NAME;
	static $StringArray* ATTR_DEF_ATTRS;
	static $String* SYNTAX_DEFINITION_NAME;
	static $StringArray* SYNTAX_DEF_ATTRS;
	static $String* MATCHRULE_DEFINITION_NAME;
	static $StringArray* MATCHRULE_DEF_ATTRS;
	static const char16_t SINGLE_QUOTE = ((char16_t)39);
	static const char16_t WHSP = ((char16_t)32);
	static const char16_t OID_LIST_BEGIN = ((char16_t)40);
	static const char16_t OID_LIST_END = ((char16_t)41);
	static const char16_t OID_SEPARATOR = ((char16_t)36);
	static $String* NUMERICOID_ID;
	static $String* NAME_ID;
	static $String* DESC_ID;
	static $String* OBSOLETE_ID;
	static $String* SUP_ID;
	static $String* PRIVATE_ID;
	static $String* ABSTRACT_ID;
	static $String* STRUCTURAL_ID;
	static $String* AUXILIARY_ID;
	static $String* MUST_ID;
	static $String* MAY_ID;
	static $String* EQUALITY_ID;
	static $String* ORDERING_ID;
	static $String* SUBSTR_ID;
	static $String* SYNTAX_ID;
	static $String* SINGLE_VAL_ID;
	static $String* COLLECTIVE_ID;
	static $String* NO_USER_MOD_ID;
	static $String* USAGE_ID;
	static $String* SCHEMA_TRUE_VALUE;
	bool netscapeBug = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ABSTRACT_ID")
#pragma pop_macro("ATTRIBUTEDESC_ATTR_ID")
#pragma pop_macro("ATTRIBUTE_DEFINITION_NAME")
#pragma pop_macro("ATTR_DEF_ATTRS")
#pragma pop_macro("AUXILIARY_ID")
#pragma pop_macro("CLASS_DEF_ATTRS")
#pragma pop_macro("COLLECTIVE_ID")
#pragma pop_macro("DESC_ID")
#pragma pop_macro("EQUALITY_ID")
#pragma pop_macro("MATCHRULEDESC_ATTR_ID")
#pragma pop_macro("MATCHRULE_DEFINITION_NAME")
#pragma pop_macro("MATCHRULE_DEF_ATTRS")
#pragma pop_macro("MAY_ID")
#pragma pop_macro("MUST_ID")
#pragma pop_macro("NAME_ID")
#pragma pop_macro("NO_USER_MOD_ID")
#pragma pop_macro("NUMERICOID_ID")
#pragma pop_macro("OBJECTCLASSDESC_ATTR_ID")
#pragma pop_macro("OBJECTCLASS_DEFINITION_NAME")
#pragma pop_macro("OBSOLETE_ID")
#pragma pop_macro("OID_LIST_BEGIN")
#pragma pop_macro("OID_LIST_END")
#pragma pop_macro("OID_SEPARATOR")
#pragma pop_macro("ORDERING_ID")
#pragma pop_macro("PRIVATE_ID")
#pragma pop_macro("SCHEMA_TRUE_VALUE")
#pragma pop_macro("SINGLE_QUOTE")
#pragma pop_macro("SINGLE_VAL_ID")
#pragma pop_macro("STRUCTURAL_ID")
#pragma pop_macro("SUBSTR_ID")
#pragma pop_macro("SUP_ID")
#pragma pop_macro("SYNTAXDESC_ATTR_ID")
#pragma pop_macro("SYNTAX_DEFINITION_NAME")
#pragma pop_macro("SYNTAX_DEF_ATTRS")
#pragma pop_macro("SYNTAX_ID")
#pragma pop_macro("USAGE_ID")
#pragma pop_macro("WHSP")

#endif // _com_sun_jndi_ldap_LdapSchemaParser_h_