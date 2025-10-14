#include <javax/naming/directory/InitialDirContext.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
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
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace javax {
	namespace naming {
		namespace directory {

$MethodInfo _InitialDirContext_MethodInfo_[] = {
	{"*addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getEnvironment", "()Ljava/util/Hashtable;", nullptr, $PUBLIC},
	{"*getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(InitialDirContext::*)(bool)>(&InitialDirContext::init$)), "javax.naming.NamingException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InitialDirContext::*)()>(&InitialDirContext::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(InitialDirContext::*)($Hashtable*)>(&InitialDirContext::init$)), "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getURLOrDefaultInitDirCtx", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE, $method(static_cast<$DirContext*(InitialDirContext::*)($String*)>(&InitialDirContext::getURLOrDefaultInitDirCtx)), "javax.naming.NamingException"},
	{"getURLOrDefaultInitDirCtx", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE, $method(static_cast<$DirContext*(InitialDirContext::*)($Name*)>(&InitialDirContext::getURLOrDefaultInitDirCtx)), "javax.naming.NamingException"},
	{"*list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InitialDirContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.InitialDirContext",
	"javax.naming.InitialContext",
	"javax.naming.directory.DirContext",
	nullptr,
	_InitialDirContext_MethodInfo_
};

$Object* allocate$InitialDirContext($Class* clazz) {
	return $of($alloc(InitialDirContext));
}

$Object* InitialDirContext::lookup($String* name) {
	 return this->$InitialContext::lookup(name);
}

$Object* InitialDirContext::lookup($Name* name) {
	 return this->$InitialContext::lookup(name);
}

void InitialDirContext::bind($String* name, Object$* obj) {
	this->$InitialContext::bind(name, obj);
}

void InitialDirContext::bind($Name* name, Object$* obj) {
	this->$InitialContext::bind(name, obj);
}

void InitialDirContext::rebind($String* name, Object$* obj) {
	this->$InitialContext::rebind(name, obj);
}

void InitialDirContext::rebind($Name* name, Object$* obj) {
	this->$InitialContext::rebind(name, obj);
}

void InitialDirContext::unbind($String* name) {
	this->$InitialContext::unbind(name);
}

void InitialDirContext::unbind($Name* name) {
	this->$InitialContext::unbind(name);
}

void InitialDirContext::rename($String* oldName, $String* newName) {
	this->$InitialContext::rename(oldName, newName);
}

void InitialDirContext::rename($Name* oldName, $Name* newName) {
	this->$InitialContext::rename(oldName, newName);
}

$NamingEnumeration* InitialDirContext::list($String* name) {
	 return this->$InitialContext::list(name);
}

$NamingEnumeration* InitialDirContext::list($Name* name) {
	 return this->$InitialContext::list(name);
}

$NamingEnumeration* InitialDirContext::listBindings($String* name) {
	 return this->$InitialContext::listBindings(name);
}

$NamingEnumeration* InitialDirContext::listBindings($Name* name) {
	 return this->$InitialContext::listBindings(name);
}

void InitialDirContext::destroySubcontext($String* name) {
	this->$InitialContext::destroySubcontext(name);
}

void InitialDirContext::destroySubcontext($Name* name) {
	this->$InitialContext::destroySubcontext(name);
}

$Context* InitialDirContext::createSubcontext($String* name) {
	 return this->$InitialContext::createSubcontext(name);
}

$Context* InitialDirContext::createSubcontext($Name* name) {
	 return this->$InitialContext::createSubcontext(name);
}

$Object* InitialDirContext::lookupLink($String* name) {
	 return this->$InitialContext::lookupLink(name);
}

$Object* InitialDirContext::lookupLink($Name* name) {
	 return this->$InitialContext::lookupLink(name);
}

$NameParser* InitialDirContext::getNameParser($String* name) {
	 return this->$InitialContext::getNameParser(name);
}

$NameParser* InitialDirContext::getNameParser($Name* name) {
	 return this->$InitialContext::getNameParser(name);
}

$String* InitialDirContext::composeName($String* name, $String* prefix) {
	 return this->$InitialContext::composeName(name, prefix);
}

$Name* InitialDirContext::composeName($Name* name, $Name* prefix) {
	 return this->$InitialContext::composeName(name, prefix);
}

$Object* InitialDirContext::addToEnvironment($String* propName, Object$* propVal) {
	 return this->$InitialContext::addToEnvironment(propName, propVal);
}

$Object* InitialDirContext::removeFromEnvironment($String* propName) {
	 return this->$InitialContext::removeFromEnvironment(propName);
}

$Hashtable* InitialDirContext::getEnvironment() {
	 return this->$InitialContext::getEnvironment();
}

void InitialDirContext::close() {
	this->$InitialContext::close();
}

$String* InitialDirContext::getNameInNamespace() {
	 return this->$InitialContext::getNameInNamespace();
}

int32_t InitialDirContext::hashCode() {
	 return this->$InitialContext::hashCode();
}

bool InitialDirContext::equals(Object$* arg0) {
	 return this->$InitialContext::equals(arg0);
}

$Object* InitialDirContext::clone() {
	 return this->$InitialContext::clone();
}

$String* InitialDirContext::toString() {
	 return this->$InitialContext::toString();
}

void InitialDirContext::finalize() {
	this->$InitialContext::finalize();
}

void InitialDirContext::init$(bool lazy) {
	$InitialContext::init$(lazy);
}

void InitialDirContext::init$() {
	$InitialContext::init$();
}

void InitialDirContext::init$($Hashtable* environment) {
	$InitialContext::init$(environment);
}

$DirContext* InitialDirContext::getURLOrDefaultInitDirCtx($String* name) {
	$var($Context, answer, getURLOrDefaultInitCtx(name));
	if (!($instanceOf($DirContext, answer))) {
		if (answer == nullptr) {
			$throwNew($NoInitialContextException);
		} else {
			$throwNew($NotContextException, "Not an instance of DirContext"_s);
		}
	}
	return $cast($DirContext, answer);
}

$DirContext* InitialDirContext::getURLOrDefaultInitDirCtx($Name* name) {
	$var($Context, answer, getURLOrDefaultInitCtx(name));
	if (!($instanceOf($DirContext, answer))) {
		if (answer == nullptr) {
			$throwNew($NoInitialContextException);
		} else {
			$throwNew($NotContextException, "Not an instance of DirContext"_s);
		}
	}
	return $cast($DirContext, answer);
}

$Attributes* InitialDirContext::getAttributes($String* name) {
	return getAttributes(name, ($StringArray*)nullptr);
}

$Attributes* InitialDirContext::getAttributes($String* name, $StringArray* attrIds) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->getAttributes(name, attrIds);
}

$Attributes* InitialDirContext::getAttributes($Name* name) {
	return getAttributes(name, ($StringArray*)nullptr);
}

$Attributes* InitialDirContext::getAttributes($Name* name, $StringArray* attrIds) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->getAttributes(name, attrIds);
}

void InitialDirContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->modifyAttributes(name, mod_op, attrs);
}

void InitialDirContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->modifyAttributes(name, mod_op, attrs);
}

void InitialDirContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->modifyAttributes(name, mods);
}

void InitialDirContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->modifyAttributes(name, mods);
}

void InitialDirContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->bind(name, obj, attrs);
}

void InitialDirContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->bind(name, obj, attrs);
}

void InitialDirContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->rebind(name, obj, attrs);
}

void InitialDirContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	$nc($(getURLOrDefaultInitDirCtx(name)))->rebind(name, obj, attrs);
}

$DirContext* InitialDirContext::createSubcontext($String* name, $Attributes* attrs) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->createSubcontext(name, attrs);
}

$DirContext* InitialDirContext::createSubcontext($Name* name, $Attributes* attrs) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->createSubcontext(name, attrs);
}

$DirContext* InitialDirContext::getSchema($String* name) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->getSchema(name);
}

$DirContext* InitialDirContext::getSchema($Name* name) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->getSchema(name);
}

$DirContext* InitialDirContext::getSchemaClassDefinition($String* name) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->getSchemaClassDefinition(name);
}

$DirContext* InitialDirContext::getSchemaClassDefinition($Name* name) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->getSchemaClassDefinition(name);
}

$NamingEnumeration* InitialDirContext::search($String* name, $Attributes* matchingAttributes) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, matchingAttributes);
}

$NamingEnumeration* InitialDirContext::search($Name* name, $Attributes* matchingAttributes) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, matchingAttributes);
}

$NamingEnumeration* InitialDirContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, matchingAttributes, attributesToReturn);
}

$NamingEnumeration* InitialDirContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, matchingAttributes, attributesToReturn);
}

$NamingEnumeration* InitialDirContext::search($String* name, $String* filter, $SearchControls* cons) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, filter, cons);
}

$NamingEnumeration* InitialDirContext::search($Name* name, $String* filter, $SearchControls* cons) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, filter, cons);
}

$NamingEnumeration* InitialDirContext::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, filterExpr, filterArgs, cons);
}

$NamingEnumeration* InitialDirContext::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	return $nc($(getURLOrDefaultInitDirCtx(name)))->search(name, filterExpr, filterArgs, cons);
}

InitialDirContext::InitialDirContext() {
}

$Class* InitialDirContext::load$($String* name, bool initialize) {
	$loadClass(InitialDirContext, name, initialize, &_InitialDirContext_ClassInfo_, allocate$InitialDirContext);
	return class$;
}

$Class* InitialDirContext::class$ = nullptr;

		} // directory
	} // naming
} // javax