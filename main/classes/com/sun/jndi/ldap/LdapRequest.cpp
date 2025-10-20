#include <com/sun/jndi/ldap/LdapRequest.h>

#include <com/sun/jndi/ldap/BerDecoder.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/concurrent/BlockingQueue.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

#undef CLOSE_MSG
#undef EOF
#undef LDAP_REP_RESULT
#undef MILLISECONDS
#undef TIMEOUT_MSG_FMT

using $BerDecoder = ::com::sun::jndi::ldap::BerDecoder;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Queue = ::java::util::Queue;
using $BlockingQueue = ::java::util::concurrent::BlockingQueue;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $CommunicationException = ::javax::naming::CommunicationException;
using $NamingException = ::javax::naming::NamingException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapRequest_FieldInfo_[] = {
	{"EOF", "Lcom/sun/jndi/ldap/BerDecoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapRequest, EOF)},
	{"CLOSE_MSG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapRequest, CLOSE_MSG)},
	{"TIMEOUT_MSG_FMT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapRequest, TIMEOUT_MSG_FMT)},
	{"next", "Lcom/sun/jndi/ldap/LdapRequest;", nullptr, 0, $field(LdapRequest, next)},
	{"msgId", "I", nullptr, $FINAL, $field(LdapRequest, msgId)},
	{"replies", "Ljava/util/concurrent/BlockingQueue;", "Ljava/util/concurrent/BlockingQueue<Lcom/sun/jndi/ldap/BerDecoder;>;", $PRIVATE | $FINAL, $field(LdapRequest, replies)},
	{"cancelled", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LdapRequest, cancelled)},
	{"closed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LdapRequest, closed)},
	{"completed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LdapRequest, completed)},
	{"pauseAfterReceipt", "Z", nullptr, $PRIVATE | $FINAL, $field(LdapRequest, pauseAfterReceipt)},
	{}
};

$MethodInfo _LdapRequest_MethodInfo_[] = {
	{"<init>", "(IZI)V", nullptr, 0, $method(static_cast<void(LdapRequest::*)(int32_t,bool,int32_t)>(&LdapRequest::init$))},
	{"addReplyBer", "(Lcom/sun/jndi/ldap/BerDecoder;)Z", nullptr, $SYNCHRONIZED, $method(static_cast<bool(LdapRequest::*)($BerDecoder*)>(&LdapRequest::addReplyBer))},
	{"cancel", "()V", nullptr, 0, $method(static_cast<void(LdapRequest::*)()>(&LdapRequest::cancel))},
	{"close", "()V", nullptr, $SYNCHRONIZED, $method(static_cast<void(LdapRequest::*)()>(&LdapRequest::close))},
	{"getReplyBer", "(J)Lcom/sun/jndi/ldap/BerDecoder;", nullptr, 0, $method(static_cast<$BerDecoder*(LdapRequest::*)(int64_t)>(&LdapRequest::getReplyBer)), "javax.naming.NamingException,java.lang.InterruptedException"},
	{"hasSearchCompleted", "()Z", nullptr, 0, $method(static_cast<bool(LdapRequest::*)()>(&LdapRequest::hasSearchCompleted))},
	{"isClosed", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LdapRequest::*)()>(&LdapRequest::isClosed))},
	{}
};

$ClassInfo _LdapRequest_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapRequest",
	"java.lang.Object",
	nullptr,
	_LdapRequest_FieldInfo_,
	_LdapRequest_MethodInfo_
};

$Object* allocate$LdapRequest($Class* clazz) {
	return $of($alloc(LdapRequest));
}

$BerDecoder* LdapRequest::EOF = nullptr;
$String* LdapRequest::CLOSE_MSG = nullptr;
$String* LdapRequest::TIMEOUT_MSG_FMT = nullptr;

void LdapRequest::init$(int32_t msgId, bool pause, int32_t replyQueueCapacity) {
	this->msgId = msgId;
	this->pauseAfterReceipt = pause;
	if (replyQueueCapacity == -1) {
		$set(this, replies, $new($LinkedBlockingQueue));
	} else {
		$set(this, replies, $new($LinkedBlockingQueue, 8 * replyQueueCapacity / 10));
	}
}

void LdapRequest::cancel() {
	this->cancelled = true;
	$nc(this->replies)->offer(LdapRequest::EOF);
}

void LdapRequest::close() {
	$synchronized(this) {
		this->closed = true;
		$nc(this->replies)->offer(LdapRequest::EOF);
	}
}

bool LdapRequest::isClosed() {
	bool var$0 = this->closed;
	if (var$0) {
		bool var$1 = $nc(this->replies)->size() == 0;
		var$0 = (var$1 || $equals($nc(this->replies)->peek(), LdapRequest::EOF));
	}
	return var$0;
}

bool LdapRequest::addReplyBer($BerDecoder* ber) {
	$synchronized(this) {
		if (this->cancelled || this->closed) {
			return false;
		}
		try {
			$nc(ber)->parseSeq(nullptr);
			ber->parseInt();
			this->completed = (ber->peekByte() == $LdapClient::LDAP_REP_RESULT);
		} catch ($IOException&) {
			$catch();
		}
		$nc(ber)->reset();
		try {
			$nc(this->replies)->put(ber);
		} catch ($InterruptedException&) {
			$catch();
		}
		return this->pauseAfterReceipt;
	}
}

$BerDecoder* LdapRequest::getReplyBer(int64_t millis) {
	$useLocalCurrentObjectStackCache();
	if (this->cancelled) {
		$throwNew($CommunicationException, $$str({"Request: "_s, $$str(this->msgId), " cancelled"_s}));
	}
	if (isClosed()) {
		$throwNew($NamingException, LdapRequest::CLOSE_MSG);
	}
	$init($TimeUnit);
	$var($BerDecoder, result, millis > 0 ? $cast($BerDecoder, $nc(this->replies)->poll(millis, $TimeUnit::MILLISECONDS)) : $cast($BerDecoder, $nc(this->replies)->take()));
	if (this->cancelled) {
		$throwNew($CommunicationException, $$str({"Request: "_s, $$str(this->msgId), " cancelled"_s}));
	}
	if (result == nullptr) {
		$throwNew($NamingException, $($String::format(LdapRequest::TIMEOUT_MSG_FMT, $$new($ObjectArray, {$($of($Long::valueOf(millis)))}))));
	}
	if (result == LdapRequest::EOF) {
		$throwNew($NamingException, LdapRequest::CLOSE_MSG);
	}
	return result;
}

bool LdapRequest::hasSearchCompleted() {
	return this->completed;
}

void clinit$LdapRequest($Class* class$) {
	$assignStatic(LdapRequest::CLOSE_MSG, "LDAP connection has been closed"_s);
	$assignStatic(LdapRequest::TIMEOUT_MSG_FMT, "LDAP response read timed out, timeout used: %d ms."_s);
	$assignStatic(LdapRequest::EOF, $new($BerDecoder, $$new($bytes, 0), -1, 0));
}

LdapRequest::LdapRequest() {
}

$Class* LdapRequest::load$($String* name, bool initialize) {
	$loadClass(LdapRequest, name, initialize, &_LdapRequest_ClassInfo_, clinit$LdapRequest, allocate$LdapRequest);
	return class$;
}

$Class* LdapRequest::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com