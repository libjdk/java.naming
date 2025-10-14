#ifndef _javax_naming_directory_SearchControls_h_
#define _javax_naming_directory_SearchControls_h_
//$ class javax.naming.directory.SearchControls
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("OBJECT_SCOPE")
#undef OBJECT_SCOPE
#pragma push_macro("ONELEVEL_SCOPE")
#undef ONELEVEL_SCOPE
#pragma push_macro("SUBTREE_SCOPE")
#undef SUBTREE_SCOPE

namespace javax {
	namespace naming {
		namespace directory {

class $import SearchControls : public ::java::io::Serializable {
	$class(SearchControls, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	SearchControls();
	void init$();
	void init$(int32_t scope, int64_t countlim, int32_t timelim, $StringArray* attrs, bool retobj, bool deref);
	virtual int64_t getCountLimit();
	virtual bool getDerefLinkFlag();
	virtual $StringArray* getReturningAttributes();
	virtual bool getReturningObjFlag();
	virtual int32_t getSearchScope();
	virtual int32_t getTimeLimit();
	virtual void setCountLimit(int64_t limit);
	virtual void setDerefLinkFlag(bool on);
	virtual void setReturningAttributes($StringArray* attrs);
	virtual void setReturningObjFlag(bool on);
	virtual void setSearchScope(int32_t scope);
	virtual void setTimeLimit(int32_t ms);
	static const int32_t OBJECT_SCOPE = 0;
	static const int32_t ONELEVEL_SCOPE = 1;
	static const int32_t SUBTREE_SCOPE = 2;
	int32_t searchScope = 0;
	int32_t timeLimit = 0;
	bool derefLink = false;
	bool returnObj = false;
	int64_t countLimit = 0;
	$StringArray* attributesToReturn = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xDD935921DD0F3E33;
};

		} // directory
	} // naming
} // javax

#pragma pop_macro("OBJECT_SCOPE")
#pragma pop_macro("ONELEVEL_SCOPE")
#pragma pop_macro("SUBTREE_SCOPE")

#endif // _javax_naming_directory_SearchControls_h_