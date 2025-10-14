#include <com/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo.h>

#include <com/sun/naming/internal/ObjectFactoriesFilter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectFactoriesFilter = ::com::sun::naming::internal::ObjectFactoriesFilter;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {
$CompoundAttribute _ObjectFactoriesFilter$FactoryInfo_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};


$MethodInfo _ObjectFactoriesFilter$FactoryInfo_MethodInfo_[] = {
	{"arrayLength", "()J", nullptr, $PUBLIC},
	{"depth", "()J", nullptr, $PUBLIC},
	{"references", "()J", nullptr, $PUBLIC},
	{"streamBytes", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ObjectFactoriesFilter$FactoryInfo_InnerClassesInfo_[] = {
	{"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo", "com.sun.naming.internal.ObjectFactoriesFilter", "FactoryInfo", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ObjectFactoriesFilter$FactoryInfo_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo",
	nullptr,
	"java.io.ObjectInputFilter$FilterInfo",
	nullptr,
	_ObjectFactoriesFilter$FactoryInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectFactoriesFilter$FactoryInfo_InnerClassesInfo_,
	_ObjectFactoriesFilter$FactoryInfo_Annotations_,
	nullptr,
	nullptr,
	"com.sun.naming.internal.ObjectFactoriesFilter"
};

$Object* allocate$ObjectFactoriesFilter$FactoryInfo($Class* clazz) {
	return $of($alloc(ObjectFactoriesFilter$FactoryInfo));
}

int64_t ObjectFactoriesFilter$FactoryInfo::arrayLength() {
	return -1;
}

int64_t ObjectFactoriesFilter$FactoryInfo::depth() {
	return 1;
}

int64_t ObjectFactoriesFilter$FactoryInfo::references() {
	return 0;
}

int64_t ObjectFactoriesFilter$FactoryInfo::streamBytes() {
	return 0;
}

$Class* ObjectFactoriesFilter$FactoryInfo::load$($String* name, bool initialize) {
	$loadClass(ObjectFactoriesFilter$FactoryInfo, name, initialize, &_ObjectFactoriesFilter$FactoryInfo_ClassInfo_, allocate$ObjectFactoriesFilter$FactoryInfo);
	return class$;
}

$Class* ObjectFactoriesFilter$FactoryInfo::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com