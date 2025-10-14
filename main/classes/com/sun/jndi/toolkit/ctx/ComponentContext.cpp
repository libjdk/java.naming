#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>

#include <com/sun/jndi/toolkit/ctx/ComponentContext$1.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext$2.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/HeadTail.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/LinkRef.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

#undef TERMINAL_COMPONENT
#undef TERMINAL_NNS_COMPONENT
#undef USE_CONTINUATION
#undef _COMPONENT
#undef _EMPTY_NAME
#undef _NNS_NAME

using $ComponentContext$1 = ::com::sun::jndi::toolkit::ctx::ComponentContext$1;
using $ComponentContext$2 = ::com::sun::jndi::toolkit::ctx::ComponentContext$2;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $HeadTail = ::com::sun::jndi::toolkit::ctx::HeadTail;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $LinkRef = ::javax::naming::LinkRef;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$FieldInfo _ComponentContext_FieldInfo_[] = {
	{"debug", "I", nullptr, $PRIVATE | $STATIC, $staticField(ComponentContext, debug)},
	{"USE_CONTINUATION", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(ComponentContext, USE_CONTINUATION)},
	{"TERMINAL_COMPONENT", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(ComponentContext, TERMINAL_COMPONENT)},
	{"TERMINAL_NNS_COMPONENT", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(ComponentContext, TERMINAL_NNS_COMPONENT)},
	{}
};

$MethodInfo _ComponentContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ComponentContext::*)()>(&ComponentContext::init$))},
	{"c_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_bind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_destroySubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_destroySubcontext_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getNameParser", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_getNameParser_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_list", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_listBindings", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_listBindings_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_list_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookup", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_lookupLink", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_lookupLink_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookup_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_processJunction_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_rebind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rename", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_rename_nns", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_resolveIntermediate_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_unbind", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_unbind_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"checkAndAdjustRemainingName", "(Ljavax/naming/Name;)V", nullptr, 0, nullptr, "javax.naming.InvalidNameException"},
	{"isAllEmpty", "(Ljavax/naming/Name;)Z", nullptr, $PROTECTED},
	{"p_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_createSubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_destroySubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_getNameParser", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_list", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_listBindings", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_lookup", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_lookupLink", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_parseComponent", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Lcom/sun/jndi/toolkit/ctx/HeadTail;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_rename", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_resolveIntermediate", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Lcom/sun/jndi/toolkit/ctx/HeadTail;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_resolveToClass", "(Ljavax/naming/Name;Ljava/lang/Class;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/spi/ResolveResult;", "(Ljavax/naming/Name;Ljava/lang/Class<*>;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/spi/ResolveResult;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_unbind", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _ComponentContext_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.ctx.ComponentContext$2", nullptr, nullptr, 0},
	{"com.sun.jndi.toolkit.ctx.ComponentContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.ctx.ComponentContext",
	"com.sun.jndi.toolkit.ctx.PartialCompositeContext",
	nullptr,
	_ComponentContext_FieldInfo_,
	_ComponentContext_MethodInfo_,
	nullptr,
	nullptr,
	_ComponentContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.ctx.ComponentContext$2,com.sun.jndi.toolkit.ctx.ComponentContext$1"
};

$Object* allocate$ComponentContext($Class* clazz) {
	return $of($alloc(ComponentContext));
}

int32_t ComponentContext::debug = 0;

void ComponentContext::init$() {
	$PartialCompositeContext::init$();
	this->_contextType = $PartialCompositeContext::_COMPONENT;
}

$HeadTail* ComponentContext::p_parseComponent($Name* name, $Continuation* cont) {
	int32_t separator = 0;
	bool var$0 = $nc(name)->isEmpty();
	if (var$0 || $nc($($nc(name)->get(0)))->isEmpty()) {
		separator = 0;
	} else {
		separator = 1;
	}
	$var($Name, head, nullptr);
	$var($Name, tail, nullptr);
	if ($instanceOf($CompositeName, name)) {
		$assign(head, $nc(name)->getPrefix(separator));
		$assign(tail, name->getSuffix(separator));
	} else {
		$assign(head, $$new($CompositeName)->add($($nc($of(name))->toString())));
		$assign(tail, nullptr);
	}
	if (ComponentContext::debug > 2) {
		$init($System);
		$nc($System::err)->println($$str({"ORIG: "_s, name}));
		$nc($System::err)->println($$str({"PREFIX: "_s, name}));
		$nc($System::err)->println($$str({"SUFFIX: "_s, ($String*)nullptr}));
	}
	return $new($HeadTail, head, tail);
}

$Object* ComponentContext::c_resolveIntermediate_nns($Name* name, $Continuation* cont) {
	try {
		$var($Object, obj, c_lookup(name, cont));
		if (obj != nullptr && $of(this)->getClass()->isInstance(obj)) {
			$nc(cont)->setContinueNNS(obj, name, static_cast<$Context*>(this));
			return $of(nullptr);
		} else if (obj != nullptr && !($instanceOf($Context, obj))) {
			$var($RefAddr, addr, $new($ComponentContext$1, this, "nns"_s, obj));
			$var($Reference, ref, $new($Reference, "java.lang.Object"_s, addr));
			$var($CompositeName, resName, $cast($CompositeName, $nc(name)->clone()));
			$nc(resName)->add(""_s);
			$nc(cont)->setContinue(ref, resName, this);
			return $of(nullptr);
		} else {
			return $of(obj);
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		e->appendRemainingComponent(""_s);
		$throw(e);
	}
	$shouldNotReachHere();
}

$Object* ComponentContext::c_lookup_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return $of(nullptr);
}

$Object* ComponentContext::c_lookupLink_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return $of(nullptr);
}

$NamingEnumeration* ComponentContext::c_list_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$NamingEnumeration* ComponentContext::c_listBindings_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

void ComponentContext::c_bind_nns($Name* name, Object$* obj, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

void ComponentContext::c_rebind_nns($Name* name, Object$* obj, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

void ComponentContext::c_unbind_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

$Context* ComponentContext::c_createSubcontext_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

void ComponentContext::c_destroySubcontext_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

void ComponentContext::c_rename_nns($Name* oldname, $Name* newname, $Continuation* cont) {
	c_processJunction_nns(oldname, cont);
}

$NameParser* ComponentContext::c_getNameParser_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

void ComponentContext::c_processJunction_nns($Name* name, $Continuation* cont) {
	if ($nc(name)->isEmpty()) {
		$var($RefAddr, addr, $new($ComponentContext$2, this, "nns"_s));
		$var($Reference, ref, $new($Reference, "java.lang.Object"_s, addr));
		$init($PartialCompositeContext);
		$nc(cont)->setContinue(ref, $PartialCompositeContext::_NNS_NAME, this);
		return;
	}
	try {
		$var($Object, target, c_lookup(name, cont));
		if ($nc(cont)->isContinue()) {
			cont->appendRemainingComponent(""_s);
		} else {
			cont->setContinueNNS(target, name, static_cast<$Context*>(this));
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		e->appendRemainingComponent(""_s);
		$throw(e);
	}
}

$HeadTail* ComponentContext::p_resolveIntermediate($Name* name, $Continuation* cont) {
	int32_t ret = ComponentContext::USE_CONTINUATION;
	$nc(cont)->setSuccess();
	$var($HeadTail, p, p_parseComponent(name, cont));
	$var($Name, tail, $nc(p)->getTail());
	$var($Name, head, p->getHead());
	if (tail == nullptr || $nc(tail)->isEmpty()) {
		ret = ComponentContext::TERMINAL_COMPONENT;
	} else if (!$nc($(tail->get(0)))->isEmpty()) {
		try {
			$var($Object, obj, c_resolveIntermediate_nns(head, cont));
			if (obj != nullptr) {
				cont->setContinue(obj, head, static_cast<$Context*>(this), tail);
			} else if (cont->isContinue()) {
				checkAndAdjustRemainingName($(cont->getRemainingName()));
				cont->appendRemainingName(tail);
			}
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			checkAndAdjustRemainingName($(e->getRemainingName()));
			e->appendRemainingName(tail);
			$throw(e);
		}
	} else if (tail->size() == 1) {
		ret = ComponentContext::TERMINAL_NNS_COMPONENT;
	} else {
		bool var$1 = $nc(head)->isEmpty();
		if (var$1 || isAllEmpty(tail)) {
			$var($Name, newTail, tail->getSuffix(1));
			try {
				$var($Object, obj, c_lookup_nns(head, cont));
				if (obj != nullptr) {
					cont->setContinue(obj, head, static_cast<$Context*>(this), newTail);
				} else if (cont->isContinue()) {
					cont->appendRemainingName(newTail);
				}
			} catch ($NamingException&) {
				$var($NamingException, e, $catch());
				e->appendRemainingName(newTail);
				$throw(e);
			}
		} else {
			try {
				$var($Object, obj, c_resolveIntermediate_nns(head, cont));
				if (obj != nullptr) {
					cont->setContinue(obj, head, static_cast<$Context*>(this), tail);
				} else if (cont->isContinue()) {
					checkAndAdjustRemainingName($(cont->getRemainingName()));
					cont->appendRemainingName(tail);
				}
			} catch ($NamingException&) {
				$var($NamingException, e, $catch());
				checkAndAdjustRemainingName($(e->getRemainingName()));
				e->appendRemainingName(tail);
				$throw(e);
			}
		}
	}
	p->setStatus(ret);
	return p;
}

void ComponentContext::checkAndAdjustRemainingName($Name* rname) {
	int32_t count = 0;
	bool var$0 = rname != nullptr && (count = rname->size()) > 1;
	if (var$0 && $nc($(rname->get(count - 1)))->isEmpty()) {
		rname->remove(count - 1);
	}
}

bool ComponentContext::isAllEmpty($Name* n) {
	int32_t count = $nc(n)->size();
	for (int32_t i = 0; i < count; ++i) {
		if (!$nc($(n->get(i)))->isEmpty()) {
			return false;
		}
	}
	return true;
}

$ResolveResult* ComponentContext::p_resolveToClass($Name* name, $Class* contextType, $Continuation* cont) {
	if ($nc(contextType)->isInstance(this)) {
		$nc(cont)->setSuccess();
		return ($new($ResolveResult, $of(this), name));
	}
	$var($ResolveResult, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	{
		$var($Object, obj, nullptr)
		switch ($nc(res)->getStatus()) {
		case ComponentContext::TERMINAL_NNS_COMPONENT:
			{
				$assign(obj, p_lookup(name, cont));
				bool var$0 = !$nc(cont)->isContinue();
				if (var$0 && $nc(contextType)->isInstance(obj)) {
					$init($PartialCompositeContext);
					$assign(ret, $new($ResolveResult, obj, static_cast<$Name*>($PartialCompositeContext::_EMPTY_NAME)));
				}
				break;
			}
		case ComponentContext::TERMINAL_COMPONENT:
			{
				$nc(cont)->setSuccess();
				break;
			}
		default:
			{
				break;
			}
		}
	}
	return ret;
}

$Object* ComponentContext::p_lookup($Name* name, $Continuation* cont) {
	$var($Object, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(ret, c_lookup_nns($(res->getHead()), cont));
			if ($instanceOf($LinkRef, ret)) {
				$nc(cont)->setContinue(ret, $(res->getHead()), this);
				$assign(ret, nullptr);
			}
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(ret, c_lookup($(res->getHead()), cont));
			if ($instanceOf($LinkRef, ret)) {
				$nc(cont)->setContinue(ret, $(res->getHead()), this);
				$assign(ret, nullptr);
			}
			break;
		}
	default:
		{
			break;
		}
	}
	return $of(ret);
}

$NamingEnumeration* ComponentContext::p_list($Name* name, $Continuation* cont) {
	$var($NamingEnumeration, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			if (ComponentContext::debug > 0) {
				$init($System);
				$nc($System::out)->println($$str({"c_list_nns("_s, $(res->getHead()), ")"_s}));
			}
			$assign(ret, c_list_nns($(res->getHead()), cont));
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			if (ComponentContext::debug > 0) {
				$init($System);
				$nc($System::out)->println($$str({"c_list("_s, $(res->getHead()), ")"_s}));
			}
			$assign(ret, c_list($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return ret;
}

$NamingEnumeration* ComponentContext::p_listBindings($Name* name, $Continuation* cont) {
	$var($NamingEnumeration, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(ret, c_listBindings_nns($(res->getHead()), cont));
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(ret, c_listBindings($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return ret;
}

void ComponentContext::p_bind($Name* name, Object$* obj, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_bind_nns($(res->getHead()), obj, cont);
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			c_bind($(res->getHead()), obj, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

void ComponentContext::p_rebind($Name* name, Object$* obj, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_rebind_nns($(res->getHead()), obj, cont);
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			c_rebind($(res->getHead()), obj, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

void ComponentContext::p_unbind($Name* name, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_unbind_nns($(res->getHead()), cont);
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			c_unbind($(res->getHead()), cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

void ComponentContext::p_destroySubcontext($Name* name, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_destroySubcontext_nns($(res->getHead()), cont);
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			c_destroySubcontext($(res->getHead()), cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

$Context* ComponentContext::p_createSubcontext($Name* name, $Continuation* cont) {
	$var($Context, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(ret, c_createSubcontext_nns($(res->getHead()), cont));
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(ret, c_createSubcontext($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return ret;
}

void ComponentContext::p_rename($Name* oldName, $Name* newName, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(oldName, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_rename_nns($(res->getHead()), newName, cont);
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			c_rename($(res->getHead()), newName, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

$NameParser* ComponentContext::p_getNameParser($Name* name, $Continuation* cont) {
	$var($NameParser, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(ret, c_getNameParser_nns($(res->getHead()), cont));
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(ret, c_getNameParser($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return ret;
}

$Object* ComponentContext::p_lookupLink($Name* name, $Continuation* cont) {
	$var($Object, ret, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(ret, c_lookupLink_nns($(res->getHead()), cont));
			break;
		}
	case ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(ret, c_lookupLink($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return $of(ret);
}

void clinit$ComponentContext($Class* class$) {
	ComponentContext::debug = 0;
}

ComponentContext::ComponentContext() {
}

$Class* ComponentContext::load$($String* name, bool initialize) {
	$loadClass(ComponentContext, name, initialize, &_ComponentContext_ClassInfo_, clinit$ComponentContext, allocate$ComponentContext);
	return class$;
}

$Class* ComponentContext::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com