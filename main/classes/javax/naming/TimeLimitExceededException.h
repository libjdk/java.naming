#ifndef _javax_naming_TimeLimitExceededException_h_
#define _javax_naming_TimeLimitExceededException_h_
//$ class javax.naming.TimeLimitExceededException
//$ extends javax.naming.LimitExceededException

#include <javax/naming/LimitExceededException.h>

namespace javax {
	namespace naming {

class $export TimeLimitExceededException : public ::javax::naming::LimitExceededException {
	$class(TimeLimitExceededException, $NO_CLASS_INIT, ::javax::naming::LimitExceededException)
public:
	TimeLimitExceededException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0xCE14DB5CA6841838;
	TimeLimitExceededException(const TimeLimitExceededException& e);
	TimeLimitExceededException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_TimeLimitExceededException_h_