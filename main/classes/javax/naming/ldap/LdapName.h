#ifndef _javax_naming_ldap_LdapName_h_
#define _javax_naming_ldap_LdapName_h_
//$ class javax.naming.ldap.LdapName
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
		class List;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Rdn;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export LdapName : public ::javax::naming::Name {
	$class(LdapName, $NO_CLASS_INIT, ::javax::naming::Name)
public:
	LdapName();
	void init$($String* name);
	void init$(::java::util::List* rdns);
	void init$($String* name, ::java::util::List* rdns, int32_t beg, int32_t end);
	virtual ::javax::naming::Name* add($String* comp) override;
	virtual ::javax::naming::Name* add(::javax::naming::ldap::Rdn* comp);
	virtual ::javax::naming::Name* add(int32_t posn, $String* comp) override;
	virtual ::javax::naming::Name* add(int32_t posn, ::javax::naming::ldap::Rdn* comp);
	virtual ::javax::naming::Name* addAll(::javax::naming::Name* suffix) override;
	virtual ::javax::naming::Name* addAll(::java::util::List* suffixRdns);
	virtual ::javax::naming::Name* addAll(int32_t posn, ::javax::naming::Name* suffix) override;
	virtual ::javax::naming::Name* addAll(int32_t posn, ::java::util::List* suffixRdns);
	virtual $Object* clone() override;
	virtual int32_t compareTo(Object$* obj) override;
	bool doesListMatch(int32_t beg, int32_t end, ::java::util::List* rdns);
	virtual bool endsWith(::javax::naming::Name* n) override;
	virtual bool endsWith(::java::util::List* rdns);
	virtual bool equals(Object$* obj) override;
	virtual $String* get(int32_t posn) override;
	virtual ::java::util::Enumeration* getAll() override;
	virtual ::javax::naming::Name* getPrefix(int32_t posn) override;
	virtual ::javax::naming::ldap::Rdn* getRdn(int32_t posn);
	virtual ::java::util::List* getRdns();
	virtual ::javax::naming::Name* getSuffix(int32_t posn) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	bool matches(int32_t beg, int32_t end, ::javax::naming::Name* n);
	void parse();
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove(int32_t posn) override;
	virtual int32_t size() override;
	virtual bool startsWith(::javax::naming::Name* n) override;
	virtual bool startsWith(::java::util::List* rdns);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::List* rdns = nullptr;
	$String* unparsed = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xE9DB92FB56620714;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_LdapName_h_