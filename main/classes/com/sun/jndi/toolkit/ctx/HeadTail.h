#ifndef _com_sun_jndi_toolkit_ctx_HeadTail_h_
#define _com_sun_jndi_toolkit_ctx_HeadTail_h_
//$ class com.sun.jndi.toolkit.ctx.HeadTail
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace naming {
		class Name;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

class $export HeadTail : public ::java::lang::Object {
	$class(HeadTail, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HeadTail();
	void init$(::javax::naming::Name* head, ::javax::naming::Name* tail);
	void init$(::javax::naming::Name* head, ::javax::naming::Name* tail, int32_t status);
	virtual ::javax::naming::Name* getHead();
	virtual int32_t getStatus();
	virtual ::javax::naming::Name* getTail();
	virtual void setStatus(int32_t status);
	int32_t status = 0;
	::javax::naming::Name* head = nullptr;
	::javax::naming::Name* tail = nullptr;
};

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_ctx_HeadTail_h_