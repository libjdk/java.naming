#ifndef _com_sun_jndi_ldap_LdapRequest_h_
#define _com_sun_jndi_ldap_LdapRequest_h_
//$ class com.sun.jndi.ldap.LdapRequest
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLOSE_MSG")
#undef CLOSE_MSG
#pragma push_macro("EOF")
#undef EOF
#pragma push_macro("TIMEOUT_MSG_FMT")
#undef TIMEOUT_MSG_FMT

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class BerDecoder;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class BlockingQueue;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapRequest : public ::java::lang::Object {
	$class(LdapRequest, 0, ::java::lang::Object)
public:
	LdapRequest();
	void init$(int32_t msgId, bool pause, int32_t replyQueueCapacity);
	bool addReplyBer(::com::sun::jndi::ldap::BerDecoder* ber);
	void cancel();
	void close();
	::com::sun::jndi::ldap::BerDecoder* getReplyBer(int64_t millis);
	bool hasSearchCompleted();
	bool isClosed();
	static ::com::sun::jndi::ldap::BerDecoder* EOF;
	static $String* CLOSE_MSG;
	static $String* TIMEOUT_MSG_FMT;
	::com::sun::jndi::ldap::LdapRequest* next = nullptr;
	int32_t msgId = 0;
	::java::util::concurrent::BlockingQueue* replies = nullptr;
	$volatile(bool) cancelled = false;
	$volatile(bool) closed = false;
	$volatile(bool) completed = false;
	bool pauseAfterReceipt = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("CLOSE_MSG")
#pragma pop_macro("EOF")
#pragma pop_macro("TIMEOUT_MSG_FMT")

#endif // _com_sun_jndi_ldap_LdapRequest_h_