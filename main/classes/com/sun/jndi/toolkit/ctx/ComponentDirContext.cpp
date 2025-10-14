#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>

#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/HeadTail.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

#undef TERMINAL_COMPONENT
#undef TERMINAL_NNS_COMPONENT
#undef _COMPONENT

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ComponentContext = ::com::sun::jndi::toolkit::ctx::ComponentContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $HeadTail = ::com::sun::jndi::toolkit::ctx::HeadTail;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $PartialCompositeDirContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$MethodInfo _ComponentDirContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ComponentDirContext::*)()>(&ComponentDirContext::init$))},
	{"c_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_bind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext_nns", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_getAttributes_nns", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchema", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_getSchemaClassDefinition", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_getSchemaClassDefinition_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchema_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes_nns", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes_nns", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_rebind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_search_nns", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search_nns", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search_nns", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_getSchema", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_getSchemaClassDefinition", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"p_search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _ComponentDirContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.ctx.ComponentDirContext",
	"com.sun.jndi.toolkit.ctx.PartialCompositeDirContext",
	nullptr,
	nullptr,
	_ComponentDirContext_MethodInfo_
};

$Object* allocate$ComponentDirContext($Class* clazz) {
	return $of($alloc(ComponentDirContext));
}

void ComponentDirContext::init$() {
	$PartialCompositeDirContext::init$();
	this->_contextType = $PartialCompositeContext::_COMPONENT;
}

$Attributes* ComponentDirContext::c_getAttributes_nns($Name* name, $StringArray* attrIds, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

void ComponentDirContext::c_modifyAttributes_nns($Name* name, int32_t mod_op, $Attributes* attrs, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

void ComponentDirContext::c_modifyAttributes_nns($Name* name, $ModificationItemArray* mods, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

void ComponentDirContext::c_bind_nns($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

void ComponentDirContext::c_rebind_nns($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	c_processJunction_nns(name, cont);
}

$DirContext* ComponentDirContext::c_createSubcontext_nns($Name* name, $Attributes* attrs, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$NamingEnumeration* ComponentDirContext::c_search_nns($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$NamingEnumeration* ComponentDirContext::c_search_nns($Name* name, $String* filter, $SearchControls* cons, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$NamingEnumeration* ComponentDirContext::c_search_nns($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$DirContext* ComponentDirContext::c_getSchema_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$DirContext* ComponentDirContext::c_getSchemaClassDefinition_nns($Name* name, $Continuation* cont) {
	c_processJunction_nns(name, cont);
	return nullptr;
}

$Attributes* ComponentDirContext::p_getAttributes($Name* name, $StringArray* attrIds, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	$var($Attributes, answer, nullptr);
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_getAttributes_nns($(res->getHead()), attrIds, cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_getAttributes($(res->getHead()), attrIds, cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

void ComponentDirContext::p_modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_modifyAttributes_nns($(res->getHead()), mod_op, attrs, cont);
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			c_modifyAttributes($(res->getHead()), mod_op, attrs, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

void ComponentDirContext::p_modifyAttributes($Name* name, $ModificationItemArray* mods, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_modifyAttributes_nns($(res->getHead()), mods, cont);
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			c_modifyAttributes($(res->getHead()), mods, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

void ComponentDirContext::p_bind($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_bind_nns($(res->getHead()), obj, attrs, cont);
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			c_bind($(res->getHead()), obj, attrs, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

void ComponentDirContext::p_rebind($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			c_rebind_nns($(res->getHead()), obj, attrs, cont);
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			c_rebind($(res->getHead()), obj, attrs, cont);
			break;
		}
	default:
		{
			break;
		}
	}
}

$DirContext* ComponentDirContext::p_createSubcontext($Name* name, $Attributes* attrs, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	$var($DirContext, answer, nullptr);
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_createSubcontext_nns($(res->getHead()), attrs, cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_createSubcontext($(res->getHead()), attrs, cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

$NamingEnumeration* ComponentDirContext::p_search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	$var($NamingEnumeration, answer, nullptr);
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_search_nns($(res->getHead()), matchingAttributes, attributesToReturn, cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_search($(res->getHead()), matchingAttributes, attributesToReturn, cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

$NamingEnumeration* ComponentDirContext::p_search($Name* name, $String* filter, $SearchControls* cons, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	$var($NamingEnumeration, answer, nullptr);
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_search_nns($(res->getHead()), filter, cons, cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_search($(res->getHead()), filter, cons, cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

$NamingEnumeration* ComponentDirContext::p_search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons, $Continuation* cont) {
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	$var($NamingEnumeration, answer, nullptr);
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_search_nns($(res->getHead()), filterExpr, filterArgs, cons, cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_search($(res->getHead()), filterExpr, filterArgs, cons, cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

$DirContext* ComponentDirContext::p_getSchema($Name* name, $Continuation* cont) {
	$var($DirContext, answer, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_getSchema_nns($(res->getHead()), cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_getSchema($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

$DirContext* ComponentDirContext::p_getSchemaClassDefinition($Name* name, $Continuation* cont) {
	$var($DirContext, answer, nullptr);
	$var($HeadTail, res, p_resolveIntermediate(name, cont));
	switch ($nc(res)->getStatus()) {
	case $ComponentContext::TERMINAL_NNS_COMPONENT:
		{
			$assign(answer, c_getSchemaClassDefinition_nns($(res->getHead()), cont));
			break;
		}
	case $ComponentContext::TERMINAL_COMPONENT:
		{
			$assign(answer, c_getSchemaClassDefinition($(res->getHead()), cont));
			break;
		}
	default:
		{
			break;
		}
	}
	return answer;
}

ComponentDirContext::ComponentDirContext() {
}

$Class* ComponentDirContext::load$($String* name, bool initialize) {
	$loadClass(ComponentDirContext, name, initialize, &_ComponentDirContext_ClassInfo_, allocate$ComponentDirContext);
	return class$;
}

$Class* ComponentDirContext::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com