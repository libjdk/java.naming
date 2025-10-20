#include <javax/naming/ldap/LdapName.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/ldap/LdapName$1.h>
#include <javax/naming/ldap/Rdn.h>
#include <javax/naming/ldap/Rfc2253Parser.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $LdapName$1 = ::javax::naming::ldap::LdapName$1;
using $Rdn = ::javax::naming::ldap::Rdn;
using $Rfc2253Parser = ::javax::naming::ldap::Rfc2253Parser;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _LdapName_FieldInfo_[] = {
	{"rdns", "Ljava/util/List;", "Ljava/util/List<Ljavax/naming/ldap/Rdn;>;", $PRIVATE | $TRANSIENT, $field(LdapName, rdns)},
	{"unparsed", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(LdapName, unparsed)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapName, serialVersionUID)},
	{}
};

$MethodInfo _LdapName_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LdapName::*)($String*)>(&LdapName::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/naming/ldap/Rdn;>;)V", $PUBLIC, $method(static_cast<void(LdapName::*)($List*)>(&LdapName::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/List;II)V", "(Ljava/lang/String;Ljava/util/List<Ljavax/naming/ldap/Rdn;>;II)V", $PRIVATE, $method(static_cast<void(LdapName::*)($String*,$List*,int32_t,int32_t)>(&LdapName::init$))},
	{"add", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"add", "(Ljavax/naming/ldap/Rdn;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"add", "(ILjava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"add", "(ILjavax/naming/ldap/Rdn;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"addAll", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(Ljava/util/List;)Ljavax/naming/Name;", "(Ljava/util/List<Ljavax/naming/ldap/Rdn;>;)Ljavax/naming/Name;", $PUBLIC},
	{"addAll", "(ILjavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(ILjava/util/List;)Ljavax/naming/Name;", "(ILjava/util/List<Ljavax/naming/ldap/Rdn;>;)Ljavax/naming/Name;", $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"doesListMatch", "(IILjava/util/List;)Z", "(IILjava/util/List<Ljavax/naming/ldap/Rdn;>;)Z", $PRIVATE, $method(static_cast<bool(LdapName::*)(int32_t,int32_t,$List*)>(&LdapName::doesListMatch))},
	{"endsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"endsWith", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljavax/naming/ldap/Rdn;>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getRdn", "(I)Ljavax/naming/ldap/Rdn;", nullptr, $PUBLIC},
	{"getRdns", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/naming/ldap/Rdn;>;", $PUBLIC},
	{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"matches", "(IILjavax/naming/Name;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LdapName::*)(int32_t,int32_t,$Name*)>(&LdapName::matches))},
	{"parse", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapName::*)()>(&LdapName::parse)), "javax.naming.InvalidNameException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapName::*)($ObjectInputStream*)>(&LdapName::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"startsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"startsWith", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljavax/naming/ldap/Rdn;>;)Z", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapName::*)($ObjectOutputStream*)>(&LdapName::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _LdapName_InnerClassesInfo_[] = {
	{"javax.naming.ldap.LdapName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LdapName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.LdapName",
	"java.lang.Object",
	"javax.naming.Name",
	_LdapName_FieldInfo_,
	_LdapName_MethodInfo_,
	nullptr,
	nullptr,
	_LdapName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.naming.ldap.LdapName$1"
};

$Object* allocate$LdapName($Class* clazz) {
	return $of($alloc(LdapName));
}

void LdapName::init$($String* name) {
	$set(this, unparsed, name);
	parse();
}

void LdapName::init$($List* rdns) {
	$useLocalCurrentObjectStackCache();
	$set(this, rdns, $new($ArrayList, $nc(rdns)->size()));
	for (int32_t i = 0; i < $nc(rdns)->size(); ++i) {
		$var($Object, obj, rdns->get(i));
		if (!($instanceOf($Rdn, obj))) {
			$throwNew($IllegalArgumentException, $$str({"Entry:"_s, obj, "  not a valid type;list entries must be of type Rdn"_s}));
		}
		$nc(this->rdns)->add($cast($Rdn, obj));
	}
}

void LdapName::init$($String* name, $List* rdns, int32_t beg, int32_t end) {
	$set(this, unparsed, name);
	$var($List, sList, $nc(rdns)->subList(beg, end));
	$set(this, rdns, $new($ArrayList, static_cast<$Collection*>(sList)));
}

int32_t LdapName::size() {
	return $nc(this->rdns)->size();
}

bool LdapName::isEmpty() {
	return $nc(this->rdns)->isEmpty();
}

$Enumeration* LdapName::getAll() {
	$var($Iterator, iter, $nc(this->rdns)->iterator());
	return $new($LdapName$1, this, iter);
}

$String* LdapName::get(int32_t posn) {
	return $nc(($cast($Rdn, $($nc(this->rdns)->get(posn)))))->toString();
}

$Rdn* LdapName::getRdn(int32_t posn) {
	return $cast($Rdn, $nc(this->rdns)->get(posn));
}

$Name* LdapName::getPrefix(int32_t posn) {
	$useLocalCurrentObjectStackCache();
	try {
		return $new(LdapName, nullptr, this->rdns, 0, posn);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($IndexOutOfBoundsException, $$str({"Posn: "_s, $$str(posn), ", Size: "_s, $$str($nc(this->rdns)->size())}));
	}
	$shouldNotReachHere();
}

$Name* LdapName::getSuffix(int32_t posn) {
	$useLocalCurrentObjectStackCache();
	try {
		return $new(LdapName, nullptr, this->rdns, posn, $nc(this->rdns)->size());
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($IndexOutOfBoundsException, $$str({"Posn: "_s, $$str(posn), ", Size: "_s, $$str($nc(this->rdns)->size())}));
	}
	$shouldNotReachHere();
}

bool LdapName::startsWith($Name* n) {
	if (n == nullptr) {
		return false;
	}
	int32_t len1 = $nc(this->rdns)->size();
	int32_t len2 = $nc(n)->size();
	return (len1 >= len2 && matches(0, len2, n));
}

bool LdapName::startsWith($List* rdns) {
	if (rdns == nullptr) {
		return false;
	}
	int32_t len1 = $nc(this->rdns)->size();
	int32_t len2 = $nc(rdns)->size();
	return (len1 >= len2 && doesListMatch(0, len2, rdns));
}

bool LdapName::endsWith($Name* n) {
	if (n == nullptr) {
		return false;
	}
	int32_t len1 = $nc(this->rdns)->size();
	int32_t len2 = $nc(n)->size();
	return (len1 >= len2 && matches(len1 - len2, len1, n));
}

bool LdapName::endsWith($List* rdns) {
	if (rdns == nullptr) {
		return false;
	}
	int32_t len1 = $nc(this->rdns)->size();
	int32_t len2 = $nc(rdns)->size();
	return (len1 >= len2 && doesListMatch(len1 - len2, len1, rdns));
}

bool LdapName::doesListMatch(int32_t beg, int32_t end, $List* rdns) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = beg; i < end; ++i) {
		if (!$nc(($cast($Rdn, $($nc(this->rdns)->get(i)))))->equals($($nc(rdns)->get(i - beg)))) {
			return false;
		}
	}
	return true;
}

bool LdapName::matches(int32_t beg, int32_t end, $Name* n) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(LdapName, n)) {
		$var(LdapName, ln, $cast(LdapName, n));
		return doesListMatch(beg, end, $nc(ln)->rdns);
	} else {
		for (int32_t i = beg; i < end; ++i) {
			$var($Rdn, rdn, nullptr);
			$var($String, rdnString, $nc(n)->get(i - beg));
			try {
				$assign(rdn, ($$new($Rfc2253Parser, rdnString))->parseRdn());
			} catch ($InvalidNameException&) {
				$var($InvalidNameException, e, $catch());
				return false;
			}
			if (!$nc(rdn)->equals($($nc(this->rdns)->get(i)))) {
				return false;
			}
		}
	}
	return true;
}

$Name* LdapName::addAll($Name* suffix) {
	return addAll(size(), suffix);
}

$Name* LdapName::addAll($List* suffixRdns) {
	return addAll(size(), suffixRdns);
}

$Name* LdapName::addAll(int32_t posn, $Name* suffix) {
	$useLocalCurrentObjectStackCache();
	$set(this, unparsed, nullptr);
	if ($instanceOf(LdapName, suffix)) {
		$var(LdapName, s, $cast(LdapName, suffix));
		$nc(this->rdns)->addAll(posn, $nc(s)->rdns);
	} else {
		$var($Enumeration, comps, $nc(suffix)->getAll());
		while ($nc(comps)->hasMoreElements()) {
			$nc(this->rdns)->add(posn++, ($($$new($Rfc2253Parser, $cast($String, $(comps->nextElement())))->parseRdn())));
		}
	}
	return this;
}

$Name* LdapName::addAll(int32_t posn, $List* suffixRdns) {
	$useLocalCurrentObjectStackCache();
	$set(this, unparsed, nullptr);
	for (int32_t i = 0; i < $nc(suffixRdns)->size(); ++i) {
		$var($Object, obj, suffixRdns->get(i));
		if (!($instanceOf($Rdn, obj))) {
			$throwNew($IllegalArgumentException, $$str({"Entry:"_s, obj, "  not a valid type;suffix list entries must be of type Rdn"_s}));
		}
		$nc(this->rdns)->add(i + posn, $cast($Rdn, obj));
	}
	return this;
}

$Name* LdapName::add($String* comp) {
	return add(size(), comp);
}

$Name* LdapName::add($Rdn* comp) {
	return add(size(), comp);
}

$Name* LdapName::add(int32_t posn, $String* comp) {
	$useLocalCurrentObjectStackCache();
	$var($Rdn, rdn, ($$new($Rfc2253Parser, comp))->parseRdn());
	$nc(this->rdns)->add(posn, rdn);
	$set(this, unparsed, nullptr);
	return this;
}

$Name* LdapName::add(int32_t posn, $Rdn* comp) {
	if (comp == nullptr) {
		$throwNew($NullPointerException, "Cannot set comp to null"_s);
	}
	$nc(this->rdns)->add(posn, comp);
	$set(this, unparsed, nullptr);
	return this;
}

$Object* LdapName::remove(int32_t posn) {
	$set(this, unparsed, nullptr);
	return $of($nc(($cast($Rdn, $($nc(this->rdns)->remove(posn)))))->toString());
}

$List* LdapName::getRdns() {
	return $Collections::unmodifiableList(this->rdns);
}

$Object* LdapName::clone() {
	return $of($new(LdapName, this->unparsed, this->rdns, 0, $nc(this->rdns)->size()));
}

$String* LdapName::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->unparsed != nullptr) {
		return this->unparsed;
	}
	$var($StringBuilder, builder, $new($StringBuilder));
	int32_t size = $nc(this->rdns)->size();
	if ((size - 1) >= 0) {
		builder->append($($nc(this->rdns)->get(size - 1)));
	}
	for (int32_t next = size - 2; next >= 0; --next) {
		builder->append(u',');
		builder->append($($nc(this->rdns)->get(next)));
	}
	$set(this, unparsed, builder->toString());
	return this->unparsed;
}

bool LdapName::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(LdapName, obj))) {
		return false;
	}
	$var(LdapName, that, $cast(LdapName, obj));
	int32_t var$0 = $nc(this->rdns)->size();
	if (var$0 != $nc($nc(that)->rdns)->size()) {
		return false;
	}
	if (this->unparsed != nullptr && $nc(this->unparsed)->equalsIgnoreCase($nc(that)->unparsed)) {
		return true;
	}
	for (int32_t i = 0; i < $nc(this->rdns)->size(); ++i) {
		$var($Rdn, rdn1, $cast($Rdn, $nc(this->rdns)->get(i)));
		$var($Rdn, rdn2, $cast($Rdn, $nc($nc(that)->rdns)->get(i)));
		if (!$nc(rdn1)->equals(rdn2)) {
			return false;
		}
	}
	return true;
}

int32_t LdapName::compareTo(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(LdapName, obj))) {
		$throwNew($ClassCastException, "The obj is not a LdapName"_s);
	}
	if ($equals(obj, this)) {
		return 0;
	}
	$var(LdapName, that, $cast(LdapName, obj));
	if (this->unparsed != nullptr && $nc(this->unparsed)->equalsIgnoreCase($nc(that)->unparsed)) {
		return 0;
	}
	int32_t var$0 = $nc(this->rdns)->size();
	int32_t minSize = $Math::min(var$0, $nc($nc(that)->rdns)->size());
	for (int32_t i = 0; i < minSize; ++i) {
		$var($Rdn, rdn1, $cast($Rdn, $nc(this->rdns)->get(i)));
		$var($Rdn, rdn2, $cast($Rdn, $nc($nc(that)->rdns)->get(i)));
		int32_t diff = $nc(rdn1)->compareTo(rdn2);
		if (diff != 0) {
			return diff;
		}
	}
	int32_t var$1 = $nc(this->rdns)->size();
	return (var$1 - $nc($nc(that)->rdns)->size());
}

int32_t LdapName::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->rdns)->size(); ++i) {
		$var($Rdn, rdn, $cast($Rdn, $nc(this->rdns)->get(i)));
		hash += $nc(rdn)->hashCode();
	}
	return hash;
}

void LdapName::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($(toString()));
}

void LdapName::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$set(this, unparsed, $cast($String, s->readObject()));
	try {
		parse();
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, e, $catch());
		$throwNew($StreamCorruptedException, $$str({"Invalid name: "_s, this->unparsed}));
	}
}

void LdapName::parse() {
	$set(this, rdns, $$new($Rfc2253Parser, this->unparsed)->parseDn());
}

LdapName::LdapName() {
}

$Class* LdapName::load$($String* name, bool initialize) {
	$loadClass(LdapName, name, initialize, &_LdapName_ClassInfo_, allocate$LdapName);
	return class$;
}

$Class* LdapName::class$ = nullptr;

		} // ldap
	} // naming
} // javax