#include <com/sun/jndi/ldap/LdapAttribute.h>

#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapSchemaParser.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/InitialDirContext.h>
#include <jcpp.h>

#undef ATTRIBUTE_DEFINITION_NAME
#undef INITIAL_CONTEXT_FACTORY
#undef PROVIDER_URL
#undef SYNTAX_DEFINITION_NAME

using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapSchemaParser = ::com::sun::jndi::ldap::LdapSchemaParser;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameNotFoundException = ::javax::naming::NameNotFoundException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $DirContext = ::javax::naming::directory::DirContext;
using $InitialDirContext = ::javax::naming::directory::InitialDirContext;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapAttribute_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(LdapAttribute, serialVersionUID)},
	{"baseCtx", "Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE | $TRANSIENT, $field(LdapAttribute, baseCtx)},
	{"rdn", "Ljavax/naming/Name;", nullptr, $PRIVATE, $field(LdapAttribute, rdn)},
	{"baseCtxURL", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapAttribute, baseCtxURL)},
	{"baseCtxEnv", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;-Ljava/lang/String;>;", $PRIVATE, $field(LdapAttribute, baseCtxEnv)},
	{}
};

$MethodInfo _LdapAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LdapAttribute::*)($String*)>(&LdapAttribute::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/naming/directory/DirContext;Ljavax/naming/Name;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapAttribute::*)($String*,$DirContext*,$Name*)>(&LdapAttribute::init$))},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeDefinition", "()Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributeSyntaxDefinition", "()Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getBaseCtx", "()Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE, $method(static_cast<$DirContext*(LdapAttribute::*)()>(&LdapAttribute::getBaseCtx)), "javax.naming.NamingException"},
	{"setBaseCtxInfo", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapAttribute::*)()>(&LdapAttribute::setBaseCtxInfo))},
	{"setParent", "(Ljavax/naming/directory/DirContext;Ljavax/naming/Name;)V", nullptr, 0, $method(static_cast<void(LdapAttribute::*)($DirContext*,$Name*)>(&LdapAttribute::setParent))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapAttribute::*)($ObjectOutputStream*)>(&LdapAttribute::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _LdapAttribute_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapAttribute",
	"javax.naming.directory.BasicAttribute",
	nullptr,
	_LdapAttribute_FieldInfo_,
	_LdapAttribute_MethodInfo_
};

$Object* allocate$LdapAttribute($Class* clazz) {
	return $of($alloc(LdapAttribute));
}

$Object* LdapAttribute::clone() {
	$var(LdapAttribute, attr, $new(LdapAttribute, this->attrID, this->baseCtx, this->rdn));
	$set(attr, values, $cast($Vector, $nc(this->values)->clone()));
	return $of(attr);
}

bool LdapAttribute::add(Object$* attrVal) {
	$nc(this->values)->addElement(attrVal);
	return true;
}

void LdapAttribute::init$($String* id) {
	$BasicAttribute::init$(id);
	$set(this, baseCtx, nullptr);
	$set(this, rdn, $new($CompositeName));
}

void LdapAttribute::init$($String* id, $DirContext* baseCtx, $Name* rdn) {
	$BasicAttribute::init$(id);
	$set(this, baseCtx, nullptr);
	$set(this, rdn, $new($CompositeName));
	$set(this, baseCtx, baseCtx);
	$set(this, rdn, rdn);
}

void LdapAttribute::setParent($DirContext* baseCtx, $Name* rdn) {
	$set(this, baseCtx, baseCtx);
	$set(this, rdn, rdn);
}

$DirContext* LdapAttribute::getBaseCtx() {
	if (this->baseCtx == nullptr) {
		if (this->baseCtxEnv == nullptr) {
			$set(this, baseCtxEnv, $new($Hashtable, 3));
		}
		$init($Context);
		$nc(this->baseCtxEnv)->put($Context::INITIAL_CONTEXT_FACTORY, "com.sun.jndi.ldap.LdapCtxFactory"_s);
		$nc(this->baseCtxEnv)->put($Context::PROVIDER_URL, this->baseCtxURL);
		$set(this, baseCtx, $new($InitialDirContext, this->baseCtxEnv));
	}
	return this->baseCtx;
}

void LdapAttribute::writeObject($ObjectOutputStream* out) {
	this->setBaseCtxInfo();
	$nc(out)->defaultWriteObject();
}

void LdapAttribute::setBaseCtxInfo() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, realEnv, nullptr);
	$var($Hashtable, secureEnv, nullptr);
	if (this->baseCtx != nullptr) {
		$assign(realEnv, $nc(($cast($LdapCtx, this->baseCtx)))->envprops);
		$set(this, baseCtxURL, $nc(($cast($LdapCtx, this->baseCtx)))->getURL());
	}
	if (realEnv != nullptr && realEnv->size() > 0) {
		{
			$var($Iterator, i$, $nc($(realEnv->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, key, $cast($String, i$->next()));
				{
					if ($nc(key)->indexOf("security"_s) != -1) {
						if (secureEnv == nullptr) {
							$assign(secureEnv, $cast($Hashtable, realEnv->clone()));
						}
						$nc(secureEnv)->remove(key);
					}
				}
			}
		}
	}
	$set(this, baseCtxEnv, secureEnv == nullptr ? realEnv : secureEnv);
}

$DirContext* LdapAttribute::getAttributeSyntaxDefinition() {
	$useLocalCurrentObjectStackCache();
	$var($DirContext, schema, $nc($(getBaseCtx()))->getSchema(this->rdn));
	$init($LdapSchemaParser);
	$var($DirContext, attrDef, $cast($DirContext, $nc(schema)->lookup($$str({$LdapSchemaParser::ATTRIBUTE_DEFINITION_NAME, "/"_s, $(getID())}))));
	$var($Attribute, syntaxAttr, $nc($($nc(attrDef)->getAttributes(""_s)))->get("SYNTAX"_s));
	if (syntaxAttr == nullptr || $nc(syntaxAttr)->size() == 0) {
		$throwNew($NameNotFoundException, $$str({$(getID()), " does not have a syntax associated with it"_s}));
	}
	$var($String, syntaxName, $cast($String, $nc(syntaxAttr)->get()));
	return $cast($DirContext, schema->lookup($$str({$LdapSchemaParser::SYNTAX_DEFINITION_NAME, "/"_s, syntaxName})));
}

$DirContext* LdapAttribute::getAttributeDefinition() {
	$useLocalCurrentObjectStackCache();
	$var($DirContext, schema, $nc($(getBaseCtx()))->getSchema(this->rdn));
	$init($LdapSchemaParser);
	return $cast($DirContext, $nc(schema)->lookup($$str({$LdapSchemaParser::ATTRIBUTE_DEFINITION_NAME, "/"_s, $(getID())})));
}

LdapAttribute::LdapAttribute() {
}

$Class* LdapAttribute::load$($String* name, bool initialize) {
	$loadClass(LdapAttribute, name, initialize, &_LdapAttribute_ClassInfo_, allocate$LdapAttribute);
	return class$;
}

$Class* LdapAttribute::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com