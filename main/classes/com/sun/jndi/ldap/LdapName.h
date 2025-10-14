#ifndef _com_sun_jndi_ldap_LdapName_h_
#define _com_sun_jndi_ldap_LdapName_h_
//$ class com.sun.jndi.ldap.LdapName
//$ extends javax.naming.Name

#include <javax/naming/Name.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapName : public ::javax::naming::Name {
	$class(LdapName, $NO_CLASS_INIT, ::javax::naming::Name)
public:
	LdapName();
	void init$($String* name);
	void init$($String* name, ::java::util::Vector* rdns);
	void init$($String* name, ::java::util::Vector* rdns, int32_t beg, int32_t end);
	virtual ::javax::naming::Name* add($String* comp) override;
	virtual ::javax::naming::Name* add(int32_t pos, $String* comp) override;
	virtual ::javax::naming::Name* addAll(::javax::naming::Name* suffix) override;
	virtual ::javax::naming::Name* addAll(int32_t pos, ::javax::naming::Name* suffix) override;
	virtual $Object* clone() override;
	virtual int32_t compareTo(Object$* obj) override;
	virtual bool endsWith(::javax::naming::Name* n) override;
	virtual bool equals(Object$* obj) override;
	static $String* escapeAttributeValue(Object$* val);
	virtual $String* get(int32_t pos) override;
	virtual ::java::util::Enumeration* getAll() override;
	virtual ::javax::naming::Name* getPrefix(int32_t pos) override;
	virtual ::javax::naming::Name* getSuffix(int32_t pos) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	static bool isWhitespace(char16_t c);
	bool matches(int32_t beg, int32_t end, ::javax::naming::Name* n);
	void parse();
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove(int32_t pos) override;
	void setValuesCaseSensitive(bool caseSensitive);
	virtual int32_t size() override;
	virtual bool startsWith(::javax::naming::Name* n) override;
	virtual $String* toString() override;
	static $Object* unescapeAttributeValue($String* val);
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* unparsed = nullptr;
	::java::util::Vector* rdns = nullptr;
	bool valuesCaseSensitive = false;
	static const int64_t serialVersionUID = (int64_t)0xE9DB92FB56620714;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapName_h_