#include <com/sun/jndi/toolkit/ctx/AtomicContext$2.h>

#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
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

using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
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

$FieldInfo _AtomicContext$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/ctx/AtomicContext;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicContext$2, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicContext$2, serialVersionUID)},
	{}
};

$MethodInfo _AtomicContext$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/ctx/AtomicContext;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AtomicContext$2::*)($AtomicContext*,$String*)>(&AtomicContext$2::init$))},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AtomicContext$2_EnclosingMethodInfo_ = {
	"com.sun.jndi.toolkit.ctx.AtomicContext",
	"a_processJunction_nns",
	"(Lcom/sun/jndi/toolkit/ctx/Continuation;)V"
};

$InnerClassInfo _AtomicContext$2_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.ctx.AtomicContext$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.AtomicContext$2",
	"javax.naming.RefAddr",
	nullptr,
	_AtomicContext$2_FieldInfo_,
	_AtomicContext$2_MethodInfo_,
	nullptr,
	&_AtomicContext$2_EnclosingMethodInfo_,
	_AtomicContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.ctx.AtomicContext"
};

$Object* allocate$AtomicContext$2($Class* clazz) {
	return $of($alloc(AtomicContext$2));
}

void AtomicContext$2::init$($AtomicContext* this$0, $String* addrType) {
	$set(this, this$0, this$0);
	$RefAddr::init$(addrType);
}

$Object* AtomicContext$2::getContent() {
	return $of(this->this$0);
}

AtomicContext$2::AtomicContext$2() {
}

$Class* AtomicContext$2::load$($String* name, bool initialize) {
	$loadClass(AtomicContext$2, name, initialize, &_AtomicContext$2_ClassInfo_, allocate$AtomicContext$2);
	return class$;
}

$Class* AtomicContext$2::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com