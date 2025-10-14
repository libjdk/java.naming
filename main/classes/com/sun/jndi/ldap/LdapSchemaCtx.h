#ifndef _com_sun_jndi_ldap_LdapSchemaCtx_h_
#define _com_sun_jndi_ldap_LdapSchemaCtx_h_
//$ class com.sun.jndi.ldap.LdapSchemaCtx
//$ extends com.sun.jndi.toolkit.dir.HierMemDirCtx

#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <java/lang/Array.h>

#pragma push_macro("ATTRIBUTE")
#undef ATTRIBUTE
#pragma push_macro("ATTRIBUTE_ROOT")
#undef ATTRIBUTE_ROOT
#pragma push_macro("LEAF")
#undef LEAF
#pragma push_macro("MATCHRULE")
#undef MATCHRULE
#pragma push_macro("MATCHRULE_ROOT")
#undef MATCHRULE_ROOT
#pragma push_macro("OBJECTCLASS")
#undef OBJECTCLASS
#pragma push_macro("OBJECTCLASS_ROOT")
#undef OBJECTCLASS_ROOT
#pragma push_macro("SCHEMA_ROOT")
#undef SCHEMA_ROOT
#pragma push_macro("SYNTAX")
#undef SYNTAX
#pragma push_macro("SYNTAX_ROOT")
#undef SYNTAX_ROOT

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapCtx;
				class LdapSchemaCtx$SchemaInfo;
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
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
			class DirContext;
			class ModificationItem;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapSchemaCtx : public ::com::sun::jndi::toolkit::dir::HierMemDirCtx {
	$class(LdapSchemaCtx, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::HierMemDirCtx)
public:
	LdapSchemaCtx();
	using ::com::sun::jndi::toolkit::dir::HierMemDirCtx::bind;
	void init$(int32_t objectType, ::java::util::Hashtable* environment, ::com::sun::jndi::ldap::LdapSchemaCtx$SchemaInfo* info);
	void addServerSchema(::javax::naming::directory::Attributes* attrs);
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	virtual void close() override;
	virtual ::com::sun::jndi::toolkit::dir::HierMemDirCtx* createNewCtx() override;
	static ::javax::naming::directory::DirContext* createSchemaTree(::java::util::Hashtable* env, $String* subschemasubentry, ::com::sun::jndi::ldap::LdapCtx* schemaEntry, ::javax::naming::directory::Attributes* schemaAttrs, bool netscapeBug);
	static ::javax::naming::directory::Attributes* deepClone(::javax::naming::directory::Attributes* orig);
	void deleteServerSchema(::javax::naming::directory::Attributes* origAttrs);
	virtual void doBind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool useFactory) override;
	virtual ::javax::naming::directory::DirContext* doCreateSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) override;
	virtual void doDestroySubcontext(::javax::naming::Name* name) override;
	virtual void doModifyAttributes($Array<::javax::naming::directory::ModificationItem>* mods) override;
	virtual void doRebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool useFactory) override;
	virtual void doRename(::javax::naming::Name* oldname, ::javax::naming::Name* newname) override;
	virtual void doUnbind(::javax::naming::Name* name) override;
	void modifyServerSchema(::javax::naming::directory::Attributes* origAttrs, ::javax::naming::directory::Attributes* newAttrs);
	using ::com::sun::jndi::toolkit::dir::HierMemDirCtx::rebind;
	virtual void rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) override;
	::com::sun::jndi::ldap::LdapSchemaCtx* setup(int32_t objectType, $String* name, ::javax::naming::directory::Attributes* attrs);
	static const bool debug = false;
	static const int32_t LEAF = 0;
	static const int32_t SCHEMA_ROOT = 1;
	static const int32_t OBJECTCLASS_ROOT = 2;
	static const int32_t ATTRIBUTE_ROOT = 3;
	static const int32_t SYNTAX_ROOT = 4;
	static const int32_t MATCHRULE_ROOT = 5;
	static const int32_t OBJECTCLASS = 6;
	static const int32_t ATTRIBUTE = 7;
	static const int32_t SYNTAX = 8;
	static const int32_t MATCHRULE = 9;
	::com::sun::jndi::ldap::LdapSchemaCtx$SchemaInfo* info = nullptr;
	bool setupMode = false;
	int32_t objectType = 0;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ATTRIBUTE")
#pragma pop_macro("ATTRIBUTE_ROOT")
#pragma pop_macro("LEAF")
#pragma pop_macro("MATCHRULE")
#pragma pop_macro("MATCHRULE_ROOT")
#pragma pop_macro("OBJECTCLASS")
#pragma pop_macro("OBJECTCLASS_ROOT")
#pragma pop_macro("SCHEMA_ROOT")
#pragma pop_macro("SYNTAX")
#pragma pop_macro("SYNTAX_ROOT")

#endif // _com_sun_jndi_ldap_LdapSchemaCtx_h_