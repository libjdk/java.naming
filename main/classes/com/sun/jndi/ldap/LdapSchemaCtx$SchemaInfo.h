#ifndef _com_sun_jndi_ldap_LdapSchemaCtx$SchemaInfo_h_
#define _com_sun_jndi_ldap_LdapSchemaCtx$SchemaInfo_h_
//$ class com.sun.jndi.ldap.LdapSchemaCtx$SchemaInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapCtx;
				class LdapSchemaParser;
			}
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
			class ModificationItem;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapSchemaCtx$SchemaInfo : public ::java::lang::Object {
	$class(LdapSchemaCtx$SchemaInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapSchemaCtx$SchemaInfo();
	void init$($String* schemaEntryName, ::com::sun::jndi::ldap::LdapCtx* schemaEntry, ::com::sun::jndi::ldap::LdapSchemaParser* parser);
	void close();
	void modifyAttributes(::java::util::Hashtable* env, $Array<::javax::naming::directory::ModificationItem>* mods);
	void modifyAttributes(::java::util::Hashtable* env, int32_t mod, ::javax::naming::directory::Attributes* attrs);
	::com::sun::jndi::ldap::LdapCtx* reopenEntry(::java::util::Hashtable* env);
	::com::sun::jndi::ldap::LdapCtx* schemaEntry = nullptr;
	$String* schemaEntryName = nullptr;
	::com::sun::jndi::ldap::LdapSchemaParser* parser = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	bool hasLdapsScheme = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapSchemaCtx$SchemaInfo_h_