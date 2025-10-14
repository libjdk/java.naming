#ifndef _com_sun_naming_internal_NamedWeakReference_h_
#define _com_sun_naming_internal_NamedWeakReference_h_
//$ class com.sun.naming.internal.NamedWeakReference
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class NamedWeakReference : public ::java::lang::ref::WeakReference {
	$class(NamedWeakReference, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	NamedWeakReference();
	void init$(Object$* referent, $String* name);
	virtual $String* getName();
	$String* name = nullptr;
};

			} // internal
		} // naming
	} // sun
} // com

#endif // _com_sun_naming_internal_NamedWeakReference_h_