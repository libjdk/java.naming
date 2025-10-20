#include <javax/naming/CompositeName.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Properties.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameImpl.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Properties = ::java::util::Properties;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $NameImpl = ::javax::naming::NameImpl;

namespace javax {
	namespace naming {

$FieldInfo _CompositeName_FieldInfo_[] = {
	{"impl", "Ljavax/naming/NameImpl;", nullptr, $PRIVATE | $TRANSIENT, $field(CompositeName, impl)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompositeName, serialVersionUID)},
	{}
};

$MethodInfo _CompositeName_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljava/lang/String;>;)V", $PROTECTED, $method(static_cast<void(CompositeName::*)($Enumeration*)>(&CompositeName::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CompositeName::*)($String*)>(&CompositeName::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompositeName::*)()>(&CompositeName::init$))},
	{"add", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"add", "(ILjava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(ILjavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"endsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CompositeName::*)($ObjectInputStream*)>(&CompositeName::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"startsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CompositeName::*)($ObjectOutputStream*)>(&CompositeName::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _CompositeName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.CompositeName",
	"java.lang.Object",
	"javax.naming.Name",
	_CompositeName_FieldInfo_,
	_CompositeName_MethodInfo_
};

$Object* allocate$CompositeName($Class* clazz) {
	return $of($alloc(CompositeName));
}

void CompositeName::init$($Enumeration* comps) {
	$set(this, impl, $new($NameImpl, ($Properties*)nullptr, comps));
}

void CompositeName::init$($String* n) {
	$set(this, impl, $new($NameImpl, ($Properties*)nullptr, n));
}

void CompositeName::init$() {
	$set(this, impl, $new($NameImpl, nullptr));
}

$String* CompositeName::toString() {
	return $nc(this->impl)->toString();
}

bool CompositeName::equals(Object$* obj) {
	return (obj != nullptr && $instanceOf(CompositeName, obj) && $nc(this->impl)->equals($nc(($cast(CompositeName, obj)))->impl));
}

int32_t CompositeName::hashCode() {
	return $nc(this->impl)->hashCode();
}

int32_t CompositeName::compareTo(Object$* obj) {
	if (!($instanceOf(CompositeName, obj))) {
		$throwNew($ClassCastException, "Not a CompositeName"_s);
	}
	return $nc(this->impl)->compareTo($nc(($cast(CompositeName, obj)))->impl);
}

$Object* CompositeName::clone() {
	return $of(($new(CompositeName, $(getAll()))));
}

int32_t CompositeName::size() {
	return ($nc(this->impl)->size());
}

bool CompositeName::isEmpty() {
	return ($nc(this->impl)->isEmpty());
}

$Enumeration* CompositeName::getAll() {
	return ($nc(this->impl)->getAll());
}

$String* CompositeName::get(int32_t posn) {
	return ($nc(this->impl)->get(posn));
}

$Name* CompositeName::getPrefix(int32_t posn) {
	$var($Enumeration, comps, $nc(this->impl)->getPrefix(posn));
	return ($new(CompositeName, comps));
}

$Name* CompositeName::getSuffix(int32_t posn) {
	$var($Enumeration, comps, $nc(this->impl)->getSuffix(posn));
	return ($new(CompositeName, comps));
}

bool CompositeName::startsWith($Name* n) {
	if ($instanceOf(CompositeName, n)) {
		int32_t var$0 = $nc(n)->size();
		return ($nc(this->impl)->startsWith(var$0, $(n->getAll())));
	} else {
		return false;
	}
}

bool CompositeName::endsWith($Name* n) {
	if ($instanceOf(CompositeName, n)) {
		int32_t var$0 = $nc(n)->size();
		return ($nc(this->impl)->endsWith(var$0, $(n->getAll())));
	} else {
		return false;
	}
}

$Name* CompositeName::addAll($Name* suffix) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(CompositeName, suffix)) {
		$nc(this->impl)->addAll($($nc(suffix)->getAll()));
		return this;
	} else {
		$throwNew($InvalidNameException, $$str({"Not a composite name: "_s, $($nc($of(suffix))->toString())}));
	}
}

$Name* CompositeName::addAll(int32_t posn, $Name* n) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(CompositeName, n)) {
		$nc(this->impl)->addAll(posn, $($nc(n)->getAll()));
		return this;
	} else {
		$throwNew($InvalidNameException, $$str({"Not a composite name: "_s, $($nc($of(n))->toString())}));
	}
}

$Name* CompositeName::add($String* comp) {
	$nc(this->impl)->add(comp);
	return this;
}

$Name* CompositeName::add(int32_t posn, $String* comp) {
	$nc(this->impl)->add(posn, comp);
	return this;
}

$Object* CompositeName::remove(int32_t posn) {
	return $of($nc(this->impl)->remove(posn));
}

void CompositeName::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->writeInt(size());
	$var($Enumeration, comps, getAll());
	while ($nc(comps)->hasMoreElements()) {
		s->writeObject($(comps->nextElement()));
	}
}

void CompositeName::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$set(this, impl, $new($NameImpl, nullptr));
	int32_t n = $nc(s)->readInt();
	try {
		while (--n >= 0) {
			add($cast($String, $(s->readObject())));
		}
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, e, $catch());
		$throw($$new($StreamCorruptedException, "Invalid name"_s));
	}
}

CompositeName::CompositeName() {
}

$Class* CompositeName::load$($String* name, bool initialize) {
	$loadClass(CompositeName, name, initialize, &_CompositeName_ClassInfo_, allocate$CompositeName);
	return class$;
}

$Class* CompositeName::class$ = nullptr;

	} // naming
} // javax