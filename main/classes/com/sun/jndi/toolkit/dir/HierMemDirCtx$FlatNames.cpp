#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatNames.h>

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
#include <java/util/Hashtable.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameClassPair.h>
#include <jcpp.h>

using $HierMemDirCtx = ::com::sun::jndi::toolkit::dir::HierMemDirCtx;
using $HierMemDirCtx$BaseFlatNames = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _HierMemDirCtx$FlatNames_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $FINAL | $SYNTHETIC, $field(HierMemDirCtx$FlatNames, this$0)},
	{}
};

$MethodInfo _HierMemDirCtx$FlatNames_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljavax/naming/Name;>;)V", 0, $method(static_cast<void(HierMemDirCtx$FlatNames::*)($HierMemDirCtx*,$Enumeration*)>(&HierMemDirCtx$FlatNames::init$))},
	{"next", "()Ljavax/naming/NameClassPair;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _HierMemDirCtx$FlatNames_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "FlatNames", $PRIVATE | $FINAL},
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "BaseFlatNames", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _HierMemDirCtx$FlatNames_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames",
	"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames",
	nullptr,
	_HierMemDirCtx$FlatNames_FieldInfo_,
	_HierMemDirCtx$FlatNames_MethodInfo_,
	"Lcom/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames<Ljavax/naming/NameClassPair;>;",
	nullptr,
	_HierMemDirCtx$FlatNames_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx"
};

$Object* allocate$HierMemDirCtx$FlatNames($Class* clazz) {
	return $of($alloc(HierMemDirCtx$FlatNames));
}

void HierMemDirCtx$FlatNames::init$($HierMemDirCtx* this$0, $Enumeration* names) {
	$set(this, this$0, this$0);
	$HierMemDirCtx$BaseFlatNames::init$(this$0, names);
}

$Object* HierMemDirCtx$FlatNames::next() {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, $cast($Name, $nc(this->names)->nextElement()));
	$var($String, className, $nc($of($($nc(this->this$0->bindings)->get(name))))->getClass()->getName());
	return $of($new($NameClassPair, $($nc($of(name))->toString()), className));
}

HierMemDirCtx$FlatNames::HierMemDirCtx$FlatNames() {
}

$Class* HierMemDirCtx$FlatNames::load$($String* name, bool initialize) {
	$loadClass(HierMemDirCtx$FlatNames, name, initialize, &_HierMemDirCtx$FlatNames_ClassInfo_, allocate$HierMemDirCtx$FlatNames);
	return class$;
}

$Class* HierMemDirCtx$FlatNames::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com