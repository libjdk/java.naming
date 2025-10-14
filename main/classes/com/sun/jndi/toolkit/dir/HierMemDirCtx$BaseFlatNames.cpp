#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>

#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _HierMemDirCtx$BaseFlatNames_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $FINAL | $SYNTHETIC, $field(HierMemDirCtx$BaseFlatNames, this$0)},
	{"names", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/naming/Name;>;", 0, $field(HierMemDirCtx$BaseFlatNames, names)},
	{}
};

$MethodInfo _HierMemDirCtx$BaseFlatNames_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljavax/naming/Name;>;)V", 0, $method(static_cast<void(HierMemDirCtx$BaseFlatNames::*)($HierMemDirCtx*,$Enumeration*)>(&HierMemDirCtx$BaseFlatNames::init$))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL},
	{"hasMore", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "javax.naming.NamingException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"nextElement", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _HierMemDirCtx$BaseFlatNames_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "BaseFlatNames", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _HierMemDirCtx$BaseFlatNames_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames",
	"java.lang.Object",
	"javax.naming.NamingEnumeration",
	_HierMemDirCtx$BaseFlatNames_FieldInfo_,
	_HierMemDirCtx$BaseFlatNames_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/naming/NamingEnumeration<TT;>;",
	nullptr,
	_HierMemDirCtx$BaseFlatNames_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx"
};

$Object* allocate$HierMemDirCtx$BaseFlatNames($Class* clazz) {
	return $of($alloc(HierMemDirCtx$BaseFlatNames));
}

void HierMemDirCtx$BaseFlatNames::init$($HierMemDirCtx* this$0, $Enumeration* names) {
	$set(this, this$0, this$0);
	$set(this, names, names);
}

bool HierMemDirCtx$BaseFlatNames::hasMoreElements() {
	try {
		return hasMore();
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool HierMemDirCtx$BaseFlatNames::hasMore() {
	return $nc(this->names)->hasMoreElements();
}

$Object* HierMemDirCtx$BaseFlatNames::nextElement() {
	try {
		return $of(next());
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throwNew($NoSuchElementException, $(e->toString()));
	}
	$shouldNotReachHere();
}

void HierMemDirCtx$BaseFlatNames::close() {
	$set(this, names, nullptr);
}

HierMemDirCtx$BaseFlatNames::HierMemDirCtx$BaseFlatNames() {
}

$Class* HierMemDirCtx$BaseFlatNames::load$($String* name, bool initialize) {
	$loadClass(HierMemDirCtx$BaseFlatNames, name, initialize, &_HierMemDirCtx$BaseFlatNames_ClassInfo_, allocate$HierMemDirCtx$BaseFlatNames);
	return class$;
}

$Class* HierMemDirCtx$BaseFlatNames::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com