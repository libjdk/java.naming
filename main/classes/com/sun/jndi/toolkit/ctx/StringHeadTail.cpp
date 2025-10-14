#include <com/sun/jndi/toolkit/ctx/StringHeadTail.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$FieldInfo _StringHeadTail_FieldInfo_[] = {
	{"status", "I", nullptr, $PRIVATE, $field(StringHeadTail, status)},
	{"head", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringHeadTail, head)},
	{"tail", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringHeadTail, tail)},
	{}
};

$MethodInfo _StringHeadTail_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringHeadTail::*)($String*,$String*)>(&StringHeadTail::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(StringHeadTail::*)($String*,$String*,int32_t)>(&StringHeadTail::init$))},
	{"getHead", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStatus", "()I", nullptr, $PUBLIC},
	{"getTail", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setStatus", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringHeadTail_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.ctx.StringHeadTail",
	"java.lang.Object",
	nullptr,
	_StringHeadTail_FieldInfo_,
	_StringHeadTail_MethodInfo_
};

$Object* allocate$StringHeadTail($Class* clazz) {
	return $of($alloc(StringHeadTail));
}

void StringHeadTail::init$($String* head, $String* tail) {
	StringHeadTail::init$(head, tail, 0);
}

void StringHeadTail::init$($String* head, $String* tail, int32_t status) {
	this->status = status;
	$set(this, head, head);
	$set(this, tail, tail);
}

void StringHeadTail::setStatus(int32_t status) {
	this->status = status;
}

$String* StringHeadTail::getHead() {
	return this->head;
}

$String* StringHeadTail::getTail() {
	return this->tail;
}

int32_t StringHeadTail::getStatus() {
	return this->status;
}

StringHeadTail::StringHeadTail() {
}

$Class* StringHeadTail::load$($String* name, bool initialize) {
	$loadClass(StringHeadTail, name, initialize, &_StringHeadTail_ClassInfo_, allocate$StringHeadTail);
	return class$;
}

$Class* StringHeadTail::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com