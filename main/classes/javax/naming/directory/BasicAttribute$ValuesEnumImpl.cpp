#include <javax/naming/directory/BasicAttribute$ValuesEnumImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _BasicAttribute$ValuesEnumImpl_FieldInfo_[] = {
	{"this$0", "Ljavax/naming/directory/BasicAttribute;", nullptr, $FINAL | $SYNTHETIC, $field(BasicAttribute$ValuesEnumImpl, this$0)},
	{"list", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/lang/Object;>;", 0, $field(BasicAttribute$ValuesEnumImpl, list)},
	{}
};

$MethodInfo _BasicAttribute$ValuesEnumImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/directory/BasicAttribute;)V", nullptr, 0, $method(static_cast<void(BasicAttribute$ValuesEnumImpl::*)($BasicAttribute*)>(&BasicAttribute$ValuesEnumImpl::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"hasMore", "()Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicAttribute$ValuesEnumImpl_InnerClassesInfo_[] = {
	{"javax.naming.directory.BasicAttribute$ValuesEnumImpl", "javax.naming.directory.BasicAttribute", "ValuesEnumImpl", 0},
	{}
};

$ClassInfo _BasicAttribute$ValuesEnumImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.directory.BasicAttribute$ValuesEnumImpl",
	"java.lang.Object",
	"javax.naming.NamingEnumeration",
	_BasicAttribute$ValuesEnumImpl_FieldInfo_,
	_BasicAttribute$ValuesEnumImpl_MethodInfo_,
	"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljava/lang/Object;>;",
	nullptr,
	_BasicAttribute$ValuesEnumImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.naming.directory.BasicAttribute"
};

$Object* allocate$BasicAttribute$ValuesEnumImpl($Class* clazz) {
	return $of($alloc(BasicAttribute$ValuesEnumImpl));
}

void BasicAttribute$ValuesEnumImpl::init$($BasicAttribute* this$0) {
	$set(this, this$0, this$0);
	$set(this, list, $nc(this$0->values)->elements());
}

bool BasicAttribute$ValuesEnumImpl::hasMoreElements() {
	return $nc(this->list)->hasMoreElements();
}

$Object* BasicAttribute$ValuesEnumImpl::nextElement() {
	return $of(($nc(this->list)->nextElement()));
}

$Object* BasicAttribute$ValuesEnumImpl::next() {
	return $of($nc(this->list)->nextElement());
}

bool BasicAttribute$ValuesEnumImpl::hasMore() {
	return $nc(this->list)->hasMoreElements();
}

void BasicAttribute$ValuesEnumImpl::close() {
	$set(this, list, nullptr);
}

BasicAttribute$ValuesEnumImpl::BasicAttribute$ValuesEnumImpl() {
}

$Class* BasicAttribute$ValuesEnumImpl::load$($String* name, bool initialize) {
	$loadClass(BasicAttribute$ValuesEnumImpl, name, initialize, &_BasicAttribute$ValuesEnumImpl_ClassInfo_, allocate$BasicAttribute$ValuesEnumImpl);
	return class$;
}

$Class* BasicAttribute$ValuesEnumImpl::class$ = nullptr;

		} // directory
	} // naming
} // javax