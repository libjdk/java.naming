#include <javax/naming/spi/ContinuationContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/spi/NamingManager.h>
#include <javax/naming/spi/ResolveResult.h>
#include <javax/naming/spi/Resolver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $NamingManager = ::javax::naming::spi::NamingManager;
using $ResolveResult = ::javax::naming::spi::ResolveResult;
using $Resolver = ::javax::naming::spi::Resolver;

namespace javax {
	namespace naming {
		namespace spi {

$FieldInfo _ContinuationContext_FieldInfo_[] = {
	{"cpe", "Ljavax/naming/CannotProceedException;", nullptr, $PROTECTED, $field(ContinuationContext, cpe)},
	{"env", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", $PROTECTED, $field(ContinuationContext, env)},
	{"contCtx", "Ljavax/naming/Context;", nullptr, $PROTECTED, $field(ContinuationContext, contCtx)},
	{}
};

$MethodInfo _ContinuationContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/naming/CannotProceedException;Ljava/util/Hashtable;)V", "(Ljavax/naming/CannotProceedException;Ljava/util/Hashtable<**>;)V", $PROTECTED, $method(static_cast<void(ContinuationContext::*)($CannotProceedException*,$Hashtable*)>(&ContinuationContext::init$))},
	{"addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<**>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getTargetContext", "()Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"resolveToClass", "(Ljavax/naming/Name;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljavax/naming/Name;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"resolveToClass", "(Ljava/lang/String;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _ContinuationContext_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.spi.ContinuationContext",
	"java.lang.Object",
	"javax.naming.Context,javax.naming.spi.Resolver",
	_ContinuationContext_FieldInfo_,
	_ContinuationContext_MethodInfo_
};

$Object* allocate$ContinuationContext($Class* clazz) {
	return $of($alloc(ContinuationContext));
}

int32_t ContinuationContext::hashCode() {
	 return this->$Context::hashCode();
}

bool ContinuationContext::equals(Object$* arg0) {
	 return this->$Context::equals(arg0);
}

$Object* ContinuationContext::clone() {
	 return this->$Context::clone();
}

$String* ContinuationContext::toString() {
	 return this->$Context::toString();
}

void ContinuationContext::finalize() {
	this->$Context::finalize();
}

void ContinuationContext::init$($CannotProceedException* cpe, $Hashtable* env) {
	$set(this, contCtx, nullptr);
	$set(this, cpe, cpe);
	$set(this, env, env);
}

$Context* ContinuationContext::getTargetContext() {
	$useLocalCurrentObjectStackCache();
	if (this->contCtx == nullptr) {
		if ($nc(this->cpe)->getResolvedObj() == nullptr) {
			$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
		}
		$var($Object, var$0, $nc(this->cpe)->getResolvedObj());
		$var($Name, var$1, $nc(this->cpe)->getAltName());
		$set(this, contCtx, $NamingManager::getContext(var$0, var$1, $($nc(this->cpe)->getAltNameCtx()), this->env));
		if (this->contCtx == nullptr) {
			$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
		}
	}
	return this->contCtx;
}

$Object* ContinuationContext::lookup($Name* name) {
	$var($Context, ctx, getTargetContext());
	return $of($nc(ctx)->lookup(name));
}

$Object* ContinuationContext::lookup($String* name) {
	$var($Context, ctx, getTargetContext());
	return $of($nc(ctx)->lookup(name));
}

void ContinuationContext::bind($Name* name, Object$* newObj) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->bind(name, newObj);
}

void ContinuationContext::bind($String* name, Object$* newObj) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->bind(name, newObj);
}

void ContinuationContext::rebind($Name* name, Object$* newObj) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->rebind(name, newObj);
}

void ContinuationContext::rebind($String* name, Object$* newObj) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->rebind(name, newObj);
}

void ContinuationContext::unbind($Name* name) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->unbind(name);
}

void ContinuationContext::unbind($String* name) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->unbind(name);
}

void ContinuationContext::rename($Name* name, $Name* newName) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->rename(name, newName);
}

void ContinuationContext::rename($String* name, $String* newName) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->rename(name, newName);
}

$NamingEnumeration* ContinuationContext::list($Name* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->list(name);
}

$NamingEnumeration* ContinuationContext::list($String* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->list(name);
}

$NamingEnumeration* ContinuationContext::listBindings($Name* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->listBindings(name);
}

$NamingEnumeration* ContinuationContext::listBindings($String* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->listBindings(name);
}

void ContinuationContext::destroySubcontext($Name* name) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->destroySubcontext(name);
}

void ContinuationContext::destroySubcontext($String* name) {
	$var($Context, ctx, getTargetContext());
	$nc(ctx)->destroySubcontext(name);
}

$Context* ContinuationContext::createSubcontext($Name* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->createSubcontext(name);
}

$Context* ContinuationContext::createSubcontext($String* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->createSubcontext(name);
}

$Object* ContinuationContext::lookupLink($Name* name) {
	$var($Context, ctx, getTargetContext());
	return $of($nc(ctx)->lookupLink(name));
}

$Object* ContinuationContext::lookupLink($String* name) {
	$var($Context, ctx, getTargetContext());
	return $of($nc(ctx)->lookupLink(name));
}

$NameParser* ContinuationContext::getNameParser($Name* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->getNameParser(name);
}

$NameParser* ContinuationContext::getNameParser($String* name) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->getNameParser(name);
}

$Name* ContinuationContext::composeName($Name* name, $Name* prefix) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->composeName(name, prefix);
}

$String* ContinuationContext::composeName($String* name, $String* prefix) {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->composeName(name, prefix);
}

$Object* ContinuationContext::addToEnvironment($String* propName, Object$* value) {
	$var($Context, ctx, getTargetContext());
	return $of($nc(ctx)->addToEnvironment(propName, value));
}

$Object* ContinuationContext::removeFromEnvironment($String* propName) {
	$var($Context, ctx, getTargetContext());
	return $of($nc(ctx)->removeFromEnvironment(propName));
}

$Hashtable* ContinuationContext::getEnvironment() {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->getEnvironment();
}

$String* ContinuationContext::getNameInNamespace() {
	$var($Context, ctx, getTargetContext());
	return $nc(ctx)->getNameInNamespace();
}

$ResolveResult* ContinuationContext::resolveToClass($Name* name, $Class* contextType) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cpe)->getResolvedObj() == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	$var($Object, var$0, $nc(this->cpe)->getResolvedObj());
	$var($Name, var$1, $nc(this->cpe)->getAltName());
	$var($Resolver, res, $NamingManager::getResolver(var$0, var$1, $($nc(this->cpe)->getAltNameCtx()), this->env));
	if (res == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	return $nc(res)->resolveToClass(name, contextType);
}

$ResolveResult* ContinuationContext::resolveToClass($String* name, $Class* contextType) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cpe)->getResolvedObj() == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	$var($Object, var$0, $nc(this->cpe)->getResolvedObj());
	$var($Name, var$1, $nc(this->cpe)->getAltName());
	$var($Resolver, res, $NamingManager::getResolver(var$0, var$1, $($nc(this->cpe)->getAltNameCtx()), this->env));
	if (res == nullptr) {
		$throw($cast($NamingException, $($nc(this->cpe)->fillInStackTrace())));
	}
	return $nc(res)->resolveToClass(name, contextType);
}

void ContinuationContext::close() {
	$set(this, cpe, nullptr);
	$set(this, env, nullptr);
	if (this->contCtx != nullptr) {
		$nc(this->contCtx)->close();
		$set(this, contCtx, nullptr);
	}
}

ContinuationContext::ContinuationContext() {
}

$Class* ContinuationContext::load$($String* name, bool initialize) {
	$loadClass(ContinuationContext, name, initialize, &_ContinuationContext_ClassInfo_, allocate$ContinuationContext);
	return class$;
}

$Class* ContinuationContext::class$ = nullptr;

		} // spi
	} // naming
} // javax