#include <javax/naming/NameImplEnumerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;

namespace javax {
	namespace naming {

$FieldInfo _NameImplEnumerator_FieldInfo_[] = {
	{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", 0, $field(NameImplEnumerator, vector)},
	{"count", "I", nullptr, 0, $field(NameImplEnumerator, count)},
	{"limit", "I", nullptr, 0, $field(NameImplEnumerator, limit)},
	{}
};

$MethodInfo _NameImplEnumerator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Vector;II)V", "(Ljava/util/Vector<Ljava/lang/String;>;II)V", 0, $method(static_cast<void(NameImplEnumerator::*)($Vector*,int32_t,int32_t)>(&NameImplEnumerator::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameImplEnumerator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.naming.NameImplEnumerator",
	"java.lang.Object",
	"java.util.Enumeration",
	_NameImplEnumerator_FieldInfo_,
	_NameImplEnumerator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;"
};

$Object* allocate$NameImplEnumerator($Class* clazz) {
	return $of($alloc(NameImplEnumerator));
}

void NameImplEnumerator::init$($Vector* v, int32_t start, int32_t lim) {
	$set(this, vector, v);
	this->count = start;
	this->limit = lim;
}

bool NameImplEnumerator::hasMoreElements() {
	return this->count < this->limit;
}

$Object* NameImplEnumerator::nextElement() {
	if (this->count < this->limit) {
		return $of($cast($String, $nc(this->vector)->elementAt(this->count++)));
	}
	$throwNew($NoSuchElementException, "NameImplEnumerator"_s);
}

NameImplEnumerator::NameImplEnumerator() {
}

$Class* NameImplEnumerator::load$($String* name, bool initialize) {
	$loadClass(NameImplEnumerator, name, initialize, &_NameImplEnumerator_ClassInfo_, allocate$NameImplEnumerator);
	return class$;
}

$Class* NameImplEnumerator::class$ = nullptr;

	} // naming
} // javax