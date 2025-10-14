#ifndef _javax_naming_NameImplEnumerator_h_
#define _javax_naming_NameImplEnumerator_h_
//$ class javax.naming.NameImplEnumerator
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Vector;
	}
}

namespace javax {
	namespace naming {

class NameImplEnumerator : public ::java::util::Enumeration {
	$class(NameImplEnumerator, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	NameImplEnumerator();
	void init$(::java::util::Vector* v, int32_t start, int32_t lim);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::java::util::Vector* vector = nullptr;
	int32_t count = 0;
	int32_t limit = 0;
};

	} // naming
} // javax

#endif // _javax_naming_NameImplEnumerator_h_