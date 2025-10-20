#include <com/sun/jndi/toolkit/url/Uri.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

$FieldInfo _Uri_FieldInfo_[] = {
	{"uri", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Uri, uri)},
	{"scheme", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Uri, scheme)},
	{"host", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Uri, host)},
	{"port", "I", nullptr, $PROTECTED, $field(Uri, port)},
	{"hasAuthority", "Z", nullptr, $PROTECTED, $field(Uri, hasAuthority)},
	{"path", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Uri, path)},
	{"query", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Uri, query)},
	{}
};

$MethodInfo _Uri_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Uri::*)($String*)>(&Uri::init$)), "java.net.MalformedURLException"},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Uri::*)()>(&Uri::init$))},
	{"getHost", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPort", "()I", nullptr, $PUBLIC},
	{"getQuery", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getScheme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.net.MalformedURLException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Uri::*)($String*)>(&Uri::parse)), "java.net.MalformedURLException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Uri_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.url.Uri",
	"java.lang.Object",
	nullptr,
	_Uri_FieldInfo_,
	_Uri_MethodInfo_
};

$Object* allocate$Uri($Class* clazz) {
	return $of($alloc(Uri));
}

void Uri::init$($String* uri) {
	$set(this, host, nullptr);
	this->port = -1;
	$set(this, query, nullptr);
	init(uri);
}

void Uri::init$() {
	$set(this, host, nullptr);
	this->port = -1;
	$set(this, query, nullptr);
}

void Uri::init($String* uri) {
	$set(this, uri, uri);
	parse(uri);
}

$String* Uri::getScheme() {
	return this->scheme;
}

$String* Uri::getHost() {
	return this->host;
}

int32_t Uri::getPort() {
	return this->port;
}

$String* Uri::getPath() {
	return this->path;
}

$String* Uri::getQuery() {
	return this->query;
}

$String* Uri::toString() {
	return this->uri;
}

void Uri::parse($String* uri) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	i = $nc(uri)->indexOf((int32_t)u':');
	if (i < 0) {
		$throwNew($MalformedURLException, $$str({"Invalid URI: "_s, uri}));
	}
	$set(this, scheme, uri->substring(0, i));
	++i;
	this->hasAuthority = uri->startsWith("//"_s, i);
	if (this->hasAuthority) {
		i += 2;
		int32_t slash = uri->indexOf((int32_t)u'/', i);
		if (slash < 0) {
			slash = uri->length();
		}
		if (uri->startsWith("["_s, i)) {
			int32_t brac = uri->indexOf((int32_t)u']', i + 1);
			if (brac < 0 || brac > slash) {
				$throwNew($MalformedURLException, $$str({"Invalid URI: "_s, uri}));
			}
			$set(this, host, uri->substring(i, brac + 1));
			i = brac + 1;
		} else {
			int32_t colon = uri->indexOf((int32_t)u':', i);
			int32_t hostEnd = (colon < 0 || colon > slash) ? slash : colon;
			if (i < hostEnd) {
				$set(this, host, uri->substring(i, hostEnd));
			}
			i = hostEnd;
		}
		if ((i + 1 < slash) && uri->startsWith(":"_s, i)) {
			++i;
			this->port = $Integer::parseInt($(uri->substring(i, slash)));
		}
		i = slash;
	}
	int32_t qmark = uri->indexOf((int32_t)u'?', i);
	if (qmark < 0) {
		$set(this, path, uri->substring(i));
	} else {
		$set(this, path, uri->substring(i, qmark));
		$set(this, query, uri->substring(qmark));
	}
}

Uri::Uri() {
}

$Class* Uri::load$($String* name, bool initialize) {
	$loadClass(Uri, name, initialize, &_Uri_ClassInfo_, allocate$Uri);
	return class$;
}

$Class* Uri::class$ = nullptr;

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com