#include <com/sun/jndi/ldap/Obj.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapCtxFactory.h>
#include <com/sun/jndi/ldap/Obj$LoaderInputStream.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Hashtable.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/Referenceable.h>
#include <javax/naming/StringRefAddr.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/InvalidAttributeValueException.h>
#include <javax/naming/directory/InvalidAttributesException.h>
#include <javax/naming/spi/DirStateFactory$Result.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef BASE_OBJECT
#undef CLASSNAME
#undef CODEBASE
#undef FACTORY
#undef JAVA_ATTRIBUTES
#undef JAVA_OBJECT_CLASSES
#undef JAVA_OBJECT_CLASSES_LOWER
#undef MAR_OBJECT
#undef OBJECT_CLASS
#undef REF_ADDR
#undef REF_OBJECT
#undef REMOTE_LOC
#undef SERIALIZED_DATA
#undef SER_OBJECT
#undef STRUCTURAL
#undef TYPENAME

using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapCtxFactory = ::com::sun::jndi::ldap::LdapCtxFactory;
using $Obj$LoaderInputStream = ::com::sun::jndi::ldap::Obj$LoaderInputStream;
using $VersionHelper = ::com::sun::jndi::ldap::VersionHelper;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Hashtable = ::java::util::Hashtable;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $Referenceable = ::javax::naming::Referenceable;
using $StringRefAddr = ::javax::naming::StringRefAddr;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $InvalidAttributeValueException = ::javax::naming::directory::InvalidAttributeValueException;
using $InvalidAttributesException = ::javax::naming::directory::InvalidAttributesException;
using $DirStateFactory$Result = ::javax::naming::spi::DirStateFactory$Result;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$CompoundAttribute _Obj_FieldAnnotations_REMOTE_LOC[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Obj_FieldInfo_[] = {
	{"helper", "Lcom/sun/jndi/ldap/VersionHelper;", nullptr, $STATIC, $staticField(Obj, helper)},
	{"JAVA_ATTRIBUTES", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Obj, JAVA_ATTRIBUTES)},
	{"OBJECT_CLASS", "I", nullptr, $STATIC | $FINAL, $constField(Obj, OBJECT_CLASS)},
	{"SERIALIZED_DATA", "I", nullptr, $STATIC | $FINAL, $constField(Obj, SERIALIZED_DATA)},
	{"CLASSNAME", "I", nullptr, $STATIC | $FINAL, $constField(Obj, CLASSNAME)},
	{"FACTORY", "I", nullptr, $STATIC | $FINAL, $constField(Obj, FACTORY)},
	{"CODEBASE", "I", nullptr, $STATIC | $FINAL, $constField(Obj, CODEBASE)},
	{"REF_ADDR", "I", nullptr, $STATIC | $FINAL, $constField(Obj, REF_ADDR)},
	{"TYPENAME", "I", nullptr, $STATIC | $FINAL, $constField(Obj, TYPENAME)},
	{"REMOTE_LOC", "I", nullptr, $PRIVATE | $STATIC | $FINAL | $DEPRECATED, $constField(Obj, REMOTE_LOC), _Obj_FieldAnnotations_REMOTE_LOC},
	{"JAVA_OBJECT_CLASSES", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Obj, JAVA_OBJECT_CLASSES)},
	{"JAVA_OBJECT_CLASSES_LOWER", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Obj, JAVA_OBJECT_CLASSES_LOWER)},
	{"STRUCTURAL", "I", nullptr, $STATIC | $FINAL, $constField(Obj, STRUCTURAL)},
	{"BASE_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(Obj, BASE_OBJECT)},
	{"REF_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(Obj, REF_OBJECT)},
	{"SER_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(Obj, SER_OBJECT)},
	{"MAR_OBJECT", "I", nullptr, $STATIC | $FINAL, $constField(Obj, MAR_OBJECT)},
	{}
};

$MethodInfo _Obj_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Obj::*)()>(&Obj::init$))},
	{"decodeObject", "(Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($Attributes*)>(&Obj::decodeObject)), "javax.naming.NamingException"},
	{"decodeReference", "(Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/Reference;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Reference*(*)($Attributes*,$StringArray*)>(&Obj::decodeReference)), "javax.naming.NamingException,java.io.IOException"},
	{"decodeRmiObject", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($String*,$String*,$StringArray*)>(&Obj::decodeRmiObject)), "javax.naming.NamingException"},
	{"deserializeObject", "([BLjava/lang/ClassLoader;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($bytes*,$ClassLoader*)>(&Obj::deserializeObject)), "javax.naming.NamingException"},
	{"determineBindAttrs", "(CLjava/lang/Object;Ljavax/naming/directory/Attributes;ZLjavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljavax/naming/directory/Attributes;", "(CLjava/lang/Object;Ljavax/naming/directory/Attributes;ZLjavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljavax/naming/directory/Attributes;", $STATIC, $method(static_cast<$Attributes*(*)(char16_t,Object$*,$Attributes*,bool,$Name*,$Context*,$Hashtable*)>(&Obj::determineBindAttrs)), "javax.naming.NamingException"},
	{"encodeObject", "(CLjava/lang/Object;Ljavax/naming/directory/Attributes;Ljavax/naming/directory/Attribute;Z)Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Attributes*(*)(char16_t,Object$*,$Attributes*,$Attribute*,bool)>(&Obj::encodeObject)), "javax.naming.NamingException"},
	{"encodeReference", "(CLjavax/naming/Reference;Ljavax/naming/directory/Attributes;Ljava/lang/Object;)Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Attributes*(*)(char16_t,$Reference*,$Attributes*,Object$*)>(&Obj::encodeReference)), "javax.naming.NamingException"},
	{"getCodebases", "(Ljavax/naming/directory/Attribute;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($Attribute*)>(&Obj::getCodebases)), "javax.naming.NamingException"},
	{"serializeObject", "(Ljava/lang/Object;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(Object$*)>(&Obj::serializeObject)), "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _Obj_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Obj$LoaderInputStream", "com.sun.jndi.ldap.Obj", "LoaderInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Obj_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.Obj",
	"java.lang.Object",
	nullptr,
	_Obj_FieldInfo_,
	_Obj_MethodInfo_,
	nullptr,
	nullptr,
	_Obj_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Obj$LoaderInputStream"
};

$Object* allocate$Obj($Class* clazz) {
	return $of($alloc(Obj));
}

$VersionHelper* Obj::helper = nullptr;
$StringArray* Obj::JAVA_ATTRIBUTES = nullptr;
$StringArray* Obj::JAVA_OBJECT_CLASSES = nullptr;
$StringArray* Obj::JAVA_OBJECT_CLASSES_LOWER = nullptr;

void Obj::init$() {
}

$Attributes* Obj::encodeObject(char16_t separator, Object$* obj, $Attributes* attrs$renamed, $Attribute* objectClass, bool cloned) {
	$init(Obj);
	$var($Attributes, attrs, attrs$renamed);
	bool var$0 = $nc(objectClass)->size() == 0;
	if (!var$0) {
		bool var$1 = $nc(objectClass)->size() == 1;
		var$0 = (var$1 && objectClass->contains("top"_s));
	}
	bool structural = (var$0);
	if (structural) {
		objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::STRUCTURAL));
	}
	if ($instanceOf($Referenceable, obj)) {
		objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::BASE_OBJECT));
		objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::REF_OBJECT));
		if (!cloned) {
			$assign(attrs, $cast($Attributes, $nc(attrs)->clone()));
		}
		$nc(attrs)->put(objectClass);
		return (encodeReference(separator, $($nc(($cast($Referenceable, obj)))->getReference()), attrs, obj));
	} else if ($instanceOf($Reference, obj)) {
		objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::BASE_OBJECT));
		objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::REF_OBJECT));
		if (!cloned) {
			$assign(attrs, $cast($Attributes, $nc(attrs)->clone()));
		}
		$nc(attrs)->put(objectClass);
		return (encodeReference(separator, $cast($Reference, obj), attrs, nullptr));
	} else if ($instanceOf($Serializable, obj)) {
		objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::BASE_OBJECT));
		bool var$2 = objectClass->contains($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::MAR_OBJECT));
		if (!(var$2 || objectClass->contains($nc(Obj::JAVA_OBJECT_CLASSES_LOWER)->get(Obj::MAR_OBJECT)))) {
			objectClass->add($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::SER_OBJECT));
		}
		if (!cloned) {
			$assign(attrs, $cast($Attributes, $nc(attrs)->clone()));
		}
		$nc(attrs)->put(objectClass);
		attrs->put($$new($BasicAttribute, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::SERIALIZED_DATA), $($of(serializeObject(obj)))));
		if (attrs->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CLASSNAME)) == nullptr) {
			attrs->put($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CLASSNAME), $($nc($of(obj))->getClass()->getName()));
		}
		if (attrs->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::TYPENAME)) == nullptr) {
			$var($Attribute, tAttr, $LdapCtxFactory::createTypeNameAttr($nc($of(obj))->getClass()));
			if (tAttr != nullptr) {
				attrs->put(tAttr);
			}
		}
	} else if ($instanceOf($DirContext, obj)) {
	} else {
		$throwNew($IllegalArgumentException, "can only bind Referenceable, Serializable, DirContext"_s);
	}
	return attrs;
}

$StringArray* Obj::getCodebases($Attribute* codebaseAttr) {
	$init(Obj);
	if (codebaseAttr == nullptr) {
		return nullptr;
	} else {
		$var($StringTokenizer, parser, $new($StringTokenizer, $cast($String, $($nc(codebaseAttr)->get()))));
		$var($Vector, vec, $new($Vector, 10));
		while (parser->hasMoreTokens()) {
			vec->addElement($(parser->nextToken()));
		}
		$var($StringArray, answer, $new($StringArray, vec->size()));
		for (int32_t i = 0; i < answer->length; ++i) {
			answer->set(i, $cast($String, $(vec->elementAt(i))));
		}
		return answer;
	}
}

$Object* Obj::decodeObject($Attributes* attrs) {
	$init(Obj);
	$var($Attribute, attr, nullptr);
	$var($StringArray, codebases, getCodebases($($nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CODEBASE)))));
	try {
		if (($assign(attr, $nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::SERIALIZED_DATA)))) != nullptr) {
			if (!$VersionHelper::isSerialDataAllowed()) {
				$throwNew($NamingException, "Object deserialization is not allowed"_s);
			}
			$var($ClassLoader, cl, $nc(Obj::helper)->getURLClassLoader(codebases));
			return $of(deserializeObject($cast($bytes, $($nc(attr)->get())), cl));
		} else {
			if (($assign(attr, attrs->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REMOTE_LOC)))) != nullptr) {
				$var($String, var$0, $cast($String, $nc($(attrs->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CLASSNAME))))->get()));
				return $of(decodeRmiObject(var$0, $cast($String, $($nc(attr)->get())), codebases));
			}
		}
		$assign(attr, $nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::OBJECT_CLASS)));
		bool var$1 = attr != nullptr;
		if (var$1) {
			bool var$2 = attr->contains($nc(Obj::JAVA_OBJECT_CLASSES)->get(Obj::REF_OBJECT));
			var$1 = (var$2 || attr->contains($nc(Obj::JAVA_OBJECT_CLASSES_LOWER)->get(Obj::REF_OBJECT)));
		}
		if (var$1) {
			return $of(decodeReference(attrs, codebases));
		}
		return $of(nullptr);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	$shouldNotReachHere();
}

$Attributes* Obj::encodeReference(char16_t separator, $Reference* ref, $Attributes* attrs, Object$* orig) {
	$init(Obj);
	if (ref == nullptr) {
		return attrs;
	}
	$var($String, s, nullptr);
	if (($assign(s, $nc(ref)->getClassName())) != nullptr) {
		$nc(attrs)->put($$new($BasicAttribute, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CLASSNAME), $of(s)));
	}
	if (($assign(s, $nc(ref)->getFactoryClassName())) != nullptr) {
		$nc(attrs)->put($$new($BasicAttribute, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::FACTORY), $of(s)));
	}
	if (($assign(s, $nc(ref)->getFactoryClassLocation())) != nullptr) {
		$nc(attrs)->put($$new($BasicAttribute, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CODEBASE), $of(s)));
	}
	if (orig != nullptr && $nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::TYPENAME)) != nullptr) {
		$var($Attribute, tAttr, $LdapCtxFactory::createTypeNameAttr($of(orig)->getClass()));
		if (tAttr != nullptr) {
			attrs->put(tAttr);
		}
	}
	int32_t count = $nc(ref)->size();
	if (count > 0) {
		$var($Attribute, refAttr, $new($BasicAttribute, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR)));
		$var($RefAddr, refAddr, nullptr);
		$var($Base64$Encoder, encoder, nullptr);
		for (int32_t i = 0; i < count; ++i) {
			$assign(refAddr, ref->get(i));
			if ($instanceOf($StringRefAddr, refAddr)) {
				$var($String, var$0, $$str({""_s, $$str(separator), $$str(i), $$str(separator), $($nc(refAddr)->getType()), $$str(separator)}));
				refAttr->add($$concat(var$0, $(refAddr->getContent())));
			} else {
				if (encoder == nullptr) {
					$assign(encoder, $Base64::getMimeEncoder());
				}
				$var($String, var$1, $$str({""_s, $$str(separator), $$str(i), $$str(separator), $($nc(refAddr)->getType()), $$str(separator), $$str(separator)}));
				refAttr->add($$concat(var$1, $($nc(encoder)->encodeToString($(serializeObject(refAddr))))));
			}
		}
		$nc(attrs)->put(refAttr);
	}
	return attrs;
}

$Object* Obj::decodeRmiObject($String* className, $String* rmiName, $StringArray* codebases) {
	$init(Obj);
	return $of($new($Reference, className, $$new($StringRefAddr, "URL"_s, rmiName)));
}

$Reference* Obj::decodeReference($Attributes* attrs, $StringArray* codebases) {
	$init(Obj);
	$var($Attribute, attr, nullptr);
	$var($String, className, nullptr);
	$var($String, factory, nullptr);
	if (($assign(attr, $nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CLASSNAME)))) != nullptr) {
		$assign(className, $cast($String, $nc(attr)->get()));
	} else {
		$throwNew($InvalidAttributesException, $$str({$nc(Obj::JAVA_ATTRIBUTES)->get(Obj::CLASSNAME), " attribute is required"_s}));
	}
	if (($assign(attr, $nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::FACTORY)))) != nullptr) {
		$assign(factory, $cast($String, $nc(attr)->get()));
	}
	$var($Reference, ref, $new($Reference, className, factory, (codebases != nullptr ? $nc(codebases)->get(0) : ($String*)nullptr)));
	if (($assign(attr, $nc(attrs)->get($nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR)))) != nullptr) {
		$var($String, val, nullptr);
		$var($String, posnStr, nullptr);
		$var($String, type, nullptr);
		char16_t separator = 0;
		int32_t start = 0;
		int32_t sep = 0;
		int32_t posn = 0;
		$var($Base64$Decoder, decoder, nullptr);
		$var($ClassLoader, cl, $nc(Obj::helper)->getURLClassLoader(codebases));
		$var($Vector, refAddrList, $new($Vector));
		refAddrList->setSize($nc(attr)->size());
		{
			$var($NamingEnumeration, vals, $nc(attr)->getAll());
			for (; $nc(vals)->hasMore();) {
				$assign(val, $cast($String, vals->next()));
				if ($nc(val)->length() == 0) {
					$throwNew($InvalidAttributeValueException, $$str({"malformed "_s, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR), " attribute - empty attribute value"_s}));
				}
				separator = $nc(val)->charAt(0);
				start = 1;
				if ((sep = val->indexOf((int32_t)separator, start)) < 0) {
					$throwNew($InvalidAttributeValueException, $$str({"malformed "_s, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR), " attribute - separator \'"_s, $$str(separator), "\'not found"_s}));
				}
				if (($assign(posnStr, val->substring(start, sep))) == nullptr) {
					$throwNew($InvalidAttributeValueException, $$str({"malformed "_s, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR), " attribute - empty RefAddr position"_s}));
				}
				try {
					posn = $Integer::parseInt(posnStr);
				} catch ($NumberFormatException&) {
					$var($NumberFormatException, nfe, $catch());
					$throwNew($InvalidAttributeValueException, $$str({"malformed "_s, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR), " attribute - RefAddr position not an integer"_s}));
				}
				start = sep + 1;
				if ((sep = val->indexOf((int32_t)separator, start)) < 0) {
					$throwNew($InvalidAttributeValueException, $$str({"malformed "_s, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR), " attribute - RefAddr type not found"_s}));
				}
				if (($assign(type, val->substring(start, sep))) == nullptr) {
					$throwNew($InvalidAttributeValueException, $$str({"malformed "_s, $nc(Obj::JAVA_ATTRIBUTES)->get(Obj::REF_ADDR), " attribute - empty RefAddr type"_s}));
				}
				start = sep + 1;
				if (start == val->length()) {
					refAddrList->setElementAt($$new($StringRefAddr, type, nullptr), posn);
				} else if (val->charAt(start) == separator) {
					++start;
					if (decoder == nullptr) {
						$assign(decoder, $Base64::getMimeDecoder());
					}
					$var($RefAddr, ra, $cast($RefAddr, deserializeObject($($nc(decoder)->decode($($(val->substring(start))->getBytes()))), cl)));
					refAddrList->setElementAt(ra, posn);
				} else {
					refAddrList->setElementAt($$new($StringRefAddr, type, $(val->substring(start))), posn);
				}
			}
		}
		for (int32_t i = 0; i < refAddrList->size(); ++i) {
			ref->add($cast($RefAddr, $(refAddrList->elementAt(i))));
		}
	}
	return (ref);
}

$bytes* Obj::serializeObject(Object$* obj) {
	$init(Obj);
	try {
		$var($ByteArrayOutputStream, bytes, $new($ByteArrayOutputStream));
		{
			$var($ObjectOutputStream, serial, $new($ObjectOutputStream, bytes));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						serial->writeObject(obj);
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							serial->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					serial->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
		return (bytes->toByteArray());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	$shouldNotReachHere();
}

$Object* Obj::deserializeObject($bytes* obj, $ClassLoader* cl) {
	$init(Obj);
	try {
		$var($ByteArrayInputStream, bytes, $new($ByteArrayInputStream, obj));
		try {
			$var($ObjectInputStream, deserial, cl == nullptr ? $new($ObjectInputStream, bytes) : static_cast<$ObjectInputStream*>($new($Obj$LoaderInputStream, bytes, cl)));
			{
				$var($Throwable, var$0, nullptr);
				$var($Object, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$assign(var$2, $nc(deserial)->readObject());
						return$1 = true;
						goto $finally;
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						if (deserial != nullptr) {
							try {
								deserial->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					if (deserial != nullptr) {
						deserial->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$var($NamingException, ne, $new($NamingException));
			ne->setRootCause(e);
			$throw(ne);
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	$shouldNotReachHere();
}

$Attributes* Obj::determineBindAttrs(char16_t separator, Object$* obj$renamed, $Attributes* attrs$renamed, bool cloned, $Name* name, $Context* ctx, $Hashtable* env) {
	$init(Obj);
	$var($Object, obj, obj$renamed);
	$var($Attributes, attrs, attrs$renamed);
	$var($DirStateFactory$Result, res, $DirectoryManager::getStateToBind(obj, name, ctx, env, attrs));
	$assign(obj, $nc(res)->getObject());
	$assign(attrs, res->getAttributes());
	if (obj == nullptr) {
		return attrs;
	}
	if ((attrs == nullptr) && ($instanceOf($DirContext, obj))) {
		cloned = true;
		$assign(attrs, $nc(($cast($DirContext, obj)))->getAttributes(""_s));
	}
	bool ocNeedsCloning = false;
	$var($Attribute, objectClass, nullptr);
	if (attrs == nullptr || $nc(attrs)->size() == 0) {
		$assign(attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
		cloned = true;
		$assign(objectClass, $new($BasicAttribute, "objectClass"_s, $of("top"_s)));
	} else {
		$assign(objectClass, attrs->get("objectClass"_s));
		if (objectClass == nullptr && !attrs->isCaseIgnored()) {
			$assign(objectClass, attrs->get("objectclass"_s));
		}
		if (objectClass == nullptr) {
			$assign(objectClass, $new($BasicAttribute, "objectClass"_s, $of("top"_s)));
		} else if (ocNeedsCloning || !cloned) {
			$assign(objectClass, $cast($Attribute, $nc(objectClass)->clone()));
		}
	}
	$assign(attrs, encodeObject(separator, obj, attrs, objectClass, cloned));
	return attrs;
}

void clinit$Obj($Class* class$) {
	$assignStatic(Obj::helper, $VersionHelper::getVersionHelper());
	$assignStatic(Obj::JAVA_ATTRIBUTES, $new($StringArray, {
		"objectClass"_s,
		"javaSerializedData"_s,
		"javaClassName"_s,
		"javaFactory"_s,
		"javaCodeBase"_s,
		"javaReferenceAddress"_s,
		"javaClassNames"_s,
		"javaRemoteLocation"_s
	}));
	$assignStatic(Obj::JAVA_OBJECT_CLASSES, $new($StringArray, {
		"javaContainer"_s,
		"javaObject"_s,
		"javaNamingReference"_s,
		"javaSerializedObject"_s,
		"javaMarshalledObject"_s
	}));
	$assignStatic(Obj::JAVA_OBJECT_CLASSES_LOWER, $new($StringArray, {
		"javacontainer"_s,
		"javaobject"_s,
		"javanamingreference"_s,
		"javaserializedobject"_s,
		"javamarshalledobject"_s
	}));
}

Obj::Obj() {
}

$Class* Obj::load$($String* name, bool initialize) {
	$loadClass(Obj, name, initialize, &_Obj_ClassInfo_, clinit$Obj, allocate$Obj);
	return class$;
}

$Class* Obj::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com