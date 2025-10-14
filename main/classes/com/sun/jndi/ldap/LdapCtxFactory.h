#ifndef _com_sun_jndi_ldap_LdapCtxFactory_h_
#define _com_sun_jndi_ldap_LdapCtxFactory_h_
//$ class com.sun.jndi.ldap.LdapCtxFactory
//$ extends javax.naming.spi.ObjectFactory
//$ implements javax.naming.spi.InitialContextFactory

#include <java/lang/Array.h>
#include <javax/naming/spi/InitialContextFactory.h>
#include <javax/naming/spi/ObjectFactory.h>

#pragma push_macro("ADDRESS_TYPE")
#undef ADDRESS_TYPE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapCtx;
				class LdapURL;
			}
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Vector;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
		class Reference;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attribute;
			class DirContext;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapCtxFactory : public ::javax::naming::spi::ObjectFactory, public ::javax::naming::spi::InitialContextFactory {
	$class(LdapCtxFactory, 0, ::javax::naming::spi::ObjectFactory, ::javax::naming::spi::InitialContextFactory)
public:
	LdapCtxFactory();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static ::javax::naming::directory::Attribute* createTypeNameAttr($Class* cl);
	static void getClassesAux($Class* currentClass, ::java::util::Vector* v);
	virtual ::javax::naming::Context* getInitialContext(::java::util::Hashtable* envprops) override;
	static ::com::sun::jndi::ldap::LdapCtx* getLdapCtxFromUrl($String* domain, $String* url, ::com::sun::jndi::ldap::LdapURL* u, ::java::util::Hashtable* env);
	static ::javax::naming::directory::DirContext* getLdapCtxInstance(Object$* urlInfo, ::java::util::Hashtable* env);
	virtual $Object* getObjectInstance(Object$* ref, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* env) override;
	static $StringArray* getTypeNames($Class* currentClass, ::java::util::Vector* v);
	static $StringArray* getURLs(::javax::naming::Reference* ref);
	static ::javax::naming::directory::DirContext* getUsingURL($String* url, ::java::util::Hashtable* env);
	static ::javax::naming::directory::DirContext* getUsingURLs($StringArray* urls, ::java::util::Hashtable* env);
	static bool isLdapRef(Object$* obj);
	virtual $String* toString() override;
	static $String* ADDRESS_TYPE;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ADDRESS_TYPE")

#endif // _com_sun_jndi_ldap_LdapCtxFactory_h_