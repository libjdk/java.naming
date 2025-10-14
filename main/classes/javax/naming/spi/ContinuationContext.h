#ifndef _javax_naming_spi_ContinuationContext_h_
#define _javax_naming_spi_ContinuationContext_h_
//$ class javax.naming.spi.ContinuationContext
//$ extends javax.naming.Context
//$ implements javax.naming.spi.Resolver

#include <javax/naming/Context.h>
#include <javax/naming/spi/Resolver.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class CannotProceedException;
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

namespace javax {
	namespace naming {
		namespace spi {

class ContinuationContext : public ::javax::naming::Context, public ::javax::naming::spi::Resolver {
	$class(ContinuationContext, $NO_CLASS_INIT, ::javax::naming::Context, ::javax::naming::spi::Resolver)
public:
	ContinuationContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::naming::CannotProceedException* cpe, ::java::util::Hashtable* env);
	virtual $Object* addToEnvironment($String* propName, Object$* value) override;
	virtual void bind(::javax::naming::Name* name, Object$* newObj) override;
	virtual void bind($String* name, Object$* newObj) override;
	virtual void close() override;
	virtual ::javax::naming::Name* composeName(::javax::naming::Name* name, ::javax::naming::Name* prefix) override;
	virtual $String* composeName($String* name, $String* prefix) override;
	virtual ::javax::naming::Context* createSubcontext(::javax::naming::Name* name) override;
	virtual ::javax::naming::Context* createSubcontext($String* name) override;
	virtual void destroySubcontext(::javax::naming::Name* name) override;
	virtual void destroySubcontext($String* name) override;
	virtual ::java::util::Hashtable* getEnvironment() override;
	virtual $String* getNameInNamespace() override;
	virtual ::javax::naming::NameParser* getNameParser(::javax::naming::Name* name) override;
	virtual ::javax::naming::NameParser* getNameParser($String* name) override;
	virtual ::javax::naming::Context* getTargetContext();
	virtual ::javax::naming::NamingEnumeration* list(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* list($String* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings(::javax::naming::Name* name) override;
	virtual ::javax::naming::NamingEnumeration* listBindings($String* name) override;
	virtual $Object* lookup(::javax::naming::Name* name) override;
	virtual $Object* lookup($String* name) override;
	virtual $Object* lookupLink(::javax::naming::Name* name) override;
	virtual $Object* lookupLink($String* name) override;
	virtual void rebind(::javax::naming::Name* name, Object$* newObj) override;
	virtual void rebind($String* name, Object$* newObj) override;
	virtual $Object* removeFromEnvironment($String* propName) override;
	virtual void rename(::javax::naming::Name* name, ::javax::naming::Name* newName) override;
	virtual void rename($String* name, $String* newName) override;
	virtual ::javax::naming::spi::ResolveResult* resolveToClass(::javax::naming::Name* name, $Class* contextType) override;
	virtual ::javax::naming::spi::ResolveResult* resolveToClass($String* name, $Class* contextType) override;
	virtual $String* toString() override;
	virtual void unbind(::javax::naming::Name* name) override;
	virtual void unbind($String* name) override;
	::javax::naming::CannotProceedException* cpe = nullptr;
	::java::util::Hashtable* env = nullptr;
	::javax::naming::Context* contCtx = nullptr;
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_ContinuationContext_h_