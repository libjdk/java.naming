#ifndef _javax_naming_NamingException_h_
#define _javax_naming_NamingException_h_
//$ class javax.naming.NamingException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace javax {
	namespace naming {
		class Name;
	}
}

namespace javax {
	namespace naming {

class $import NamingException : public ::java::lang::Exception {
	$class(NamingException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	NamingException();
	void init$($String* explanation);
	void init$();
	virtual void appendRemainingComponent($String* name);
	virtual void appendRemainingName(::javax::naming::Name* name);
	virtual $Throwable* getCause() override;
	virtual $String* getExplanation();
	virtual ::javax::naming::Name* getRemainingName();
	virtual ::javax::naming::Name* getResolvedName();
	virtual $Object* getResolvedObj();
	virtual $Throwable* getRootCause();
	virtual $Throwable* initCause($Throwable* cause) override;
	virtual void setRemainingName(::javax::naming::Name* name);
	virtual void setResolvedName(::javax::naming::Name* name);
	virtual void setResolvedObj(Object$* obj);
	virtual void setRootCause($Throwable* e);
	virtual $String* toString() override;
	virtual $String* toString(bool detail);
	::javax::naming::Name* resolvedName = nullptr;
	$Object* resolvedObj = nullptr;
	::javax::naming::Name* remainingName = nullptr;
	$Throwable* rootException = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xEDF860E38A3EE737;
	NamingException(const NamingException& e);
	NamingException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_NamingException_h_