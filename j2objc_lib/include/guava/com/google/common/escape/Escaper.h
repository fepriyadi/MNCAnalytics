//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/escape/Escaper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeEscaper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonEscapeEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeEscaper || defined(INCLUDE_ComGoogleCommonEscapeEscaper))
#define ComGoogleCommonEscapeEscaper_

@protocol ComGoogleCommonBaseFunction;

/*!
 @brief An object that converts literal text into a format safe for inclusion in a particular context
  (such as an XML document).Typically (but not always), the inverse process of "unescaping" the
  text is performed automatically by the relevant parser.
 <p>For example, an XML escaper would convert the literal string <code>"Foo<Bar>"</code> into <code>"Foo&lt;Bar&gt;"</code>
  to prevent <code>"<Bar>"</code> from being confused with an XML tag. When the
  resulting XML document is parsed, the parser API will return this text as the original literal
  string <code>"Foo<Bar>"</code>.
  
 <p>An <code>Escaper</code> instance is required to be stateless, and safe when used concurrently by
  multiple threads. 
 <p>Because, in general, escaping operates on the code points of a string and not on its
  individual <code>char</code> values, it is not safe to assume that <code>escape(s)</code> is equivalent to 
 <code>escape(s.substring(0, n)) + escape(s.substring(n))</code> for arbitrary <code>n</code>. This is
  because of the possibility of splitting a surrogate pair. The only case in which it is safe to
  escape strings and concatenate the results is if you can rule out this possibility, either by
  splitting an existing long string into short strings adaptively around surrogate
  pairs, or by starting
  with short strings already known to be free of unpaired surrogates. 
 <p>The two primary implementations of this interface are <code>CharEscaper</code> and <code>UnicodeEscaper</code>
 . They are heavily optimized for performance and greatly simplify the task of
  implementing new escapers. It is strongly recommended that when implementing a new escaper you
  extend one of these classes. If you find that you are unable to achieve the desired behavior
  using either of these classes, please contact the Java libraries team for advice. 
 <p>Popular escapers are defined as constants in classes like <code>com.google.common.html.HtmlEscapers</code>
  and <code>com.google.common.xml.XmlEscapers</code>. To create
  your own escapers, use <code>CharEscaperBuilder</code>, or extend <code>CharEscaper</code> or <code>UnicodeEscaper</code>
 .
 @author David Beaumont
 @since 15.0
 */
@interface ComGoogleCommonEscapeEscaper : NSObject

#pragma mark Public

/*!
 @brief Returns a <code>Function</code> that invokes <code>escape(String)</code> on this escaper.
 */
- (id<ComGoogleCommonBaseFunction>)asFunction;

/*!
 @brief Returns the escaped form of a given literal string.
 <p>Note that this method may treat input characters differently depending on the specific
  escaper implementation. 
 <ul>
    <li><code>UnicodeEscaper</code> handles <a href="http://en.wikipedia.org/wiki/UTF-16">UTF-16</a>
        correctly, including surrogate character pairs. If the input is badly formed the escaper
        should throw <code>IllegalArgumentException</code>.
    <li><code>CharEscaper</code> handles Java characters independently and does not verify the input
        for well formed characters. A <code>CharEscaper</code> should not be used in situations where
        input is not guaranteed to be restricted to the Basic Multilingual Plane (BMP). 
 </ul>
 @param string the literal string to be escaped
 @return the escaped form of <code>string</code>
 @throw NullPointerExceptionif <code>string</code> is null
 @throw IllegalArgumentExceptionif <code>string</code> contains badly formed UTF-16 or cannot be
      escaped for any other reason
 */
- (NSString *)escapeWithNSString:(NSString * __nonnull)string;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeEscaper_init(ComGoogleCommonEscapeEscaper *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeEscaper)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeEscaper")
