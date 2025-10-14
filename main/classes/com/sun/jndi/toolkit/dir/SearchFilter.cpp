#include <com/sun/jndi/toolkit/dir/SearchFilter.h>

#include <com/sun/jndi/toolkit/dir/SearchFilter$AtomicFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$CompoundFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$NotFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HexFormat.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/InvalidSearchFilterException.h>
#include <jcpp.h>

#undef AND_TOKEN
#undef APPROX_MATCH
#undef APPROX_TOKEN
#undef BEGIN_FILTER_TOKEN
#undef END_FILTER_TOKEN
#undef EQUAL_MATCH
#undef EQUAL_TOKEN
#undef EXTEND_TOKEN
#undef GREATER_MATCH
#undef GREATER_TOKEN
#undef LESS_MATCH
#undef LESS_TOKEN
#undef NOT_TOKEN
#undef OR_TOKEN
#undef WILDCARD_TOKEN

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $SearchFilter$AtomicFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$AtomicFilter;
using $SearchFilter$CompoundFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$CompoundFilter;
using $SearchFilter$NotFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$NotFilter;
using $SearchFilter$StringFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $HexFormat = ::java::util::HexFormat;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $InvalidSearchFilterException = ::javax::naming::directory::InvalidSearchFilterException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _SearchFilter_FieldInfo_[] = {
	{"filter", "Ljava/lang/String;", nullptr, 0, $field(SearchFilter, filter)},
	{"pos", "I", nullptr, 0, $field(SearchFilter, pos)},
	{"rootFilter", "Lcom/sun/jndi/toolkit/dir/SearchFilter$StringFilter;", nullptr, $PRIVATE, $field(SearchFilter, rootFilter)},
	{"debug", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, debug)},
	{"BEGIN_FILTER_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, BEGIN_FILTER_TOKEN)},
	{"END_FILTER_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, END_FILTER_TOKEN)},
	{"AND_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, AND_TOKEN)},
	{"OR_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, OR_TOKEN)},
	{"NOT_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, NOT_TOKEN)},
	{"EQUAL_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, EQUAL_TOKEN)},
	{"APPROX_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, APPROX_TOKEN)},
	{"LESS_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, LESS_TOKEN)},
	{"GREATER_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, GREATER_TOKEN)},
	{"EXTEND_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, EXTEND_TOKEN)},
	{"WILDCARD_TOKEN", "C", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SearchFilter, WILDCARD_TOKEN)},
	{"EQUAL_MATCH", "I", nullptr, $STATIC | $FINAL, $constField(SearchFilter, EQUAL_MATCH)},
	{"APPROX_MATCH", "I", nullptr, $STATIC | $FINAL, $constField(SearchFilter, APPROX_MATCH)},
	{"GREATER_MATCH", "I", nullptr, $STATIC | $FINAL, $constField(SearchFilter, GREATER_MATCH)},
	{"LESS_MATCH", "I", nullptr, $STATIC | $FINAL, $constField(SearchFilter, LESS_MATCH)},
	{}
};

$MethodInfo _SearchFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SearchFilter::*)($String*)>(&SearchFilter::init$)), "javax.naming.directory.InvalidSearchFilterException"},
	{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"consumeChar", "()V", nullptr, $PROTECTED},
	{"consumeChars", "(I)V", nullptr, $PROTECTED},
	{"createNextFilter", "()Lcom/sun/jndi/toolkit/dir/SearchFilter$StringFilter;", nullptr, $PROTECTED, nullptr, "javax.naming.directory.InvalidSearchFilterException"},
	{"findUnescaped", "(CLjava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t,$String*,int32_t)>(&SearchFilter::findUnescaped))},
	{"format", "(Ljavax/naming/directory/Attributes;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Attributes*)>(&SearchFilter::format)), "javax.naming.NamingException"},
	{"format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&SearchFilter::format)), "javax.naming.NamingException"},
	{"getCurrentChar", "()C", nullptr, $PROTECTED},
	{"getEncodedStringRep", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&SearchFilter::getEncodedStringRep)), "javax.naming.NamingException"},
	{"normalizeFilter", "()V", nullptr, $PROTECTED},
	{"relCharAt", "(I)C", nullptr, $PROTECTED},
	{"relIndexOf", "(I)I", nullptr, $PROTECTED},
	{"relSubstring", "(II)Ljava/lang/String;", nullptr, $PROTECTED},
	{"selectAttributes", "(Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Attributes*(*)($Attributes*,$StringArray*)>(&SearchFilter::selectAttributes)), "javax.naming.NamingException"},
	{"skipWhiteSpace", "()V", nullptr, $PRIVATE, $method(static_cast<void(SearchFilter::*)()>(&SearchFilter::skipWhiteSpace))},
	{}
};

$InnerClassInfo _SearchFilter_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.SearchFilter$AtomicFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "AtomicFilter", $FINAL},
	{"com.sun.jndi.toolkit.dir.SearchFilter$NotFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "NotFilter", $FINAL},
	{"com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "CompoundFilter", $FINAL},
	{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SearchFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.SearchFilter",
	"java.lang.Object",
	"com.sun.jndi.toolkit.dir.AttrFilter",
	_SearchFilter_FieldInfo_,
	_SearchFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SearchFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.SearchFilter$AtomicFilter,com.sun.jndi.toolkit.dir.SearchFilter$NotFilter,com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter,com.sun.jndi.toolkit.dir.SearchFilter$StringFilter"
};

$Object* allocate$SearchFilter($Class* clazz) {
	return $of($alloc(SearchFilter));
}

void SearchFilter::init$($String* filter) {
	$set(this, filter, filter);
	this->pos = 0;
	normalizeFilter();
	$set(this, rootFilter, this->createNextFilter());
}

bool SearchFilter::check($Attributes* targetAttrs) {
	if (targetAttrs == nullptr) {
		return false;
	}
	return $nc(this->rootFilter)->check(targetAttrs);
}

void SearchFilter::normalizeFilter() {
	skipWhiteSpace();
	if (getCurrentChar() != SearchFilter::BEGIN_FILTER_TOKEN) {
		$set(this, filter, $str({$$str(SearchFilter::BEGIN_FILTER_TOKEN), this->filter, $$str(SearchFilter::END_FILTER_TOKEN)}));
	}
}

void SearchFilter::skipWhiteSpace() {
	while ($Character::isWhitespace(getCurrentChar())) {
		consumeChar();
	}
}

$SearchFilter$StringFilter* SearchFilter::createNextFilter() {
	$var($SearchFilter$StringFilter, filter, nullptr);
	skipWhiteSpace();
	try {
		if (getCurrentChar() != SearchFilter::BEGIN_FILTER_TOKEN) {
			$throwNew($InvalidSearchFilterException, $$str({"expected \""_s, $$str(SearchFilter::BEGIN_FILTER_TOKEN), "\" at position "_s, $$str(this->pos)}));
		}
		this->consumeChar();
		skipWhiteSpace();
		switch (getCurrentChar()) {
		case SearchFilter::AND_TOKEN:
			{
				$assign(filter, $new($SearchFilter$CompoundFilter, this, true));
				$nc(filter)->parse();
				break;
			}
		case SearchFilter::OR_TOKEN:
			{
				$assign(filter, $new($SearchFilter$CompoundFilter, this, false));
				$nc(filter)->parse();
				break;
			}
		case SearchFilter::NOT_TOKEN:
			{
				$assign(filter, $new($SearchFilter$NotFilter, this));
				$nc(filter)->parse();
				break;
			}
		default:
			{
				$assign(filter, $new($SearchFilter$AtomicFilter, this));
				$nc(filter)->parse();
				break;
			}
		}
		skipWhiteSpace();
		if (getCurrentChar() != SearchFilter::END_FILTER_TOKEN) {
			$throwNew($InvalidSearchFilterException, $$str({"expected \""_s, $$str(SearchFilter::END_FILTER_TOKEN), "\" at position "_s, $$str(this->pos)}));
		}
		this->consumeChar();
	} catch ($InvalidSearchFilterException&) {
		$var($InvalidSearchFilterException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($InvalidSearchFilterException, $$str({"Unable to parse character "_s, $$str(this->pos), " in \""_s, this->filter, "\""_s}));
	}
	return filter;
}

char16_t SearchFilter::getCurrentChar() {
	return $nc(this->filter)->charAt(this->pos);
}

char16_t SearchFilter::relCharAt(int32_t i) {
	return $nc(this->filter)->charAt(this->pos + i);
}

void SearchFilter::consumeChar() {
	++this->pos;
}

void SearchFilter::consumeChars(int32_t i) {
	this->pos += i;
}

int32_t SearchFilter::relIndexOf(int32_t ch) {
	return $nc(this->filter)->indexOf(ch, this->pos) - this->pos;
}

$String* SearchFilter::relSubstring(int32_t beginIndex, int32_t endIndex) {
	return $nc(this->filter)->substring(beginIndex + this->pos, endIndex + this->pos);
}

$String* SearchFilter::format($Attributes* attrs) {
	$init(SearchFilter);
	if (attrs == nullptr || $nc(attrs)->size() == 0) {
		return "objectClass=*"_s;
	}
	$var($String, answer, nullptr);
	$assign(answer, "(& "_s);
	$var($Attribute, attr, nullptr);
	{
		$var($NamingEnumeration, e, $nc(attrs)->getAll());
		for (; $nc(e)->hasMore();) {
			$assign(attr, $cast($Attribute, e->next()));
			bool var$0 = $nc(attr)->size() == 0;
			if (!var$0) {
				bool var$1 = $nc(attr)->size() == 1;
				var$0 = (var$1 && attr->get() == nullptr);
			}
			if (var$0) {
				$plusAssign(answer, $$str({"("_s, $(attr->getID()), "=*)"_s}));
			} else {
				{
					$var($NamingEnumeration, ve, attr->getAll());
					for (; $nc(ve)->hasMore();) {
						$var($String, val, getEncodedStringRep($(ve->next())));
						if (val != nullptr) {
							$plusAssign(answer, $$str({"("_s, $(attr->getID()), "="_s, val, ")"_s}));
						}
					}
				}
			}
		}
	}
	$plusAssign(answer, ")"_s);
	return answer;
}

$String* SearchFilter::getEncodedStringRep(Object$* obj) {
	$init(SearchFilter);
	$var($String, str, nullptr);
	if (obj == nullptr) {
		return nullptr;
	}
	if ($instanceOf($bytes, obj)) {
		$var($HexFormat, hex, $nc($($nc($($HexFormat::of()))->withUpperCase()))->withPrefix("\\"_s));
		$var($bytes, bytes, $cast($bytes, obj));
		return $nc(hex)->formatHex(bytes);
	}
	if (!($instanceOf($String, obj))) {
		$assign(str, $nc($of(obj))->toString());
	} else {
		$assign(str, $cast($String, obj));
	}
	int32_t len = $nc(str)->length();
	$var($StringBuilder, sb, $new($StringBuilder, len));
	char16_t ch = 0;
	for (int32_t i = 0; i < len; ++i) {
		switch (ch = str->charAt(i)) {
		case u'*':
			{
				sb->append("\\2a"_s);
				break;
			}
		case u'(':
			{
				sb->append("\\28"_s);
				break;
			}
		case u')':
			{
				sb->append("\\29"_s);
				break;
			}
		case u'\\':
			{
				sb->append("\\5c"_s);
				break;
			}
		case 0:
			{
				sb->append("\\00"_s);
				break;
			}
		default:
			{
				sb->append(ch);
			}
		}
	}
	return sb->toString();
}

int32_t SearchFilter::findUnescaped(char16_t ch, $String* val, int32_t start) {
	$init(SearchFilter);
	int32_t len = $nc(val)->length();
	while (start < len) {
		int32_t where = val->indexOf((int32_t)ch, start);
		if (where == start || where == -1 || val->charAt(where - 1) != u'\\') {
			return where;
		}
		start = where + 1;
	}
	return -1;
}

$String* SearchFilter::format($String* expr, $ObjectArray* args) {
	$init(SearchFilter);
	int32_t param = 0;
	int32_t where = 0;
	int32_t start = 0;
	$var($StringBuilder, answer, $new($StringBuilder, $nc(expr)->length()));
	while ((where = findUnescaped(u'{', expr, start)) >= 0) {
		int32_t pstart = where + 1;
		int32_t pend = $nc(expr)->indexOf((int32_t)u'}', pstart);
		if (pend < 0) {
			$throwNew($InvalidSearchFilterException, $$str({"unbalanced {: "_s, expr}));
		}
		try {
			param = $Integer::parseInt($(expr->substring(pstart, pend)));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			$throwNew($InvalidSearchFilterException, $$str({"integer expected inside {}: "_s, expr}));
		}
		if (param >= $nc(args)->length) {
			$throwNew($InvalidSearchFilterException, $$str({"number exceeds argument list: "_s, $$str(param)}));
		}
		answer->append($(expr->substring(start, where)))->append($(getEncodedStringRep($nc(args)->get(param))));
		start = pend + 1;
	}
	if (start < $nc(expr)->length()) {
		answer->append($(expr->substring(start)));
	}
	return answer->toString();
}

$Attributes* SearchFilter::selectAttributes($Attributes* originals, $StringArray* attrIDs) {
	$init(SearchFilter);
	if (attrIDs == nullptr) {
		return originals;
	}
	$var($Attributes, result, $new($BasicAttributes));
	for (int32_t i = 0; i < $nc(attrIDs)->length; ++i) {
		$var($Attribute, attr, $nc(originals)->get(attrIDs->get(i)));
		if (attr != nullptr) {
			result->put(attr);
		}
	}
	return result;
}

SearchFilter::SearchFilter() {
}

$Class* SearchFilter::load$($String* name, bool initialize) {
	$loadClass(SearchFilter, name, initialize, &_SearchFilter_ClassInfo_, allocate$SearchFilter);
	return class$;
}

$Class* SearchFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com