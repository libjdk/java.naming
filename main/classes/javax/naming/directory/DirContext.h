#ifndef _javax_naming_directory_DirContext_h_
#define _javax_naming_directory_DirContext_h_
//$ interface javax.naming.directory.DirContext
//$ extends javax.naming.Context

#include <java/lang/Array.h>
#include <javax/naming/Context.h>

#pragma push_macro("ADD_ATTRIBUTE")
#undef ADD_ATTRIBUTE
#pragma push_macro("REMOVE_ATTRIBUTE")
#undef REMOVE_ATTRIBUTE
#pragma push_macro("REPLACE_ATTRIBUTE")
#undef REPLACE_ATTRIBUTE

namespace javax {
	namespace naming {
		class Name;
		class NamingEnumeration;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
			class ModificationItem;
			class SearchControls;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export DirContext : public ::javax::naming::Context {
	$interface(DirContext, $NO_CLASS_INIT, ::javax::naming::Context)
public:
	using ::javax::naming::Context::bind;
	virtual void bind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) {}
	virtual void bind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) {}
	using ::javax::naming::Context::createSubcontext;
	virtual ::javax::naming::directory::DirContext* createSubcontext(::javax::naming::Name* name, ::javax::naming::directory::Attributes* attrs) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* createSubcontext($String* name, ::javax::naming::directory::Attributes* attrs) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* getAttributes(::javax::naming::Name* name, $StringArray* attrIds) {return nullptr;}
	virtual ::javax::naming::directory::Attributes* getAttributes($String* name, $StringArray* attrIds) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* getSchema(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* getSchema($String* name) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition(::javax::naming::Name* name) {return nullptr;}
	virtual ::javax::naming::directory::DirContext* getSchemaClassDefinition($String* name) {return nullptr;}
	virtual void modifyAttributes(::javax::naming::Name* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs) {}
	virtual void modifyAttributes($String* name, int32_t mod_op, ::javax::naming::directory::Attributes* attrs) {}
	virtual void modifyAttributes(::javax::naming::Name* name, $Array<::javax::naming::directory::ModificationItem>* mods) {}
	virtual void modifyAttributes($String* name, $Array<::javax::naming::directory::ModificationItem>* mods) {}
	using ::javax::naming::Context::rebind;
	virtual void rebind(::javax::naming::Name* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) {}
	virtual void rebind($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs) {}
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search($String* name, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, ::javax::naming::directory::Attributes* matchingAttributes) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search($String* name, ::javax::naming::directory::Attributes* matchingAttributes) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, $String* filter, ::javax::naming::directory::SearchControls* cons) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search($String* name, $String* filter, ::javax::naming::directory::SearchControls* cons) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search(::javax::naming::Name* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* search($String* name, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons) {return nullptr;}
	static const int32_t ADD_ATTRIBUTE = 1;
	static const int32_t REPLACE_ATTRIBUTE = 2;
	static const int32_t REMOVE_ATTRIBUTE = 3;
};

		} // directory
	} // naming
} // javax

#pragma pop_macro("ADD_ATTRIBUTE")
#pragma pop_macro("REMOVE_ATTRIBUTE")
#pragma pop_macro("REPLACE_ATTRIBUTE")

#endif // _javax_naming_directory_DirContext_h_