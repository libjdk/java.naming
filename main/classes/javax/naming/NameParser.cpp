#include <javax/naming/NameParser.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {

$MethodInfo _NameParser_MethodInfo_[] = {
	{"parse", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _NameParser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.NameParser",
	nullptr,
	nullptr,
	nullptr,
	_NameParser_MethodInfo_
};

$Object* allocate$NameParser($Class* clazz) {
	return $of($alloc(NameParser));
}

$Class* NameParser::load$($String* name, bool initialize) {
	$loadClass(NameParser, name, initialize, &_NameParser_ClassInfo_, allocate$NameParser);
	return class$;
}

$Class* NameParser::class$ = nullptr;

	} // naming
} // javax