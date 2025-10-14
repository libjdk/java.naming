#include <javax/naming/spi/ContinuationDirContext.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/spi/ContinuationContext.h>
#include <javax/naming/spi/DirContextNamePair.h>
#include <javax/naming/spi/DirContextStringPair.h>
#include <javax/naming/spi/NamingManager.h>
#include <javax/naming/spi/ResolveResult.h>
#include <javax/naming/spi/Resolver.h>
#include <jcpp.h>

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $ContinuationContext = ::javax::naming::spi::ContinuationContext;
using $DirContextNamePair = ::javax::naming::spi::DirContextNamePair;
using $DirContextStringPair = ::javax::naming::spi::DirContextStringPair;
using $NamingManager = ::javax::naming::spi::NamingManager;
using $ResolveResult = ::javax::naming::spi::ResolveResult;
using $Resolver = ::javax::naming::spi::Resolver;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _ContinuationDirContext_MethodInfo_[] = {
	{"*addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getEnvironment", "()Ljava/util/Hashtable;", nullptr, $PUBLIC},
	{"*getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/naming/CannotProceedException;Ljava/util/Hashtable;)V", "(Ljavax/naming/CannotProceedException;Ljava/util/Hashtable<**>;)V", 0, $method(static_cast<void(ContinuationDirContext::*)($CannotProceedException*,$Hashtable*)>(&ContinuationDirContext::init$))},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getTargetContext", "(Ljavax/naming/Name;)Ljavax/naming/spi/DirContextNamePair;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getTargetContext", "(Ljava/lang/String;)Ljavax/naming/spi/DirContextStringPair;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"*list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContinuationDirContext_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.spi.ContinuationDirContext",
	"javax.naming.spi.ContinuationContext",
	"javax.naming.directory.DirContext",
	nullptr,
	_ContinuationDirContext_MethodInfo_
};

$Object* allocate$ContinuationDirContext($Class* clazz) {
	return $of($alloc(ContinuationDirContext));
}

$Object* ContinuationDirContext::lookup($Name* name) {
	 return this->$ContinuationContext::lookup(name);
}

$Object* ContinuationDirContext::lookup($String* name) {
	 return this->$ContinuationContext::lookup(name);
}

void ContinuationDirContext::bind($Name* name, Object$* newObj) {
	this->$ContinuationContext::bind(name, newObj);
}

void ContinuationDirContext::bind($String* name, Object$* newObj) {
	this->$ContinuationContext::bind(name, newObj);
}

void ContinuationDirContext::rebind($Name* name, Object$* newObj) {
	this->$ContinuationContext::rebind(name, newObj);
}

void ContinuationDirContext::rebind($String* name, Object$* newObj) {
	this->$ContinuationContext::rebind(name, newObj);
}

void ContinuationDirContext::unbind($Name* name) {
	this->$ContinuationContext::unbind(name);
}

void ContinuationDirContext::unbind($String* name) {
	this->$ContinuationContext::unbind(name);
}

void ContinuationDirContext::rename($Name* name, $Name* newName) {
	this->$ContinuationContext::rename(name, newName);
}

void ContinuationDirContext::rename($String* name, $String* newName) {
	this->$ContinuationContext::rename(name, newName);
}

$NamingEnumeration* ContinuationDirContext::list($Name* name) {
	 return this->$ContinuationContext::list(name);
}

$NamingEnumeration* ContinuationDirContext::list($String* name) {
	 return this->$ContinuationContext::list(name);
}

$NamingEnumeration* ContinuationDirContext::listBindings($Name* name) {
	 return this->$ContinuationContext::listBindings(name);
}

$NamingEnumeration* ContinuationDirContext::listBindings($String* name) {
	 return this->$ContinuationContext::listBindings(name);
}

void ContinuationDirContext::destroySubcontext($Name* name) {
	this->$ContinuationContext::destroySubcontext(name);
}

void ContinuationDirContext::destroySubcontext($String* name) {
	this->$ContinuationContext::destroySubcontext(name);
}

$Context* ContinuationDirContext::createSubcontext($Name* name) {
	 return this->$ContinuationContext::createSubcontext(name);
}

$Context* ContinuationDirContext::createSubcontext($String* name) {
	 return this->$ContinuationContext::createSubcontext(name);
}

$Object* ContinuationDirContext::lookupLink($Name* name) {
	 return this->$ContinuationContext::lookupLink(name);
}

$Object* ContinuationDirContext::lookupLink($String* name) {
	 return this->$ContinuationContext::lookupLink(name);
}

$NameParser* ContinuationDirContext::getNameParser($Name* name) {
	 return this->$ContinuationContext::getNameParser(name);
}

$NameParser* ContinuationDirContext::getNameParser($String* name) {
	 return this->$ContinuationContext::getNameParser(name);
}

$Name* ContinuationDirContext::composeName($Name* name, $Name* prefix) {
	 return this->$ContinuationContext::composeName(name, prefix);
}

$String* ContinuationDirContext::composeName($String* name, $String* prefix) {
	 return this->$ContinuationContext::composeName(name, prefix);
}

$Object* ContinuationDirContext::addToEnvironment($String* propName, Object$* value) {
	 return this->$ContinuationContext::addToEnvironment(propName, value);
}

$Object* ContinuationDirContext::removeFromEnvironment($String* propName) {
	 return this->$ContinuationContext::removeFromEnvironment(propName);
}

$Hashtable* ContinuationDirContext::getEnvironment() {
	 return this->$ContinuationContext::getEnvironment();
}

$String* ContinuationDirContext::getNameInNamespace() {
	 return this->$ContinuationContext::getNameInNamespace();
}

void ContinuationDirContext::close() {
	this->$ContinuationContext::close();
}

int32_t ContinuationDirContext::hashCode() {
	 return this->$ContinuationContext::hashCode();
}

bool ContinuationDirContext::equals(Object$* arg0) {
	 return this->$ContinuationContext::equals(arg0);
}

$Object* ContinuationDirContext::clone() {
	 return this->$ContinuationContext::clone();
}

$String* ContinuationDirContext::toString() {
	 return this->$ContinuationContext::toString();
}

void ContinuationDirContext::finalize() {
	this->$ContinuationContext::finalize();
}

void ContinuationDirContext::init$($CannotProceedException* cpe, $Hashtable* env) {
	$ContinuationContext::init$(cpe, env);
}

$DirContextNamePair* ContinuationDirContext::getTargetContext($Name* name) {
	if ($nc(this->cpe)->getResolvedObj() == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	$var($Object, var$0, $nc(this->cpe)->getResolvedObj());
	$var($Name, var$1, $nc(this->cpe)->getAltName());
	$var($Context, ctx, $NamingManager::getContext(var$0, var$1, $($nc(this->cpe)->getAltNameCtx()), this->env));
	if (ctx == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	if ($instanceOf($DirContext, ctx)) {
		return $new($DirContextNamePair, $cast($DirContext, ctx), name);
	}
	if ($instanceOf($Resolver, ctx)) {
		$var($Resolver, res, $cast($Resolver, ctx));
		$load($DirContext);
		$var($ResolveResult, rr, $nc(res)->resolveToClass(name, $DirContext::class$));
		$var($DirContext, dctx, $cast($DirContext, $nc(rr)->getResolvedObj()));
		return ($new($DirContextNamePair, dctx, $(rr->getRemainingName())));
	}
	$var($Object, ultimate, $nc(ctx)->lookup(name));
	if ($instanceOf($DirContext, ultimate)) {
		return ($new($DirContextNamePair, $cast($DirContext, ultimate), $$new($CompositeName)));
	}
	$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
}

$DirContextStringPair* ContinuationDirContext::getTargetContext($String* name) {
	if ($nc(this->cpe)->getResolvedObj() == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	$var($Object, var$0, $nc(this->cpe)->getResolvedObj());
	$var($Name, var$1, $nc(this->cpe)->getAltName());
	$var($Context, ctx, $NamingManager::getContext(var$0, var$1, $($nc(this->cpe)->getAltNameCtx()), this->env));
	if ($instanceOf($DirContext, ctx)) {
		return $new($DirContextStringPair, $cast($DirContext, ctx), name);
	}
	if ($instanceOf($Resolver, ctx)) {
		$var($Resolver, res, $cast($Resolver, ctx));
		$load($DirContext);
		$var($ResolveResult, rr, $nc(res)->resolveToClass(name, $DirContext::class$));
		$var($DirContext, dctx, $cast($DirContext, $nc(rr)->getResolvedObj()));
		$var($Name, tmp, rr->getRemainingName());
		$var($String, remains, (tmp != nullptr) ? $nc($of(tmp))->toString() : ""_s);
		return ($new($DirContextStringPair, dctx, remains));
	}
	$var($Object, ultimate, $nc(ctx)->lookup(name));
	if ($instanceOf($DirContext, ultimate)) {
		return ($new($DirContextStringPair, $cast($DirContext, ultimate), ""_s));
	}
	$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
}

$Attributes* ContinuationDirContext::getAttributes($String* name) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getAttributes($(res->getString()));
}

$Attributes* ContinuationDirContext::getAttributes($String* name, $StringArray* attrIds) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getAttributes($(res->getString()), attrIds);
}

$Attributes* ContinuationDirContext::getAttributes($Name* name) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getAttributes($(res->getName()));
}

$Attributes* ContinuationDirContext::getAttributes($Name* name, $StringArray* attrIds) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getAttributes($(res->getName()), attrIds);
}

void ContinuationDirContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	$var($DirContextNamePair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->modifyAttributes($(res->getName()), mod_op, attrs);
}

void ContinuationDirContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	$var($DirContextStringPair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->modifyAttributes($(res->getString()), mod_op, attrs);
}

void ContinuationDirContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$var($DirContextNamePair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->modifyAttributes($(res->getName()), mods);
}

void ContinuationDirContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	$var($DirContextStringPair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->modifyAttributes($(res->getString()), mods);
}

void ContinuationDirContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	$var($DirContextNamePair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->bind($(res->getName()), obj, attrs);
}

void ContinuationDirContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	$var($DirContextStringPair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->bind($(res->getString()), obj, attrs);
}

void ContinuationDirContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	$var($DirContextNamePair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->rebind($(res->getName()), obj, attrs);
}

void ContinuationDirContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	$var($DirContextStringPair, res, getTargetContext(name));
	$nc($($nc(res)->getDirContext()))->rebind($(res->getString()), obj, attrs);
}

$DirContext* ContinuationDirContext::createSubcontext($Name* name, $Attributes* attrs) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->createSubcontext($(res->getName()), attrs);
}

$DirContext* ContinuationDirContext::createSubcontext($String* name, $Attributes* attrs) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->createSubcontext($(res->getString()), attrs);
}

$NamingEnumeration* ContinuationDirContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getName()), matchingAttributes, attributesToReturn);
}

$NamingEnumeration* ContinuationDirContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getString()), matchingAttributes, attributesToReturn);
}

$NamingEnumeration* ContinuationDirContext::search($Name* name, $Attributes* matchingAttributes) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getName()), matchingAttributes);
}

$NamingEnumeration* ContinuationDirContext::search($String* name, $Attributes* matchingAttributes) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getString()), matchingAttributes);
}

$NamingEnumeration* ContinuationDirContext::search($Name* name, $String* filter, $SearchControls* cons) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getName()), filter, cons);
}

$NamingEnumeration* ContinuationDirContext::search($String* name, $String* filter, $SearchControls* cons) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getString()), filter, cons);
}

$NamingEnumeration* ContinuationDirContext::search($Name* name, $String* filterExpr, $ObjectArray* args, $SearchControls* cons) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getName()), filterExpr, args, cons);
}

$NamingEnumeration* ContinuationDirContext::search($String* name, $String* filterExpr, $ObjectArray* args, $SearchControls* cons) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->search($(res->getString()), filterExpr, args, cons);
}

$DirContext* ContinuationDirContext::getSchema($String* name) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getSchema($(res->getString()));
}

$DirContext* ContinuationDirContext::getSchema($Name* name) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getSchema($(res->getName()));
}

$DirContext* ContinuationDirContext::getSchemaClassDefinition($String* name) {
	$var($DirContextStringPair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getSchemaClassDefinition($(res->getString()));
}

$DirContext* ContinuationDirContext::getSchemaClassDefinition($Name* name) {
	$var($DirContextNamePair, res, getTargetContext(name));
	return $nc($($nc(res)->getDirContext()))->getSchemaClassDefinition($(res->getName()));
}

ContinuationDirContext::ContinuationDirContext() {
}

$Class* ContinuationDirContext::load$($String* name, bool initialize) {
	$loadClass(ContinuationDirContext, name, initialize, &_ContinuationDirContext_ClassInfo_, allocate$ContinuationDirContext);
	return class$;
}

$Class* ContinuationDirContext::class$ = nullptr;

		} // spi
	} // naming
} // javax