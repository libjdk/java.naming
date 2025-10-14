#include <com/sun/jndi/toolkit/ctx/ComponentContext$1.h>

#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $ComponentContext = ::com::sun::jndi::toolkit::ctx::ComponentContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RefAddr = ::javax::naming::RefAddr;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$FieldInfo _ComponentContext$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/ctx/ComponentContext;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentContext$1, this$0)},
	{"val$obj", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentContext$1, val$obj)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentContext$1, serialVersionUID)},
	{}
};

$MethodInfo _ComponentContext$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/ctx/ComponentContext;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(ComponentContext$1::*)($ComponentContext*,$String*,Object$*)>(&ComponentContext$1::init$))},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ComponentContext$1_EnclosingMethodInfo_ = {
	"com.sun.jndi.toolkit.ctx.ComponentContext",
	"c_resolveIntermediate_nns",
	"(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;"
};

$InnerClassInfo _ComponentContext$1_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.ctx.ComponentContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.ComponentContext$1",
	"javax.naming.RefAddr",
	nullptr,
	_ComponentContext$1_FieldInfo_,
	_ComponentContext$1_MethodInfo_,
	nullptr,
	&_ComponentContext$1_EnclosingMethodInfo_,
	_ComponentContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.ctx.ComponentContext"
};

$Object* allocate$ComponentContext$1($Class* clazz) {
	return $of($alloc(ComponentContext$1));
}

void ComponentContext$1::init$($ComponentContext* this$0, $String* addrType, Object$* val$obj) {
	$set(this, this$0, this$0);
	$set(this, val$obj, val$obj);
	$RefAddr::init$(addrType);
}

$Object* ComponentContext$1::getContent() {
	return $of(this->val$obj);
}

ComponentContext$1::ComponentContext$1() {
}

$Class* ComponentContext$1::load$($String* name, bool initialize) {
	$loadClass(ComponentContext$1, name, initialize, &_ComponentContext$1_ClassInfo_, allocate$ComponentContext$1);
	return class$;
}

$Class* ComponentContext$1::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com