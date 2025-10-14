#ifndef _javax_naming_SizeLimitExceededException_h_
#define _javax_naming_SizeLimitExceededException_h_
//$ class javax.naming.SizeLimitExceededException
//$ extends javax.naming.LimitExceededException

#include <javax/naming/LimitExceededException.h>

namespace javax {
	namespace naming {

class $import SizeLimitExceededException : public ::javax::naming::LimitExceededException {
	$class(SizeLimitExceededException, $NO_CLASS_INIT, ::javax::naming::LimitExceededException)
public:
	SizeLimitExceededException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0x62F053162F85A443;
	SizeLimitExceededException(const SizeLimitExceededException& e);
	SizeLimitExceededException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_SizeLimitExceededException_h_