#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>

#include <com/sun/jndi/toolkit/dir/HierarchicalName$1.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalNameParser.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/Properties.h>
#include <javax/naming/CompoundName.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

#undef ENGLISH

using $HierarchicalName$1 = ::com::sun::jndi::toolkit::dir::HierarchicalName$1;
using $HierarchicalNameParser = ::com::sun::jndi::toolkit::dir::HierarchicalNameParser;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $Properties = ::java::util::Properties;
using $CompoundName = ::javax::naming::CompoundName;
using $Name = ::javax::naming::Name;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _HierarchicalName_FieldInfo_[] = {
	{"hashValue", "I", nullptr, $PRIVATE, $field(HierarchicalName, hashValue)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HierarchicalName, serialVersionUID)},
	{}
};

$MethodInfo _HierarchicalName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HierarchicalName::*)()>(&HierarchicalName::init$))},
	{"<init>", "(Ljava/util/Enumeration;Ljava/util/Properties;)V", "(Ljava/util/Enumeration<Ljava/lang/String;>;Ljava/util/Properties;)V", 0, $method(static_cast<void(HierarchicalName::*)($Enumeration*,$Properties*)>(&HierarchicalName::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/Properties;)V", nullptr, 0, $method(static_cast<void(HierarchicalName::*)($String*,$Properties*)>(&HierarchicalName::init$)), "javax.naming.InvalidNameException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HierarchicalName_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.HierarchicalName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HierarchicalName_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.HierarchicalName",
	"javax.naming.CompoundName",
	nullptr,
	_HierarchicalName_FieldInfo_,
	_HierarchicalName_MethodInfo_,
	nullptr,
	nullptr,
	_HierarchicalName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.HierarchicalName$1"
};

$Object* allocate$HierarchicalName($Class* clazz) {
	return $of($alloc(HierarchicalName));
}

void HierarchicalName::init$() {
	$init($HierarchicalNameParser);
	$CompoundName::init$(static_cast<$Enumeration*>($$new($HierarchicalName$1)), $HierarchicalNameParser::mySyntax);
	this->hashValue = -1;
}

void HierarchicalName::init$($Enumeration* comps, $Properties* syntax) {
	$CompoundName::init$(comps, syntax);
	this->hashValue = -1;
}

void HierarchicalName::init$($String* n, $Properties* syntax) {
	$CompoundName::init$(n, syntax);
	this->hashValue = -1;
}

int32_t HierarchicalName::hashCode() {
	$useLocalCurrentObjectStackCache();
	if (this->hashValue == -1) {
		$init($Locale);
		$var($String, name, $nc($(toString()))->toUpperCase($Locale::ENGLISH));
		int32_t len = name->length();
		int32_t off = 0;
		$var($chars, val, $new($chars, len));
		name->getChars(0, len, val, 0);
		for (int32_t i = len; i > 0; --i) {
			this->hashValue = (this->hashValue * 37) + val->get(off++);
		}
	}
	return this->hashValue;
}

$Name* HierarchicalName::getPrefix(int32_t posn) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, comps, $nc($($CompoundName::getPrefix(posn)))->getAll());
	return ($new(HierarchicalName, comps, this->mySyntax));
}

$Name* HierarchicalName::getSuffix(int32_t posn) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, comps, $nc($($CompoundName::getSuffix(posn)))->getAll());
	return ($new(HierarchicalName, comps, this->mySyntax));
}

$Object* HierarchicalName::clone() {
	return $of(($new(HierarchicalName, $(getAll()), this->mySyntax)));
}

HierarchicalName::HierarchicalName() {
}

$Class* HierarchicalName::load$($String* name, bool initialize) {
	$loadClass(HierarchicalName, name, initialize, &_HierarchicalName_ClassInfo_, allocate$HierarchicalName);
	return class$;
}

$Class* HierarchicalName::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com