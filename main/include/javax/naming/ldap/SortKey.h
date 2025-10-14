#ifndef _javax_naming_ldap_SortKey_h_
#define _javax_naming_ldap_SortKey_h_
//$ class javax.naming.ldap.SortKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		namespace ldap {

class $import SortKey : public ::java::lang::Object {
	$class(SortKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SortKey();
	void init$($String* attrID);
	void init$($String* attrID, bool ascendingOrder, $String* matchingRuleID);
	virtual $String* getAttributeID();
	virtual $String* getMatchingRuleID();
	virtual bool isAscending();
	$String* attrID = nullptr;
	bool reverseOrder = false;
	$String* matchingRuleID = nullptr;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_SortKey_h_