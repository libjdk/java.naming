#include <javax/naming/ldap/InitialLdapContext.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/InitialContext.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/NotContextException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/InitialDirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <javax/naming/ldap/LdapContext.h>
#include <jcpp.h>

#undef BIND_CONTROLS_PROPERTY

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $InitialContext = ::javax::naming::InitialContext;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NoInitialContextException = ::javax::naming::NoInitialContextException;
using $NotContextException = ::javax::naming::NotContextException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $InitialDirContext = ::javax::naming::directory::InitialDirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $Control = ::javax::naming::ldap::Control;
using $ExtendedRequest = ::javax::naming::ldap::ExtendedRequest;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;
using $LdapContext = ::javax::naming::ldap::LdapContext;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _InitialLdapContext_FieldInfo_[] = {
	{"BIND_CONTROLS_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InitialLdapContext, BIND_CONTROLS_PROPERTY)},
	{}
};

$MethodInfo _InitialLdapContext_MethodInfo_[] = {
	{"*addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"*getEnvironment", "()Ljava/util/Hashtable;", nullptr, $PUBLIC},
	{"*getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InitialLdapContext::*)()>(&InitialLdapContext::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljava/util/Hashtable;[Ljavax/naming/ldap/Control;)V", "(Ljava/util/Hashtable<**>;[Ljavax/naming/ldap/Control;)V", $PUBLIC, $method(static_cast<void(InitialLdapContext::*)($Hashtable*,$ControlArray*)>(&InitialLdapContext::init$)), "javax.naming.NamingException"},
	{"extendedOperation", "(Ljavax/naming/ldap/ExtendedRequest;)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getConnectControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getDefaultLdapInitCtx", "()Ljavax/naming/ldap/LdapContext;", nullptr, $PRIVATE, $method(static_cast<$LdapContext*(InitialLdapContext::*)()>(&InitialLdapContext::getDefaultLdapInitCtx)), "javax.naming.NamingException"},
	{"getRequestControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getResponseControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC},
	{"*modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC},
	{"newInstance", "([Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/LdapContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"reconnect", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"setRequestControls", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InitialLdapContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.InitialLdapContext",
	"javax.naming.directory.InitialDirContext",
	"javax.naming.ldap.LdapContext",
	_InitialLdapContext_FieldInfo_,
	_InitialLdapContext_MethodInfo_
};

$Object* allocate$InitialLdapContext($Class* clazz) {
	return $of($alloc(InitialLdapContext));
}

$Attributes* InitialLdapContext::getAttributes($String* name) {
	 return this->$InitialDirContext::getAttributes(name);
}

$Attributes* InitialLdapContext::getAttributes($String* name, $StringArray* attrIds) {
	 return this->$InitialDirContext::getAttributes(name, attrIds);
}

$Attributes* InitialLdapContext::getAttributes($Name* name) {
	 return this->$InitialDirContext::getAttributes(name);
}

$Attributes* InitialLdapContext::getAttributes($Name* name, $StringArray* attrIds) {
	 return this->$InitialDirContext::getAttributes(name, attrIds);
}

void InitialLdapContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	this->$InitialDirContext::modifyAttributes(name, mod_op, attrs);
}

void InitialLdapContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	this->$InitialDirContext::modifyAttributes(name, mod_op, attrs);
}

void InitialLdapContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	this->$InitialDirContext::modifyAttributes(name, mods);
}

void InitialLdapContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	this->$InitialDirContext::modifyAttributes(name, mods);
}

void InitialLdapContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	this->$InitialDirContext::bind(name, obj, attrs);
}

void InitialLdapContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	this->$InitialDirContext::bind(name, obj, attrs);
}

void InitialLdapContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	this->$InitialDirContext::rebind(name, obj, attrs);
}

void InitialLdapContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	this->$InitialDirContext::rebind(name, obj, attrs);
}

$DirContext* InitialLdapContext::createSubcontext($String* name, $Attributes* attrs) {
	 return this->$InitialDirContext::createSubcontext(name, attrs);
}

$DirContext* InitialLdapContext::createSubcontext($Name* name, $Attributes* attrs) {
	 return this->$InitialDirContext::createSubcontext(name, attrs);
}

$DirContext* InitialLdapContext::getSchema($String* name) {
	 return this->$InitialDirContext::getSchema(name);
}

$DirContext* InitialLdapContext::getSchema($Name* name) {
	 return this->$InitialDirContext::getSchema(name);
}

$DirContext* InitialLdapContext::getSchemaClassDefinition($String* name) {
	 return this->$InitialDirContext::getSchemaClassDefinition(name);
}

$DirContext* InitialLdapContext::getSchemaClassDefinition($Name* name) {
	 return this->$InitialDirContext::getSchemaClassDefinition(name);
}

$NamingEnumeration* InitialLdapContext::search($String* name, $Attributes* matchingAttributes) {
	 return this->$InitialDirContext::search(name, matchingAttributes);
}

$NamingEnumeration* InitialLdapContext::search($Name* name, $Attributes* matchingAttributes) {
	 return this->$InitialDirContext::search(name, matchingAttributes);
}

$NamingEnumeration* InitialLdapContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	 return this->$InitialDirContext::search(name, matchingAttributes, attributesToReturn);
}

$NamingEnumeration* InitialLdapContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	 return this->$InitialDirContext::search(name, matchingAttributes, attributesToReturn);
}

$NamingEnumeration* InitialLdapContext::search($String* name, $String* filter, $SearchControls* cons) {
	 return this->$InitialDirContext::search(name, filter, cons);
}

$NamingEnumeration* InitialLdapContext::search($Name* name, $String* filter, $SearchControls* cons) {
	 return this->$InitialDirContext::search(name, filter, cons);
}

$NamingEnumeration* InitialLdapContext::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	 return this->$InitialDirContext::search(name, filterExpr, filterArgs, cons);
}

$NamingEnumeration* InitialLdapContext::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	 return this->$InitialDirContext::search(name, filterExpr, filterArgs, cons);
}

$Object* InitialLdapContext::lookup($String* name) {
	 return this->$InitialDirContext::lookup(name);
}

$Object* InitialLdapContext::lookup($Name* name) {
	 return this->$InitialDirContext::lookup(name);
}

void InitialLdapContext::bind($String* name, Object$* obj) {
	this->$InitialDirContext::bind(name, obj);
}

void InitialLdapContext::bind($Name* name, Object$* obj) {
	this->$InitialDirContext::bind(name, obj);
}

void InitialLdapContext::rebind($String* name, Object$* obj) {
	this->$InitialDirContext::rebind(name, obj);
}

void InitialLdapContext::rebind($Name* name, Object$* obj) {
	this->$InitialDirContext::rebind(name, obj);
}

void InitialLdapContext::unbind($String* name) {
	this->$InitialDirContext::unbind(name);
}

void InitialLdapContext::unbind($Name* name) {
	this->$InitialDirContext::unbind(name);
}

void InitialLdapContext::rename($String* oldName, $String* newName) {
	this->$InitialDirContext::rename(oldName, newName);
}

void InitialLdapContext::rename($Name* oldName, $Name* newName) {
	this->$InitialDirContext::rename(oldName, newName);
}

$NamingEnumeration* InitialLdapContext::list($String* name) {
	 return this->$InitialDirContext::list(name);
}

$NamingEnumeration* InitialLdapContext::list($Name* name) {
	 return this->$InitialDirContext::list(name);
}

$NamingEnumeration* InitialLdapContext::listBindings($String* name) {
	 return this->$InitialDirContext::listBindings(name);
}

$NamingEnumeration* InitialLdapContext::listBindings($Name* name) {
	 return this->$InitialDirContext::listBindings(name);
}

void InitialLdapContext::destroySubcontext($String* name) {
	this->$InitialDirContext::destroySubcontext(name);
}

void InitialLdapContext::destroySubcontext($Name* name) {
	this->$InitialDirContext::destroySubcontext(name);
}

$Context* InitialLdapContext::createSubcontext($String* name) {
	 return this->$InitialDirContext::createSubcontext(name);
}

$Context* InitialLdapContext::createSubcontext($Name* name) {
	 return this->$InitialDirContext::createSubcontext(name);
}

$Object* InitialLdapContext::lookupLink($String* name) {
	 return this->$InitialDirContext::lookupLink(name);
}

$Object* InitialLdapContext::lookupLink($Name* name) {
	 return this->$InitialDirContext::lookupLink(name);
}

$NameParser* InitialLdapContext::getNameParser($String* name) {
	 return this->$InitialDirContext::getNameParser(name);
}

$NameParser* InitialLdapContext::getNameParser($Name* name) {
	 return this->$InitialDirContext::getNameParser(name);
}

$String* InitialLdapContext::composeName($String* name, $String* prefix) {
	 return this->$InitialDirContext::composeName(name, prefix);
}

$Name* InitialLdapContext::composeName($Name* name, $Name* prefix) {
	 return this->$InitialDirContext::composeName(name, prefix);
}

$Object* InitialLdapContext::addToEnvironment($String* propName, Object$* propVal) {
	 return this->$InitialDirContext::addToEnvironment(propName, propVal);
}

$Object* InitialLdapContext::removeFromEnvironment($String* propName) {
	 return this->$InitialDirContext::removeFromEnvironment(propName);
}

$Hashtable* InitialLdapContext::getEnvironment() {
	 return this->$InitialDirContext::getEnvironment();
}

void InitialLdapContext::close() {
	this->$InitialDirContext::close();
}

$String* InitialLdapContext::getNameInNamespace() {
	 return this->$InitialDirContext::getNameInNamespace();
}

int32_t InitialLdapContext::hashCode() {
	 return this->$InitialDirContext::hashCode();
}

bool InitialLdapContext::equals(Object$* arg0) {
	 return this->$InitialDirContext::equals(arg0);
}

$Object* InitialLdapContext::clone() {
	 return this->$InitialDirContext::clone();
}

$String* InitialLdapContext::toString() {
	 return this->$InitialDirContext::toString();
}

void InitialLdapContext::finalize() {
	this->$InitialDirContext::finalize();
}

$String* InitialLdapContext::BIND_CONTROLS_PROPERTY = nullptr;

void InitialLdapContext::init$() {
	$InitialDirContext::init$(($Hashtable*)nullptr);
}

void InitialLdapContext::init$($Hashtable* environment, $ControlArray* connCtls) {
	$useLocalCurrentObjectStackCache();
	$InitialDirContext::init$(true);
	$var($Hashtable, env, (environment == nullptr) ? $new($Hashtable, 11) : $cast($Hashtable, $nc(environment)->clone()));
	if (connCtls != nullptr) {
		$var($ControlArray, copy, $new($ControlArray, connCtls->length));
		$System::arraycopy(connCtls, 0, copy, 0, connCtls->length);
		$nc(env)->put(InitialLdapContext::BIND_CONTROLS_PROPERTY, copy);
	}
	$nc(env)->put("java.naming.ldap.version"_s, "3"_s);
	init(env);
}

$LdapContext* InitialLdapContext::getDefaultLdapInitCtx() {
	$var($Context, answer, getDefaultInitCtx());
	if (!($instanceOf($LdapContext, answer))) {
		if (answer == nullptr) {
			$throwNew($NoInitialContextException);
		} else {
			$throwNew($NotContextException, "Not an instance of LdapContext"_s);
		}
	}
	return $cast($LdapContext, answer);
}

$ExtendedResponse* InitialLdapContext::extendedOperation($ExtendedRequest* request) {
	return $nc($(getDefaultLdapInitCtx()))->extendedOperation(request);
}

$LdapContext* InitialLdapContext::newInstance($ControlArray* reqCtls) {
	return $nc($(getDefaultLdapInitCtx()))->newInstance(reqCtls);
}

void InitialLdapContext::reconnect($ControlArray* connCtls) {
	$nc($(getDefaultLdapInitCtx()))->reconnect(connCtls);
}

$ControlArray* InitialLdapContext::getConnectControls() {
	return $nc($(getDefaultLdapInitCtx()))->getConnectControls();
}

void InitialLdapContext::setRequestControls($ControlArray* requestControls) {
	$nc($(getDefaultLdapInitCtx()))->setRequestControls(requestControls);
}

$ControlArray* InitialLdapContext::getRequestControls() {
	return $nc($(getDefaultLdapInitCtx()))->getRequestControls();
}

$ControlArray* InitialLdapContext::getResponseControls() {
	return $nc($(getDefaultLdapInitCtx()))->getResponseControls();
}

InitialLdapContext::InitialLdapContext() {
}

void clinit$InitialLdapContext($Class* class$) {
	$assignStatic(InitialLdapContext::BIND_CONTROLS_PROPERTY, "java.naming.ldap.control.connect"_s);
}

$Class* InitialLdapContext::load$($String* name, bool initialize) {
	$loadClass(InitialLdapContext, name, initialize, &_InitialLdapContext_ClassInfo_, clinit$InitialLdapContext, allocate$InitialLdapContext);
	return class$;
}

$Class* InitialLdapContext::class$ = nullptr;

		} // ldap
	} // naming
} // javax