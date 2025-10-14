#include <com/sun/jndi/ldap/Filter.h>

#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerEncoder.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/directory/InvalidSearchFilterException.h>
#include <jcpp.h>

#undef ASN_OCTET_STR
#undef LBER_SEQUENCE
#undef LDAP_FILTER_AND
#undef LDAP_FILTER_APPROX
#undef LDAP_FILTER_EQUALITY
#undef LDAP_FILTER_EXT
#undef LDAP_FILTER_EXT_DN
#undef LDAP_FILTER_EXT_RULE
#undef LDAP_FILTER_EXT_TYPE
#undef LDAP_FILTER_EXT_VAL
#undef LDAP_FILTER_GE
#undef LDAP_FILTER_LE
#undef LDAP_FILTER_NOT
#undef LDAP_FILTER_OR
#undef LDAP_FILTER_PRESENT
#undef LDAP_FILTER_SUBSTRINGS
#undef LDAP_SUBSTRING_ANY
#undef LDAP_SUBSTRING_FINAL
#undef LDAP_SUBSTRING_INITIAL

using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerEncoder = ::com::sun::jndi::ldap::BerEncoder;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidSearchFilterException = ::javax::naming::directory::InvalidSearchFilterException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _Filter_FieldInfo_[] = {
	{"dbg", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Filter, dbg)},
	{"dbgIndent", "I", nullptr, $PRIVATE | $STATIC, $staticField(Filter, dbgIndent)},
	{"LDAP_FILTER_AND", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_AND)},
	{"LDAP_FILTER_OR", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_OR)},
	{"LDAP_FILTER_NOT", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_NOT)},
	{"LDAP_FILTER_EQUALITY", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_EQUALITY)},
	{"LDAP_FILTER_SUBSTRINGS", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_SUBSTRINGS)},
	{"LDAP_FILTER_GE", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_GE)},
	{"LDAP_FILTER_LE", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_LE)},
	{"LDAP_FILTER_PRESENT", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_PRESENT)},
	{"LDAP_FILTER_APPROX", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_APPROX)},
	{"LDAP_FILTER_EXT", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_EXT)},
	{"LDAP_FILTER_EXT_RULE", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_EXT_RULE)},
	{"LDAP_FILTER_EXT_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_EXT_TYPE)},
	{"LDAP_FILTER_EXT_VAL", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_EXT_VAL)},
	{"LDAP_FILTER_EXT_DN", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_FILTER_EXT_DN)},
	{"LDAP_SUBSTRING_INITIAL", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_SUBSTRING_INITIAL)},
	{"LDAP_SUBSTRING_ANY", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_SUBSTRING_ANY)},
	{"LDAP_SUBSTRING_FINAL", "I", nullptr, $STATIC | $FINAL, $constField(Filter, LDAP_SUBSTRING_FINAL)},
	{}
};

$MethodInfo _Filter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Filter::*)()>(&Filter::init$))},
	{"dprint", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Filter::dprint))},
	{"dprint", "(Ljava/lang/String;[B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$bytes*)>(&Filter::dprint))},
	{"dprint", "(Ljava/lang/String;[BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$bytes*,int32_t,int32_t)>(&Filter::dprint))},
	{"encodeComplexFilter", "(Lcom/sun/jndi/ldap/BerEncoder;[BI[II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BerEncoder*,$bytes*,int32_t,$ints*,int32_t)>(&Filter::encodeComplexFilter)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeExtensibleMatch", "(Lcom/sun/jndi/ldap/BerEncoder;[BIIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BerEncoder*,$bytes*,int32_t,int32_t,int32_t,int32_t)>(&Filter::encodeExtensibleMatch)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeFilter", "(Lcom/sun/jndi/ldap/BerEncoder;[BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BerEncoder*,$bytes*,int32_t,int32_t)>(&Filter::encodeFilter)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeFilterList", "(Lcom/sun/jndi/ldap/BerEncoder;[BIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BerEncoder*,$bytes*,int32_t,int32_t,int32_t)>(&Filter::encodeFilterList)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeFilterString", "(Lcom/sun/jndi/ldap/BerEncoder;Ljava/lang/String;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($BerEncoder*,$String*,bool)>(&Filter::encodeFilterString)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeSimpleFilter", "(Lcom/sun/jndi/ldap/BerEncoder;[BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BerEncoder*,$bytes*,int32_t,int32_t)>(&Filter::encodeSimpleFilter)), "java.io.IOException,javax.naming.NamingException"},
	{"encodeSubstringFilter", "(Lcom/sun/jndi/ldap/BerEncoder;[BIIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BerEncoder*,$bytes*,int32_t,int32_t,int32_t,int32_t)>(&Filter::encodeSubstringFilter)), "java.io.IOException,javax.naming.NamingException"},
	{"findRightParen", "([B[II)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($bytes*,$ints*,int32_t)>(&Filter::findRightParen)), "java.io.IOException,javax.naming.NamingException"},
	{"findUnescaped", "([BCII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,char16_t,int32_t,int32_t)>(&Filter::findUnescaped))},
	{"indexOf", "([BCII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,char16_t,int32_t,int32_t)>(&Filter::indexOf))},
	{"indexOf", "([BLjava/lang/String;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,$String*,int32_t,int32_t)>(&Filter::indexOf))},
	{"unescapeFilterValue", "([BII)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t)>(&Filter::unescapeFilterValue)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _Filter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.Filter",
	"java.lang.Object",
	nullptr,
	_Filter_FieldInfo_,
	_Filter_MethodInfo_
};

$Object* allocate$Filter($Class* clazz) {
	return $of($alloc(Filter));
}

int32_t Filter::dbgIndent = 0;

void Filter::init$() {
}

void Filter::encodeFilterString($BerEncoder* ber, $String* filterStr, bool isLdapv3) {
	$init(Filter);
	if ((filterStr == nullptr) || ($nc(filterStr)->isEmpty())) {
		$throwNew($InvalidSearchFilterException, "Empty filter"_s);
	}
	$var($bytes, filter, nullptr);
	int32_t filterLen = 0;
	if (isLdapv3) {
		$assign(filter, $nc(filterStr)->getBytes("UTF8"_s));
	} else {
		$assign(filter, $nc(filterStr)->getBytes("8859_1"_s));
	}
	filterLen = $nc(filter)->length;
	encodeFilter(ber, filter, 0, filterLen);
}

void Filter::encodeFilter($BerEncoder* ber, $bytes* filter, int32_t filterStart, int32_t filterEnd) {
	$init(Filter);
	if ((filterEnd - filterStart) <= 0) {
		$throwNew($InvalidSearchFilterException, "Empty filter"_s);
	}
	int32_t nextOffset = 0;
	int32_t parens = 0;
	int32_t balance = 0;
	bool escape = false;
	parens = 0;
	$var($ints, filtOffset, $new($ints, 1));
	for (filtOffset->set(0, filterStart); filtOffset->get(0) < filterEnd;) {
		switch ($nc(filter)->get(filtOffset->get(0))) {
		case u'(':
			{
				++(*filtOffset)[0];
				++parens;
				switch (filter->get(filtOffset->get(0))) {
				case u'&':
					{
						encodeComplexFilter(ber, filter, Filter::LDAP_FILTER_AND, filtOffset, filterEnd);
						--parens;
						break;
					}
				case u'|':
					{
						encodeComplexFilter(ber, filter, Filter::LDAP_FILTER_OR, filtOffset, filterEnd);
						--parens;
						break;
					}
				case u'!':
					{
						encodeComplexFilter(ber, filter, Filter::LDAP_FILTER_NOT, filtOffset, filterEnd);
						--parens;
						break;
					}
				default:
					{
						balance = 1;
						escape = false;
						nextOffset = filtOffset->get(0);
						while (nextOffset < filterEnd && balance > 0) {
							if (!escape) {
								if (filter->get(nextOffset) == u'(') {
									++balance;
								} else if (filter->get(nextOffset) == u')') {
									--balance;
								}
							}
							if (filter->get(nextOffset) == u'\\' && !escape) {
								escape = true;
							} else {
								escape = false;
							}
							if (balance > 0) {
								++nextOffset;
							}
						}
						if (balance != 0) {
							$throwNew($InvalidSearchFilterException, "Unbalanced parenthesis"_s);
						}
						encodeSimpleFilter(ber, filter, filtOffset->get(0), nextOffset);
						filtOffset->set(0, nextOffset + 1);
						--parens;
						break;
					}
				}
				break;
			}
		case u')':
			{
				$nc(ber)->endSeq();
				++(*filtOffset)[0];
				--parens;
				break;
			}
		case u' ':
			{
				++(*filtOffset)[0];
				break;
			}
		default:
			{
				encodeSimpleFilter(ber, filter, filtOffset->get(0), filterEnd);
				filtOffset->set(0, filterEnd);
				break;
			}
		}
		if (parens < 0) {
			$throwNew($InvalidSearchFilterException, "Unbalanced parenthesis"_s);
		}
	}
	if (parens != 0) {
		$throwNew($InvalidSearchFilterException, "Unbalanced parenthesis"_s);
	}
}

$bytes* Filter::unescapeFilterValue($bytes* orig, int32_t start, int32_t end) {
	$init(Filter);
	bool escape = false;
	bool escStart = false;
	int32_t ival = 0;
	int8_t ch = 0;
	int32_t len = end - start;
	$var($bytes, tbuf, $new($bytes, len));
	int32_t j = 0;
	for (int32_t i = start; i < end; ++i) {
		ch = $nc(orig)->get(i);
		if (escape) {
			if ((ival = $Character::digit((int32_t)ch, 16)) < 0) {
				if (escStart) {
					escape = false;
					tbuf->set(j++, ch);
				} else {
					$throwNew($InvalidSearchFilterException, $$str({"invalid escape sequence: "_s, orig}));
				}
			} else if (escStart) {
				tbuf->set(j, (int8_t)(ival << 4));
				escStart = false;
			} else {
				(*tbuf)[j++] |= (int8_t)ival;
				escape = false;
			}
		} else if (ch != u'\\') {
			tbuf->set(j++, ch);
			escape = false;
		} else {
			escStart = (escape = true);
		}
	}
	$var($bytes, answer, $new($bytes, j));
	$System::arraycopy(tbuf, 0, answer, 0, j);
	return answer;
}

int32_t Filter::indexOf($bytes* str, char16_t ch, int32_t start, int32_t end) {
	$init(Filter);
	for (int32_t i = start; i < end; ++i) {
		if ($nc(str)->get(i) == ch) {
			return i;
		}
	}
	return -1;
}

int32_t Filter::indexOf($bytes* str, $String* target, int32_t start, int32_t end) {
	$init(Filter);
	int32_t where = indexOf(str, $nc(target)->charAt(0), start, end);
	if (where >= 0) {
		for (int32_t i = 1; i < $nc(target)->length(); ++i) {
			if ($nc(str)->get(where + i) != target->charAt(i)) {
				return -1;
			}
		}
	}
	return where;
}

int32_t Filter::findUnescaped($bytes* str, char16_t ch, int32_t start, int32_t end) {
	$init(Filter);
	while (start < end) {
		int32_t where = indexOf(str, ch, start, end);
		int32_t backSlashPos = 0;
		int32_t backSlashCnt = 0;
		for (backSlashPos = where - 1; ((backSlashPos >= start) && ($nc(str)->get(backSlashPos) == u'\\')); --backSlashPos, ++backSlashCnt) {
		}
		if (where == start || where == -1 || ((backSlashCnt % 2) == 0)) {
			return where;
		}
		start = where + 1;
	}
	return -1;
}

void Filter::encodeSimpleFilter($BerEncoder* ber, $bytes* filter, int32_t filtStart, int32_t filtEnd) {
	$init(Filter);
	$var($String, type, nullptr);
	$var($String, value, nullptr);
	int32_t valueStart = 0;
	int32_t valueEnd = 0;
	int32_t typeStart = 0;
	int32_t typeEnd = 0;
	int32_t eq = 0;
	if ((eq = indexOf(filter, u'=', filtStart, filtEnd)) == -1) {
		$throwNew($InvalidSearchFilterException, "Missing \'equals\'"_s);
	}
	valueStart = eq + 1;
	valueEnd = filtEnd;
	typeStart = filtStart;
	int32_t ftype = 0;
	switch ($nc(filter)->get(eq - 1)) {
	case u'<':
		{
			ftype = Filter::LDAP_FILTER_LE;
			typeEnd = eq - 1;
			break;
		}
	case u'>':
		{
			ftype = Filter::LDAP_FILTER_GE;
			typeEnd = eq - 1;
			break;
		}
	case u'~':
		{
			ftype = Filter::LDAP_FILTER_APPROX;
			typeEnd = eq - 1;
			break;
		}
	case u':':
		{
			ftype = Filter::LDAP_FILTER_EXT;
			typeEnd = eq - 1;
			break;
		}
	default:
		{
			typeEnd = eq;
			ftype = 0;
			break;
		}
	}
	int32_t optionsStart = -1;
	int32_t extensibleStart = -1;
	if ((filter->get(typeStart) >= u'0' && filter->get(typeStart) <= u'9') || (filter->get(typeStart) >= u'A' && filter->get(typeStart) <= u'Z') || (filter->get(typeStart) >= u'a' && filter->get(typeStart) <= u'z')) {
		bool isNumericOid = filter->get(typeStart) >= u'0' && filter->get(typeStart) <= u'9';
		for (int32_t i = typeStart + 1; i < typeEnd; ++i) {
			if (filter->get(i) == u';') {
				if (isNumericOid && filter->get(i - 1) == u'.') {
					$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
				}
				optionsStart = i;
				break;
			}
			if (filter->get(i) == u':' && ftype == Filter::LDAP_FILTER_EXT) {
				if (isNumericOid && filter->get(i - 1) == u'.') {
					$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
				}
				extensibleStart = i;
				break;
			}
			if (isNumericOid) {
				if ((filter->get(i) == u'.' && filter->get(i - 1) == u'.') || (filter->get(i) != u'.' && !(filter->get(i) >= u'0' && filter->get(i) <= u'9'))) {
					$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
				}
			} else if (filter->get(i) != u'-' && filter->get(i) != u'_' && !(filter->get(i) >= u'0' && filter->get(i) <= u'9') && !(filter->get(i) >= u'A' && filter->get(i) <= u'Z') && !(filter->get(i) >= u'a' && filter->get(i) <= u'z')) {
				$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
			}
		}
	} else if (ftype == Filter::LDAP_FILTER_EXT && filter->get(typeStart) == u':') {
		extensibleStart = typeStart;
	} else {
		$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
	}
	if (optionsStart > 0) {
		for (int32_t i = optionsStart + 1; i < typeEnd; ++i) {
			if (filter->get(i) == u';') {
				if (filter->get(i - 1) == u';') {
					$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
				}
				continue;
			}
			if (filter->get(i) == u':' && ftype == Filter::LDAP_FILTER_EXT) {
				if (filter->get(i - 1) == u';') {
					$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
				}
				extensibleStart = i;
				break;
			}
			if (filter->get(i) != u'-' && filter->get(i) != u'_' && !(filter->get(i) >= u'0' && filter->get(i) <= u'9') && !(filter->get(i) >= u'A' && filter->get(i) <= u'Z') && !(filter->get(i) >= u'a' && filter->get(i) <= u'z')) {
				$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
			}
		}
	}
	if (extensibleStart > 0) {
		bool isMatchingRule = false;
		for (int32_t i = extensibleStart + 1; i < typeEnd; ++i) {
			if (filter->get(i) == u':') {
				$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
			} else if ((filter->get(i) >= u'0' && filter->get(i) <= u'9') || (filter->get(i) >= u'A' && filter->get(i) <= u'Z') || (filter->get(i) >= u'a' && filter->get(i) <= u'z')) {
				bool isNumericOid = filter->get(i) >= u'0' && filter->get(i) <= u'9';
				++i;
				for (int32_t j = i; j < typeEnd; ++j, ++i) {
					if (filter->get(j) == u':') {
						if (isMatchingRule) {
							$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
						}
						if (isNumericOid && filter->get(j - 1) == u'.') {
							$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
						}
						isMatchingRule = true;
						break;
					}
					if (isNumericOid) {
						if ((filter->get(j) == u'.' && filter->get(j - 1) == u'.') || (filter->get(j) != u'.' && !(filter->get(j) >= u'0' && filter->get(j) <= u'9'))) {
							$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
						}
					} else if (filter->get(j) != u'-' && filter->get(j) != u'_' && !(filter->get(j) >= u'0' && filter->get(j) <= u'9') && !(filter->get(j) >= u'A' && filter->get(j) <= u'Z') && !(filter->get(j) >= u'a' && filter->get(j) <= u'z')) {
						$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
					}
				}
			} else {
				$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
			}
		}
	}
	if (filter->get(typeEnd - 1) == u'.' || filter->get(typeEnd - 1) == u';' || filter->get(typeEnd - 1) == u':') {
		$throwNew($InvalidSearchFilterException, "invalid attribute description"_s);
	}
	if (typeEnd == eq) {
		if (findUnescaped(filter, u'*', valueStart, valueEnd) == -1) {
			ftype = Filter::LDAP_FILTER_EQUALITY;
		} else if (filter->get(valueStart) == u'*' && valueStart == (valueEnd - 1)) {
			ftype = Filter::LDAP_FILTER_PRESENT;
		} else {
			encodeSubstringFilter(ber, filter, typeStart, typeEnd, valueStart, valueEnd);
			return;
		}
	}
	if (ftype == Filter::LDAP_FILTER_PRESENT) {
		$nc(ber)->encodeOctetString(filter, ftype, typeStart, typeEnd - typeStart);
	} else if (ftype == Filter::LDAP_FILTER_EXT) {
		encodeExtensibleMatch(ber, filter, typeStart, typeEnd, valueStart, valueEnd);
	} else {
		$nc(ber)->beginSeq(ftype);
		ber->encodeOctetString(filter, $Ber::ASN_OCTET_STR, typeStart, typeEnd - typeStart);
		ber->encodeOctetString($(unescapeFilterValue(filter, valueStart, valueEnd)), $Ber::ASN_OCTET_STR);
		ber->endSeq();
	}
}

void Filter::encodeSubstringFilter($BerEncoder* ber, $bytes* filter, int32_t typeStart, int32_t typeEnd, int32_t valueStart, int32_t valueEnd) {
	$init(Filter);
	$nc(ber)->beginSeq(Filter::LDAP_FILTER_SUBSTRINGS);
	ber->encodeOctetString(filter, $Ber::ASN_OCTET_STR, typeStart, typeEnd - typeStart);
	ber->beginSeq($LdapClient::LBER_SEQUENCE);
	int32_t index = 0;
	int32_t previndex = valueStart;
	while ((index = findUnescaped(filter, u'*', previndex, valueEnd)) != -1) {
		if (previndex == valueStart) {
			if (previndex < index) {
				ber->encodeOctetString($(unescapeFilterValue(filter, previndex, index)), Filter::LDAP_SUBSTRING_INITIAL);
			}
		} else if (previndex < index) {
			ber->encodeOctetString($(unescapeFilterValue(filter, previndex, index)), Filter::LDAP_SUBSTRING_ANY);
		}
		previndex = index + 1;
	}
	if (previndex < valueEnd) {
		ber->encodeOctetString($(unescapeFilterValue(filter, previndex, valueEnd)), Filter::LDAP_SUBSTRING_FINAL);
	}
	ber->endSeq();
	ber->endSeq();
}

void Filter::encodeComplexFilter($BerEncoder* ber, $bytes* filter, int32_t filterType, $ints* filtOffset, int32_t filtEnd) {
	$init(Filter);
	++(*$nc(filtOffset))[0];
	$nc(ber)->beginSeq(filterType);
	$var($ints, parens, findRightParen(filter, filtOffset, filtEnd));
	encodeFilterList(ber, filter, filterType, $nc(parens)->get(0), parens->get(1));
	ber->endSeq();
}

$ints* Filter::findRightParen($bytes* filter, $ints* filtOffset, int32_t end) {
	$init(Filter);
	int32_t balance = 1;
	bool escape = false;
	int32_t nextOffset = $nc(filtOffset)->get(0);
	while (nextOffset < end && balance > 0) {
		if (!escape) {
			if ($nc(filter)->get(nextOffset) == u'(') {
				++balance;
			} else if (filter->get(nextOffset) == u')') {
				--balance;
			}
		}
		if ($nc(filter)->get(nextOffset) == u'\\' && !escape) {
			escape = true;
		} else {
			escape = false;
		}
		if (balance > 0) {
			++nextOffset;
		}
	}
	if (balance != 0) {
		$throwNew($InvalidSearchFilterException, "Unbalanced parenthesis"_s);
	}
	$var($ints, tmp, $new($ints, {
		filtOffset->get(0),
		nextOffset
	}));
	filtOffset->set(0, nextOffset + 1);
	return tmp;
}

void Filter::encodeFilterList($BerEncoder* ber, $bytes* filter, int32_t filterType, int32_t start, int32_t end) {
	$init(Filter);
	$var($ints, filtOffset, $new($ints, 1));
	int32_t listNumber = 0;
	for (filtOffset->set(0, start); filtOffset->get(0) < end; ++(*filtOffset)[0]) {
		if ($Character::isSpaceChar((char16_t)$nc(filter)->get(filtOffset->get(0)))) {
			continue;
		}
		if ((filterType == Filter::LDAP_FILTER_NOT) && (listNumber > 0)) {
			$throwNew($InvalidSearchFilterException, "Filter (!) cannot be followed by more than one filters"_s);
		}
		if ($nc(filter)->get(filtOffset->get(0)) == u'(') {
			continue;
		}
		$var($ints, parens, findRightParen(filter, filtOffset, end));
		int32_t len = $nc(parens)->get(1) - parens->get(0);
		$var($bytes, newfilter, $new($bytes, len + 2));
		$System::arraycopy(filter, parens->get(0), newfilter, 1, len);
		newfilter->set(0, (int8_t)u'(');
		newfilter->set(len + 1, (int8_t)u')');
		encodeFilter(ber, newfilter, 0, newfilter->length);
		++listNumber;
	}
}

void Filter::encodeExtensibleMatch($BerEncoder* ber, $bytes* filter, int32_t matchStart, int32_t matchEnd, int32_t valueStart, int32_t valueEnd) {
	$init(Filter);
	bool matchDN = false;
	int32_t colon = 0;
	int32_t colon2 = 0;
	int32_t i = 0;
	$nc(ber)->beginSeq(Filter::LDAP_FILTER_EXT);
	if ((colon = indexOf(filter, u':', matchStart, matchEnd)) >= 0) {
		if ((i = indexOf(filter, ":dn"_s, colon, matchEnd)) >= 0) {
			matchDN = true;
		}
		if (((colon2 = indexOf(filter, u':', colon + 1, matchEnd)) >= 0) || (i == -1)) {
			if (i == colon) {
				ber->encodeOctetString(filter, Filter::LDAP_FILTER_EXT_RULE, colon2 + 1, matchEnd - (colon2 + 1));
			} else if ((i == colon2) && (i >= 0)) {
				ber->encodeOctetString(filter, Filter::LDAP_FILTER_EXT_RULE, colon + 1, colon2 - (colon + 1));
			} else {
				ber->encodeOctetString(filter, Filter::LDAP_FILTER_EXT_RULE, colon + 1, matchEnd - (colon + 1));
			}
		}
		if (colon > matchStart) {
			ber->encodeOctetString(filter, Filter::LDAP_FILTER_EXT_TYPE, matchStart, colon - matchStart);
		}
	} else {
		ber->encodeOctetString(filter, Filter::LDAP_FILTER_EXT_TYPE, matchStart, matchEnd - matchStart);
	}
	ber->encodeOctetString($(unescapeFilterValue(filter, valueStart, valueEnd)), Filter::LDAP_FILTER_EXT_VAL);
	ber->encodeBoolean(matchDN, Filter::LDAP_FILTER_EXT_DN);
	ber->endSeq();
}

void Filter::dprint($String* msg) {
	$init(Filter);
	dprint(msg, $$new($bytes, 0), 0, 0);
}

void Filter::dprint($String* msg, $bytes* str) {
	$init(Filter);
	dprint(msg, str, 0, $nc(str)->length);
}

void Filter::dprint($String* msg, $bytes* str, int32_t start, int32_t end) {
	$init(Filter);
	$var($String, dstr, "  "_s);
	int32_t i = Filter::dbgIndent;
	while (i-- > 0) {
		$plusAssign(dstr, "  "_s);
	}
	$plusAssign(dstr, msg);
	$init($System);
	$nc($System::err)->print(dstr);
	for (int32_t j = start; j < end; ++j) {
		$nc($System::err)->print((char16_t)$nc(str)->get(j));
	}
	$nc($System::err)->println();
}

void clinit$Filter($Class* class$) {
	Filter::dbgIndent = 0;
}

Filter::Filter() {
}

$Class* Filter::load$($String* name, bool initialize) {
	$loadClass(Filter, name, initialize, &_Filter_ClassInfo_, clinit$Filter, allocate$Filter);
	return class$;
}

$Class* Filter::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com