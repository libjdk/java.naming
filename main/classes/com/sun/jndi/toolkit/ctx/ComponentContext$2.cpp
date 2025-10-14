#include <com/sun/jndi/toolkit/ctx/ComponentContext$2.h>

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

$FieldInfo _ComponentContext$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/ctx/ComponentContext;", nullptr, $FINAL | $SYNTHETIC, $field(ComponentContext$2, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ComponentContext$2, serialVersionUID)},
	{}
};

$MethodInfo _ComponentContext$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/ctx/ComponentContext;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ComponentContext$2::*)($ComponentContext*,$String*)>(&ComponentContext$2::init$))},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ComponentContext$2_EnclosingMethodInfo_ = {
	"com.sun.jndi.toolkit.ctx.ComponentContext",
	"c_processJunction_nns",
	"(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V"
};

$InnerClassInfo _ComponentContext$2_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.ctx.ComponentContext$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.ComponentContext$2",
	"javax.naming.RefAddr",
	nullptr,
	_ComponentContext$2_FieldInfo_,
	_ComponentContext$2_MethodInfo_,
	nullptr,
	&_ComponentContext$2_EnclosingMethodInfo_,
	_ComponentContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.ctx.ComponentContext"
};

$Object* allocate$ComponentContext$2($Class* clazz) {
	return $of($alloc(ComponentContext$2));
}

void ComponentContext$2::init$($ComponentContext* this$0, $String* addrType) {
	$set(this, this$0, this$0);
	$RefAddr::init$(addrType);
}

$Object* ComponentContext$2::getContent() {
	return $of(this->this$0);
}

ComponentContext$2::ComponentContext$2() {
}

$Class* ComponentContext$2::load$($String* name, bool initialize) {
	$loadClass(ComponentContext$2, name, initialize, &_ComponentContext$2_ClassInfo_, allocate$ComponentContext$2);
	return class$;
}

$Class* ComponentContext$2::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com