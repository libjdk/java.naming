#ifndef _com_sun_jndi_toolkit_dir_SearchFilter_h_
#define _com_sun_jndi_toolkit_dir_SearchFilter_h_
//$ class com.sun.jndi.toolkit.dir.SearchFilter
//$ extends com.sun.jndi.toolkit.dir.AttrFilter

#include <com/sun/jndi/toolkit/dir/AttrFilter.h>
#include <java/lang/Array.h>

#pragma push_macro("AND_TOKEN")
#undef AND_TOKEN
#pragma push_macro("APPROX_MATCH")
#undef APPROX_MATCH
#pragma push_macro("APPROX_TOKEN")
#undef APPROX_TOKEN
#pragma push_macro("BEGIN_FILTER_TOKEN")
#undef BEGIN_FILTER_TOKEN
#pragma push_macro("END_FILTER_TOKEN")
#undef END_FILTER_TOKEN
#pragma push_macro("EQUAL_MATCH")
#undef EQUAL_MATCH
#pragma push_macro("EQUAL_TOKEN")
#undef EQUAL_TOKEN
#pragma push_macro("EXTEND_TOKEN")
#undef EXTEND_TOKEN
#pragma push_macro("GREATER_MATCH")
#undef GREATER_MATCH
#pragma push_macro("GREATER_TOKEN")
#undef GREATER_TOKEN
#pragma push_macro("LESS_MATCH")
#undef LESS_MATCH
#pragma push_macro("LESS_TOKEN")
#undef LESS_TOKEN
#pragma push_macro("NOT_TOKEN")
#undef NOT_TOKEN
#pragma push_macro("OR_TOKEN")
#undef OR_TOKEN
#pragma push_macro("WILDCARD_TOKEN")
#undef WILDCARD_TOKEN

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {
					class SearchFilter$StringFilter;
				}
			}
		}
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class SearchFilter : public ::com::sun::jndi::toolkit::dir::AttrFilter {
	$class(SearchFilter, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::AttrFilter)
public:
	SearchFilter();
	void init$($String* filter);
	virtual bool check(::javax::naming::directory::Attributes* targetAttrs) override;
	virtual void consumeChar();
	virtual void consumeChars(int32_t i);
	virtual ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter* createNextFilter();
	static int32_t findUnescaped(char16_t ch, $String* val, int32_t start);
	static $String* format(::javax::naming::directory::Attributes* attrs);
	static $String* format($String* expr, $ObjectArray* args);
	virtual char16_t getCurrentChar();
	static $String* getEncodedStringRep(Object$* obj);
	virtual void normalizeFilter();
	virtual char16_t relCharAt(int32_t i);
	virtual int32_t relIndexOf(int32_t ch);
	virtual $String* relSubstring(int32_t beginIndex, int32_t endIndex);
	static ::javax::naming::directory::Attributes* selectAttributes(::javax::naming::directory::Attributes* originals, $StringArray* attrIDs);
	void skipWhiteSpace();
	$String* filter = nullptr;
	int32_t pos = 0;
	::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter* rootFilter = nullptr;
	static const bool debug = false;
	static const char16_t BEGIN_FILTER_TOKEN = ((char16_t)40);
	static const char16_t END_FILTER_TOKEN = ((char16_t)41);
	static const char16_t AND_TOKEN = ((char16_t)38);
	static const char16_t OR_TOKEN = ((char16_t)124);
	static const char16_t NOT_TOKEN = ((char16_t)33);
	static const char16_t EQUAL_TOKEN = ((char16_t)61);
	static const char16_t APPROX_TOKEN = ((char16_t)126);
	static const char16_t LESS_TOKEN = ((char16_t)60);
	static const char16_t GREATER_TOKEN = ((char16_t)62);
	static const char16_t EXTEND_TOKEN = ((char16_t)58);
	static const char16_t WILDCARD_TOKEN = ((char16_t)42);
	static const int32_t EQUAL_MATCH = 1;
	static const int32_t APPROX_MATCH = 2;
	static const int32_t GREATER_MATCH = 3;
	static const int32_t LESS_MATCH = 4;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#pragma pop_macro("AND_TOKEN")
#pragma pop_macro("APPROX_MATCH")
#pragma pop_macro("APPROX_TOKEN")
#pragma pop_macro("BEGIN_FILTER_TOKEN")
#pragma pop_macro("END_FILTER_TOKEN")
#pragma pop_macro("EQUAL_MATCH")
#pragma pop_macro("EQUAL_TOKEN")
#pragma pop_macro("EXTEND_TOKEN")
#pragma pop_macro("GREATER_MATCH")
#pragma pop_macro("GREATER_TOKEN")
#pragma pop_macro("LESS_MATCH")
#pragma pop_macro("LESS_TOKEN")
#pragma pop_macro("NOT_TOKEN")
#pragma pop_macro("OR_TOKEN")
#pragma pop_macro("WILDCARD_TOKEN")

#endif // _com_sun_jndi_toolkit_dir_SearchFilter_h_