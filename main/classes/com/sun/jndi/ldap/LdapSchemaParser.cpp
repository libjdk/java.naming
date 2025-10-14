#include <com/sun/jndi/ldap/LdapSchemaParser.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapSchemaCtx.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/naming/ConfigurationException.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/InvalidAttributeIdentifierException.h>
#include <javax/naming/directory/InvalidAttributeValueException.h>
#include <jcpp.h>

#undef ABSTRACT_ID
#undef ATTRIBUTE
#undef ATTRIBUTEDESC_ATTR_ID
#undef ATTRIBUTE_DEFINITION_NAME
#undef ATTRIBUTE_ROOT
#undef ATTR_DEF_ATTRS
#undef AUXILIARY_ID
#undef CLASS_DEF_ATTRS
#undef COLLECTIVE_ID
#undef DESC_ID
#undef EQUALITY_ID
#undef MATCHRULE
#undef MATCHRULEDESC_ATTR_ID
#undef MATCHRULE_DEFINITION_NAME
#undef MATCHRULE_DEF_ATTRS
#undef MATCHRULE_ROOT
#undef MAY_ID
#undef MUST_ID
#undef NAME_ID
#undef NO_USER_MOD_ID
#undef NUMERICOID_ID
#undef OBJECTCLASS
#undef OBJECTCLASSDESC_ATTR_ID
#undef OBJECTCLASS_DEFINITION_NAME
#undef OBJECTCLASS_ROOT
#undef OBSOLETE_ID
#undef OID_LIST_BEGIN
#undef OID_LIST_END
#undef OID_SEPARATOR
#undef ORDERING_ID
#undef PRIVATE_ID
#undef SCHEMA_TRUE_VALUE
#undef SINGLE_QUOTE
#undef SINGLE_VAL_ID
#undef STRUCTURAL_ID
#undef SUBSTR_ID
#undef SUP_ID
#undef SYNTAX
#undef SYNTAXDESC_ATTR_ID
#undef SYNTAX_DEFINITION_NAME
#undef SYNTAX_DEF_ATTRS
#undef SYNTAX_ID
#undef SYNTAX_ROOT
#undef USAGE_ID
#undef WHSP

using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapSchemaCtx = ::com::sun::jndi::ldap::LdapSchemaCtx;
using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $ConfigurationException = ::javax::naming::ConfigurationException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $InvalidAttributeIdentifierException = ::javax::naming::directory::InvalidAttributeIdentifierException;
using $InvalidAttributeValueException = ::javax::naming::directory::InvalidAttributeValueException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapSchemaParser_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaParser, debug)},
	{"OBJECTCLASSDESC_ATTR_ID", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, OBJECTCLASSDESC_ATTR_ID)},
	{"ATTRIBUTEDESC_ATTR_ID", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, ATTRIBUTEDESC_ATTR_ID)},
	{"SYNTAXDESC_ATTR_ID", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, SYNTAXDESC_ATTR_ID)},
	{"MATCHRULEDESC_ATTR_ID", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, MATCHRULEDESC_ATTR_ID)},
	{"OBJECTCLASS_DEFINITION_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, OBJECTCLASS_DEFINITION_NAME)},
	{"CLASS_DEF_ATTRS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, CLASS_DEF_ATTRS)},
	{"ATTRIBUTE_DEFINITION_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, ATTRIBUTE_DEFINITION_NAME)},
	{"ATTR_DEF_ATTRS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, ATTR_DEF_ATTRS)},
	{"SYNTAX_DEFINITION_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, SYNTAX_DEFINITION_NAME)},
	{"SYNTAX_DEF_ATTRS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, SYNTAX_DEF_ATTRS)},
	{"MATCHRULE_DEFINITION_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LdapSchemaParser, MATCHRULE_DEFINITION_NAME)},
	{"MATCHRULE_DEF_ATTRS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, MATCHRULE_DEF_ATTRS)},
	{"SINGLE_QUOTE", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaParser, SINGLE_QUOTE)},
	{"WHSP", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaParser, WHSP)},
	{"OID_LIST_BEGIN", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaParser, OID_LIST_BEGIN)},
	{"OID_LIST_END", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaParser, OID_LIST_END)},
	{"OID_SEPARATOR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaParser, OID_SEPARATOR)},
	{"NUMERICOID_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, NUMERICOID_ID)},
	{"NAME_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, NAME_ID)},
	{"DESC_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, DESC_ID)},
	{"OBSOLETE_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, OBSOLETE_ID)},
	{"SUP_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, SUP_ID)},
	{"PRIVATE_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, PRIVATE_ID)},
	{"ABSTRACT_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, ABSTRACT_ID)},
	{"STRUCTURAL_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, STRUCTURAL_ID)},
	{"AUXILIARY_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, AUXILIARY_ID)},
	{"MUST_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, MUST_ID)},
	{"MAY_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, MAY_ID)},
	{"EQUALITY_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, EQUALITY_ID)},
	{"ORDERING_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, ORDERING_ID)},
	{"SUBSTR_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, SUBSTR_ID)},
	{"SYNTAX_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, SYNTAX_ID)},
	{"SINGLE_VAL_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, SINGLE_VAL_ID)},
	{"COLLECTIVE_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, COLLECTIVE_ID)},
	{"NO_USER_MOD_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, NO_USER_MOD_ID)},
	{"USAGE_ID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, USAGE_ID)},
	{"SCHEMA_TRUE_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapSchemaParser, SCHEMA_TRUE_VALUE)},
	{"netscapeBug", "Z", nullptr, $PRIVATE, $field(LdapSchemaParser, netscapeBug)},
	{}
};

$MethodInfo _LdapSchemaParser_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, 0, $method(static_cast<void(LdapSchemaParser::*)(bool)>(&LdapSchemaParser::init$))},
	{"LDAP2JNDISchema", "(Ljavax/naming/directory/Attributes;Lcom/sun/jndi/ldap/LdapSchemaCtx;)V", nullptr, $STATIC | $FINAL, $method(static_cast<void(*)($Attributes*,$LdapSchemaCtx*)>(&LdapSchemaParser::LDAP2JNDISchema)), "javax.naming.NamingException"},
	{"attrDef2AttrDesc", "(Ljavax/naming/directory/Attributes;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::attrDef2AttrDesc)), "javax.naming.NamingException"},
	{"attrDescs2AttrDefs", "(Ljavax/naming/directory/Attribute;Lcom/sun/jndi/ldap/LdapSchemaCtx;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$DirContext*(*)($Attribute*,$LdapSchemaCtx*)>(&LdapSchemaParser::attrDescs2AttrDefs)), "javax.naming.NamingException"},
	{"classDef2ObjectDesc", "(Ljavax/naming/directory/Attributes;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::classDef2ObjectDesc)), "javax.naming.NamingException"},
	{"desc2Def", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ObjectArray*(*)($String*)>(&LdapSchemaParser::desc2Def)), "javax.naming.NamingException"},
	{"findTrailingWhitespace", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)($String*,int32_t)>(&LdapSchemaParser::findTrailingWhitespace))},
	{"matchRuleDef2MatchRuleDesc", "(Ljavax/naming/directory/Attributes;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::matchRuleDef2MatchRuleDesc)), "javax.naming.NamingException"},
	{"matchRuleDescs2MatchRuleDefs", "(Ljavax/naming/directory/Attribute;Lcom/sun/jndi/ldap/LdapSchemaCtx;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$DirContext*(*)($Attribute*,$LdapSchemaCtx*)>(&LdapSchemaParser::matchRuleDescs2MatchRuleDefs)), "javax.naming.NamingException"},
	{"objectDescs2ClassDefs", "(Ljavax/naming/directory/Attribute;Lcom/sun/jndi/ldap/LdapSchemaCtx;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$DirContext*(*)($Attribute*,$LdapSchemaCtx*)>(&LdapSchemaParser::objectDescs2ClassDefs)), "javax.naming.NamingException"},
	{"readNextTag", "(Ljava/lang/String;[I)Ljavax/naming/directory/Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$Attribute*(*)($String*,$ints*)>(&LdapSchemaParser::readNextTag)), "javax.naming.NamingException"},
	{"readNumericOID", "(Ljava/lang/String;[I)Ljavax/naming/directory/Attribute;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$Attribute*(*)($String*,$ints*)>(&LdapSchemaParser::readNumericOID)), "javax.naming.NamingException"},
	{"readOIDs", "(Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$ints*)>(&LdapSchemaParser::readOIDs)), "javax.naming.NamingException"},
	{"readQDString", "(Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$ints*)>(&LdapSchemaParser::readQDString)), "javax.naming.NamingException"},
	{"readQDStrings", "(Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$ints*)>(&LdapSchemaParser::readQDStrings)), "javax.naming.NamingException"},
	{"readQDescrList", "(Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$ints*)>(&LdapSchemaParser::readQDescrList)), "javax.naming.NamingException"},
	{"readQDescrs", "(Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$ints*)>(&LdapSchemaParser::readQDescrs)), "javax.naming.NamingException"},
	{"readTag", "(Ljava/lang/String;Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$String*,$ints*)>(&LdapSchemaParser::readTag)), "javax.naming.NamingException"},
	{"readWOID", "(Ljava/lang/String;[I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$StringArray*(*)($String*,$ints*)>(&LdapSchemaParser::readWOID)), "javax.naming.NamingException"},
	{"skipWhitespace", "(Ljava/lang/String;[I)V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)($String*,$ints*)>(&LdapSchemaParser::skipWhitespace))},
	{"stringifyAttrDesc", "(Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/Attribute;", nullptr, $FINAL, $method(static_cast<$Attribute*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::stringifyAttrDesc)), "javax.naming.NamingException"},
	{"stringifyMatchRuleDesc", "(Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/Attribute;", nullptr, $FINAL, $method(static_cast<$Attribute*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::stringifyMatchRuleDesc)), "javax.naming.NamingException"},
	{"stringifyObjDesc", "(Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/Attribute;", nullptr, $FINAL, $method(static_cast<$Attribute*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::stringifyObjDesc)), "javax.naming.NamingException"},
	{"stringifySyntaxDesc", "(Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/Attribute;", nullptr, $FINAL, $method(static_cast<$Attribute*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::stringifySyntaxDesc)), "javax.naming.NamingException"},
	{"syntaxDef2SyntaxDesc", "(Ljavax/naming/directory/Attributes;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attributes*)>(&LdapSchemaParser::syntaxDef2SyntaxDesc)), "javax.naming.NamingException"},
	{"syntaxDescs2SyntaxDefs", "(Ljavax/naming/directory/Attribute;Lcom/sun/jndi/ldap/LdapSchemaCtx;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$DirContext*(*)($Attribute*,$LdapSchemaCtx*)>(&LdapSchemaParser::syntaxDescs2SyntaxDefs)), "javax.naming.NamingException"},
	{"writeBoolean", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeBoolean)), "javax.naming.NamingException"},
	{"writeNumericOID", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeNumericOID)), "javax.naming.NamingException"},
	{"writeOIDs", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeOIDs)), "javax.naming.NamingException"},
	{"writeQDString", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeQDString)), "javax.naming.NamingException"},
	{"writeQDStrings", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeQDStrings)), "javax.naming.NamingException"},
	{"writeQDescrs", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeQDescrs)), "javax.naming.NamingException"},
	{"writeWOID", "(Ljavax/naming/directory/Attribute;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(LdapSchemaParser::*)($Attribute*)>(&LdapSchemaParser::writeWOID)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapSchemaParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapSchemaParser",
	"java.lang.Object",
	nullptr,
	_LdapSchemaParser_FieldInfo_,
	_LdapSchemaParser_MethodInfo_
};

$Object* allocate$LdapSchemaParser($Class* clazz) {
	return $of($alloc(LdapSchemaParser));
}

$String* LdapSchemaParser::OBJECTCLASSDESC_ATTR_ID = nullptr;
$String* LdapSchemaParser::ATTRIBUTEDESC_ATTR_ID = nullptr;
$String* LdapSchemaParser::SYNTAXDESC_ATTR_ID = nullptr;
$String* LdapSchemaParser::MATCHRULEDESC_ATTR_ID = nullptr;
$String* LdapSchemaParser::OBJECTCLASS_DEFINITION_NAME = nullptr;
$StringArray* LdapSchemaParser::CLASS_DEF_ATTRS = nullptr;
$String* LdapSchemaParser::ATTRIBUTE_DEFINITION_NAME = nullptr;
$StringArray* LdapSchemaParser::ATTR_DEF_ATTRS = nullptr;
$String* LdapSchemaParser::SYNTAX_DEFINITION_NAME = nullptr;
$StringArray* LdapSchemaParser::SYNTAX_DEF_ATTRS = nullptr;
$String* LdapSchemaParser::MATCHRULE_DEFINITION_NAME = nullptr;
$StringArray* LdapSchemaParser::MATCHRULE_DEF_ATTRS = nullptr;
$String* LdapSchemaParser::NUMERICOID_ID = nullptr;
$String* LdapSchemaParser::NAME_ID = nullptr;
$String* LdapSchemaParser::DESC_ID = nullptr;
$String* LdapSchemaParser::OBSOLETE_ID = nullptr;
$String* LdapSchemaParser::SUP_ID = nullptr;
$String* LdapSchemaParser::PRIVATE_ID = nullptr;
$String* LdapSchemaParser::ABSTRACT_ID = nullptr;
$String* LdapSchemaParser::STRUCTURAL_ID = nullptr;
$String* LdapSchemaParser::AUXILIARY_ID = nullptr;
$String* LdapSchemaParser::MUST_ID = nullptr;
$String* LdapSchemaParser::MAY_ID = nullptr;
$String* LdapSchemaParser::EQUALITY_ID = nullptr;
$String* LdapSchemaParser::ORDERING_ID = nullptr;
$String* LdapSchemaParser::SUBSTR_ID = nullptr;
$String* LdapSchemaParser::SYNTAX_ID = nullptr;
$String* LdapSchemaParser::SINGLE_VAL_ID = nullptr;
$String* LdapSchemaParser::COLLECTIVE_ID = nullptr;
$String* LdapSchemaParser::NO_USER_MOD_ID = nullptr;
$String* LdapSchemaParser::USAGE_ID = nullptr;
$String* LdapSchemaParser::SCHEMA_TRUE_VALUE = nullptr;

void LdapSchemaParser::init$(bool netscapeBug) {
	this->netscapeBug = netscapeBug;
}

void LdapSchemaParser::LDAP2JNDISchema($Attributes* schemaAttrs, $LdapSchemaCtx* schemaRoot) {
	$init(LdapSchemaParser);
	$var($Attribute, objectClassesAttr, nullptr);
	$var($Attribute, attributeDefAttr, nullptr);
	$var($Attribute, syntaxDefAttr, nullptr);
	$var($Attribute, matchRuleDefAttr, nullptr);
	$assign(objectClassesAttr, $nc(schemaAttrs)->get(LdapSchemaParser::OBJECTCLASSDESC_ATTR_ID));
	if (objectClassesAttr != nullptr) {
		objectDescs2ClassDefs(objectClassesAttr, schemaRoot);
	}
	$assign(attributeDefAttr, schemaAttrs->get(LdapSchemaParser::ATTRIBUTEDESC_ATTR_ID));
	if (attributeDefAttr != nullptr) {
		attrDescs2AttrDefs(attributeDefAttr, schemaRoot);
	}
	$assign(syntaxDefAttr, schemaAttrs->get(LdapSchemaParser::SYNTAXDESC_ATTR_ID));
	if (syntaxDefAttr != nullptr) {
		syntaxDescs2SyntaxDefs(syntaxDefAttr, schemaRoot);
	}
	$assign(matchRuleDefAttr, schemaAttrs->get(LdapSchemaParser::MATCHRULEDESC_ATTR_ID));
	if (matchRuleDefAttr != nullptr) {
		matchRuleDescs2MatchRuleDefs(matchRuleDefAttr, schemaRoot);
	}
}

$DirContext* LdapSchemaParser::objectDescs2ClassDefs($Attribute* objDescsAttr, $LdapSchemaCtx* schemaRoot) {
	$init(LdapSchemaParser);
	$var($NamingEnumeration, objDescs, nullptr);
	$var($Attributes, objDef, nullptr);
	$var($LdapSchemaCtx, classDefTree, nullptr);
	$var($Attributes, attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
	attrs->put($nc(LdapSchemaParser::CLASS_DEF_ATTRS)->get(0), $nc(LdapSchemaParser::CLASS_DEF_ATTRS)->get(1));
	$assign(classDefTree, $nc(schemaRoot)->setup($LdapSchemaCtx::OBJECTCLASS_ROOT, LdapSchemaParser::OBJECTCLASS_DEFINITION_NAME, attrs));
	$assign(objDescs, $nc(objDescsAttr)->getAll());
	$var($String, currentName, nullptr);
	while ($nc(objDescs)->hasMore()) {
		$var($String, objDesc, $cast($String, objDescs->next()));
		try {
			$var($ObjectArray, def, desc2Def(objDesc));
			$assign(currentName, $cast($String, $nc(def)->get(0)));
			$assign(objDef, $cast($Attributes, def->get(1)));
			$nc(classDefTree)->setup($LdapSchemaCtx::OBJECTCLASS, currentName, objDef);
		} catch ($NamingException&) {
			$catch();
		}
	}
	return classDefTree;
}

$DirContext* LdapSchemaParser::attrDescs2AttrDefs($Attribute* attributeDescAttr, $LdapSchemaCtx* schemaRoot) {
	$init(LdapSchemaParser);
	$var($NamingEnumeration, attrDescs, nullptr);
	$var($Attributes, attrDef, nullptr);
	$var($LdapSchemaCtx, attrDefTree, nullptr);
	$var($Attributes, attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
	attrs->put($nc(LdapSchemaParser::ATTR_DEF_ATTRS)->get(0), $nc(LdapSchemaParser::ATTR_DEF_ATTRS)->get(1));
	$assign(attrDefTree, $nc(schemaRoot)->setup($LdapSchemaCtx::ATTRIBUTE_ROOT, LdapSchemaParser::ATTRIBUTE_DEFINITION_NAME, attrs));
	$assign(attrDescs, $nc(attributeDescAttr)->getAll());
	$var($String, currentName, nullptr);
	while ($nc(attrDescs)->hasMore()) {
		$var($String, attrDesc, $cast($String, attrDescs->next()));
		try {
			$var($ObjectArray, def, desc2Def(attrDesc));
			$assign(currentName, $cast($String, $nc(def)->get(0)));
			$assign(attrDef, $cast($Attributes, def->get(1)));
			$nc(attrDefTree)->setup($LdapSchemaCtx::ATTRIBUTE, currentName, attrDef);
		} catch ($NamingException&) {
			$catch();
		}
	}
	return attrDefTree;
}

$DirContext* LdapSchemaParser::syntaxDescs2SyntaxDefs($Attribute* syntaxDescAttr, $LdapSchemaCtx* schemaRoot) {
	$init(LdapSchemaParser);
	$var($NamingEnumeration, syntaxDescs, nullptr);
	$var($Attributes, syntaxDef, nullptr);
	$var($LdapSchemaCtx, syntaxDefTree, nullptr);
	$var($Attributes, attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
	attrs->put($nc(LdapSchemaParser::SYNTAX_DEF_ATTRS)->get(0), $nc(LdapSchemaParser::SYNTAX_DEF_ATTRS)->get(1));
	$assign(syntaxDefTree, $nc(schemaRoot)->setup($LdapSchemaCtx::SYNTAX_ROOT, LdapSchemaParser::SYNTAX_DEFINITION_NAME, attrs));
	$assign(syntaxDescs, $nc(syntaxDescAttr)->getAll());
	$var($String, currentName, nullptr);
	while ($nc(syntaxDescs)->hasMore()) {
		$var($String, syntaxDesc, $cast($String, syntaxDescs->next()));
		try {
			$var($ObjectArray, def, desc2Def(syntaxDesc));
			$assign(currentName, $cast($String, $nc(def)->get(0)));
			$assign(syntaxDef, $cast($Attributes, def->get(1)));
			$nc(syntaxDefTree)->setup($LdapSchemaCtx::SYNTAX, currentName, syntaxDef);
		} catch ($NamingException&) {
			$catch();
		}
	}
	return syntaxDefTree;
}

$DirContext* LdapSchemaParser::matchRuleDescs2MatchRuleDefs($Attribute* matchRuleDescAttr, $LdapSchemaCtx* schemaRoot) {
	$init(LdapSchemaParser);
	$var($NamingEnumeration, matchRuleDescs, nullptr);
	$var($Attributes, matchRuleDef, nullptr);
	$var($LdapSchemaCtx, matchRuleDefTree, nullptr);
	$var($Attributes, attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
	attrs->put($nc(LdapSchemaParser::MATCHRULE_DEF_ATTRS)->get(0), $nc(LdapSchemaParser::MATCHRULE_DEF_ATTRS)->get(1));
	$assign(matchRuleDefTree, $nc(schemaRoot)->setup($LdapSchemaCtx::MATCHRULE_ROOT, LdapSchemaParser::MATCHRULE_DEFINITION_NAME, attrs));
	$assign(matchRuleDescs, $nc(matchRuleDescAttr)->getAll());
	$var($String, currentName, nullptr);
	while ($nc(matchRuleDescs)->hasMore()) {
		$var($String, matchRuleDesc, $cast($String, matchRuleDescs->next()));
		try {
			$var($ObjectArray, def, desc2Def(matchRuleDesc));
			$assign(currentName, $cast($String, $nc(def)->get(0)));
			$assign(matchRuleDef, $cast($Attributes, def->get(1)));
			$nc(matchRuleDefTree)->setup($LdapSchemaCtx::MATCHRULE, currentName, matchRuleDef);
		} catch ($NamingException&) {
			$catch();
		}
	}
	return matchRuleDefTree;
}

$ObjectArray* LdapSchemaParser::desc2Def($String* desc) {
	$init(LdapSchemaParser);
	$var($Attributes, attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
	$var($Attribute, attr, nullptr);
	$var($ints, pos, $new($ints, {1}));
	bool moreTags = true;
	$assign(attr, readNumericOID(desc, pos));
	$var($String, currentName, $cast($String, $nc(attr)->get(0)));
	attrs->put(attr);
	skipWhitespace(desc, pos);
	while (moreTags) {
		$assign(attr, readNextTag(desc, pos));
		attrs->put(attr);
		if ($nc($($nc(attr)->getID()))->equals(LdapSchemaParser::NAME_ID)) {
			$assign(currentName, $cast($String, attr->get(0)));
		}
		skipWhitespace(desc, pos);
		if (pos->get(0) >= $nc(desc)->length() - 1) {
			moreTags = false;
		}
	}
	return $new($ObjectArray, {
		$of(currentName),
		$of(attrs)
	});
}

int32_t LdapSchemaParser::findTrailingWhitespace($String* string, int32_t pos) {
	$init(LdapSchemaParser);
	for (int32_t i = pos; i > 0; --i) {
		if ($nc(string)->charAt(i) != LdapSchemaParser::WHSP) {
			return i + 1;
		}
	}
	return 0;
}

void LdapSchemaParser::skipWhitespace($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	for (int32_t i = $nc(pos)->get(0); i < $nc(string)->length(); ++i) {
		if (string->charAt(i) != LdapSchemaParser::WHSP) {
			pos->set(0, i);
			return;
		}
	}
}

$Attribute* LdapSchemaParser::readNumericOID($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	int32_t begin = 0;
	int32_t end = 0;
	$var($String, value, nullptr);
	skipWhitespace(string, pos);
	begin = $nc(pos)->get(0);
	end = $nc(string)->indexOf((int32_t)LdapSchemaParser::WHSP, begin);
	if (end == -1 || end - begin < 1) {
		$throwNew($InvalidAttributeValueException, $$str({"no numericoid found: "_s, string}));
	}
	$assign(value, string->substring(begin, end));
	(*pos)[0] += value->length();
	return $new($BasicAttribute, LdapSchemaParser::NUMERICOID_ID, $of(value));
}

$Attribute* LdapSchemaParser::readNextTag($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	$var($Attribute, attr, nullptr);
	$var($String, tagName, nullptr);
	$var($StringArray, values, nullptr);
	skipWhitespace(string, pos);
	int32_t trailingSpace = $nc(string)->indexOf((int32_t)LdapSchemaParser::WHSP, $nc(pos)->get(0));
	if (trailingSpace < 0) {
		$assign(tagName, string->substring($nc(pos)->get(0), string->length() - 1));
	} else {
		$assign(tagName, string->substring($nc(pos)->get(0), trailingSpace));
	}
	$assign(values, readTag(tagName, string, pos));
	if ($nc(values)->length == 0) {
		$throwNew($InvalidAttributeValueException, $$str({"no values for attribute \""_s, tagName, "\""_s}));
	}
	$assign(attr, $new($BasicAttribute, tagName, $of($nc(values)->get(0))));
	for (int32_t i = 1; i < $nc(values)->length; ++i) {
		attr->add(values->get(i));
	}
	return attr;
}

$StringArray* LdapSchemaParser::readTag($String* tag, $String* string, $ints* pos) {
	$init(LdapSchemaParser);
	(*$nc(pos))[0] += $nc(tag)->length();
	skipWhitespace(string, pos);
	if (tag->equals(LdapSchemaParser::NAME_ID)) {
		return readQDescrs(string, pos);
	}
	if (tag->equals(LdapSchemaParser::DESC_ID)) {
		return readQDString(string, pos);
	}
	bool var$2 = tag->equals(LdapSchemaParser::EQUALITY_ID);
	bool var$1 = var$2 || tag->equals(LdapSchemaParser::ORDERING_ID);
	bool var$0 = var$1 || tag->equals(LdapSchemaParser::SUBSTR_ID);
	if (var$0 || tag->equals(LdapSchemaParser::SYNTAX_ID)) {
		return readWOID(string, pos);
	}
	bool var$8 = tag->equals(LdapSchemaParser::OBSOLETE_ID);
	bool var$7 = var$8 || tag->equals(LdapSchemaParser::ABSTRACT_ID);
	bool var$6 = var$7 || tag->equals(LdapSchemaParser::STRUCTURAL_ID);
	bool var$5 = var$6 || tag->equals(LdapSchemaParser::AUXILIARY_ID);
	bool var$4 = var$5 || tag->equals(LdapSchemaParser::SINGLE_VAL_ID);
	bool var$3 = var$4 || tag->equals(LdapSchemaParser::COLLECTIVE_ID);
	if (var$3 || tag->equals(LdapSchemaParser::NO_USER_MOD_ID)) {
		return $new($StringArray, {LdapSchemaParser::SCHEMA_TRUE_VALUE});
	}
	bool var$11 = tag->equals(LdapSchemaParser::SUP_ID);
	bool var$10 = var$11 || tag->equals(LdapSchemaParser::MUST_ID);
	bool var$9 = var$10 || tag->equals(LdapSchemaParser::MAY_ID);
	if (var$9 || tag->equals(LdapSchemaParser::USAGE_ID)) {
		return readOIDs(string, pos);
	}
	return readQDStrings(string, pos);
}

$StringArray* LdapSchemaParser::readQDString($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	int32_t begin = 0;
	int32_t end = 0;
	begin = $nc(string)->indexOf((int32_t)LdapSchemaParser::SINGLE_QUOTE, $nc(pos)->get(0)) + 1;
	end = string->indexOf((int32_t)LdapSchemaParser::SINGLE_QUOTE, begin);
	if (begin == -1 || end == -1 || begin == end) {
		$throwNew($InvalidAttributeIdentifierException, $$str({"malformed QDString: "_s, string}));
	}
	if (string->charAt(begin - 1) != LdapSchemaParser::SINGLE_QUOTE) {
		$throwNew($InvalidAttributeIdentifierException, $$str({"qdstring has no end mark: "_s, string}));
	}
	$nc(pos)->set(0, end + 1);
	return $new($StringArray, {$(string->substring(begin, end))});
}

$StringArray* LdapSchemaParser::readQDStrings($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	return readQDescrs(string, pos);
}

$StringArray* LdapSchemaParser::readQDescrs($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	skipWhitespace(string, pos);
	switch ($nc(string)->charAt($nc(pos)->get(0))) {
	case LdapSchemaParser::OID_LIST_BEGIN:
		{
			return readQDescrList(string, pos);
		}
	case LdapSchemaParser::SINGLE_QUOTE:
		{
			return readQDString(string, pos);
		}
	default:
		{
			$throwNew($InvalidAttributeValueException, $$str({"unexpected oids string: "_s, string}));
		}
	}
}

$StringArray* LdapSchemaParser::readQDescrList($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	int32_t begin = 0;
	int32_t end = 0;
	$var($Vector, values, $new($Vector, 5));
	++(*$nc(pos))[0];
	skipWhitespace(string, pos);
	begin = pos->get(0);
	end = $nc(string)->indexOf((int32_t)LdapSchemaParser::OID_LIST_END, begin);
	if (end == -1) {
		$throwNew($InvalidAttributeValueException, $$str({"oidlist has no end mark: "_s, string}));
	}
	while (begin < end) {
		$var($StringArray, one, readQDString(string, pos));
		values->addElement($nc(one)->get(0));
		skipWhitespace(string, pos);
		begin = pos->get(0);
	}
	pos->set(0, end + 1);
	$var($StringArray, answer, $new($StringArray, values->size()));
	for (int32_t i = 0; i < answer->length; ++i) {
		answer->set(i, $cast($String, $(values->elementAt(i))));
	}
	return answer;
}

$StringArray* LdapSchemaParser::readWOID($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	skipWhitespace(string, pos);
	if ($nc(string)->charAt($nc(pos)->get(0)) == LdapSchemaParser::SINGLE_QUOTE) {
		return readQDString(string, pos);
	}
	int32_t begin = 0;
	int32_t end = 0;
	begin = $nc(pos)->get(0);
	end = $nc(string)->indexOf((int32_t)LdapSchemaParser::WHSP, begin);
	if (end == -1 || begin == end) {
		$throwNew($InvalidAttributeIdentifierException, $$str({"malformed OID: "_s, string}));
	}
	pos->set(0, end + 1);
	return $new($StringArray, {$(string->substring(begin, end))});
}

$StringArray* LdapSchemaParser::readOIDs($String* string, $ints* pos) {
	$init(LdapSchemaParser);
	skipWhitespace(string, pos);
	if ($nc(string)->charAt($nc(pos)->get(0)) != LdapSchemaParser::OID_LIST_BEGIN) {
		return readWOID(string, pos);
	}
	int32_t begin = 0;
	int32_t cur = 0;
	int32_t end = 0;
	$var($String, oidName, nullptr);
	$var($Vector, values, $new($Vector, 5));
	++(*$nc(pos))[0];
	skipWhitespace(string, pos);
	begin = pos->get(0);
	end = $nc(string)->indexOf((int32_t)LdapSchemaParser::OID_LIST_END, begin);
	cur = string->indexOf((int32_t)LdapSchemaParser::OID_SEPARATOR, begin);
	if (end == -1) {
		$throwNew($InvalidAttributeValueException, $$str({"oidlist has no end mark: "_s, string}));
	}
	if (cur == -1 || end < cur) {
		cur = end;
	}
	while (cur < end && cur > 0) {
		int32_t wsBegin = findTrailingWhitespace(string, cur - 1);
		$assign(oidName, string->substring(begin, wsBegin));
		values->addElement(oidName);
		pos->set(0, cur + 1);
		skipWhitespace(string, pos);
		begin = pos->get(0);
		cur = string->indexOf((int32_t)LdapSchemaParser::OID_SEPARATOR, begin);
	}
	int32_t wsBegin = findTrailingWhitespace(string, end - 1);
	$assign(oidName, string->substring(begin, wsBegin));
	values->addElement(oidName);
	pos->set(0, end + 1);
	$var($StringArray, answer, $new($StringArray, values->size()));
	for (int32_t i = 0; i < answer->length; ++i) {
		answer->set(i, $cast($String, $(values->elementAt(i))));
	}
	return answer;
}

$String* LdapSchemaParser::classDef2ObjectDesc($Attributes* attrs) {
	$var($StringBuilder, objectDesc, $new($StringBuilder, "( "_s));
	$var($Attribute, attr, nullptr);
	int32_t count = 0;
	$assign(attr, $nc(attrs)->get(LdapSchemaParser::NUMERICOID_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeNumericOID(attr)));
		++count;
	} else {
		$throwNew($ConfigurationException, "Class definition doesn\'thave a numeric OID"_s);
	}
	$assign(attr, attrs->get(LdapSchemaParser::NAME_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeQDescrs(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::DESC_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeQDString(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::OBSOLETE_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::SUP_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeOIDs(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::ABSTRACT_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::STRUCTURAL_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::AUXILIARY_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::MUST_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeOIDs(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::MAY_ID));
	if (attr != nullptr) {
		objectDesc->append($(writeOIDs(attr)));
		++count;
	}
	if (count < attrs->size()) {
		$var($String, attrId, nullptr);
		{
			$var($NamingEnumeration, ae, attrs->getAll());
			for (; $nc(ae)->hasMoreElements();) {
				$assign(attr, $cast($Attribute, ae->next()));
				$assign(attrId, $nc(attr)->getID());
				bool var$8 = $nc(attrId)->equals(LdapSchemaParser::NUMERICOID_ID);
				bool var$7 = var$8 || $nc(attrId)->equals(LdapSchemaParser::NAME_ID);
				bool var$6 = var$7 || $nc(attrId)->equals(LdapSchemaParser::SUP_ID);
				bool var$5 = var$6 || $nc(attrId)->equals(LdapSchemaParser::MAY_ID);
				bool var$4 = var$5 || $nc(attrId)->equals(LdapSchemaParser::MUST_ID);
				bool var$3 = var$4 || $nc(attrId)->equals(LdapSchemaParser::STRUCTURAL_ID);
				bool var$2 = var$3 || $nc(attrId)->equals(LdapSchemaParser::DESC_ID);
				bool var$1 = var$2 || $nc(attrId)->equals(LdapSchemaParser::AUXILIARY_ID);
				bool var$0 = var$1 || $nc(attrId)->equals(LdapSchemaParser::ABSTRACT_ID);
				if (var$0 || $nc(attrId)->equals(LdapSchemaParser::OBSOLETE_ID)) {
					continue;
				} else {
					objectDesc->append($(writeQDStrings(attr)));
				}
			}
		}
	}
	objectDesc->append(")"_s);
	return objectDesc->toString();
}

$String* LdapSchemaParser::attrDef2AttrDesc($Attributes* attrs) {
	$var($StringBuilder, attrDesc, $new($StringBuilder, "( "_s));
	$var($Attribute, attr, nullptr);
	int32_t count = 0;
	$assign(attr, $nc(attrs)->get(LdapSchemaParser::NUMERICOID_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeNumericOID(attr)));
		++count;
	} else {
		$throwNew($ConfigurationException, "Attribute type doesn\'thave a numeric OID"_s);
	}
	$assign(attr, attrs->get(LdapSchemaParser::NAME_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeQDescrs(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::DESC_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeQDString(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::OBSOLETE_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::SUP_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeWOID(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::EQUALITY_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeWOID(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::ORDERING_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeWOID(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::SUBSTR_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeWOID(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::SYNTAX_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeWOID(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::SINGLE_VAL_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::COLLECTIVE_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::NO_USER_MOD_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::USAGE_ID));
	if (attr != nullptr) {
		attrDesc->append($(writeQDString(attr)));
		++count;
	}
	if (count < attrs->size()) {
		$var($String, attrId, nullptr);
		{
			$var($NamingEnumeration, ae, attrs->getAll());
			for (; $nc(ae)->hasMoreElements();) {
				$assign(attr, $cast($Attribute, ae->next()));
				$assign(attrId, $nc(attr)->getID());
				bool var$11 = $nc(attrId)->equals(LdapSchemaParser::NUMERICOID_ID);
				bool var$10 = var$11 || $nc(attrId)->equals(LdapSchemaParser::NAME_ID);
				bool var$9 = var$10 || $nc(attrId)->equals(LdapSchemaParser::SYNTAX_ID);
				bool var$8 = var$9 || $nc(attrId)->equals(LdapSchemaParser::DESC_ID);
				bool var$7 = var$8 || $nc(attrId)->equals(LdapSchemaParser::SINGLE_VAL_ID);
				bool var$6 = var$7 || $nc(attrId)->equals(LdapSchemaParser::EQUALITY_ID);
				bool var$5 = var$6 || $nc(attrId)->equals(LdapSchemaParser::ORDERING_ID);
				bool var$4 = var$5 || $nc(attrId)->equals(LdapSchemaParser::SUBSTR_ID);
				bool var$3 = var$4 || $nc(attrId)->equals(LdapSchemaParser::NO_USER_MOD_ID);
				bool var$2 = var$3 || $nc(attrId)->equals(LdapSchemaParser::USAGE_ID);
				bool var$1 = var$2 || $nc(attrId)->equals(LdapSchemaParser::SUP_ID);
				bool var$0 = var$1 || $nc(attrId)->equals(LdapSchemaParser::COLLECTIVE_ID);
				if (var$0 || $nc(attrId)->equals(LdapSchemaParser::OBSOLETE_ID)) {
					continue;
				} else {
					attrDesc->append($(writeQDStrings(attr)));
				}
			}
		}
	}
	attrDesc->append(")"_s);
	return attrDesc->toString();
}

$String* LdapSchemaParser::syntaxDef2SyntaxDesc($Attributes* attrs) {
	$var($StringBuilder, syntaxDesc, $new($StringBuilder, "( "_s));
	$var($Attribute, attr, nullptr);
	int32_t count = 0;
	$assign(attr, $nc(attrs)->get(LdapSchemaParser::NUMERICOID_ID));
	if (attr != nullptr) {
		syntaxDesc->append($(writeNumericOID(attr)));
		++count;
	} else {
		$throwNew($ConfigurationException, "Attribute type doesn\'thave a numeric OID"_s);
	}
	$assign(attr, attrs->get(LdapSchemaParser::DESC_ID));
	if (attr != nullptr) {
		syntaxDesc->append($(writeQDString(attr)));
		++count;
	}
	if (count < attrs->size()) {
		$var($String, attrId, nullptr);
		{
			$var($NamingEnumeration, ae, attrs->getAll());
			for (; $nc(ae)->hasMoreElements();) {
				$assign(attr, $cast($Attribute, ae->next()));
				$assign(attrId, $nc(attr)->getID());
				bool var$0 = $nc(attrId)->equals(LdapSchemaParser::NUMERICOID_ID);
				if (var$0 || $nc(attrId)->equals(LdapSchemaParser::DESC_ID)) {
					continue;
				} else {
					syntaxDesc->append($(writeQDStrings(attr)));
				}
			}
		}
	}
	syntaxDesc->append(")"_s);
	return syntaxDesc->toString();
}

$String* LdapSchemaParser::matchRuleDef2MatchRuleDesc($Attributes* attrs) {
	$var($StringBuilder, matchRuleDesc, $new($StringBuilder, "( "_s));
	$var($Attribute, attr, nullptr);
	int32_t count = 0;
	$assign(attr, $nc(attrs)->get(LdapSchemaParser::NUMERICOID_ID));
	if (attr != nullptr) {
		matchRuleDesc->append($(writeNumericOID(attr)));
		++count;
	} else {
		$throwNew($ConfigurationException, "Attribute type doesn\'thave a numeric OID"_s);
	}
	$assign(attr, attrs->get(LdapSchemaParser::NAME_ID));
	if (attr != nullptr) {
		matchRuleDesc->append($(writeQDescrs(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::DESC_ID));
	if (attr != nullptr) {
		matchRuleDesc->append($(writeQDString(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::OBSOLETE_ID));
	if (attr != nullptr) {
		matchRuleDesc->append($(writeBoolean(attr)));
		++count;
	}
	$assign(attr, attrs->get(LdapSchemaParser::SYNTAX_ID));
	if (attr != nullptr) {
		matchRuleDesc->append($(writeWOID(attr)));
		++count;
	} else {
		$throwNew($ConfigurationException, "Attribute type doesn\'thave a syntax OID"_s);
	}
	if (count < attrs->size()) {
		$var($String, attrId, nullptr);
		{
			$var($NamingEnumeration, ae, attrs->getAll());
			for (; $nc(ae)->hasMoreElements();) {
				$assign(attr, $cast($Attribute, ae->next()));
				$assign(attrId, $nc(attr)->getID());
				bool var$3 = $nc(attrId)->equals(LdapSchemaParser::NUMERICOID_ID);
				bool var$2 = var$3 || $nc(attrId)->equals(LdapSchemaParser::NAME_ID);
				bool var$1 = var$2 || $nc(attrId)->equals(LdapSchemaParser::SYNTAX_ID);
				bool var$0 = var$1 || $nc(attrId)->equals(LdapSchemaParser::DESC_ID);
				if (var$0 || $nc(attrId)->equals(LdapSchemaParser::OBSOLETE_ID)) {
					continue;
				} else {
					matchRuleDesc->append($(writeQDStrings(attr)));
				}
			}
		}
	}
	matchRuleDesc->append(")"_s);
	return matchRuleDesc->toString();
}

$String* LdapSchemaParser::writeNumericOID($Attribute* nOIDAttr) {
	if ($nc(nOIDAttr)->size() != 1) {
		$throwNew($InvalidAttributeValueException, "A class definition must have exactly one numeric OID"_s);
	}
	return $str({($cast($String, $($nc(nOIDAttr)->get()))), $$str(LdapSchemaParser::WHSP)});
}

$String* LdapSchemaParser::writeWOID($Attribute* attr) {
	if (this->netscapeBug) {
		return writeQDString(attr);
	} else {
		$var($String, var$1, $$str({$($nc(attr)->getID()), $$str(LdapSchemaParser::WHSP)}));
		$var($String, var$0, $$concat(var$1, $(attr->get())));
		return $concat(var$0, $$str(LdapSchemaParser::WHSP));
	}
}

$String* LdapSchemaParser::writeQDString($Attribute* qdStringAttr) {
	if ($nc(qdStringAttr)->size() != 1) {
		$throwNew($InvalidAttributeValueException, $$str({$(qdStringAttr->getID()), " must have exactly one value"_s}));
	}
	$var($String, var$2, $$str({$($nc(qdStringAttr)->getID()), $$str(LdapSchemaParser::WHSP), $$str(LdapSchemaParser::SINGLE_QUOTE)}));
	$var($String, var$1, $$concat(var$2, $(qdStringAttr->get())));
	$var($String, var$0, $$concat(var$1, $$str(LdapSchemaParser::SINGLE_QUOTE)));
	return $concat(var$0, $$str(LdapSchemaParser::WHSP));
}

$String* LdapSchemaParser::writeQDStrings($Attribute* attr) {
	return writeQDescrs(attr);
}

$String* LdapSchemaParser::writeQDescrs($Attribute* attr) {
	switch ($nc(attr)->size()) {
	case 0:
		{
			$throwNew($InvalidAttributeValueException, $$str({$(attr->getID()), "has no values"_s}));
		}
	case 1:
		{
			return writeQDString(attr);
		}
	}
	$var($StringBuilder, qdList, $new($StringBuilder, $(attr->getID())));
	qdList->append(LdapSchemaParser::WHSP);
	qdList->append(LdapSchemaParser::OID_LIST_BEGIN);
	$var($NamingEnumeration, values, attr->getAll());
	while ($nc(values)->hasMore()) {
		qdList->append(LdapSchemaParser::WHSP);
		qdList->append(LdapSchemaParser::SINGLE_QUOTE);
		qdList->append($cast($String, $(values->next())));
		qdList->append(LdapSchemaParser::SINGLE_QUOTE);
		qdList->append(LdapSchemaParser::WHSP);
	}
	qdList->append(LdapSchemaParser::OID_LIST_END);
	qdList->append(LdapSchemaParser::WHSP);
	return qdList->toString();
}

$String* LdapSchemaParser::writeOIDs($Attribute* oidsAttr) {
	switch ($nc(oidsAttr)->size()) {
	case 0:
		{
			$throwNew($InvalidAttributeValueException, $$str({$(oidsAttr->getID()), "has no values"_s}));
		}
	case 1:
		{
			if (this->netscapeBug) {
				break;
			}
			return writeWOID(oidsAttr);
		}
	}
	$var($StringBuilder, oidList, $new($StringBuilder, $(oidsAttr->getID())));
	oidList->append(LdapSchemaParser::WHSP);
	oidList->append(LdapSchemaParser::OID_LIST_BEGIN);
	$var($NamingEnumeration, values, oidsAttr->getAll());
	oidList->append(LdapSchemaParser::WHSP);
	oidList->append($($nc(values)->next()));
	while ($nc(values)->hasMore()) {
		oidList->append(LdapSchemaParser::WHSP);
		oidList->append(LdapSchemaParser::OID_SEPARATOR);
		oidList->append(LdapSchemaParser::WHSP);
		oidList->append($cast($String, $(values->next())));
	}
	oidList->append(LdapSchemaParser::WHSP);
	oidList->append(LdapSchemaParser::OID_LIST_END);
	oidList->append(LdapSchemaParser::WHSP);
	return oidList->toString();
}

$String* LdapSchemaParser::writeBoolean($Attribute* booleanAttr) {
	return $str({$($nc(booleanAttr)->getID()), $$str(LdapSchemaParser::WHSP)});
}

$Attribute* LdapSchemaParser::stringifyObjDesc($Attributes* classDefAttrs) {
	$var($Attribute, objDescAttr, $new($BasicAttribute, LdapSchemaParser::OBJECTCLASSDESC_ATTR_ID));
	objDescAttr->add($(classDef2ObjectDesc(classDefAttrs)));
	return objDescAttr;
}

$Attribute* LdapSchemaParser::stringifyAttrDesc($Attributes* attrDefAttrs) {
	$var($Attribute, attrDescAttr, $new($BasicAttribute, LdapSchemaParser::ATTRIBUTEDESC_ATTR_ID));
	attrDescAttr->add($(attrDef2AttrDesc(attrDefAttrs)));
	return attrDescAttr;
}

$Attribute* LdapSchemaParser::stringifySyntaxDesc($Attributes* syntaxDefAttrs) {
	$var($Attribute, syntaxDescAttr, $new($BasicAttribute, LdapSchemaParser::SYNTAXDESC_ATTR_ID));
	syntaxDescAttr->add($(syntaxDef2SyntaxDesc(syntaxDefAttrs)));
	return syntaxDescAttr;
}

$Attribute* LdapSchemaParser::stringifyMatchRuleDesc($Attributes* matchRuleDefAttrs) {
	$var($Attribute, matchRuleDescAttr, $new($BasicAttribute, LdapSchemaParser::MATCHRULEDESC_ATTR_ID));
	matchRuleDescAttr->add($(matchRuleDef2MatchRuleDesc(matchRuleDefAttrs)));
	return matchRuleDescAttr;
}

void clinit$LdapSchemaParser($Class* class$) {
	$assignStatic(LdapSchemaParser::OBJECTCLASSDESC_ATTR_ID, "objectClasses"_s);
	$assignStatic(LdapSchemaParser::ATTRIBUTEDESC_ATTR_ID, "attributeTypes"_s);
	$assignStatic(LdapSchemaParser::SYNTAXDESC_ATTR_ID, "ldapSyntaxes"_s);
	$assignStatic(LdapSchemaParser::MATCHRULEDESC_ATTR_ID, "matchingRules"_s);
	$assignStatic(LdapSchemaParser::OBJECTCLASS_DEFINITION_NAME, "ClassDefinition"_s);
	$assignStatic(LdapSchemaParser::ATTRIBUTE_DEFINITION_NAME, "AttributeDefinition"_s);
	$assignStatic(LdapSchemaParser::SYNTAX_DEFINITION_NAME, "SyntaxDefinition"_s);
	$assignStatic(LdapSchemaParser::MATCHRULE_DEFINITION_NAME, "MatchingRule"_s);
	$assignStatic(LdapSchemaParser::NUMERICOID_ID, "NUMERICOID"_s);
	$assignStatic(LdapSchemaParser::NAME_ID, "NAME"_s);
	$assignStatic(LdapSchemaParser::DESC_ID, "DESC"_s);
	$assignStatic(LdapSchemaParser::OBSOLETE_ID, "OBSOLETE"_s);
	$assignStatic(LdapSchemaParser::SUP_ID, "SUP"_s);
	$assignStatic(LdapSchemaParser::PRIVATE_ID, "X-"_s);
	$assignStatic(LdapSchemaParser::ABSTRACT_ID, "ABSTRACT"_s);
	$assignStatic(LdapSchemaParser::STRUCTURAL_ID, "STRUCTURAL"_s);
	$assignStatic(LdapSchemaParser::AUXILIARY_ID, "AUXILIARY"_s);
	$assignStatic(LdapSchemaParser::MUST_ID, "MUST"_s);
	$assignStatic(LdapSchemaParser::MAY_ID, "MAY"_s);
	$assignStatic(LdapSchemaParser::EQUALITY_ID, "EQUALITY"_s);
	$assignStatic(LdapSchemaParser::ORDERING_ID, "ORDERING"_s);
	$assignStatic(LdapSchemaParser::SUBSTR_ID, "SUBSTR"_s);
	$assignStatic(LdapSchemaParser::SYNTAX_ID, "SYNTAX"_s);
	$assignStatic(LdapSchemaParser::SINGLE_VAL_ID, "SINGLE-VALUE"_s);
	$assignStatic(LdapSchemaParser::COLLECTIVE_ID, "COLLECTIVE"_s);
	$assignStatic(LdapSchemaParser::NO_USER_MOD_ID, "NO-USER-MODIFICATION"_s);
	$assignStatic(LdapSchemaParser::USAGE_ID, "USAGE"_s);
	$assignStatic(LdapSchemaParser::SCHEMA_TRUE_VALUE, "true"_s);
	$assignStatic(LdapSchemaParser::CLASS_DEF_ATTRS, $new($StringArray, {
		"objectclass"_s,
		"ClassDefinition"_s
	}));
	$assignStatic(LdapSchemaParser::ATTR_DEF_ATTRS, $new($StringArray, {
		"objectclass"_s,
		"AttributeDefinition"_s
	}));
	$assignStatic(LdapSchemaParser::SYNTAX_DEF_ATTRS, $new($StringArray, {
		"objectclass"_s,
		"SyntaxDefinition"_s
	}));
	$assignStatic(LdapSchemaParser::MATCHRULE_DEF_ATTRS, $new($StringArray, {
		"objectclass"_s,
		"MatchingRule"_s
	}));
}

LdapSchemaParser::LdapSchemaParser() {
}

$Class* LdapSchemaParser::load$($String* name, bool initialize) {
	$loadClass(LdapSchemaParser, name, initialize, &_LdapSchemaParser_ClassInfo_, clinit$LdapSchemaParser, allocate$LdapSchemaParser);
	return class$;
}

$Class* LdapSchemaParser::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com