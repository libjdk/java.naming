#ifndef _com_sun_jndi_ldap_NotifierArgs_h_
#define _com_sun_jndi_ldap_NotifierArgs_h_
//$ class com.sun.jndi.ldap.NotifierArgs
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ADDED_MASK")
#undef ADDED_MASK
#pragma push_macro("CHANGED_MASK")
#undef CHANGED_MASK
#pragma push_macro("REMOVED_MASK")
#undef REMOVED_MASK
#pragma push_macro("RENAMED_MASK")
#undef RENAMED_MASK

namespace javax {
	namespace naming {
		namespace directory {
			class SearchControls;
		}
	}
}
namespace javax {
	namespace naming {
		namespace event {
			class NamingListener;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class NotifierArgs : public ::java::lang::Object {
	$class(NotifierArgs, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NotifierArgs();
	void init$($String* name, int32_t scope, ::javax::naming::event::NamingListener* l);
	void init$($String* name, $String* filter, ::javax::naming::directory::SearchControls* ctls, ::javax::naming::event::NamingListener* l);
	bool checkControls(::javax::naming::directory::SearchControls* ctls);
	static bool checkStringArrays($StringArray* s1, $StringArray* s2);
	int32_t controlsCode();
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static const int32_t ADDED_MASK = 1;
	static const int32_t REMOVED_MASK = 2;
	static const int32_t CHANGED_MASK = 4;
	static const int32_t RENAMED_MASK = 8;
	$String* name = nullptr;
	$String* filter = nullptr;
	::javax::naming::directory::SearchControls* controls = nullptr;
	int32_t mask = 0;
	int32_t sum = 0;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ADDED_MASK")
#pragma pop_macro("CHANGED_MASK")
#pragma pop_macro("REMOVED_MASK")
#pragma pop_macro("RENAMED_MASK")

#endif // _com_sun_jndi_ldap_NotifierArgs_h_