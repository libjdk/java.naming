#ifndef _javax_naming_directory_SearchResult_h_
#define _javax_naming_directory_SearchResult_h_
//$ class javax.naming.directory.SearchResult
//$ extends javax.naming.Binding

#include <javax/naming/Binding.h>

namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $import SearchResult : public ::javax::naming::Binding {
	$class(SearchResult, $NO_CLASS_INIT, ::javax::naming::Binding)
public:
	SearchResult();
	void init$($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs);
	void init$($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool isRelative);
	void init$($String* name, $String* className, Object$* obj, ::javax::naming::directory::Attributes* attrs);
	void init$($String* name, $String* className, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool isRelative);
	virtual ::javax::naming::directory::Attributes* getAttributes();
	virtual void setAttributes(::javax::naming::directory::Attributes* attrs);
	virtual $String* toString() override;
	::javax::naming::directory::Attributes* attrs = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x80E805ECC9ED1C5C;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_SearchResult_h_