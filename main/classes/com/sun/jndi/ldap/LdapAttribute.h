#ifndef _com_sun_jndi_ldap_LdapAttribute_h_
#define _com_sun_jndi_ldap_LdapAttribute_h_
//$ class com.sun.jndi.ldap.LdapAttribute
//$ extends javax.naming.directory.BasicAttribute

#include <javax/naming/directory/BasicAttribute.h>

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class DirContext;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapAttribute : public ::javax::naming::directory::BasicAttribute {
	$class(LdapAttribute, $NO_CLASS_INIT, ::javax::naming::directory::BasicAttribute)
public:
	LdapAttribute();
	using ::javax::naming::directory::BasicAttribute::add;
	void init$($String* id);
	void init$($String* id, ::javax::naming::directory::DirContext* baseCtx, ::javax::naming::Name* rdn);
	virtual bool add(Object$* attrVal) override;
	virtual $Object* clone() override;
	virtual ::javax::naming::directory::DirContext* getAttributeDefinition() override;
	virtual ::javax::naming::directory::DirContext* getAttributeSyntaxDefinition() override;
	::javax::naming::directory::DirContext* getBaseCtx();
	void setBaseCtxInfo();
	void setParent(::javax::naming::directory::DirContext* baseCtx, ::javax::naming::Name* rdn);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0xC47B6B02A60583C0;
	::javax::naming::directory::DirContext* baseCtx = nullptr;
	::javax::naming::Name* rdn = nullptr;
	$String* baseCtxURL = nullptr;
	::java::util::Hashtable* baseCtxEnv = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapAttribute_h_