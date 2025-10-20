#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest.h>

#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/security/cert/CertStoreException.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/LdapContext.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl.h>
#include <sun/security/util/Cache.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef BB0
#undef EMPTY_ATTRIBUTES
#undef STRING0

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $byteArray2 = $Array<int8_t, 2>;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $CertStoreException = ::java::security::cert::CertStoreException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $CommunicationException = ::javax::naming::CommunicationException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $NameNotFoundException = ::javax::naming::NameNotFoundException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $LdapContext = ::javax::naming::ldap::LdapContext;
using $LDAPCertStoreImpl = ::sun::security::provider::certpath::ldap::LDAPCertStoreImpl;
using $Cache = ::sun::security::util::Cache;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				namespace ldap {

$FieldInfo _LDAPCertStoreImpl$LDAPRequest_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl;", nullptr, $FINAL | $SYNTHETIC, $field(LDAPCertStoreImpl$LDAPRequest, this$0)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LDAPCertStoreImpl$LDAPRequest, name)},
	{"valueMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[[B>;", $PRIVATE, $field(LDAPCertStoreImpl$LDAPRequest, valueMap)},
	{"requestedAttributes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LDAPCertStoreImpl$LDAPRequest, requestedAttributes)},
	{}
};

$MethodInfo _LDAPCertStoreImpl$LDAPRequest_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/certpath/ldap/LDAPCertStoreImpl;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LDAPCertStoreImpl$LDAPRequest::*)($LDAPCertStoreImpl*,$String*)>(&LDAPCertStoreImpl$LDAPRequest::init$)), "java.security.cert.CertStoreException"},
	{"addRequestedAttribute", "(Ljava/lang/String;)V", nullptr, 0},
	{"cacheAttribute", "(Ljava/lang/String;[[B)V", nullptr, $PRIVATE, $method(static_cast<void(LDAPCertStoreImpl$LDAPRequest::*)($String*,$byteArray2*)>(&LDAPCertStoreImpl$LDAPRequest::cacheAttribute))},
	{"checkName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LDAPCertStoreImpl$LDAPRequest::*)($String*)>(&LDAPCertStoreImpl$LDAPRequest::checkName)), "java.security.cert.CertStoreException"},
	{"getAttributeValues", "(Ljavax/naming/directory/Attribute;)[[B", nullptr, $PRIVATE, $method(static_cast<$byteArray2*(LDAPCertStoreImpl$LDAPRequest::*)($Attribute*)>(&LDAPCertStoreImpl$LDAPRequest::getAttributeValues)), "javax.naming.NamingException"},
	{"getValueMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;[[B>;", $PRIVATE, $method(static_cast<$Map*(LDAPCertStoreImpl$LDAPRequest::*)()>(&LDAPCertStoreImpl$LDAPRequest::getValueMap)), "javax.naming.NamingException"},
	{"getValues", "(Ljava/lang/String;)[[B", nullptr, 0, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _LDAPCertStoreImpl$LDAPRequest_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.ldap.LDAPCertStoreImpl$LDAPRequest", "sun.security.provider.certpath.ldap.LDAPCertStoreImpl", "LDAPRequest", $PRIVATE},
	{}
};

$ClassInfo _LDAPCertStoreImpl$LDAPRequest_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.ldap.LDAPCertStoreImpl$LDAPRequest",
	"java.lang.Object",
	nullptr,
	_LDAPCertStoreImpl$LDAPRequest_FieldInfo_,
	_LDAPCertStoreImpl$LDAPRequest_MethodInfo_,
	nullptr,
	nullptr,
	_LDAPCertStoreImpl$LDAPRequest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.ldap.LDAPCertStoreImpl"
};

$Object* allocate$LDAPCertStoreImpl$LDAPRequest($Class* clazz) {
	return $of($alloc(LDAPCertStoreImpl$LDAPRequest));
}

void LDAPCertStoreImpl$LDAPRequest::init$($LDAPCertStoreImpl* this$0, $String* name) {
	$set(this, this$0, this$0);
	$set(this, name, checkName(name));
	$set(this, requestedAttributes, $new($ArrayList, 5));
}

$String* LDAPCertStoreImpl$LDAPRequest::checkName($String* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($CertStoreException, "Name absent"_s);
	}
	try {
		if ($$new($CompositeName, name)->size() > 1) {
			$throwNew($CertStoreException, $$str({"Invalid name: "_s, name}));
		}
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, ine, $catch());
		$throwNew($CertStoreException, $$str({"Invalid name: "_s, name}), ine);
	}
	return name;
}

void LDAPCertStoreImpl$LDAPRequest::addRequestedAttribute($String* attrId) {
	if (this->valueMap != nullptr) {
		$throwNew($IllegalStateException, "Request already sent"_s);
	}
	$nc(this->requestedAttributes)->add(attrId);
}

$byteArray2* LDAPCertStoreImpl$LDAPRequest::getValues($String* attrId) {
	$useLocalCurrentObjectStackCache();
	$init($LDAPCertStoreImpl);
	if ($LDAPCertStoreImpl::debug != nullptr && $Debug::isVerbose() && ((this->this$0->cacheHits + this->this$0->cacheMisses) % 50 == 0)) {
		$nc($LDAPCertStoreImpl::debug)->println($$str({"LDAPRequest Cache hits: "_s, $$str(this->this$0->cacheHits), "; misses: "_s, $$str(this->this$0->cacheMisses)}));
	}
	$var($String, cacheKey, $str({this->name, "|"_s, attrId}));
	$var($byteArray2, values, $cast($byteArray2, $nc(this->this$0->valueCache)->get(cacheKey)));
	if (values != nullptr) {
		++this->this$0->cacheHits;
		return values;
	}
	++this->this$0->cacheMisses;
	$var($Map, attrs, getValueMap());
	$assign(values, $cast($byteArray2, $nc(attrs)->get(attrId)));
	return values;
}

$Map* LDAPCertStoreImpl$LDAPRequest::getValueMap() {
	$useLocalCurrentObjectStackCache();
	if (this->valueMap != nullptr) {
		return this->valueMap;
	}
	$init($LDAPCertStoreImpl);
	if ($LDAPCertStoreImpl::debug != nullptr && $Debug::isVerbose()) {
		$nc($LDAPCertStoreImpl::debug)->println($$str({"LDAPRequest: "_s, this->name, ":"_s, this->requestedAttributes}));
		++this->this$0->requests;
		if (this->this$0->requests % 5 == 0) {
			$nc($LDAPCertStoreImpl::debug)->println($$str({"LDAP requests: "_s, $$str(this->this$0->requests)}));
		}
	}
	$set(this, valueMap, $new($HashMap, 8));
	$var($StringArray, attrIds, $fcast($StringArray, $nc(this->requestedAttributes)->toArray($LDAPCertStoreImpl::STRING0)));
	$var($Attributes, attrs, nullptr);
	if (this->this$0->communicationError) {
		$nc(this->this$0->ctx)->reconnect(nullptr);
		this->this$0->communicationError = false;
	}
	try {
		$assign(attrs, $nc(this->this$0->ctx)->getAttributes(this->name, attrIds));
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, lre, $catch());
		while (true) {
			try {
				$var($String, newName, $cast($String, $nc(lre)->getReferralInfo()));
				$var($URI, newUri, $new($URI, newName));
				if (!$nc($(newUri->getScheme()))->equalsIgnoreCase("ldap"_s)) {
					$throwNew($IllegalArgumentException, "Not LDAP"_s);
				}
				$var($String, newDn, newUri->getPath());
				if (newDn != nullptr && newDn->charAt(0) == u'/') {
					$assign(newDn, newDn->substring(1));
				}
				checkName(newDn);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$throwNew($NamingException, $$str({"Cannot follow referral to "_s, $($nc(lre)->getReferralInfo())}));
			}
			$var($LdapContext, refCtx, $cast($LdapContext, $nc(lre)->getReferralContext()));
			{
				$var($Throwable, var$0, nullptr);
				bool break$1 = false;
				bool continue$2 = false;
				try {
					try {
						$assign(attrs, $nc(refCtx)->getAttributes(this->name, attrIds));
						// break;
						break$1 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						$assign(lre, re);
						// continue;
						continue$2 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (break$1) {
					break;
				}
				if (continue$2) {
					continue;
				}
			}
		}
	} catch ($CommunicationException&) {
		$var($CommunicationException, ce, $catch());
		this->this$0->communicationError = true;
		$throw(ce);
	} catch ($NameNotFoundException&) {
		$var($NameNotFoundException, e, $catch());
		$assign(attrs, $LDAPCertStoreImpl::EMPTY_ATTRIBUTES);
	}
	{
		$var($Iterator, i$, $nc(this->requestedAttributes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, attrId, $cast($String, i$->next()));
			{
				$var($Attribute, attr, $nc(attrs)->get(attrId));
				$var($byteArray2, values, getAttributeValues(attr));
				cacheAttribute(attrId, values);
				$nc(this->valueMap)->put(attrId, values);
			}
		}
	}
	return this->valueMap;
}

void LDAPCertStoreImpl$LDAPRequest::cacheAttribute($String* attrId, $byteArray2* values) {
	$var($String, cacheKey, $str({this->name, "|"_s, attrId}));
	$nc(this->this$0->valueCache)->put(cacheKey, values);
}

$byteArray2* LDAPCertStoreImpl$LDAPRequest::getAttributeValues($Attribute* attr) {
	$useLocalCurrentObjectStackCache();
	$var($byteArray2, values, nullptr);
	if (attr == nullptr) {
		$init($LDAPCertStoreImpl);
		$assign(values, $LDAPCertStoreImpl::BB0);
	} else {
		$assign(values, $new($byteArray2, $nc(attr)->size()));
		int32_t i = 0;
		$var($NamingEnumeration, enum_, attr->getAll());
		while ($nc(enum_)->hasMore()) {
			$var($Object, obj, enum_->next());
			$init($LDAPCertStoreImpl);
			if ($LDAPCertStoreImpl::debug != nullptr) {
				if ($instanceOf($String, obj)) {
					$nc($LDAPCertStoreImpl::debug)->println($$str({"LDAPCertStore.getAttrValues() enum.next is a string!: "_s, obj}));
				}
			}
			$var($bytes, value, $cast($bytes, obj));
			values->set(i++, value);
		}
	}
	return values;
}

LDAPCertStoreImpl$LDAPRequest::LDAPCertStoreImpl$LDAPRequest() {
}

$Class* LDAPCertStoreImpl$LDAPRequest::load$($String* name, bool initialize) {
	$loadClass(LDAPCertStoreImpl$LDAPRequest, name, initialize, &_LDAPCertStoreImpl$LDAPRequest_ClassInfo_, allocate$LDAPCertStoreImpl$LDAPRequest);
	return class$;
}

$Class* LDAPCertStoreImpl$LDAPRequest::class$ = nullptr;

				} // ldap
			} // certpath
		} // provider
	} // security
} // sun