#ifndef _com_sun_jndi_toolkit_ctx_StringHeadTail_h_
#define _com_sun_jndi_toolkit_ctx_StringHeadTail_h_
//$ class com.sun.jndi.toolkit.ctx.StringHeadTail
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $export StringHeadTail : public ::java::lang::Object {
	$class(StringHeadTail, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringHeadTail();
	void init$($String* head, $String* tail);
	void init$($String* head, $String* tail, int32_t status);
	virtual $String* getHead();
	virtual int32_t getStatus();
	virtual $String* getTail();
	virtual void setStatus(int32_t status);
	int32_t status = 0;
	$String* head = nullptr;
	$String* tail = nullptr;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_StringHeadTail_h_