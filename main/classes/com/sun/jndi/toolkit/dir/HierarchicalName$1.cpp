#include <com/sun/jndi/toolkit/dir/HierarchicalName$1.h>

#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $HierarchicalName = ::com::sun::jndi::toolkit::dir::HierarchicalName;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$MethodInfo _HierarchicalName$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HierarchicalName$1::*)()>(&HierarchicalName$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HierarchicalName$1_EnclosingMethodInfo_ = {
	"com.sun.jndi.toolkit.dir.HierarchicalName",
	"<init>",
	"()V"
};

$InnerClassInfo _HierarchicalName$1_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.HierarchicalName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HierarchicalName$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.toolkit.dir.HierarchicalName$1",
	"java.lang.Object",
	"java.util.Enumeration",
	nullptr,
	_HierarchicalName$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	&_HierarchicalName$1_EnclosingMethodInfo_,
	_HierarchicalName$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.HierarchicalName"
};

$Object* allocate$HierarchicalName$1($Class* clazz) {
	return $of($alloc(HierarchicalName$1));
}

void HierarchicalName$1::init$() {
}

bool HierarchicalName$1::hasMoreElements() {
	return false;
}

$Object* HierarchicalName$1::nextElement() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

HierarchicalName$1::HierarchicalName$1() {
}

$Class* HierarchicalName$1::load$($String* name, bool initialize) {
	$loadClass(HierarchicalName$1, name, initialize, &_HierarchicalName$1_ClassInfo_, allocate$HierarchicalName$1);
	return class$;
}

$Class* HierarchicalName$1::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com