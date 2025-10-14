#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$HierContextEnumerator.h>

#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingEnumeration.h>
#include <jcpp.h>

using $ContextEnumerator = ::com::sun::jndi::toolkit::dir::ContextEnumerator;
using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Context = ::javax::naming::Context;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _HierMemDirCtx$HierContextEnumerator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $FINAL | $SYNTHETIC, $field(HierMemDirCtx$HierContextEnumerator, this$0)},
	{}
};

$MethodInfo _HierMemDirCtx$HierContextEnumerator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljavax/naming/Context;I)V", nullptr, $PUBLIC, $method(static_cast<void(HierMemDirCtx$HierContextEnumerator::*)($HierMemDirCtx*,$Context*,int32_t)>(&HierMemDirCtx$HierContextEnumerator::init$)), "javax.naming.NamingException"},
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljavax/naming/Context;ILjava/lang/String;Z)V", nullptr, $PROTECTED, $method(static_cast<void(HierMemDirCtx$HierContextEnumerator::*)($HierMemDirCtx*,$Context*,int32_t,$String*,bool)>(&HierMemDirCtx$HierContextEnumerator::init$)), "javax.naming.NamingException"},
	{"getImmediateChildren", "(Ljavax/naming/Context;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Context;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"newEnumerator", "(Ljavax/naming/Context;ILjava/lang/String;Z)Lcom/sun/jndi/toolkit/dir/ContextEnumerator;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _HierMemDirCtx$HierContextEnumerator_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$HierContextEnumerator", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "HierContextEnumerator", $PUBLIC},
	{}
};

$ClassInfo _HierMemDirCtx$HierContextEnumerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx$HierContextEnumerator",
	"com.sun.jndi.toolkit.dir.ContextEnumerator",
	nullptr,
	_HierMemDirCtx$HierContextEnumerator_FieldInfo_,
	_HierMemDirCtx$HierContextEnumerator_MethodInfo_,
	nullptr,
	nullptr,
	_HierMemDirCtx$HierContextEnumerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx"
};

$Object* allocate$HierMemDirCtx$HierContextEnumerator($Class* clazz) {
	return $of($alloc(HierMemDirCtx$HierContextEnumerator));
}

void HierMemDirCtx$HierContextEnumerator::init$($HierMemDirCtx* this$0, $Context* context, int32_t scope) {
	$set(this, this$0, this$0);
	$ContextEnumerator::init$(context, scope);
}

void HierMemDirCtx$HierContextEnumerator::init$($HierMemDirCtx* this$0, $Context* context, int32_t scope, $String* contextName, bool returnSelf) {
	$set(this, this$0, this$0);
	$ContextEnumerator::init$(context, scope, contextName, returnSelf);
}

$NamingEnumeration* HierMemDirCtx$HierContextEnumerator::getImmediateChildren($Context* ctx) {
	return $nc(($cast($HierMemDirCtx, ctx)))->doListBindings(false);
}

$ContextEnumerator* HierMemDirCtx$HierContextEnumerator::newEnumerator($Context* ctx, int32_t scope, $String* contextName, bool returnSelf) {
	return $new(HierMemDirCtx$HierContextEnumerator, this->this$0, ctx, scope, contextName, returnSelf);
}

HierMemDirCtx$HierContextEnumerator::HierMemDirCtx$HierContextEnumerator() {
}

$Class* HierMemDirCtx$HierContextEnumerator::load$($String* name, bool initialize) {
	$loadClass(HierMemDirCtx$HierContextEnumerator, name, initialize, &_HierMemDirCtx$HierContextEnumerator_ClassInfo_, allocate$HierMemDirCtx$HierContextEnumerator);
	return class$;
}

$Class* HierMemDirCtx$HierContextEnumerator::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com