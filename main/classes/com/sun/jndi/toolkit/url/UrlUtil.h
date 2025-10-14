#ifndef _com_sun_jndi_toolkit_url_UrlUtil_h_
#define _com_sun_jndi_toolkit_url_UrlUtil_h_
//$ class com.sun.jndi.toolkit.url.UrlUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

class $export UrlUtil : public ::java::lang::Object {
	$class(UrlUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UrlUtil();
	void init$();
	static $String* decode($String* s);
	static $String* decode($String* s, $String* enc);
	static $String* encode($String* s, $String* enc);
};

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_url_UrlUtil_h_