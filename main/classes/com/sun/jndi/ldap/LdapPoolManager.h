#ifndef _com_sun_jndi_ldap_LdapPoolManager_h_
#define _com_sun_jndi_ldap_LdapPoolManager_h_
//$ class com.sun.jndi.ldap.LdapPoolManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DEFAULT_AUTH_MECHS")
#undef DEFAULT_AUTH_MECHS
#pragma push_macro("DEFAULT_INIT_POOL_SIZE")
#undef DEFAULT_INIT_POOL_SIZE
#pragma push_macro("DEFAULT_MAX_POOL_SIZE")
#undef DEFAULT_MAX_POOL_SIZE
#pragma push_macro("DEFAULT_PREF_POOL_SIZE")
#undef DEFAULT_PREF_POOL_SIZE
#pragma push_macro("DEFAULT_PROTOCOLS")
#undef DEFAULT_PROTOCOLS
#pragma push_macro("DEFAULT_TIMEOUT")
#undef DEFAULT_TIMEOUT
#pragma push_macro("DIGEST")
#undef DIGEST
#pragma push_macro("INIT_POOL_SIZE")
#undef INIT_POOL_SIZE
#pragma push_macro("MAX_POOL_SIZE")
#undef MAX_POOL_SIZE
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("POOL_AUTH")
#undef POOL_AUTH
#pragma push_macro("POOL_PROTOCOL")
#undef POOL_PROTOCOL
#pragma push_macro("POOL_TIMEOUT")
#undef POOL_TIMEOUT
#pragma push_macro("PREF_POOL_SIZE")
#undef PREF_POOL_SIZE
#pragma push_macro("SASL_CALLBACK")
#undef SASL_CALLBACK
#pragma push_macro("SIMPLE")
#undef SIMPLE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapClient;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace pool {
					class Pool;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
		class Long;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapPoolManager : public ::java::lang::Object {
	$class(LdapPoolManager, 0, ::java::lang::Object)
public:
	LdapPoolManager();
	void init$();
	static void d($String* msg);
	static void d($String* msg, $String* o);
	static void expire(int64_t threshold);
	static int32_t findPool($String* mech);
	static int32_t getInteger($String* propName, int32_t defVal);
	static ::com::sun::jndi::ldap::LdapClient* getLdapClient($String* host, int32_t port, $String* socketFactory, int32_t connTimeout, int32_t readTimeout, ::java::io::OutputStream* trace, int32_t version, $String* authMech, $Array<::javax::naming::ldap::Control>* ctls, $String* protocol, $String* user, Object$* passwd, ::java::util::Hashtable* env);
	static int64_t getLong($String* propName, int64_t defVal);
	static $String* getProperty($String* propName, $String* defVal);
	static bool isPoolingAllowed($String* socketFactory, ::java::io::OutputStream* trace, $String* authMech, $String* protocol, ::java::util::Hashtable* env);
	static ::java::lang::Integer* lambda$getInteger$1($String* propName, int32_t defVal);
	static ::java::lang::Long* lambda$getLong$2($String* propName, int64_t defVal);
	static $String* lambda$getProperty$0($String* propName, $String* defVal);
	static void showStats(::java::io::PrintStream* out);
	static $String* DEBUG;
	static bool debug;
	static bool trace;
	static $String* POOL_AUTH;
	static $String* POOL_PROTOCOL;
	static $String* MAX_POOL_SIZE;
	static $String* PREF_POOL_SIZE;
	static $String* INIT_POOL_SIZE;
	static $String* POOL_TIMEOUT;
	static $String* SASL_CALLBACK;
	static const int32_t DEFAULT_MAX_POOL_SIZE = 0;
	static const int32_t DEFAULT_PREF_POOL_SIZE = 0;
	static const int32_t DEFAULT_INIT_POOL_SIZE = 1;
	static const int32_t DEFAULT_TIMEOUT = 0;
	static $String* DEFAULT_AUTH_MECHS;
	static $String* DEFAULT_PROTOCOLS;
	static const int32_t NONE = 0;
	static const int32_t SIMPLE = 1;
	static const int32_t DIGEST = 2;
	static int64_t idleTimeout;
	static int32_t maxSize;
	static int32_t prefSize;
	static int32_t initSize;
	static bool supportPlainProtocol;
	static bool supportSslProtocol;
	static $Array<::com::sun::jndi::ldap::pool::Pool>* pools;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DEFAULT_AUTH_MECHS")
#pragma pop_macro("DEFAULT_INIT_POOL_SIZE")
#pragma pop_macro("DEFAULT_MAX_POOL_SIZE")
#pragma pop_macro("DEFAULT_PREF_POOL_SIZE")
#pragma pop_macro("DEFAULT_PROTOCOLS")
#pragma pop_macro("DEFAULT_TIMEOUT")
#pragma pop_macro("DIGEST")
#pragma pop_macro("INIT_POOL_SIZE")
#pragma pop_macro("MAX_POOL_SIZE")
#pragma pop_macro("NONE")
#pragma pop_macro("POOL_AUTH")
#pragma pop_macro("POOL_PROTOCOL")
#pragma pop_macro("POOL_TIMEOUT")
#pragma pop_macro("PREF_POOL_SIZE")
#pragma pop_macro("SASL_CALLBACK")
#pragma pop_macro("SIMPLE")

#endif // _com_sun_jndi_ldap_LdapPoolManager_h_