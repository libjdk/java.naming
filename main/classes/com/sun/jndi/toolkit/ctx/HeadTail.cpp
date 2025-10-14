#include <com/sun/jndi/toolkit/ctx/HeadTail.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$FieldInfo _HeadTail_FieldInfo_[] = {
	{"status", "I", nullptr, $PRIVATE, $field(HeadTail, status)},
	{"head", "Ljavax/naming/Name;", nullptr, $PRIVATE, $field(HeadTail, head)},
	{"tail", "Ljavax/naming/Name;", nullptr, $PRIVATE, $field(HeadTail, tail)},
	{}
};

$MethodInfo _HeadTail_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(HeadTail::*)($Name*,$Name*)>(&HeadTail::init$))},
	{"<init>", "(Ljavax/naming/Name;Ljavax/naming/Name;I)V", nullptr, $PUBLIC, $method(static_cast<void(HeadTail::*)($Name*,$Name*,int32_t)>(&HeadTail::init$))},
	{"getHead", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getStatus", "()I", nullptr, $PUBLIC},
	{"getTail", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"setStatus", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HeadTail_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.HeadTail",
	"java.lang.Object",
	nullptr,
	_HeadTail_FieldInfo_,
	_HeadTail_MethodInfo_
};

$Object* allocate$HeadTail($Class* clazz) {
	return $of($alloc(HeadTail));
}

void HeadTail::init$($Name* head, $Name* tail) {
	HeadTail::init$(head, tail, 0);
}

void HeadTail::init$($Name* head, $Name* tail, int32_t status) {
	this->status = status;
	$set(this, head, head);
	$set(this, tail, tail);
}

void HeadTail::setStatus(int32_t status) {
	this->status = status;
}

$Name* HeadTail::getHead() {
	return this->head;
}

$Name* HeadTail::getTail() {
	return this->tail;
}

int32_t HeadTail::getStatus() {
	return this->status;
}

HeadTail::HeadTail() {
}

$Class* HeadTail::load$($String* name, bool initialize) {
	$loadClass(HeadTail, name, initialize, &_HeadTail_ClassInfo_, allocate$HeadTail);
	return class$;
}

$Class* HeadTail::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com