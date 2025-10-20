#include <javax/naming/CompoundName.h>

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

$FieldInfo _CompoundName_FieldInfo_[] = {
	{"impl", "Ljavax/naming/NameImpl;", nullptr, $PRIVATE | $TRANSIENT, $field(CompoundName, impl)},
	{"mySyntax", "Ljava/util/Properties;", nullptr, $PROTECTED | $TRANSIENT, $field(CompoundName, mySyntax)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompoundName, serialVersionUID)},
	{}
};

$MethodInfo _CompoundName_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Enumeration;Ljava/util/Properties;)V", "(Ljava/util/Enumeration<Ljava/lang/String;>;Ljava/util/Properties;)V", $PROTECTED, $method(static_cast<void(CompoundName::*)($Enumeration*,$Properties*)>(&CompoundName::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(static_cast<void(CompoundName::*)($String*,$Properties*)>(&CompoundName::init$)), "javax.naming.InvalidNameException"},
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
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CompoundName::*)($ObjectInputStream*)>(&CompoundName::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"startsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CompoundName::*)($ObjectOutputStream*)>(&CompoundName::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _CompoundName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.CompoundName",
	"java.lang.Object",
	"javax.naming.Name",
	_CompoundName_FieldInfo_,
	_CompoundName_MethodInfo_
};

$Object* allocate$CompoundName($Class* clazz) {
	return $of($alloc(CompoundName));
}

void CompoundName::init$($Enumeration* comps, $Properties* syntax) {
	if (syntax == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mySyntax, syntax);
	$set(this, impl, $new($NameImpl, syntax, comps));
}

void CompoundName::init$($String* n, $Properties* syntax) {
	if (syntax == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mySyntax, syntax);
	$set(this, impl, $new($NameImpl, syntax, n));
}

$String* CompoundName::toString() {
	return ($nc(this->impl)->toString());
}

bool CompoundName::equals(Object$* obj) {
	return (obj != nullptr && $instanceOf(CompoundName, obj) && $nc(this->impl)->equals($nc(($cast(CompoundName, obj)))->impl));
}

int32_t CompoundName::hashCode() {
	return $nc(this->impl)->hashCode();
}

$Object* CompoundName::clone() {
	return $of(($new(CompoundName, $(getAll()), this->mySyntax)));
}

int32_t CompoundName::compareTo(Object$* obj) {
	if (!($instanceOf(CompoundName, obj))) {
		$throwNew($ClassCastException, "Not a CompoundName"_s);
	}
	return $nc(this->impl)->compareTo($nc(($cast(CompoundName, obj)))->impl);
}

int32_t CompoundName::size() {
	return ($nc(this->impl)->size());
}

bool CompoundName::isEmpty() {
	return ($nc(this->impl)->isEmpty());
}

$Enumeration* CompoundName::getAll() {
	return ($nc(this->impl)->getAll());
}

$String* CompoundName::get(int32_t posn) {
	return ($nc(this->impl)->get(posn));
}

$Name* CompoundName::getPrefix(int32_t posn) {
	$var($Enumeration, comps, $nc(this->impl)->getPrefix(posn));
	return ($new(CompoundName, comps, this->mySyntax));
}

$Name* CompoundName::getSuffix(int32_t posn) {
	$var($Enumeration, comps, $nc(this->impl)->getSuffix(posn));
	return ($new(CompoundName, comps, this->mySyntax));
}

bool CompoundName::startsWith($Name* n) {
	if ($instanceOf(CompoundName, n)) {
		int32_t var$0 = $nc(n)->size();
		return ($nc(this->impl)->startsWith(var$0, $(n->getAll())));
	} else {
		return false;
	}
}

bool CompoundName::endsWith($Name* n) {
	if ($instanceOf(CompoundName, n)) {
		int32_t var$0 = $nc(n)->size();
		return ($nc(this->impl)->endsWith(var$0, $(n->getAll())));
	} else {
		return false;
	}
}

$Name* CompoundName::addAll($Name* suffix) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(CompoundName, suffix)) {
		$nc(this->impl)->addAll($($nc(suffix)->getAll()));
		return this;
	} else {
		$throwNew($InvalidNameException, $$str({"Not a compound name: "_s, $($nc($of(suffix))->toString())}));
	}
}

$Name* CompoundName::addAll(int32_t posn, $Name* n) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(CompoundName, n)) {
		$nc(this->impl)->addAll(posn, $($nc(n)->getAll()));
		return this;
	} else {
		$throwNew($InvalidNameException, $$str({"Not a compound name: "_s, $($nc($of(n))->toString())}));
	}
}

$Name* CompoundName::add($String* comp) {
	$nc(this->impl)->add(comp);
	return this;
}

$Name* CompoundName::add(int32_t posn, $String* comp) {
	$nc(this->impl)->add(posn, comp);
	return this;
}

$Object* CompoundName::remove(int32_t posn) {
	return $of($nc(this->impl)->remove(posn));
}

void CompoundName::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->writeObject(this->mySyntax);
	s->writeInt(size());
	$var($Enumeration, comps, getAll());
	while ($nc(comps)->hasMoreElements()) {
		s->writeObject($(comps->nextElement()));
	}
}

void CompoundName::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$set(this, mySyntax, $cast($Properties, $nc(s)->readObject()));
	$set(this, impl, $new($NameImpl, this->mySyntax));
	int32_t n = s->readInt();
	try {
		while (--n >= 0) {
			add($cast($String, $(s->readObject())));
		}
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, e, $catch());
		$throw($$new($StreamCorruptedException, "Invalid name"_s));
	}
}

CompoundName::CompoundName() {
}

$Class* CompoundName::load$($String* name, bool initialize) {
	$loadClass(CompoundName, name, initialize, &_CompoundName_ClassInfo_, allocate$CompoundName);
	return class$;
}

$Class* CompoundName::class$ = nullptr;

	} // naming
} // javax