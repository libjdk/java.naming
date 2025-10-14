#ifndef _com_sun_naming_internal_VersionHelper$InputStreamEnumeration_h_
#define _com_sun_naming_internal_VersionHelper$InputStreamEnumeration_h_
//$ class com.sun.naming.internal.VersionHelper$InputStreamEnumeration
//$ extends javax.naming.NamingEnumeration

#include <javax/naming/NamingEnumeration.h>

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {
				class VersionHelper;
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class VersionHelper$InputStreamEnumeration : public ::javax::naming::NamingEnumeration {
	$class(VersionHelper$InputStreamEnumeration, $NO_CLASS_INIT, ::javax::naming::NamingEnumeration)
public:
	VersionHelper$InputStreamEnumeration();
	void init$(::com::sun::naming::internal::VersionHelper* this$0, ::java::util::Enumeration* urls);
	virtual void close() override;
	::java::io::InputStream* getNextElement();
	virtual bool hasMore() override;
	virtual bool hasMoreElements() override;
	::java::io::InputStream* lambda$getNextElement$0();
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	::com::sun::naming::internal::VersionHelper* this$0 = nullptr;
	::java::util::Enumeration* urls = nullptr;
	::java::io::InputStream* nextElement$ = nullptr;
};

			} // internal
		} // naming
	} // sun
} // com

#endif // _com_sun_naming_internal_VersionHelper$InputStreamEnumeration_h_