//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/Splitter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseSplitter")
#ifdef RESTRICT_ComGoogleCommonBaseSplitter
#define INCLUDE_ALL_ComGoogleCommonBaseSplitter 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseSplitter 1
#endif
#undef RESTRICT_ComGoogleCommonBaseSplitter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseSplitter_) && (INCLUDE_ALL_ComGoogleCommonBaseSplitter || defined(INCLUDE_ComGoogleCommonBaseSplitter))
#define ComGoogleCommonBaseSplitter_

@class ComGoogleCommonBaseCharMatcher;
@class ComGoogleCommonBaseSplitter_MapSplitter;
@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaUtilList;

/*!
 @brief Extracts non-overlapping substrings from an input string, typically by recognizing appearances of
  a <i>separator</i> sequence.This separator can be specified as a single character
 , fixed string, regular expression or 
 <code>CharMatcher</code> instance.
 Or, instead of using a separator at all, a
  splitter can extract adjacent substrings of a given fixed length.
  
 <p>For example, this expression: 
 @code
 Splitter.on(',').split("foo,bar,qux")
  
 
@endcode
  ... produces an <code>Iterable</code> containing <code>"foo"</code>, <code>"bar"</code> and <code>"qux"</code>, in
  that order. 
 <p>By default, <code>Splitter</code>'s behavior is simplistic and unassuming. The following
  expression: 
 @code
 Splitter.on(',').split(" foo,,,  bar ,") 
 
@endcode
  ... yields the substrings <code>[" foo", "", "", " bar ", ""]</code>. If this is not the desired
  behavior, use configuration methods to obtain a <i>new</i> splitter instance with modified
  behavior: 
 @code
 private static final Splitter MY_SPLITTER = Splitter.on(',')
      .trimResults()
      .omitEmptyStrings(); 
 
@endcode
  
 <p>Now <code>MY_SPLITTER.split("foo,,, bar ,")</code> returns just <code>["foo", "bar"]</code>. Note that
  the order in which these configuration methods are called is never significant. 
 <p><b>Warning:</b> Splitter instances are immutable. Invoking a configuration method has no
  effect on the receiving instance; you must store and use the new splitter instance it returns
  instead. 
 @code
 // Do NOT do this
  Splitter splitter = Splitter.on('/');
  splitter.trimResults(); // does nothing!
  return splitter.split("wrong / wrong / wrong"); 
 
@endcode
  
 <p>For separator-based splitters that do not use <code>omitEmptyStrings</code>, an input string
  containing <code>n</code> occurrences of the separator naturally yields an iterable of size <code>n +
  1</code>
 . So if the separator does not occur anywhere in the input, a single substring is returned
  containing the entire input. Consequently, all splitters split the empty string to <code>[""]</code>
  (note: even fixed-length splitters). 
 <p>Splitter instances are thread-safe immutable, and are therefore safe to store as <code>static
  final</code>
  constants. 
 <p>The <code>Joiner</code> class provides the inverse operation to splitting, but note that a
  round-trip between the two should be assumed to be lossy. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/StringsExplained#splitter">
 <code>Splitter</code></a>.
 @author Julien Silland
 @author Jesse Wilson
 @author Kevin Bourrillion
 @author Louis Wasserman
 @since 1.0
 */
@interface ComGoogleCommonBaseSplitter : NSObject

#pragma mark Public

/*!
 @brief Returns a splitter that divides strings into pieces of the given length.For example, <code>Splitter.fixedLength(2).split("abcde")</code>
  returns an iterable containing <code>["ab", "cd",
  "e"]</code>
 .
 The last piece can be smaller than <code>length</code> but will never be empty. 
 <p><b>Note:</b> if <code>fixedLength</code> is used in conjunction with <code>limit</code>, the final
  split piece <i>may be longer than the specified fixed length</i>. This is because the splitter
  will <i>stop splitting when the limit is reached</i>, and just return the final piece as-is. 
 <p><b>Exception:</b> for consistency with separator-based splitters, <code>split("")</code> does not
  yield an empty iterable, but an iterable containing <code>""</code>. This is the only case in which 
 <code>Iterables.size(split(input))</code> does not equal <code>IntMath.divide(input.length(),
  length, CEILING)</code>
 . To avoid this behavior, use <code>omitEmptyStrings</code>.
 @param length the desired length of pieces after splitting, a positive integer
 @return a splitter, with default settings, that can split into fixed sized pieces
 @throw IllegalArgumentExceptionif <code>length</code> is zero or negative
 */
+ (ComGoogleCommonBaseSplitter *)fixedLengthWithInt:(jint)length;

/*!
 @brief Returns a splitter that behaves equivalently to <code>this</code> splitter but stops splitting after
  it reaches the limit.The limit defines the maximum number of items returned by the iterator,
  or the maximum size of the list returned by <code>splitToList</code>.
 <p>For example, <code>Splitter.on(',').limit(3).split("a,b,c,d")</code> returns an iterable
  containing <code>["a", "b", "c,d"]</code>. When omitting empty strings, the omitted strings do not
  count. Hence, <code>Splitter.on(',').limit(3).omitEmptyStrings().split("a,,,b,,,c,d")</code> returns
  an iterable containing <code>["a", "b", "c,d"</code>. When trim is requested, all entries are
  trimmed, including the last. Hence <code>Splitter.on(',').limit(3).trimResults().split(" a , b
  , c , d ")</code>
  results in <code>["a", "b", "c , d"]</code>.
 @param maxItems the maximum number of items returned
 @return a splitter with the desired configuration
 @since 9.0
 */
- (ComGoogleCommonBaseSplitter *)limitWithInt:(jint)maxItems;

/*!
 @brief Returns a splitter that behaves equivalently to <code>this</code> splitter, but automatically omits
  empty strings from the results.For example, <code>Splitter.on(',').omitEmptyStrings().split(",a,,,b,c,,")</code>
  returns an iterable containing only 
 <code>["a", "b", "c"]</code>.
 <p>If either <code>trimResults</code> option is also specified when creating a splitter, that
  splitter always trims results first before checking for emptiness. So, for example, <code>Splitter.on(':').omitEmptyStrings().trimResults().split(": : : ")</code>
  returns an empty iterable. 
 <p>Note that it is ordinarily not possible for <code>split(CharSequence)</code> to return an empty
  iterable, but when using this option, it can (if the input sequence consists of nothing but
  separators).
 @return a splitter with the desired configuration
 */
- (ComGoogleCommonBaseSplitter *)omitEmptyStrings;

/*!
 @brief Returns a splitter that uses the given single-character separator.For example, <code>Splitter.on(',').split("foo,,bar")</code>
  returns an iterable containing <code>["foo", "", "bar"]</code>.
 @param separator the character to recognize as a separator
 @return a splitter, with default settings, that recognizes that separator
 */
+ (ComGoogleCommonBaseSplitter *)onWithChar:(jchar)separator;

/*!
 @brief Returns a splitter that considers any single character matched by the given <code>CharMatcher</code>
  to be a separator.For example, <code>Splitter.on(CharMatcher.anyOf(";,")).split("foo,;bar,quux")</code>
  returns an iterable containing 
 <code>["foo", "", "bar", "quux"]</code>.
 @param separatorMatcher a <code>CharMatcher</code>  that determines whether a character is a
       separator
 @return a splitter, with default settings, that uses this matcher
 */
+ (ComGoogleCommonBaseSplitter *)onWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher * __nonnull)separatorMatcher;

/*!
 @brief Returns a splitter that considers any subsequence matching <code>pattern</code> to be a separator.
 For example, <code>Splitter.on(Pattern.compile("\r?\n")).split(entireFile)</code> splits a string
  into lines whether it uses DOS-style or UNIX-style line terminators.
 @param separatorPattern the pattern that determines whether a subsequence is a separator. This      pattern may not match the empty string.
 @return a splitter, with default settings, that uses this pattern
 @throw IllegalArgumentExceptionif <code>separatorPattern</code> matches the empty string
 */
+ (ComGoogleCommonBaseSplitter *)onWithJavaUtilRegexPattern:(JavaUtilRegexPattern * __nonnull)separatorPattern;

/*!
 @brief Returns a splitter that uses the given fixed string as a separator.For example, <code>Splitter.on(", ").split("foo, bar,baz")</code>
  returns an iterable containing <code>["foo",
  "bar,baz"]</code>
 .
 @param separator the literal, nonempty string to recognize as a separator
 @return a splitter, with default settings, that recognizes that separator
 */
+ (ComGoogleCommonBaseSplitter *)onWithNSString:(NSString * __nonnull)separator;

/*!
 @brief Returns a splitter that considers any subsequence matching a given pattern (regular expression)
  to be a separator.For example, <code>Splitter.onPattern("\r?
 \n").split(entireFile)</code> splits a
  string into lines whether it uses DOS-style or UNIX-style line terminators. This is equivalent
  to <code>Splitter.on(Pattern.compile(pattern))</code>.
 @param separatorPattern the pattern that determines whether a subsequence is a separator. This      pattern may not match the empty string.
 @return a splitter, with default settings, that uses this pattern
 @throw IllegalArgumentExceptionif <code>separatorPattern</code> matches the empty string or is a
      malformed expression
 */
+ (ComGoogleCommonBaseSplitter *)onPatternWithNSString:(NSString * __nonnull)separatorPattern;

/*!
 @brief Splits <code>sequence</code> into string components and makes them available through an <code>Iterator</code>
 , which may be lazily evaluated.If you want an eagerly computed <code>List</code>, use 
 <code>splitToList(CharSequence)</code>.
 @param sequence the sequence of characters to split
 @return an iteration over the segments split from the parameter
 */
- (id<JavaLangIterable>)splitWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)sequence;

/*!
 @brief Splits <code>sequence</code> into string components and returns them as an immutable list.If you
  want an <code>Iterable</code> which may be lazily evaluated, use <code>split(CharSequence)</code>.
 @param sequence the sequence of characters to split
 @return an immutable list of the segments split from the parameter
 @since 15.0
 */
- (id<JavaUtilList>)splitToListWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)sequence;

/*!
 @brief Returns a splitter that behaves equivalently to <code>this</code> splitter, but automatically
  removes leading and trailing whitespace from each returned
  substring; equivalent to <code>trimResults(CharMatcher.whitespace())</code>.For example, <code>Splitter.on(',').trimResults().split(" a, b ,c ")</code>
  returns an iterable containing <code>["a",
  "b", "c"]</code>
 .
 @return a splitter with the desired configuration
 */
- (ComGoogleCommonBaseSplitter *)trimResults;

/*!
 @brief Returns a splitter that behaves equivalently to <code>this</code> splitter, but removes all leading
  or trailing characters matching the given <code>CharMatcher</code> from each returned substring.For
  example, <code>Splitter.on(',').trimResults(CharMatcher.is('_')).split("_a ,_b_ ,c__")</code>
  returns an iterable containing <code>["a ", "b_ ", "c"]</code>.
 @param trimmer a <code>CharMatcher</code>  that determines whether a character should be removed from
       the beginning/end of a subsequence
 @return a splitter with the desired configuration
 */
- (ComGoogleCommonBaseSplitter *)trimResultsWithComGoogleCommonBaseCharMatcher:(ComGoogleCommonBaseCharMatcher * __nonnull)trimmer;

/*!
 @brief Returns a <code>MapSplitter</code> which splits entries based on this splitter, and splits entries
  into keys and values using the specified separator.
 @since 14.0
 */
- (ComGoogleCommonBaseSplitter_MapSplitter *)withKeyValueSeparatorWithChar:(jchar)separator;

/*!
 @brief Returns a <code>MapSplitter</code> which splits entries based on this splitter, and splits entries
  into keys and values using the specified key-value splitter.
 <p>Note: Any configuration option configured on this splitter, such as <code>trimResults</code>,
  does not change the behavior of the <code>keyValueSplitter</code>.
  
 <p>Example:
  
 @code
 String toSplit = " x -> y, z-> a ";
  Splitter outerSplitter = Splitter.on(',').trimResults();
  MapSplitter mapSplitter = outerSplitter.withKeyValueSeparator(Splitter.on("->"));
  Map<String, String> result = mapSplitter.split(toSplit);
  assertThat(result).isEqualTo(ImmutableMap.of("x ", " y", "z", " a")); 
 
@endcode
 @since 10.0
 */
- (ComGoogleCommonBaseSplitter_MapSplitter *)withKeyValueSeparatorWithComGoogleCommonBaseSplitter:(ComGoogleCommonBaseSplitter * __nonnull)keyValueSplitter;

/*!
 @brief Returns a <code>MapSplitter</code> which splits entries based on this splitter, and splits entries
  into keys and values using the specified separator.
 @since 10.0
 */
- (ComGoogleCommonBaseSplitter_MapSplitter *)withKeyValueSeparatorWithNSString:(NSString * __nonnull)separator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSplitter)

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithChar_(jchar separator);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithComGoogleCommonBaseCharMatcher_(ComGoogleCommonBaseCharMatcher *separatorMatcher);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithNSString_(NSString *separator);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onWithJavaUtilRegexPattern_(JavaUtilRegexPattern *separatorPattern);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_onPatternWithNSString_(NSString *separatorPattern);

FOUNDATION_EXPORT ComGoogleCommonBaseSplitter *ComGoogleCommonBaseSplitter_fixedLengthWithInt_(jint length);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSplitter)

#endif

#if !defined (ComGoogleCommonBaseSplitter_MapSplitter_) && (INCLUDE_ALL_ComGoogleCommonBaseSplitter || defined(INCLUDE_ComGoogleCommonBaseSplitter_MapSplitter))
#define ComGoogleCommonBaseSplitter_MapSplitter_

@protocol JavaLangCharSequence;
@protocol JavaUtilMap;

/*!
 @brief An object that splits strings into maps as <code>Splitter</code> splits iterables and lists.Like
  <code>Splitter</code>, it is thread-safe and immutable.
 The common way to build instances is by
  providing an additional key-value separator to 
 <code>Splitter</code>.
 @since 10.0
 */
@interface ComGoogleCommonBaseSplitter_MapSplitter : NSObject

#pragma mark Public

/*!
 @brief Splits <code>sequence</code> into substrings, splits each substring into an entry, and returns an
  unmodifiable map with each of the entries.For example, <code>Splitter.on(';').trimResults().withKeyValueSeparator("=>").split("a=>b ; c=>b")</code>
  will return
  a mapping from <code>"a"</code> to <code>"b"</code> and <code>"c"</code> to <code>"b"</code>.
 <p>The returned map preserves the order of the entries from <code>sequence</code>.
 @throw IllegalArgumentExceptionif the specified sequence does not split into valid map
      entries, or if there are duplicate keys
 */
- (id<JavaUtilMap>)splitWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)sequence;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseSplitter_MapSplitter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseSplitter_MapSplitter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseSplitter")
