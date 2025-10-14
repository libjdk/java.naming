#include <com/sun/jndi/ldap/LdapSchemaCtx$SchemaInfo.h>

#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapSchemaCtx.h>
#include <com/sun/jndi/ldap/LdapSchemaParser.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/ModificationItem.h>
#include <jcpp.h>

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapSchemaCtx = ::com::sun::jndi::ldap::LdapSchemaCtx;
using $LdapSchemaParser = ::com::sun::jndi::ldap::LdapSchemaParser;
using $PartialCompositeDirContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapSchemaCtx$SchemaInfo_FieldInfo_[] = {
	{"schemaEntry", "Lcom/sun/jndi/ldap/LdapCtx;", nullptr, $PRIVATE, $field(LdapSchemaCtx$SchemaInfo, schemaEntry)},
	{"schemaEntryName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapSchemaCtx$SchemaInfo, schemaEntryName)},
	{"parser", "Lcom/sun/jndi/ldap/LdapSchemaParser;", nullptr, 0, $field(LdapSchemaCtx$SchemaInfo, parser)},
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapSchemaCtx$SchemaInfo, host)},
	{"port", "I", nullptr, $PRIVATE, $field(LdapSchemaCtx$SchemaInfo, port)},
	{"hasLdapsScheme", "Z", nullptr, $PRIVATE, $field(LdapSchemaCtx$SchemaInfo, hasLdapsScheme)},
	{}
};

$MethodInfo _LdapSchemaCtx$SchemaInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/LdapSchemaParser;)V", nullptr, 0, $method(static_cast<void(LdapSchemaCtx$SchemaInfo::*)($String*,$LdapCtx*,$LdapSchemaParser*)>(&LdapSchemaCtx$SchemaInfo::init$))},
	{"close", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(LdapSchemaCtx$SchemaInfo::*)()>(&LdapSchemaCtx$SchemaInfo::close)), "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/util/Hashtable;[Ljavax/naming/directory/ModificationItem;)V", "(Ljava/util/Hashtable<**>;[Ljavax/naming/directory/ModificationItem;)V", $SYNCHRONIZED, $method(static_cast<void(LdapSchemaCtx$SchemaInfo::*)($Hashtable*,$ModificationItemArray*)>(&LdapSchemaCtx$SchemaInfo::modifyAttributes)), "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/util/Hashtable;ILjavax/naming/directory/Attributes;)V", "(Ljava/util/Hashtable<**>;ILjavax/naming/directory/Attributes;)V", $SYNCHRONIZED, $method(static_cast<void(LdapSchemaCtx$SchemaInfo::*)($Hashtable*,int32_t,$Attributes*)>(&LdapSchemaCtx$SchemaInfo::modifyAttributes)), "javax.naming.NamingException"},
	{"reopenEntry", "(Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapCtx;", "(Ljava/util/Hashtable<**>;)Lcom/sun/jndi/ldap/LdapCtx;", $PRIVATE, $method(static_cast<$LdapCtx*(LdapSchemaCtx$SchemaInfo::*)($Hashtable*)>(&LdapSchemaCtx$SchemaInfo::reopenEntry)), "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _LdapSchemaCtx$SchemaInfo_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapSchemaCtx$SchemaInfo", "com.sun.jndi.ldap.LdapSchemaCtx", "SchemaInfo", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _LdapSchemaCtx$SchemaInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapSchemaCtx$SchemaInfo",
	"java.lang.Object",
	nullptr,
	_LdapSchemaCtx$SchemaInfo_FieldInfo_,
	_LdapSchemaCtx$SchemaInfo_MethodInfo_,
	nullptr,
	nullptr,
	_LdapSchemaCtx$SchemaInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapSchemaCtx"
};

$Object* allocate$LdapSchemaCtx$SchemaInfo($Class* clazz) {
	return $of($alloc(LdapSchemaCtx$SchemaInfo));
}

void LdapSchemaCtx$SchemaInfo::init$($String* schemaEntryName, $LdapCtx* schemaEntry, $LdapSchemaParser* parser) {
	$set(this, schemaEntryName, schemaEntryName);
	$set(this, schemaEntry, schemaEntry);
	$set(this, parser, parser);
	this->port = $nc(schemaEntry)->port_number;
	$set(this, host, schemaEntry->hostname);
	this->hasLdapsScheme = schemaEntry->hasLdapsScheme;
}

void LdapSchemaCtx$SchemaInfo::close() {
	$synchronized(this) {
		if (this->schemaEntry != nullptr) {
			$nc(this->schemaEntry)->close();
			$set(this, schemaEntry, nullptr);
		}
	}
}

$LdapCtx* LdapSchemaCtx$SchemaInfo::reopenEntry($Hashtable* env) {
	return $new($LdapCtx, this->schemaEntryName, this->host, this->port, env, this->hasLdapsScheme);
}

void LdapSchemaCtx$SchemaInfo::modifyAttributes($Hashtable* env, $ModificationItemArray* mods) {
	$synchronized(this) {
		if (this->schemaEntry == nullptr) {
			$set(this, schemaEntry, reopenEntry(env));
		}
		$nc(this->schemaEntry)->modifyAttributes(""_s, mods);
	}
}

void LdapSchemaCtx$SchemaInfo::modifyAttributes($Hashtable* env, int32_t mod, $Attributes* attrs) {
	$synchronized(this) {
		if (this->schemaEntry == nullptr) {
			$set(this, schemaEntry, reopenEntry(env));
		}
		$nc(this->schemaEntry)->modifyAttributes(""_s, mod, attrs);
	}
}

LdapSchemaCtx$SchemaInfo::LdapSchemaCtx$SchemaInfo() {
}

$Class* LdapSchemaCtx$SchemaInfo::load$($String* name, bool initialize) {
	$loadClass(LdapSchemaCtx$SchemaInfo, name, initialize, &_LdapSchemaCtx$SchemaInfo_ClassInfo_, allocate$LdapSchemaCtx$SchemaInfo);
	return class$;
}

$Class* LdapSchemaCtx$SchemaInfo::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com