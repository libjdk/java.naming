#ifndef _com_sun_jndi_toolkit_ctx_PartialCompositeContext_h_
#define _com_sun_jndi_toolkit_ctx_PartialCompositeContext_h_
//$ class com.sun.jndi.toolkit.ctx.PartialCompositeContext
//$ extends javax.naming.Context
//$ implements javax.naming.spi.Resolver

#include <javax/naming/Context.h>
#include <javax/naming/spi/Resolver.h>

#pragma push_macro("_ATOMIC")
#undef _ATOMIC
#pragma push_macro("_COMPONENT")
#undef _COMPONENT
#pragma push_macro("_EMPTY_NAME")
#undef _EMPTY_NAME
#pragma push_macro("_NNS_NAME")
#undef _NNS_NAME
#pragma push_macro("_PARTIAL")
#undef _PARTIAL

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {
					class Continuation;
				}
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
		class CompositeName;
		class Name;
		class NameParser;
		class NamingEnumeration;
	}
}
namespace javax {
	namespace naming {
		namespace spi {
			class ResolveResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $import PartialCompositeContext : public ::javax::naming::Context, public ::javax::naming::spi::Resolver {
	$class(PartialCompositeContext, 0, ::javax::naming::Context, ::javax::naming::spi::Resolver)
public:
	PartialCompositeContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static bool allEmpty(::javax::naming::Name* name);
	virtual void bind($String* name, Object$* newObj) override;
	virtual void bind(::javax::naming::Name* name, Object$* newObj) override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual void destroySubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	static ::com::sun::jndi::toolkit::ctx::PartialCompositeContext* getPCContext(::com::sun::jndi::toolkit::ctx::Continuation* cont);
	virtual ::javax::naming::NamingEnumeration* list($String* name) override;
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) override;
	virtual $Object* lookup($String* name) override;
	virtual $Object* lookup(::javax::naming::Name* name) override;
	virtual $Object* lookupLink($String* name) override;
	virtual $Object* lookupLink(::javax::naming::Name* name) override;
	virtual void p_bind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual ::javax::naming::Context* p_createSubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual void p_destroySubcontext(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual ::java::util::Hashtable* p_getEnvironment();
	virtual ::javax::naming::NameParser* p_getNameParser(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* p_list(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* p_listBindings(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual $Object* p_lookup(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual $Object* p_lookupLink(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual void p_rebind(::javax::naming::Name* name, Object$* obj, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void p_rename(::javax::naming::Name* oldname, ::javax::naming::Name* newname, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual ::javax::naming::spi::ResolveResult* p_resolveToClass(::javax::naming::Name* name, $Class* contextType, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {return nullptr;}
	virtual void p_unbind(::javax::naming::Name* name, ::com::sun::jndi::toolkit::ctx::Continuation* cont) {}
	virtual void rebind($String* name, Object$* newObj) override;
	virtual void rebind(::javax::naming::Name* name, Object$* newObj) override;
	virtual void rename($String* oldName, $String* newName) override;
	virtual void rename(::javax::naming::Name* oldName, ::javax::naming::Name* newName) override;
	virtual ::javax::naming::spi::ResolveResult* resolveToClass($String* name, $Class* contextType) override;
	virtual ::javax::naming::spi::ResolveResult* resolveToClass(::javax::naming::Name* name, $Class* contextType) override;
	virtual $String* toString() override;
	virtual void unbind($String* name) override;
	virtual void unbind(::javax::naming::Name* name) override;
	static const int32_t _PARTIAL = 1;
	static const int32_t _COMPONENT = 2;
	static const int32_t _ATOMIC = 3;
	int32_t _contextType = 0;
	static ::javax::naming::CompositeName* _EMPTY_NAME;
	static ::javax::naming::CompositeName* _NNS_NAME;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#pragma pop_macro("_ATOMIC")
#pragma pop_macro("_COMPONENT")
#pragma pop_macro("_EMPTY_NAME")
#pragma pop_macro("_NNS_NAME")
#pragma pop_macro("_PARTIAL")

#endif // _com_sun_jndi_toolkit_ctx_PartialCompositeContext_h_