#ifndef _javax_naming_ldap_Rdn$RdnEntry_h_
#define _javax_naming_ldap_Rdn$RdnEntry_h_
//$ class javax.naming.ldap.Rdn$RdnEntry
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace javax {
	namespace naming {
		namespace ldap {

class Rdn$RdnEntry : public ::java::lang::Comparable {
	$class(Rdn$RdnEntry, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	Rdn$RdnEntry();
	void init$();
	virtual int32_t compareTo(::javax::naming::ldap::Rdn$RdnEntry* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* obj) override;
	virtual $String* getType();
	virtual $Object* getValue();
	$String* getValueComparable();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* type = nullptr;
	$Object* value = nullptr;
	$String* comparable = nullptr;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_Rdn$RdnEntry_h_