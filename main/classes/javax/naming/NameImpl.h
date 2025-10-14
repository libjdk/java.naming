#ifndef _javax_naming_NameImpl_h_
#define _javax_naming_NameImpl_h_
//$ class javax.naming.NameImpl
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FLAT")
#undef FLAT
#pragma push_macro("LEFT_TO_RIGHT")
#undef LEFT_TO_RIGHT
#pragma push_macro("RIGHT_TO_LEFT")
#undef RIGHT_TO_LEFT
#pragma push_macro("STYLE_ESCAPE")
#undef STYLE_ESCAPE
#pragma push_macro("STYLE_NONE")
#undef STYLE_NONE
#pragma push_macro("STYLE_QUOTE1")
#undef STYLE_QUOTE1
#pragma push_macro("STYLE_QUOTE2")
#undef STYLE_QUOTE2

namespace java {
	namespace util {
		class Enumeration;
		class Properties;
		class Vector;
	}
}

namespace javax {
	namespace naming {

class NameImpl : public ::java::lang::Object {
	$class(NameImpl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NameImpl();
	void init$(::java::util::Properties* syntax);
	void init$(::java::util::Properties* syntax, $String* n);
	void init$(::java::util::Properties* syntax, ::java::util::Enumeration* comps);
	virtual void add($String* comp);
	virtual void add(int32_t posn, $String* comp);
	virtual bool addAll(::java::util::Enumeration* comps);
	virtual bool addAll(int32_t posn, ::java::util::Enumeration* comps);
	virtual int32_t compareTo(::javax::naming::NameImpl* obj);
	virtual bool endsWith(int32_t posn, ::java::util::Enumeration* suffix);
	virtual bool equals(Object$* obj) override;
	int32_t extractComp($String* name, int32_t i, int32_t len, ::java::util::Vector* comps);
	virtual $String* get(int32_t posn);
	virtual ::java::util::Enumeration* getAll();
	static bool getBoolean(::java::util::Properties* p, $String* name);
	virtual ::java::util::Enumeration* getPrefix(int32_t posn);
	virtual ::java::util::Enumeration* getSuffix(int32_t posn);
	virtual int32_t hashCode() override;
	bool isA($String* n, int32_t i, $String* match);
	virtual bool isEmpty();
	bool isMeta($String* n, int32_t i);
	bool isSeparator($String* n, int32_t i);
	void recordNamingConvention(::java::util::Properties* p);
	virtual $Object* remove(int32_t posn);
	virtual int32_t size();
	int32_t skipSeparator($String* name, int32_t i);
	virtual bool startsWith(int32_t posn, ::java::util::Enumeration* prefix);
	$String* stringifyComp($String* comp);
	static bool toBoolean($String* name);
	virtual $String* toString() override;
	static const int8_t LEFT_TO_RIGHT = 1;
	static const int8_t RIGHT_TO_LEFT = 2;
	static const int8_t FLAT = 0;
	::java::util::Vector* components = nullptr;
	int8_t syntaxDirection = 0;
	$String* syntaxSeparator = nullptr;
	$String* syntaxSeparator2 = nullptr;
	bool syntaxCaseInsensitive = false;
	bool syntaxTrimBlanks = false;
	$String* syntaxEscape = nullptr;
	$String* syntaxBeginQuote1 = nullptr;
	$String* syntaxEndQuote1 = nullptr;
	$String* syntaxBeginQuote2 = nullptr;
	$String* syntaxEndQuote2 = nullptr;
	$String* syntaxAvaSeparator = nullptr;
	$String* syntaxTypevalSeparator = nullptr;
	static const int32_t STYLE_NONE = 0;
	static const int32_t STYLE_QUOTE1 = 1;
	static const int32_t STYLE_QUOTE2 = 2;
	static const int32_t STYLE_ESCAPE = 3;
	int32_t escapingStyle = 0;
};

	} // naming
} // javax

#pragma pop_macro("FLAT")
#pragma pop_macro("LEFT_TO_RIGHT")
#pragma pop_macro("RIGHT_TO_LEFT")
#pragma pop_macro("STYLE_ESCAPE")
#pragma pop_macro("STYLE_NONE")
#pragma pop_macro("STYLE_QUOTE1")
#pragma pop_macro("STYLE_QUOTE2")

#endif // _javax_naming_NameImpl_h_