#include <com/sun/naming/internal/ObjectFactoriesFilter.h>

#include <com/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/SecurityProperties.h>
#include <jcpp.h>

#undef DEFAULT_SP_VALUE
#undef FACTORIES_FILTER_PROPNAME
#undef GLOBAL
#undef REJECTED

using $ObjectFactoriesFilter$FactoryInfo = ::com::sun::naming::internal::ObjectFactoriesFilter$FactoryInfo;
using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SecurityProperties = ::sun::security::util::SecurityProperties;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0 : public $ObjectFactoriesFilter$FactoryInfo {
	$class(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, $NO_CLASS_INIT, $ObjectFactoriesFilter$FactoryInfo)
public:
	void init$($Class* factoryClass) {
		this->factoryClass = factoryClass;
	}
	virtual $Class* serialClass() override {
		 return ObjectFactoriesFilter::lambda$canInstantiateObjectsFactory$0(factoryClass);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0>());
	}
	$Class* factoryClass = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::fieldInfos[2] = {
	{"factoryClass", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, factoryClass)},
	{}
};
$MethodInfo ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::*)($Class*)>(&ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::init$))},
	{"serialClass", "()Ljava/lang/Class;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0",
	"java.lang.Object",
	"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo",
	fieldInfos,
	methodInfos
};
$Class* ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::load$($String* name, bool initialize) {
	$loadClass(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::class$ = nullptr;

$FieldInfo _ObjectFactoriesFilter_FieldInfo_[] = {
	{"FACTORIES_FILTER_PROPNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactoriesFilter, FACTORIES_FILTER_PROPNAME)},
	{"DEFAULT_SP_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactoriesFilter, DEFAULT_SP_VALUE)},
	{"GLOBAL", "Ljava/io/ObjectInputFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ObjectFactoriesFilter, GLOBAL)},
	{}
};

$MethodInfo _ObjectFactoriesFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ObjectFactoriesFilter::*)()>(&ObjectFactoriesFilter::init$))},
	{"canInstantiateObjectsFactory", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Class*)>(&ObjectFactoriesFilter::canInstantiateObjectsFactory))},
	{"checkInput", "(Lcom/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ObjectFactoriesFilter$FactoryInfo*)>(&ObjectFactoriesFilter::checkInput))},
	{"getFilterPropertyValue", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&ObjectFactoriesFilter::getFilterPropertyValue))},
	{"lambda$canInstantiateObjectsFactory$0", "(Ljava/lang/Class;)Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Class*(*)($Class*)>(&ObjectFactoriesFilter::lambda$canInstantiateObjectsFactory$0))},
	{}
};

$InnerClassInfo _ObjectFactoriesFilter_InnerClassesInfo_[] = {
	{"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo", "com.sun.naming.internal.ObjectFactoriesFilter", "FactoryInfo", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ObjectFactoriesFilter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.naming.internal.ObjectFactoriesFilter",
	"java.lang.Object",
	nullptr,
	_ObjectFactoriesFilter_FieldInfo_,
	_ObjectFactoriesFilter_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectFactoriesFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo"
};

$Object* allocate$ObjectFactoriesFilter($Class* clazz) {
	return $of($alloc(ObjectFactoriesFilter));
}

$String* ObjectFactoriesFilter::FACTORIES_FILTER_PROPNAME = nullptr;
$String* ObjectFactoriesFilter::DEFAULT_SP_VALUE = nullptr;
$ObjectInputFilter* ObjectFactoriesFilter::GLOBAL = nullptr;

bool ObjectFactoriesFilter::canInstantiateObjectsFactory($Class* factoryClass) {
	$init(ObjectFactoriesFilter);
	return checkInput(static_cast<$ObjectFactoriesFilter$FactoryInfo*>($$new(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0, factoryClass)));
}

bool ObjectFactoriesFilter::checkInput($ObjectFactoriesFilter$FactoryInfo* factoryInfo) {
	$init(ObjectFactoriesFilter);
	$ObjectInputFilter$Status* result = $nc(ObjectFactoriesFilter::GLOBAL)->checkInput(factoryInfo);
	$init($ObjectInputFilter$Status);
	return result != $ObjectInputFilter$Status::REJECTED;
}

void ObjectFactoriesFilter::init$() {
	$throwNew($InternalError, "Not instantiable"_s);
}

$String* ObjectFactoriesFilter::getFilterPropertyValue() {
	$init(ObjectFactoriesFilter);
	$var($String, propVal, $SecurityProperties::privilegedGetOverridable(ObjectFactoriesFilter::FACTORIES_FILTER_PROPNAME));
	return propVal != nullptr ? propVal : ObjectFactoriesFilter::DEFAULT_SP_VALUE;
}

$Class* ObjectFactoriesFilter::lambda$canInstantiateObjectsFactory$0($Class* factoryClass) {
	$init(ObjectFactoriesFilter);
	return factoryClass;
}

void clinit$ObjectFactoriesFilter($Class* class$) {
	$assignStatic(ObjectFactoriesFilter::FACTORIES_FILTER_PROPNAME, "jdk.jndi.object.factoriesFilter"_s);
	$assignStatic(ObjectFactoriesFilter::DEFAULT_SP_VALUE, "*"_s);
	$assignStatic(ObjectFactoriesFilter::GLOBAL, $ObjectInputFilter$Config::createFilter($(ObjectFactoriesFilter::getFilterPropertyValue())));
}

ObjectFactoriesFilter::ObjectFactoriesFilter() {
}

$Class* ObjectFactoriesFilter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::classInfo$.name)) {
			return ObjectFactoriesFilter$$Lambda$lambda$canInstantiateObjectsFactory$0::load$(name, initialize);
		}
	}
	$loadClass(ObjectFactoriesFilter, name, initialize, &_ObjectFactoriesFilter_ClassInfo_, clinit$ObjectFactoriesFilter, allocate$ObjectFactoriesFilter);
	return class$;
}

$Class* ObjectFactoriesFilter::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com