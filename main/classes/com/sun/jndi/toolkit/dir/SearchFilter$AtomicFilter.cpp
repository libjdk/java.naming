#include <com/sun/jndi/toolkit/dir/SearchFilter$AtomicFilter.h>

#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/InvalidSearchFilterException.h>
#include <jcpp.h>

#undef ENGLISH

using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $SearchFilter$StringFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $StringTokenizer = ::java::util::StringTokenizer;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $OperationNotSupportedException = ::javax::naming::OperationNotSupportedException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $InvalidSearchFilterException = ::javax::naming::directory::InvalidSearchFilterException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _SearchFilter$AtomicFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/dir/SearchFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SearchFilter$AtomicFilter, this$0)},
	{"attrID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SearchFilter$AtomicFilter, attrID)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SearchFilter$AtomicFilter, value)},
	{"matchType", "I", nullptr, $PRIVATE, $field(SearchFilter$AtomicFilter, matchType)},
	{}
};

$MethodInfo _SearchFilter$AtomicFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/SearchFilter;)V", nullptr, 0, $method(static_cast<void(SearchFilter$AtomicFilter::*)($SearchFilter*)>(&SearchFilter$AtomicFilter::init$))},
	{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC},
	{"parse", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.directory.InvalidSearchFilterException"},
	{"substringMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(SearchFilter$AtomicFilter::*)($String*,$String*)>(&SearchFilter$AtomicFilter::substringMatch))},
	{}
};

$InnerClassInfo _SearchFilter$AtomicFilter_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.SearchFilter$AtomicFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "AtomicFilter", $FINAL},
	{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SearchFilter$AtomicFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.SearchFilter$AtomicFilter",
	"java.lang.Object",
	"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter",
	_SearchFilter$AtomicFilter_FieldInfo_,
	_SearchFilter$AtomicFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SearchFilter$AtomicFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.SearchFilter"
};

$Object* allocate$SearchFilter$AtomicFilter($Class* clazz) {
	return $of($alloc(SearchFilter$AtomicFilter));
}

void SearchFilter$AtomicFilter::init$($SearchFilter* this$0) {
	$set(this, this$0, this$0);
}

void SearchFilter$AtomicFilter::parse() {
	this->this$0->skipWhiteSpace();
	try {
		int32_t endPos = this->this$0->relIndexOf(u')');
		int32_t i = this->this$0->relIndexOf(u'=');
		int32_t qualifier = this->this$0->relCharAt(i - 1);
		switch (qualifier) {
		case u'~':
			{
				this->matchType = 2;
				$set(this, attrID, this->this$0->relSubstring(0, i - 1));
				$set(this, value, this->this$0->relSubstring(i + 1, endPos));
				break;
			}
		case u'>':
			{
				this->matchType = 3;
				$set(this, attrID, this->this$0->relSubstring(0, i - 1));
				$set(this, value, this->this$0->relSubstring(i + 1, endPos));
				break;
			}
		case u'<':
			{
				this->matchType = 4;
				$set(this, attrID, this->this$0->relSubstring(0, i - 1));
				$set(this, value, this->this$0->relSubstring(i + 1, endPos));
				break;
			}
		case u':':
			{
				$throwNew($OperationNotSupportedException, "Extensible match not supported"_s);
			}
		default:
			{
				this->matchType = 1;
				$set(this, attrID, this->this$0->relSubstring(0, i));
				$set(this, value, this->this$0->relSubstring(i + 1, endPos));
				break;
			}
		}
		$set(this, attrID, $nc(this->attrID)->trim());
		$set(this, value, $nc(this->value)->trim());
		this->this$0->consumeChars(endPos);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($InvalidSearchFilterException, sfe, $new($InvalidSearchFilterException, $$str({"Unable to parse character "_s, $$str(this->this$0->pos), " in \""_s, this->this$0->filter, "\""_s})));
		sfe->setRootCause(e);
		$throw(sfe);
	}
}

bool SearchFilter$AtomicFilter::check($Attributes* targetAttrs) {
	$var($Enumeration, candidates, nullptr);
	try {
		$var($Attribute, attr, $nc(targetAttrs)->get(this->attrID));
		if (attr == nullptr) {
			return false;
		}
		$assign(candidates, $nc(attr)->getAll());
	} catch ($NamingException&) {
		$var($NamingException, ne, $catch());
		return false;
	}
	while ($nc(candidates)->hasMoreElements()) {
		$var($String, val, $nc($of($(candidates->nextElement())))->toString());
		switch (this->matchType) {
		case 2:
			{}
		case 1:
			{
				if (substringMatch(this->value, val)) {
					return true;
				}
				break;
			}
		case 3:
			{
				if ($nc(val)->compareTo(this->value) >= 0) {
					return true;
				}
				break;
			}
		case 4:
			{
				if ($nc(val)->compareTo(this->value) <= 0) {
					return true;
				}
				break;
			}
		default:
			{
			}
		}
	}
	return false;
}

bool SearchFilter$AtomicFilter::substringMatch($String* proto, $String* value) {
	if ($nc(proto)->equals($($Character::toString(u'*')))) {
		return true;
	}
	if ($nc(proto)->indexOf((int32_t)u'*') == -1) {
		return proto->equalsIgnoreCase(value);
	}
	int32_t currentPos = 0;
	$var($StringTokenizer, subStrs, $new($StringTokenizer, proto, "*"_s, false));
	bool var$0 = $nc(proto)->charAt(0) != u'*';
	$init($Locale);
	if (var$0 && !$($nc(value)->toLowerCase($Locale::ENGLISH))->startsWith($($nc($(subStrs->nextToken()))->toLowerCase($Locale::ENGLISH)))) {
		return false;
	}
	while (subStrs->hasMoreTokens()) {
		$var($String, currentStr, subStrs->nextToken());
		currentPos = $($nc(value)->toLowerCase($Locale::ENGLISH))->indexOf($($nc(currentStr)->toLowerCase($Locale::ENGLISH)), currentPos);
		if (currentPos == -1) {
			return false;
		}
		currentPos += $nc(currentStr)->length();
	}
	bool var$1 = $nc(proto)->charAt(proto->length() - 1) != u'*';
	if (var$1 && currentPos != $nc(value)->length()) {
		return false;
	}
	return true;
}

SearchFilter$AtomicFilter::SearchFilter$AtomicFilter() {
}

$Class* SearchFilter$AtomicFilter::load$($String* name, bool initialize) {
	$loadClass(SearchFilter$AtomicFilter, name, initialize, &_SearchFilter$AtomicFilter_ClassInfo_, allocate$SearchFilter$AtomicFilter);
	return class$;
}

$Class* SearchFilter$AtomicFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com