#ifndef _com_sun_jndi_toolkit_ctx_Continuation_h_
#define _com_sun_jndi_toolkit_ctx_Continuation_h_
//$ class com.sun.jndi.toolkit.ctx.Continuation
//$ extends javax.naming.spi.ResolveResult

#include <javax/naming/spi/ResolveResult.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
		class NamingException;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $export Continuation : public ::javax::naming::spi::ResolveResult {
	$class(Continuation, $NO_CLASS_INIT, ::javax::naming::spi::ResolveResult)
public:
	Continuation();
	void init$();
	void init$(::javax::naming::Name* top, ::java::util::Hashtable* environment);
	virtual ::javax::naming::NamingException* fillInException(::javax::naming::NamingException* e);
	virtual bool isContinue();
	virtual void setContinue(Object$* obj, ::javax::naming::Name* relResName, ::javax::naming::Context* currCtx);
	virtual void setContinue(Object$* obj, ::javax::naming::Name* relResName, ::javax::naming::Context* currCtx, ::javax::naming::Name* remain);
	virtual void setContinue(Object$* obj, $String* relResName, ::javax::naming::Context* currCtx, $String* remain);
	virtual void setContinue(Object$* obj, Object$* currCtx);
	void setContinueAux(Object$* resObj, ::javax::naming::Name* relResName, ::javax::naming::Context* currCtx, ::javax::naming::Name* remain);
	void setContinueLink(Object$* linkRef, ::javax::naming::Name* relResName, ::javax::naming::Context* resolvedCtx, ::javax::naming::Name* rname);
	virtual void setContinueNNS(Object$* resObj, ::javax::naming::Name* relResName, ::javax::naming::Context* currCtx);
	virtual void setContinueNNS(Object$* resObj, $String* relResName, ::javax::naming::Context* currCtx);
	virtual void setError(Object$* resObj, ::javax::naming::Name* remain);
	virtual void setError(Object$* resObj, $String* remain);
	void setErrorAux(Object$* resObj, ::javax::naming::Name* rname);
	virtual void setErrorNNS(Object$* resObj, ::javax::naming::Name* remain);
	virtual void setErrorNNS(Object$* resObj, $String* remain);
	virtual void setSuccess();
	virtual $String* toString() override;
	virtual $String* toString(bool detail);
	::javax::naming::Name* starter = nullptr;
	$Object* followingLink = nullptr;
	::java::util::Hashtable* environment = nullptr;
	bool continuing = false;
	::javax::naming::Context* resolvedContext = nullptr;
	::javax::naming::Name* relativeResolvedName = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x7147226283056FB4;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_Continuation_h_