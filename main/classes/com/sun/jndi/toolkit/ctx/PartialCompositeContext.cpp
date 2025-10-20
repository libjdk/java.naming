#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>

#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/spi/NamingManager.h>
#include <javax/naming/spi/ResolveResult.h>
#include <javax/naming/spi/Resolver.h>
#include <jcpp.h>

#undef _ATOMIC
#undef _COMPONENT
#undef _EMPTY_NAME
#undef _NNS_NAME
#undef _PARTIAL

using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $NamingManager = ::javax::naming::spi::NamingManager;
using $ResolveResult = ::javax::naming::spi::ResolveResult;
using $Resolver = ::javax::naming::spi::Resolver;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$FieldInfo _PartialCompositeContext_FieldInfo_[] = {
	{"_PARTIAL", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PartialCompositeContext, _PARTIAL)},
	{"_COMPONENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PartialCompositeContext, _COMPONENT)},
	{"_ATOMIC", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(PartialCompositeContext, _ATOMIC)},
	{"_contextType", "I", nullptr, $PROTECTED, $field(PartialCompositeContext, _contextType)},
	{"_EMPTY_NAME", "Ljavax/naming/CompositeName;", nullptr, $STATIC | $FINAL, $staticField(PartialCompositeContext, _EMPTY_NAME)},
	{"_NNS_NAME", "Ljavax/naming/CompositeName;", nullptr, $STATIC, $staticField(PartialCompositeContext, _NNS_NAME)},
	{}
};

$MethodInfo _PartialCompositeContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PartialCompositeContext::*)()>(&PartialCompositeContext::init$))},
	{"allEmpty", "(Ljavax/naming/Name;)Z", nullptr, $PROTECTED | $STATIC, $method(static_cast<bool(*)($Name*)>(&PartialCompositeContext::allEmpty))},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getPCContext", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Lcom/sun/jndi/toolkit/ctx/PartialCompositeContext;", nullptr, $PROTECTED | $STATIC, $method(static_cast<PartialCompositeContext*(*)($Continuation*)>(&PartialCompositeContext::getPCContext)), "javax.naming.NamingException"},
	{"list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"p_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_createSubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_destroySubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<**>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_getNameParser", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_list", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_listBindings", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_lookup", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_lookupLink", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_rename", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_resolveToClass", "(Ljavax/naming/Name;Ljava/lang/Class;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/spi/ResolveResult;", "(Ljavax/naming/Name;Ljava/lang/Class<*>;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/spi/ResolveResult;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_unbind", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"resolveToClass", "(Ljava/lang/String;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"resolveToClass", "(Ljavax/naming/Name;Ljava/lang/Class;)Ljavax/naming/spi/ResolveResult;", "(Ljavax/naming/Name;Ljava/lang/Class<+Ljavax/naming/Context;>;)Ljavax/naming/spi/ResolveResult;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _PartialCompositeContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.ctx.PartialCompositeContext",
	"java.lang.Object",
	"javax.naming.Context,javax.naming.spi.Resolver",
	_PartialCompositeContext_FieldInfo_,
	_PartialCompositeContext_MethodInfo_
};

$Object* allocate$PartialCompositeContext($Class* clazz) {
	return $of($alloc(PartialCompositeContext));
}

int32_t PartialCompositeContext::hashCode() {
	 return this->$Context::hashCode();
}

bool PartialCompositeContext::equals(Object$* arg0) {
	 return this->$Context::equals(arg0);
}

$Object* PartialCompositeContext::clone() {
	 return this->$Context::clone();
}

$String* PartialCompositeContext::toString() {
	 return this->$Context::toString();
}

void PartialCompositeContext::finalize() {
	this->$Context::finalize();
}

$CompositeName* PartialCompositeContext::_EMPTY_NAME = nullptr;
$CompositeName* PartialCompositeContext::_NNS_NAME = nullptr;

void PartialCompositeContext::init$() {
	this->_contextType = PartialCompositeContext::_PARTIAL;
}

$Hashtable* PartialCompositeContext::p_getEnvironment() {
	return getEnvironment();
}

$ResolveResult* PartialCompositeContext::resolveToClass($String* name, $Class* contextType) {
	return resolveToClass(static_cast<$Name*>($$new($CompositeName, name)), contextType);
}

$ResolveResult* PartialCompositeContext::resolveToClass($Name* name, $Class* contextType) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($ResolveResult, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_resolveToClass(nm, contextType, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_resolveToClass(nm, contextType, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		if (!($instanceOf($Resolver, cctx))) {
			$throw(e);
		}
		$assign(answer, $nc(($cast($Resolver, cctx)))->resolveToClass($(e->getRemainingName()), contextType));
	}
	return answer;
}

$Object* PartialCompositeContext::lookup($String* name) {
	return $of(lookup(static_cast<$Name*>($$new($CompositeName, name))));
}

$Object* PartialCompositeContext::lookup($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Object, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_lookup(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_lookup(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$assign(answer, $nc(cctx)->lookup($(e->getRemainingName())));
	}
	return $of(answer);
}

void PartialCompositeContext::bind($String* name, Object$* newObj) {
	bind(static_cast<$Name*>($$new($CompositeName, name)), newObj);
}

void PartialCompositeContext::bind($Name* name, Object$* newObj) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		ctx->p_bind(nm, newObj, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$nc(ctx)->p_bind(nm, newObj, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$nc(cctx)->bind($(e->getRemainingName()), newObj);
	}
}

void PartialCompositeContext::rebind($String* name, Object$* newObj) {
	rebind(static_cast<$Name*>($$new($CompositeName, name)), newObj);
}

void PartialCompositeContext::rebind($Name* name, Object$* newObj) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		ctx->p_rebind(nm, newObj, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$nc(ctx)->p_rebind(nm, newObj, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$nc(cctx)->rebind($(e->getRemainingName()), newObj);
	}
}

void PartialCompositeContext::unbind($String* name) {
	unbind(static_cast<$Name*>($$new($CompositeName, name)));
}

void PartialCompositeContext::unbind($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		ctx->p_unbind(nm, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$nc(ctx)->p_unbind(nm, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$nc(cctx)->unbind($(e->getRemainingName()));
	}
}

void PartialCompositeContext::rename($String* oldName, $String* newName) {
	$useLocalCurrentObjectStackCache();
	$var($Name, var$0, static_cast<$Name*>($new($CompositeName, oldName)));
	rename(var$0, static_cast<$Name*>($$new($CompositeName, newName)));
}

void PartialCompositeContext::rename($Name* oldName, $Name* newName$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Name, newName, newName$renamed);
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, oldName);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, oldName, env));
	try {
		ctx->p_rename(nm, newName, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$nc(ctx)->p_rename(nm, newName, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		if (e->getRemainingNewName() != nullptr) {
			$assign(newName, e->getRemainingNewName());
		}
		$nc(cctx)->rename($(e->getRemainingName()), newName);
	}
}

$NamingEnumeration* PartialCompositeContext::list($String* name) {
	return list(static_cast<$Name*>($$new($CompositeName, name)));
}

$NamingEnumeration* PartialCompositeContext::list($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($NamingEnumeration, answer, nullptr);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		$assign(answer, ctx->p_list(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_list(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$assign(answer, $nc(cctx)->list($(e->getRemainingName())));
	}
	return answer;
}

$NamingEnumeration* PartialCompositeContext::listBindings($String* name) {
	return listBindings(static_cast<$Name*>($$new($CompositeName, name)));
}

$NamingEnumeration* PartialCompositeContext::listBindings($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($NamingEnumeration, answer, nullptr);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		$assign(answer, ctx->p_listBindings(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_listBindings(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$assign(answer, $nc(cctx)->listBindings($(e->getRemainingName())));
	}
	return answer;
}

void PartialCompositeContext::destroySubcontext($String* name) {
	destroySubcontext(static_cast<$Name*>($$new($CompositeName, name)));
}

void PartialCompositeContext::destroySubcontext($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		ctx->p_destroySubcontext(nm, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$nc(ctx)->p_destroySubcontext(nm, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$nc(cctx)->destroySubcontext($(e->getRemainingName()));
	}
}

$Context* PartialCompositeContext::createSubcontext($String* name) {
	return createSubcontext(static_cast<$Name*>($$new($CompositeName, name)));
}

$Context* PartialCompositeContext::createSubcontext($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($Context, answer, nullptr);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		$assign(answer, ctx->p_createSubcontext(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_createSubcontext(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$assign(answer, $nc(cctx)->createSubcontext($(e->getRemainingName())));
	}
	return answer;
}

$Object* PartialCompositeContext::lookupLink($String* name) {
	return $of(lookupLink(static_cast<$Name*>($$new($CompositeName, name))));
}

$Object* PartialCompositeContext::lookupLink($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Object, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_lookupLink(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_lookupLink(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$assign(answer, $nc(cctx)->lookupLink($(e->getRemainingName())));
	}
	return $of(answer);
}

$NameParser* PartialCompositeContext::getNameParser($String* name) {
	return getNameParser(static_cast<$Name*>($$new($CompositeName, name)));
}

$NameParser* PartialCompositeContext::getNameParser($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeContext, ctx, this);
	$var($Name, nm, name);
	$var($NameParser, answer, nullptr);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	try {
		$assign(answer, ctx->p_getNameParser(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCContext(cont));
			$assign(answer, $nc(ctx)->p_getNameParser(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($Context, cctx, $NamingManager::getContinuationContext(e));
		$assign(answer, $nc(cctx)->getNameParser($(e->getRemainingName())));
	}
	return answer;
}

$String* PartialCompositeContext::composeName($String* name, $String* prefix) {
	$useLocalCurrentObjectStackCache();
	$var($Name, var$0, static_cast<$Name*>($new($CompositeName, name)));
	$var($Name, fullName, composeName(var$0, static_cast<$Name*>($$new($CompositeName, prefix))));
	return $nc($of(fullName))->toString();
}

$Name* PartialCompositeContext::composeName($Name* name, $Name* prefix) {
	$useLocalCurrentObjectStackCache();
	$var($Name, res, $cast($Name, $nc(prefix)->clone()));
	if (name == nullptr) {
		return res;
	}
	$nc(res)->addAll(name);
	$var($String, elide, $cast($String, $nc($(p_getEnvironment()))->get("java.naming.provider.compose.elideEmpty"_s)));
	if (elide == nullptr || !$nc(elide)->equalsIgnoreCase("true"_s)) {
		return res;
	}
	int32_t len = prefix->size();
	bool var$0 = !allEmpty(prefix);
	if (var$0 && !allEmpty(name)) {
		if ($nc($(res->get(len - 1)))->isEmpty()) {
			res->remove(len - 1);
		} else if ($nc($(res->get(len)))->isEmpty()) {
			res->remove(len);
		}
	}
	return res;
}

bool PartialCompositeContext::allEmpty($Name* name) {
	$init(PartialCompositeContext);
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, enum_, $nc(name)->getAll());
	while ($nc(enum_)->hasMoreElements()) {
		if (!$nc(($cast($String, $(enum_->nextElement()))))->isEmpty()) {
			return false;
		}
	}
	return true;
}

PartialCompositeContext* PartialCompositeContext::getPCContext($Continuation* cont) {
	$init(PartialCompositeContext);
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, $nc(cont)->getResolvedObj());
	$var(PartialCompositeContext, pctx, nullptr);
	if ($instanceOf(PartialCompositeContext, obj)) {
		return $cast(PartialCompositeContext, obj);
	} else {
		$throw($(cont->fillInException($$new($CannotProceedException))));
	}
}

void clinit$PartialCompositeContext($Class* class$) {
	$assignStatic(PartialCompositeContext::_EMPTY_NAME, $new($CompositeName));
	{
		try {
			$assignStatic(PartialCompositeContext::_NNS_NAME, $new($CompositeName, "/"_s));
		} catch ($InvalidNameException&) {
			$catch();
		}
	}
}

PartialCompositeContext::PartialCompositeContext() {
}

$Class* PartialCompositeContext::load$($String* name, bool initialize) {
	$loadClass(PartialCompositeContext, name, initialize, &_PartialCompositeContext_ClassInfo_, clinit$PartialCompositeContext, allocate$PartialCompositeContext);
	return class$;
}

$Class* PartialCompositeContext::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com