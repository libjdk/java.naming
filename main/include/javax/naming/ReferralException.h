#ifndef _javax_naming_ReferralException_h_
#define _javax_naming_ReferralException_h_
//$ class javax.naming.ReferralException
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
	}
}

namespace javax {
	namespace naming {

class $import ReferralException : public ::javax::naming::NamingException {
	$class(ReferralException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	ReferralException();
	void init$($String* explanation);
	void init$();
	virtual ::javax::naming::Context* getReferralContext() {return nullptr;}
	virtual ::javax::naming::Context* getReferralContext(::java::util::Hashtable* env) {return nullptr;}
	virtual $Object* getReferralInfo() {return nullptr;}
	virtual void retryReferral() {}
	virtual bool skipReferral() {return false;}
	static const int64_t serialVersionUID = (int64_t)0xD80356D970425244;
	ReferralException(const ReferralException& e);
	ReferralException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_ReferralException_h_