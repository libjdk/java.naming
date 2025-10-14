#include <com/sun/jndi/toolkit/dir/HierarchicalNameParser.h>

#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Properties.h>
#include <javax/naming/CompoundName.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $HierarchicalName = ::com::sun::jndi::toolkit::dir::HierarchicalName;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $CompoundName = ::javax::naming::CompoundName;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _HierarchicalNameParser_FieldInfo_[] = {
	{"mySyntax", "Ljava/util/Properties;", nullptr, $STATIC | $FINAL, $staticField(HierarchicalNameParser, mySyntax)},
	{}
};

$MethodInfo _HierarchicalNameParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HierarchicalNameParser::*)()>(&HierarchicalNameParser::init$))},
	{"parse", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _HierarchicalNameParser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.HierarchicalNameParser",
	"java.lang.Object",
	"javax.naming.NameParser",
	_HierarchicalNameParser_FieldInfo_,
	_HierarchicalNameParser_MethodInfo_
};

$Object* allocate$HierarchicalNameParser($Class* clazz) {
	return $of($alloc(HierarchicalNameParser));
}

$Properties* HierarchicalNameParser::mySyntax = nullptr;

void HierarchicalNameParser::init$() {
}

$Name* HierarchicalNameParser::parse($String* name) {
	return $new($HierarchicalName, name, HierarchicalNameParser::mySyntax);
}

void clinit$HierarchicalNameParser($Class* class$) {
	$assignStatic(HierarchicalNameParser::mySyntax, $new($Properties));
	{
		$nc(HierarchicalNameParser::mySyntax)->put("jndi.syntax.direction"_s, "left_to_right"_s);
		$nc(HierarchicalNameParser::mySyntax)->put("jndi.syntax.separator"_s, "/"_s);
		$nc(HierarchicalNameParser::mySyntax)->put("jndi.syntax.ignorecase"_s, "true"_s);
		$nc(HierarchicalNameParser::mySyntax)->put("jndi.syntax.escape"_s, "\\"_s);
		$nc(HierarchicalNameParser::mySyntax)->put("jndi.syntax.beginquote"_s, "\""_s);
		$nc(HierarchicalNameParser::mySyntax)->put("jndi.syntax.trimblanks"_s, "false"_s);
	}
}

HierarchicalNameParser::HierarchicalNameParser() {
}

$Class* HierarchicalNameParser::load$($String* name, bool initialize) {
	$loadClass(HierarchicalNameParser, name, initialize, &_HierarchicalNameParser_ClassInfo_, clinit$HierarchicalNameParser, allocate$HierarchicalNameParser);
	return class$;
}

$Class* HierarchicalNameParser::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com