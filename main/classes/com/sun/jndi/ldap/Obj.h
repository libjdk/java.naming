#ifndef _com_sun_jndi_ldap_Obj_h_
#define _com_sun_jndi_ldap_Obj_h_
//$ class com.sun.jndi.ldap.Obj
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE_OBJECT")
#undef BASE_OBJECT
#pragma push_macro("CLASSNAME")
#undef CLASSNAME
#pragma push_macro("CODEBASE")
#undef CODEBASE
#pragma push_macro("FACTORY")
#undef FACTORY
#pragma push_macro("JAVA_ATTRIBUTES")
#undef JAVA_ATTRIBUTES
#pragma push_macro("JAVA_OBJECT_CLASSES")
#undef JAVA_OBJECT_CLASSES
#pragma push_macro("JAVA_OBJECT_CLASSES_LOWER")
#undef JAVA_OBJECT_CLASSES_LOWER
#pragma push_macro("MAR_OBJECT")
#undef MAR_OBJECT
#pragma push_macro("OBJECT_CLASS")
#undef OBJECT_CLASS
#pragma push_macro("REF_ADDR")
#undef REF_ADDR
#pragma push_macro("REF_OBJECT")
#undef REF_OBJECT
#pragma push_macro("REMOTE_LOC")
#undef REMOTE_LOC
#pragma push_macro("SERIALIZED_DATA")
#undef SERIALIZED_DATA
#pragma push_macro("SER_OBJECT")
#undef SER_OBJECT
#pragma push_macro("STRUCTURAL")
#undef STRUCTURAL
#pragma push_macro("TYPENAME")
#undef TYPENAME

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class VersionHelper;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
		class Reference;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attribute;
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Obj : public ::java::lang::Object {
	$class(Obj, 0, ::java::lang::Object)
public:
	Obj();
	void init$();
	static $Object* decodeObject(::javax::naming::directory::Attributes* attrs);
	static ::javax::naming::Reference* decodeReference(::javax::naming::directory::Attributes* attrs, $StringArray* codebases);
	static $Object* decodeRmiObject($String* className, $String* rmiName, $StringArray* codebases);
	static $Object* deserializeObject($bytes* obj, ::java::lang::ClassLoader* cl);
	static ::javax::naming::directory::Attributes* determineBindAttrs(char16_t separator, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool cloned, ::javax::naming::Name* name, ::javax::naming::Context* ctx, ::java::util::Hashtable* env);
	static ::javax::naming::directory::Attributes* encodeObject(char16_t separator, Object$* obj, ::javax::naming::directory::Attributes* attrs, ::javax::naming::directory::Attribute* objectClass, bool cloned);
	static ::javax::naming::directory::Attributes* encodeReference(char16_t separator, ::javax::naming::Reference* ref, ::javax::naming::directory::Attributes* attrs, Object$* orig);
	static $StringArray* getCodebases(::javax::naming::directory::Attribute* codebaseAttr);
	static $bytes* serializeObject(Object$* obj);
	static ::com::sun::jndi::ldap::VersionHelper* helper;
	static $StringArray* JAVA_ATTRIBUTES;
	static const int32_t OBJECT_CLASS = 0;
	static const int32_t SERIALIZED_DATA = 1;
	static const int32_t CLASSNAME = 2;
	static const int32_t FACTORY = 3;
	static const int32_t CODEBASE = 4;
	static const int32_t REF_ADDR = 5;
	static const int32_t TYPENAME = 6;
	static const int32_t REMOTE_LOC = 7;
	static $StringArray* JAVA_OBJECT_CLASSES;
	static $StringArray* JAVA_OBJECT_CLASSES_LOWER;
	static const int32_t STRUCTURAL = 0;
	static const int32_t BASE_OBJECT = 1;
	static const int32_t REF_OBJECT = 2;
	static const int32_t SER_OBJECT = 3;
	static const int32_t MAR_OBJECT = 4;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("BASE_OBJECT")
#pragma pop_macro("CLASSNAME")
#pragma pop_macro("CODEBASE")
#pragma pop_macro("FACTORY")
#pragma pop_macro("JAVA_ATTRIBUTES")
#pragma pop_macro("JAVA_OBJECT_CLASSES")
#pragma pop_macro("JAVA_OBJECT_CLASSES_LOWER")
#pragma pop_macro("MAR_OBJECT")
#pragma pop_macro("OBJECT_CLASS")
#pragma pop_macro("REF_ADDR")
#pragma pop_macro("REF_OBJECT")
#pragma pop_macro("REMOTE_LOC")
#pragma pop_macro("SERIALIZED_DATA")
#pragma pop_macro("SER_OBJECT")
#pragma pop_macro("STRUCTURAL")
#pragma pop_macro("TYPENAME")

#endif // _com_sun_jndi_ldap_Obj_h_