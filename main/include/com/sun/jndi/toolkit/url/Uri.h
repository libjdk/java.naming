#ifndef _com_sun_jndi_toolkit_url_Uri_h_
#define _com_sun_jndi_toolkit_url_Uri_h_
//$ class com.sun.jndi.toolkit.url.Uri
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

class $import Uri : public ::java::lang::Object {
	$class(Uri, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Uri();
	void init$($String* uri);
	void init$();
	virtual $String* getHost();
	virtual $String* getPath();
	virtual int32_t getPort();
	virtual $String* getQuery();
	virtual $String* getScheme();
	virtual void init($String* uri);
	void parse($String* uri);
	virtual $String* toString() override;
	$String* uri = nullptr;
	$String* scheme = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	bool hasAuthority = false;
	$String* path = nullptr;
	$String* query = nullptr;
};

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_url_Uri_h_