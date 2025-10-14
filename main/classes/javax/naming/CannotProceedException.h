#ifndef _javax_naming_CannotProceedException_h_
#define _javax_naming_CannotProceedException_h_
//$ class javax.naming.CannotProceedException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
	}
}

namespace javax {
	namespace naming {

class $export CannotProceedException : public ::javax::naming::NamingException {
	$class(CannotProceedException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	CannotProceedException();
	void init$($String* explanation);
	void init$();
	virtual ::javax::naming::Name* getAltName();
	virtual ::javax::naming::Context* getAltNameCtx();
	virtual ::java::util::Hashtable* getEnvironment();
	virtual ::javax::naming::Name* getRemainingNewName();
	virtual void setAltName(::javax::naming::Name* altName);
	virtual void setAltNameCtx(::javax::naming::Context* altNameCtx);
	virtual void setEnvironment(::java::util::Hashtable* environment);
	virtual void setRemainingNewName(::javax::naming::Name* newName);
	::javax::naming::Name* remainingNewName = nullptr;
	::java::util::Hashtable* environment = nullptr;
	::javax::naming::Name* altName = nullptr;
	::javax::naming::Context* altNameCtx = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x10ED554208D3DAED;
	CannotProceedException(const CannotProceedException& e);
	CannotProceedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_CannotProceedException_h_