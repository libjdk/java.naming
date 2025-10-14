#include <javax/naming/spi/DirContextNamePair.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/DirContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $DirContext = ::javax::naming::directory::DirContext;

namespace javax {
	namespace naming {
		namespace spi {

$FieldInfo _DirContextNamePair_FieldInfo_[] = {
	{"ctx", "Ljavax/naming/directory/DirContext;", nullptr, 0, $field(DirContextNamePair, ctx)},
	{"name", "Ljavax/naming/Name;", nullptr, 0, $field(DirContextNamePair, name)},
	{}
};

$MethodInfo _DirContextNamePair_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/directory/DirContext;Ljavax/naming/Name;)V", nullptr, 0, $method(static_cast<void(DirContextNamePair::*)($DirContext*,$Name*)>(&DirContextNamePair::init$))},
	{"getDirContext", "()Ljavax/naming/directory/DirContext;", nullptr, 0},
	{"getName", "()Ljavax/naming/Name;", nullptr, 0},
	{}
};

$ClassInfo _DirContextNamePair_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.spi.DirContextNamePair",
	"java.lang.Object",
	nullptr,
	_DirContextNamePair_FieldInfo_,
	_DirContextNamePair_MethodInfo_
};

$Object* allocate$DirContextNamePair($Class* clazz) {
	return $of($alloc(DirContextNamePair));
}

void DirContextNamePair::init$($DirContext* ctx, $Name* name) {
	$set(this, ctx, ctx);
	$set(this, name, name);
}

$DirContext* DirContextNamePair::getDirContext() {
	return this->ctx;
}

$Name* DirContextNamePair::getName() {
	return this->name;
}

DirContextNamePair::DirContextNamePair() {
}

$Class* DirContextNamePair::load$($String* name, bool initialize) {
	$loadClass(DirContextNamePair, name, initialize, &_DirContextNamePair_ClassInfo_, allocate$DirContextNamePair);
	return class$;
}

$Class* DirContextNamePair::class$ = nullptr;

		} // spi
	} // naming
} // javax