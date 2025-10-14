#include <javax/naming/Context.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <jcpp.h>

#undef APPLET
#undef AUTHORITATIVE
#undef BATCHSIZE
#undef DNS_URL
#undef INITIAL_CONTEXT_FACTORY
#undef LANGUAGE
#undef OBJECT_FACTORIES
#undef PROVIDER_URL
#undef REFERRAL
#undef SECURITY_AUTHENTICATION
#undef SECURITY_CREDENTIALS
#undef SECURITY_PRINCIPAL
#undef SECURITY_PROTOCOL
#undef STATE_FACTORIES
#undef URL_PKG_PREFIXES

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Hashtable = ::java::util::Hashtable;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;

namespace javax {
	namespace naming {

$NamedAttribute Context_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Context_FieldAnnotations_APPLET[] = {
	{"Ljava/lang/Deprecated;", Context_Attribute_var$0},
	{}
};

$FieldInfo _Context_FieldInfo_[] = {
	{"INITIAL_CONTEXT_FACTORY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, INITIAL_CONTEXT_FACTORY)},
	{"OBJECT_FACTORIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, OBJECT_FACTORIES)},
	{"STATE_FACTORIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, STATE_FACTORIES)},
	{"URL_PKG_PREFIXES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, URL_PKG_PREFIXES)},
	{"PROVIDER_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, PROVIDER_URL)},
	{"DNS_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, DNS_URL)},
	{"AUTHORITATIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, AUTHORITATIVE)},
	{"BATCHSIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, BATCHSIZE)},
	{"REFERRAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, REFERRAL)},
	{"SECURITY_PROTOCOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, SECURITY_PROTOCOL)},
	{"SECURITY_AUTHENTICATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, SECURITY_AUTHENTICATION)},
	{"SECURITY_PRINCIPAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, SECURITY_PRINCIPAL)},
	{"SECURITY_CREDENTIALS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, SECURITY_CREDENTIALS)},
	{"LANGUAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Context, LANGUAGE)},
	{"APPLET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $staticField(Context, APPLET), _Context_FieldAnnotations_APPLET},
	{}
};

$MethodInfo _Context_MethodInfo_[] = {
	{"addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<**>;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _Context_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.Context",
	nullptr,
	nullptr,
	_Context_FieldInfo_,
	_Context_MethodInfo_
};

$Object* allocate$Context($Class* clazz) {
	return $of($alloc(Context));
}


$String* Context::INITIAL_CONTEXT_FACTORY = nullptr;

$String* Context::OBJECT_FACTORIES = nullptr;

$String* Context::STATE_FACTORIES = nullptr;

$String* Context::URL_PKG_PREFIXES = nullptr;

$String* Context::PROVIDER_URL = nullptr;

$String* Context::DNS_URL = nullptr;

$String* Context::AUTHORITATIVE = nullptr;

$String* Context::BATCHSIZE = nullptr;

$String* Context::REFERRAL = nullptr;

$String* Context::SECURITY_PROTOCOL = nullptr;

$String* Context::SECURITY_AUTHENTICATION = nullptr;

$String* Context::SECURITY_PRINCIPAL = nullptr;

$String* Context::SECURITY_CREDENTIALS = nullptr;

$String* Context::LANGUAGE = nullptr;

$String* Context::APPLET = nullptr;

void clinit$Context($Class* class$) {
	$assignStatic(Context::INITIAL_CONTEXT_FACTORY, "java.naming.factory.initial"_s);
	$assignStatic(Context::OBJECT_FACTORIES, "java.naming.factory.object"_s);
	$assignStatic(Context::STATE_FACTORIES, "java.naming.factory.state"_s);
	$assignStatic(Context::URL_PKG_PREFIXES, "java.naming.factory.url.pkgs"_s);
	$assignStatic(Context::PROVIDER_URL, "java.naming.provider.url"_s);
	$assignStatic(Context::DNS_URL, "java.naming.dns.url"_s);
	$assignStatic(Context::AUTHORITATIVE, "java.naming.authoritative"_s);
	$assignStatic(Context::BATCHSIZE, "java.naming.batchsize"_s);
	$assignStatic(Context::REFERRAL, "java.naming.referral"_s);
	$assignStatic(Context::SECURITY_PROTOCOL, "java.naming.security.protocol"_s);
	$assignStatic(Context::SECURITY_AUTHENTICATION, "java.naming.security.authentication"_s);
	$assignStatic(Context::SECURITY_PRINCIPAL, "java.naming.security.principal"_s);
	$assignStatic(Context::SECURITY_CREDENTIALS, "java.naming.security.credentials"_s);
	$assignStatic(Context::LANGUAGE, "java.naming.language"_s);
	$assignStatic(Context::APPLET, "java.naming.applet"_s);
}

$Class* Context::load$($String* name, bool initialize) {
	$loadClass(Context, name, initialize, &_Context_ClassInfo_, clinit$Context, allocate$Context);
	return class$;
}

$Class* Context::class$ = nullptr;

	} // naming
} // javax