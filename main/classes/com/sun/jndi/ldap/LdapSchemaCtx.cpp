#include <com/sun/jndi/ldap/LdapSchemaCtx.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapSchemaCtx$SchemaInfo.h>
#include <com/sun/jndi/ldap/LdapSchemaParser.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SchemaViolationException.h>
#include <jcpp.h>

#undef ADD_ATTRIBUTE
#undef ATTRIBUTE
#undef ATTRIBUTE_ROOT
#undef LEAF
#undef MATCHRULE
#undef MATCHRULE_ROOT
#undef OBJECTCLASS
#undef OBJECTCLASS_ROOT
#undef REMOVE_ATTRIBUTE
#undef SCHEMA_ROOT
#undef SYNTAX
#undef SYNTAX_ROOT

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapSchemaCtx$SchemaInfo = ::com::sun::jndi::ldap::LdapSchemaCtx$SchemaInfo;
using $LdapSchemaParser = ::com::sun::jndi::ldap::LdapSchemaParser;
using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $CompositeName = ::javax::naming::CompositeName;
using $Name = ::javax::naming::Name;
using $NameNotFoundException = ::javax::naming::NameNotFoundException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $ModificationItem = ::javax::naming::directory::ModificationItem;
using $SchemaViolationException = ::javax::naming::directory::SchemaViolationException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapSchemaCtx_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaCtx, debug)},
	{"LEAF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaCtx, LEAF)},
	{"SCHEMA_ROOT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapSchemaCtx, SCHEMA_ROOT)},
	{"OBJECTCLASS_ROOT", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, OBJECTCLASS_ROOT)},
	{"ATTRIBUTE_ROOT", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, ATTRIBUTE_ROOT)},
	{"SYNTAX_ROOT", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, SYNTAX_ROOT)},
	{"MATCHRULE_ROOT", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, MATCHRULE_ROOT)},
	{"OBJECTCLASS", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, OBJECTCLASS)},
	{"ATTRIBUTE", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, ATTRIBUTE)},
	{"SYNTAX", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, SYNTAX)},
	{"MATCHRULE", "I", nullptr, $STATIC | $FINAL, $constField(LdapSchemaCtx, MATCHRULE)},
	{"info", "Lcom/sun/jndi/ldap/LdapSchemaCtx$SchemaInfo;", nullptr, $PRIVATE, $field(LdapSchemaCtx, info)},
	{"setupMode", "Z", nullptr, $PRIVATE, $field(LdapSchemaCtx, setupMode)},
	{"objectType", "I", nullptr, $PRIVATE, $field(LdapSchemaCtx, objectType)},
	{}
};

$MethodInfo _LdapSchemaCtx_MethodInfo_[] = {
	{"<init>", "(ILjava/util/Hashtable;Lcom/sun/jndi/ldap/LdapSchemaCtx$SchemaInfo;)V", "(ILjava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;Lcom/sun/jndi/ldap/LdapSchemaCtx$SchemaInfo;)V", $PRIVATE, $method(static_cast<void(LdapSchemaCtx::*)(int32_t,$Hashtable*,$LdapSchemaCtx$SchemaInfo*)>(&LdapSchemaCtx::init$))},
	{"addServerSchema", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(LdapSchemaCtx::*)($Attributes*)>(&LdapSchemaCtx::addServerSchema)), "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $FINAL, nullptr, "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createNewCtx", "()Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $PROTECTED | $FINAL},
	{"createSchemaTree", "(Ljava/util/Hashtable;Ljava/lang/String;Lcom/sun/jndi/ldap/LdapCtx;Ljavax/naming/directory/Attributes;Z)Ljavax/naming/directory/DirContext;", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;Ljava/lang/String;Lcom/sun/jndi/ldap/LdapCtx;Ljavax/naming/directory/Attributes;Z)Ljavax/naming/directory/DirContext;", $STATIC, $method(static_cast<$DirContext*(*)($Hashtable*,$String*,$LdapCtx*,$Attributes*,bool)>(&LdapSchemaCtx::createSchemaTree)), "javax.naming.NamingException"},
	{"deepClone", "(Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$Attributes*(*)($Attributes*)>(&LdapSchemaCtx::deepClone)), "javax.naming.NamingException"},
	{"deleteServerSchema", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(LdapSchemaCtx::*)($Attributes*)>(&LdapSchemaCtx::deleteServerSchema)), "javax.naming.NamingException"},
	{"doBind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z)V", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"doCreateSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"doDestroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"doModifyAttributes", "([Ljavax/naming/directory/ModificationItem;)V", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"doRebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z)V", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"doRename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"doUnbind", "(Ljavax/naming/Name;)V", nullptr, $PROTECTED | $FINAL, nullptr, "javax.naming.NamingException"},
	{"modifyServerSchema", "(Ljavax/naming/directory/Attributes;Ljavax/naming/directory/Attributes;)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(LdapSchemaCtx::*)($Attributes*,$Attributes*)>(&LdapSchemaCtx::modifyServerSchema)), "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC | $FINAL, nullptr, "javax.naming.NamingException"},
	{"setup", "(ILjava/lang/String;Ljavax/naming/directory/Attributes;)Lcom/sun/jndi/ldap/LdapSchemaCtx;", nullptr, $FINAL, $method(static_cast<LdapSchemaCtx*(LdapSchemaCtx::*)(int32_t,$String*,$Attributes*)>(&LdapSchemaCtx::setup)), "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _LdapSchemaCtx_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapSchemaCtx$SchemaInfo", "com.sun.jndi.ldap.LdapSchemaCtx", "SchemaInfo", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _LdapSchemaCtx_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapSchemaCtx",
	"com.sun.jndi.toolkit.dir.HierMemDirCtx",
	nullptr,
	_LdapSchemaCtx_FieldInfo_,
	_LdapSchemaCtx_MethodInfo_,
	nullptr,
	nullptr,
	_LdapSchemaCtx_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapSchemaCtx$SchemaInfo"
};

$Object* allocate$LdapSchemaCtx($Class* clazz) {
	return $of($alloc(LdapSchemaCtx));
}

$DirContext* LdapSchemaCtx::createSchemaTree($Hashtable* env, $String* subschemasubentry, $LdapCtx* schemaEntry, $Attributes* schemaAttrs, bool netscapeBug) {
	$init(LdapSchemaCtx);
	try {
		$var($LdapSchemaParser, parser, $new($LdapSchemaParser, netscapeBug));
		$var($LdapSchemaCtx$SchemaInfo, allinfo, $new($LdapSchemaCtx$SchemaInfo, subschemasubentry, schemaEntry, parser));
		$var(LdapSchemaCtx, root, $new(LdapSchemaCtx, LdapSchemaCtx::SCHEMA_ROOT, env, allinfo));
		$LdapSchemaParser::LDAP2JNDISchema(schemaAttrs, root);
		return root;
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$nc(schemaEntry)->close();
		$throw(e);
	}
	$shouldNotReachHere();
}

void LdapSchemaCtx::init$(int32_t objectType, $Hashtable* environment, $LdapSchemaCtx$SchemaInfo* info) {
	$HierMemDirCtx::init$(environment, $LdapClient::caseIgnore);
	$set(this, info, nullptr);
	this->setupMode = true;
	this->objectType = objectType;
	$set(this, info, info);
}

void LdapSchemaCtx::close() {
	$nc(this->info)->close();
}

void LdapSchemaCtx::bind($Name* name, Object$* obj, $Attributes* attrs) {
	if (!this->setupMode) {
		if (obj != nullptr) {
			$throwNew($IllegalArgumentException, "obj must be null"_s);
		}
		addServerSchema(attrs);
	}
	$var(LdapSchemaCtx, newEntry, $cast(LdapSchemaCtx, $HierMemDirCtx::doCreateSubcontext(name, attrs)));
}

void LdapSchemaCtx::doBind($Name* name, Object$* obj, $Attributes* attrs, bool useFactory) {
	if (!this->setupMode) {
		$throwNew($SchemaViolationException, "Cannot bind arbitrary object; use createSubcontext()"_s);
	} else {
		$HierMemDirCtx::doBind(name, obj, attrs, false);
	}
}

void LdapSchemaCtx::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	try {
		doLookup(name, false);
		$throwNew($SchemaViolationException, "Cannot replace existing schema object"_s);
	} catch ($NameNotFoundException&) {
		$var($NameNotFoundException, e, $catch());
		bind(name, obj, attrs);
	}
}

void LdapSchemaCtx::doRebind($Name* name, Object$* obj, $Attributes* attrs, bool useFactory) {
	if (!this->setupMode) {
		$throwNew($SchemaViolationException, "Cannot bind arbitrary object; use createSubcontext()"_s);
	} else {
		$HierMemDirCtx::doRebind(name, obj, attrs, false);
	}
}

void LdapSchemaCtx::doUnbind($Name* name) {
	if (!this->setupMode) {
		try {
			$var(LdapSchemaCtx, target, $cast(LdapSchemaCtx, doLookup(name, false)));
			deleteServerSchema($nc(target)->attrs);
		} catch ($NameNotFoundException&) {
			$var($NameNotFoundException, e, $catch());
			return;
		}
	}
	$HierMemDirCtx::doUnbind(name);
}

void LdapSchemaCtx::doRename($Name* oldname, $Name* newname) {
	if (!this->setupMode) {
		$throwNew($SchemaViolationException, "Cannot rename a schema object"_s);
	} else {
		$HierMemDirCtx::doRename(oldname, newname);
	}
}

void LdapSchemaCtx::doDestroySubcontext($Name* name) {
	if (!this->setupMode) {
		try {
			$var(LdapSchemaCtx, target, $cast(LdapSchemaCtx, doLookup(name, false)));
			deleteServerSchema($nc(target)->attrs);
		} catch ($NameNotFoundException&) {
			$var($NameNotFoundException, e, $catch());
			return;
		}
	}
	$HierMemDirCtx::doDestroySubcontext(name);
}

LdapSchemaCtx* LdapSchemaCtx::setup(int32_t objectType, $String* name, $Attributes* attrs) {
	{
		$var($Throwable, var$0, nullptr);
		$var(LdapSchemaCtx, var$2, nullptr);
		bool return$1 = false;
		try {
			this->setupMode = true;
			$var(LdapSchemaCtx, answer, $cast(LdapSchemaCtx, $HierMemDirCtx::doCreateSubcontext($$new($CompositeName, name), attrs)));
			$nc(answer)->objectType = objectType;
			answer->setupMode = false;
			$assign(var$2, answer);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->setupMode = false;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$DirContext* LdapSchemaCtx::doCreateSubcontext($Name* name, $Attributes* attrs) {
	if (attrs == nullptr || $nc(attrs)->size() == 0) {
		$throwNew($SchemaViolationException, "Must supply attributes describing schema"_s);
	}
	if (!this->setupMode) {
		addServerSchema(attrs);
	}
	$var(LdapSchemaCtx, newEntry, $cast(LdapSchemaCtx, $HierMemDirCtx::doCreateSubcontext(name, attrs)));
	return newEntry;
}

$Attributes* LdapSchemaCtx::deepClone($Attributes* orig) {
	$init(LdapSchemaCtx);
	$var($BasicAttributes, copy, $new($BasicAttributes, true));
	$var($NamingEnumeration, attrs, $nc(orig)->getAll());
	while ($nc(attrs)->hasMore()) {
		copy->put($cast($Attribute, $($nc(($cast($Attribute, $(attrs->next()))))->clone())));
	}
	return copy;
}

void LdapSchemaCtx::doModifyAttributes($ModificationItemArray* mods) {
	if (this->setupMode) {
		$HierMemDirCtx::doModifyAttributes(mods);
	} else {
		$var($Attributes, copy, deepClone(this->attrs));
		applyMods(mods, copy);
		modifyServerSchema(this->attrs, copy);
		$set(this, attrs, copy);
	}
}

$HierMemDirCtx* LdapSchemaCtx::createNewCtx() {
	$var(LdapSchemaCtx, ctx, $new(LdapSchemaCtx, LdapSchemaCtx::LEAF, this->myEnv, this->info));
	return ctx;
}

void LdapSchemaCtx::addServerSchema($Attributes* attrs) {
	$var($Attribute, schemaAttr, nullptr);
	switch (this->objectType) {
	case LdapSchemaCtx::OBJECTCLASS_ROOT:
		{
			$assign(schemaAttr, $nc($nc(this->info)->parser)->stringifyObjDesc(attrs));
			break;
		}
	case LdapSchemaCtx::ATTRIBUTE_ROOT:
		{
			$assign(schemaAttr, $nc($nc(this->info)->parser)->stringifyAttrDesc(attrs));
			break;
		}
	case LdapSchemaCtx::SYNTAX_ROOT:
		{
			$assign(schemaAttr, $nc($nc(this->info)->parser)->stringifySyntaxDesc(attrs));
			break;
		}
	case LdapSchemaCtx::MATCHRULE_ROOT:
		{
			$assign(schemaAttr, $nc($nc(this->info)->parser)->stringifyMatchRuleDesc(attrs));
			break;
		}
	case LdapSchemaCtx::SCHEMA_ROOT:
		{
			$throwNew($SchemaViolationException, "Cannot create new entry under schema root"_s);
		}
	default:
		{
			$throwNew($SchemaViolationException, "Cannot create child of schema object"_s);
		}
	}
	$var($Attributes, holder, $new($BasicAttributes, true));
	holder->put(schemaAttr);
	$nc(this->info)->modifyAttributes(this->myEnv, $DirContext::ADD_ATTRIBUTE, holder);
}

void LdapSchemaCtx::deleteServerSchema($Attributes* origAttrs) {
	$var($Attribute, origAttrVal, nullptr);
	switch (this->objectType) {
	case LdapSchemaCtx::OBJECTCLASS_ROOT:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifyObjDesc(origAttrs));
			break;
		}
	case LdapSchemaCtx::ATTRIBUTE_ROOT:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifyAttrDesc(origAttrs));
			break;
		}
	case LdapSchemaCtx::SYNTAX_ROOT:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifySyntaxDesc(origAttrs));
			break;
		}
	case LdapSchemaCtx::MATCHRULE_ROOT:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifyMatchRuleDesc(origAttrs));
			break;
		}
	case LdapSchemaCtx::SCHEMA_ROOT:
		{
			$throwNew($SchemaViolationException, "Cannot delete schema root"_s);
		}
	default:
		{
			$throwNew($SchemaViolationException, "Cannot delete child of schema object"_s);
		}
	}
	$var($ModificationItemArray, mods, $new($ModificationItemArray, 1));
	mods->set(0, $$new($ModificationItem, $DirContext::REMOVE_ATTRIBUTE, origAttrVal));
	$nc(this->info)->modifyAttributes(this->myEnv, mods);
}

void LdapSchemaCtx::modifyServerSchema($Attributes* origAttrs, $Attributes* newAttrs) {
	$var($Attribute, newAttrVal, nullptr);
	$var($Attribute, origAttrVal, nullptr);
	switch (this->objectType) {
	case LdapSchemaCtx::OBJECTCLASS:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifyObjDesc(origAttrs));
			$assign(newAttrVal, $nc($nc(this->info)->parser)->stringifyObjDesc(newAttrs));
			break;
		}
	case LdapSchemaCtx::ATTRIBUTE:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifyAttrDesc(origAttrs));
			$assign(newAttrVal, $nc($nc(this->info)->parser)->stringifyAttrDesc(newAttrs));
			break;
		}
	case LdapSchemaCtx::SYNTAX:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifySyntaxDesc(origAttrs));
			$assign(newAttrVal, $nc($nc(this->info)->parser)->stringifySyntaxDesc(newAttrs));
			break;
		}
	case LdapSchemaCtx::MATCHRULE:
		{
			$assign(origAttrVal, $nc($nc(this->info)->parser)->stringifyMatchRuleDesc(origAttrs));
			$assign(newAttrVal, $nc($nc(this->info)->parser)->stringifyMatchRuleDesc(newAttrs));
			break;
		}
	default:
		{
			$throwNew($SchemaViolationException, "Cannot modify schema root"_s);
		}
	}
	$var($ModificationItemArray, mods, $new($ModificationItemArray, 2));
	mods->set(0, $$new($ModificationItem, $DirContext::REMOVE_ATTRIBUTE, origAttrVal));
	mods->set(1, $$new($ModificationItem, $DirContext::ADD_ATTRIBUTE, newAttrVal));
	$nc(this->info)->modifyAttributes(this->myEnv, mods);
}

LdapSchemaCtx::LdapSchemaCtx() {
}

$Class* LdapSchemaCtx::load$($String* name, bool initialize) {
	$loadClass(LdapSchemaCtx, name, initialize, &_LdapSchemaCtx_ClassInfo_, allocate$LdapSchemaCtx);
	return class$;
}

$Class* LdapSchemaCtx::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com