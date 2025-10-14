#include <com/sun/jndi/ldap/SearchResultWithControls.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;
using $SearchResult = ::javax::naming::directory::SearchResult;
using $Control = ::javax::naming::ldap::Control;
using $HasControls = ::javax::naming::ldap::HasControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _SearchResultWithControls_FieldInfo_[] = {
	{"controls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(SearchResultWithControls, controls)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SearchResultWithControls, serialVersionUID)},
	{}
};

$MethodInfo _SearchResultWithControls_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z[Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, $method(static_cast<void(SearchResultWithControls::*)($String*,Object$*,$Attributes*,bool,$ControlArray*)>(&SearchResultWithControls::init$))},
	{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SearchResultWithControls_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.SearchResultWithControls",
	"javax.naming.directory.SearchResult",
	"javax.naming.ldap.HasControls",
	_SearchResultWithControls_FieldInfo_,
	_SearchResultWithControls_MethodInfo_
};

$Object* allocate$SearchResultWithControls($Class* clazz) {
	return $of($alloc(SearchResultWithControls));
}

$String* SearchResultWithControls::toString() {
	 return this->$SearchResult::toString();
}

int32_t SearchResultWithControls::hashCode() {
	 return this->$SearchResult::hashCode();
}

bool SearchResultWithControls::equals(Object$* arg0) {
	 return this->$SearchResult::equals(arg0);
}

$Object* SearchResultWithControls::clone() {
	 return this->$SearchResult::clone();
}

void SearchResultWithControls::finalize() {
	this->$SearchResult::finalize();
}

void SearchResultWithControls::init$($String* name, Object$* obj, $Attributes* attrs, bool isRelative, $ControlArray* controls) {
	$SearchResult::init$(name, obj, attrs, isRelative);
	$set(this, controls, controls);
}

$ControlArray* SearchResultWithControls::getControls() {
	return this->controls;
}

SearchResultWithControls::SearchResultWithControls() {
}

$Class* SearchResultWithControls::load$($String* name, bool initialize) {
	$loadClass(SearchResultWithControls, name, initialize, &_SearchResultWithControls_ClassInfo_, allocate$SearchResultWithControls);
	return class$;
}

$Class* SearchResultWithControls::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com