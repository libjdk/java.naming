#include <javax/naming/directory/SearchControls.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef OBJECT_SCOPE
#undef ONELEVEL_SCOPE
#undef SUBTREE_SCOPE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _SearchControls_FieldInfo_[] = {
	{"OBJECT_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SearchControls, OBJECT_SCOPE)},
	{"ONELEVEL_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SearchControls, ONELEVEL_SCOPE)},
	{"SUBTREE_SCOPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SearchControls, SUBTREE_SCOPE)},
	{"searchScope", "I", nullptr, $PRIVATE, $field(SearchControls, searchScope)},
	{"timeLimit", "I", nullptr, $PRIVATE, $field(SearchControls, timeLimit)},
	{"derefLink", "Z", nullptr, $PRIVATE, $field(SearchControls, derefLink)},
	{"returnObj", "Z", nullptr, $PRIVATE, $field(SearchControls, returnObj)},
	{"countLimit", "J", nullptr, $PRIVATE, $field(SearchControls, countLimit)},
	{"attributesToReturn", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(SearchControls, attributesToReturn)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SearchControls, serialVersionUID)},
	{}
};

$MethodInfo _SearchControls_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SearchControls::*)()>(&SearchControls::init$))},
	{"<init>", "(IJI[Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(SearchControls::*)(int32_t,int64_t,int32_t,$StringArray*,bool,bool)>(&SearchControls::init$))},
	{"getCountLimit", "()J", nullptr, $PUBLIC},
	{"getDerefLinkFlag", "()Z", nullptr, $PUBLIC},
	{"getReturningAttributes", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReturningObjFlag", "()Z", nullptr, $PUBLIC},
	{"getSearchScope", "()I", nullptr, $PUBLIC},
	{"getTimeLimit", "()I", nullptr, $PUBLIC},
	{"setCountLimit", "(J)V", nullptr, $PUBLIC},
	{"setDerefLinkFlag", "(Z)V", nullptr, $PUBLIC},
	{"setReturningAttributes", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setReturningObjFlag", "(Z)V", nullptr, $PUBLIC},
	{"setSearchScope", "(I)V", nullptr, $PUBLIC},
	{"setTimeLimit", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SearchControls_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.SearchControls",
	"java.lang.Object",
	"java.io.Serializable",
	_SearchControls_FieldInfo_,
	_SearchControls_MethodInfo_
};

$Object* allocate$SearchControls($Class* clazz) {
	return $of($alloc(SearchControls));
}

void SearchControls::init$() {
	this->searchScope = SearchControls::ONELEVEL_SCOPE;
	this->timeLimit = 0;
	this->countLimit = 0;
	this->derefLink = false;
	this->returnObj = false;
	$set(this, attributesToReturn, nullptr);
}

void SearchControls::init$(int32_t scope, int64_t countlim, int32_t timelim, $StringArray* attrs, bool retobj, bool deref) {
	this->searchScope = scope;
	this->timeLimit = timelim;
	this->derefLink = deref;
	this->returnObj = retobj;
	this->countLimit = countlim;
	$set(this, attributesToReturn, attrs);
}

int32_t SearchControls::getSearchScope() {
	return this->searchScope;
}

int32_t SearchControls::getTimeLimit() {
	return this->timeLimit;
}

bool SearchControls::getDerefLinkFlag() {
	return this->derefLink;
}

bool SearchControls::getReturningObjFlag() {
	return this->returnObj;
}

int64_t SearchControls::getCountLimit() {
	return this->countLimit;
}

$StringArray* SearchControls::getReturningAttributes() {
	return this->attributesToReturn;
}

void SearchControls::setSearchScope(int32_t scope) {
	this->searchScope = scope;
}

void SearchControls::setTimeLimit(int32_t ms) {
	this->timeLimit = ms;
}

void SearchControls::setDerefLinkFlag(bool on) {
	this->derefLink = on;
}

void SearchControls::setReturningObjFlag(bool on) {
	this->returnObj = on;
}

void SearchControls::setCountLimit(int64_t limit) {
	this->countLimit = limit;
}

void SearchControls::setReturningAttributes($StringArray* attrs) {
	$set(this, attributesToReturn, attrs);
}

SearchControls::SearchControls() {
}

$Class* SearchControls::load$($String* name, bool initialize) {
	$loadClass(SearchControls, name, initialize, &_SearchControls_ClassInfo_, allocate$SearchControls);
	return class$;
}

$Class* SearchControls::class$ = nullptr;

		} // directory
	} // naming
} // javax