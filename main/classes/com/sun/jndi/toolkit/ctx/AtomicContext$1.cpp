#include <com/sun/jndi/toolkit/ctx/AtomicContext$1.h>

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

$FieldInfo _AtomicContext$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/ctx/AtomicContext;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicContext$1, this$0)},
	{"val$obj", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(AtomicContext$1, val$obj)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AtomicContext$1, serialVersionUID)},
	{}
};

$MethodInfo _AtomicContext$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/ctx/AtomicContext;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(AtomicContext$1::*)($AtomicContext*,$String*,Object$*)>(&AtomicContext$1::init$))},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AtomicContext$1_EnclosingMethodInfo_ = {
	"com.sun.jndi.toolkit.ctx.AtomicContext",
	"a_resolveIntermediate_nns",
	"(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;"
};

$InnerClassInfo _AtomicContext$1_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.ctx.AtomicContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.AtomicContext$1",
	"javax.naming.RefAddr",
	nullptr,
	_AtomicContext$1_FieldInfo_,
	_AtomicContext$1_MethodInfo_,
	nullptr,
	&_AtomicContext$1_EnclosingMethodInfo_,
	_AtomicContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.ctx.AtomicContext"
};

$Object* allocate$AtomicContext$1($Class* clazz) {
	return $of($alloc(AtomicContext$1));
}

void AtomicContext$1::init$($AtomicContext* this$0, $String* addrType, Object$* val$obj) {
	$set(this, this$0, this$0);
	$set(this, val$obj, val$obj);
	$RefAddr::init$(addrType);
}

$Object* AtomicContext$1::getContent() {
	return $of(this->val$obj);
}

AtomicContext$1::AtomicContext$1() {
}

$Class* AtomicContext$1::load$($String* name, bool initialize) {
	$loadClass(AtomicContext$1, name, initialize, &_AtomicContext$1_ClassInfo_, allocate$AtomicContext$1);
	return class$;
}

$Class* AtomicContext$1::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com