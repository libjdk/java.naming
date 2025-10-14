#ifndef _com_sun_jndi_ldap_LdapName$TypeAndValue_h_
#define _com_sun_jndi_ldap_LdapName$TypeAndValue_h_
//$ class com.sun.jndi.ldap.LdapName$TypeAndValue
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapName$TypeAndValue : public ::java::lang::Object {
	$class(LdapName$TypeAndValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapName$TypeAndValue();
	void init$($String* type, $String* value, bool valueCaseSensitive);
	virtual int32_t compareTo(Object$* obj);
	static $bytes* decodeHexPairs($chars* chars, int32_t beg, int32_t end);
	virtual bool equals(Object$* obj) override;
	static $String* escapeBinaryValue($bytes* val);
	static $String* escapeStringValue($String* val);
	static $String* escapeValue(Object$* val);
	virtual $String* getType();
	virtual $Object* getUnescapedValue();
	static $bytes* getUtf8Octets($chars* chars, int32_t beg, int32_t end);
	$String* getValueComparable();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $Object* unescapeValue($String* val);
	$String* type = nullptr;
	$String* value = nullptr;
	bool binary = false;
	bool valueCaseSensitive = false;
	$String* comparable = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapName$TypeAndValue_h_