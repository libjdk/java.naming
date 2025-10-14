#include <javax/naming/spi/DirContextStringPair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/directory/DirContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirContext = ::javax::naming::directory::DirContext;

namespace javax {
	namespace naming {
		namespace spi {

$FieldInfo _DirContextStringPair_FieldInfo_[] = {
	{"ctx", "Ljavax/naming/directory/DirContext;", nullptr, 0, $field(DirContextStringPair, ctx)},
	{"str", "Ljava/lang/String;", nullptr, 0, $field(DirContextStringPair, str)},
	{}
};

$MethodInfo _DirContextStringPair_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DirContextStringPair::*)($DirContext*,$String*)>(&DirContextStringPair::init$))},
	{"getDirContext", "()Ljavax/naming/directory/DirContext;", nullptr, 0},
	{"getString", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _DirContextStringPair_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.spi.DirContextStringPair",
	"java.lang.Object",
	nullptr,
	_DirContextStringPair_FieldInfo_,
	_DirContextStringPair_MethodInfo_
};

$Object* allocate$DirContextStringPair($Class* clazz) {
	return $of($alloc(DirContextStringPair));
}

void DirContextStringPair::init$($DirContext* ctx, $String* str) {
	$set(this, ctx, ctx);
	$set(this, str, str);
}

$DirContext* DirContextStringPair::getDirContext() {
	return this->ctx;
}

$String* DirContextStringPair::getString() {
	return this->str;
}

DirContextStringPair::DirContextStringPair() {
}

$Class* DirContextStringPair::load$($String* name, bool initialize) {
	$loadClass(DirContextStringPair, name, initialize, &_DirContextStringPair_ClassInfo_, allocate$DirContextStringPair);
	return class$;
}

$Class* DirContextStringPair::class$ = nullptr;

		} // spi
	} // naming
} // javax