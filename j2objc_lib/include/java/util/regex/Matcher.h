//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/regex/Matcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilRegexMatcher")
#ifdef RESTRICT_JavaUtilRegexMatcher
#define INCLUDE_ALL_JavaUtilRegexMatcher 0
#else
#define INCLUDE_ALL_JavaUtilRegexMatcher 1
#endif
#undef RESTRICT_JavaUtilRegexMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilRegexMatcher_) && (INCLUDE_ALL_JavaUtilRegexMatcher || defined(INCLUDE_JavaUtilRegexMatcher))
#define JavaUtilRegexMatcher_

#define RESTRICT_JavaUtilRegexMatchResult 1
#define INCLUDE_JavaUtilRegexMatchResult 1
#include "java/util/regex/MatchResult.h"

@class IOSIntArray;
@class JavaLangStringBuffer;
@class JavaLangStringBuilder;
@class JavaUtilRegexPattern;
@protocol JavaLangCharSequence;

/*!
 @brief J2ObjC modified: Synchronizations are removed because they were added in the Android sources
  to safeguard against hard-to-debug crashes from incorrect concurrent use of this class.
 */
@interface JavaUtilRegexMatcher : NSObject < JavaUtilRegexMatchResult > {
 @public
  /*!
   @brief Holds the offsets for the most recent match.
   */
  IOSIntArray *groups_;
  /*!
   @brief The range within the sequence that is to be matched (between  0
  and text.length()).
   */
  jint from_;
  /*!
   @brief The range within the sequence that is to be matched (between  0
  and text.length()).
   */
  jint to_;
  /*!
   @brief Holds the input text.
   */
  NSString *text_;
  /*!
   @brief The index of the last position appended in a substitution.
   */
  jint appendPos_;
  /*!
   @brief If transparentBounds is true then the boundaries of this
  matcher's region are transparent to lookahead, lookbehind,
  and boundary matching constructs that try to see beyond them.
   */
  jboolean transparentBounds_;
  /*!
   @brief If anchoringBounds is true then the boundaries of this
  matcher's region match anchors such as ^ and $.
   */
  jboolean anchoringBounds_;
}

#pragma mark Public

/*!
 @brief Implements a non-terminal append-and-replace step.
 <p> This method performs the following actions: </p>
  
 <ol>
    
 <li><p> It reads characters from the input sequence, starting at the
    append position, and appends them to the given string buffer.  It
    stops after reading the last character preceding the previous match,
    that is, the character at index <code>start()</code>
 &nbsp;<tt>-</tt>&nbsp;<tt>1</tt>.  </p></li>
    
 <li><p> It appends the given replacement string to the string buffer.
    </p></li>
    
 <li><p> It sets the append position of this matcher to the index of
    the last character matched, plus one, that is, to <code>end()</code>.
    </p></li>
  
 </ol>
  
 <p> The replacement string may contain references to subsequences
  captured during the previous match: Each occurrence of 
 <tt>${</tt><i>name</i><tt>}</tt> or <tt>$</tt><i>g</i>
  will be replaced by the result of evaluating the corresponding 
 <code>group(name)</code> or <code>group(g)</code>
  respectively. For  <tt>$</tt><i>g</i>,
  the first number after the <tt>$</tt> is always treated as part of
  the group reference. Subsequent numbers are incorporated into g if
  they would form a legal group reference. Only the numerals '0'
  through '9' are considered as potential components of the group
  reference. If the second group matched the string <tt>"foo"</tt>, for
  example, then passing the replacement string <tt>"$2bar"</tt> would
  cause <tt>"foobar"</tt> to be appended to the string buffer. A dollar
  sign (<tt>$</tt>) may be included as a literal in the replacement
  string by preceding it with a backslash (<tt>\$</tt>).
  
 <p> Note that backslashes (<tt>\</tt>) and dollar signs (<tt>$</tt>) in
  the replacement string may cause the results to be different than if it
  were being treated as a literal replacement string. Dollar signs may be
  treated as references to captured subsequences as described above, and
  backslashes are used to escape literal characters in the replacement
  string. 
 <p> This method is intended to be used in a loop together with the 
 <code>appendTail</code> and <code>find</code> methods.  The
  following code, for example, writes <tt>one dog two dogs in the
  yard</tt> to the standard-output stream: </p>
  
 <blockquote>@code

  Pattern p = Pattern.compile("cat");
  Matcher m = p.matcher("one cat two cats in the yard");
  StringBuffer sb = new StringBuffer();
  while (m.find()) {
      m.appendReplacement(sb, "dog");
  }
  m.appendTail(sb);
  System.out.println(sb.toString());
@endcode</blockquote>
 @param sb The target string buffer
 @param replacement The replacement string
 @return This matcher
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IllegalArgumentException
 If the replacement string refers to a named-capturing
           group that does not exist in the pattern
 @throw IndexOutOfBoundsException
 If the replacement string refers to a capturing group
           that does not exist in the pattern
 */
- (JavaUtilRegexMatcher * __nonnull)appendReplacementWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb
                                                                 withNSString:(NSString *)replacement;

/*!
 @brief Appends a literal part of the input plus a replacement for the current
  match to a given <code>StringBuilder</code>.The literal part is exactly the
  part of the input between the previous match and the current match.
 The
  method can be used in conjunction with <code>find()</code> and 
 <code>appendTail(StringBuilder)</code> to walk through the input and replace
  all occurrences of the <code>Pattern</code> with something else.
 @param buffer the 
 <code>StringBuilder</code>  to append to.
 @param replacement the replacement text.
 @return the <code>Matcher</code> itself.
 @throw IllegalStateException
 if no successful match has been made.
 */
- (JavaUtilRegexMatcher *)appendReplacementWithJavaLangStringBuilder:(JavaLangStringBuilder *)buffer
                                                        withNSString:(NSString *)replacement;

/*!
 @brief Implements a terminal append-and-replace step.
 <p> This method reads characters from the input sequence, starting at
  the append position, and appends them to the given string buffer.  It is
  intended to be invoked after one or more invocations of the <code>appendReplacement</code>
  method in order to copy the
  remainder of the input sequence.  </p>
 @param sb The target string buffer
 @return The target string buffer
 */
- (JavaLangStringBuffer * __nonnull)appendTailWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb;

/*!
 @brief Appends the (unmatched) remainder of the input to the given 
 <code>StringBuilder</code>.The method can be used in conjunction with 
 <code>find()</code> and <code>appendReplacement(StringBuilder, String)</code> to
  walk through the input and replace all matches of the <code>Pattern</code>
  with something else.
 @return the <code>StringBuilder</code>.
 @throw IllegalStateException
 if no successful match has been made.
 */
- (JavaLangStringBuilder *)appendTailWithJavaLangStringBuilder:(JavaLangStringBuilder *)buffer;

/*!
 @brief Returns the offset after the last character matched.
 @return The offset after the last character matched
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 */
- (jint)end;

/*!
 @brief Returns the offset after the last character of the subsequence
  captured by the given group during the previous match operation.
 <p> <a href="Pattern.html#cg">Capturing groups</a> are indexed from left
  to right, starting at one.  Group zero denotes the entire pattern, so
  the expression <i>m.</i><tt>end(0)</tt> is equivalent to 
 <i>m.</i><tt>end()</tt>.  </p>
 @param group The index of a capturing group in this matcher's pattern
 @return The offset after the last character captured by the group,
           or <tt>-1</tt> if the match was successful
           but the group itself did not match anything
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IndexOutOfBoundsException
 If there is no capturing group in the pattern
           with the given index
 */
- (jint)endWithInt:(jint)group;

/*!
 @brief Returns the offset after the last character of the subsequence
  captured by the given <a href="Pattern.html#groupname">named-capturing
  group</a> during the previous match operation.
 @param name The name of a named-capturing group in this matcher's pattern
 @return The offset after the last character captured by the group,
           or <code>-1</code> if the match was successful
           but the group itself did not match anything
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IllegalArgumentException
 If there is no capturing group in the pattern
           with the given name
 @since 1.8
 */
- (jint)endWithNSString:(NSString *)name;

/*!
 @brief Attempts to find the next subsequence of the input sequence that matches
  the pattern.
 <p> This method starts at the beginning of this matcher's region, or, if
  a previous invocation of the method was successful and the matcher has
  not since been reset, at the first character not matched by the previous
  match. 
 <p> If the match succeeds then more information can be obtained via the 
 <tt>start</tt>, <tt>end</tt>, and <tt>group</tt> methods.  </p>
 @return <tt>true</tt> if, and only if, a subsequence of the input
           sequence matches this matcher's pattern
 */
- (jboolean)find;

/*!
 @brief Resets this matcher and then attempts to find the next subsequence of
  the input sequence that matches the pattern, starting at the specified
  index.
 <p> If the match succeeds then more information can be obtained via the 
 <tt>start</tt>, <tt>end</tt>, and <tt>group</tt> methods, and subsequent
  invocations of the <code>find()</code> method will start at the first
  character not matched by this match.  </p>
 @param start the index to start searching for a match
 @throw IndexOutOfBoundsException
 If start is less than zero or if start is greater than the
           length of the input sequence.
 @return <tt>true</tt> if, and only if, a subsequence of the input
           sequence starting at the given index matches this matcher's
           pattern
 */
- (jboolean)findWithInt:(jint)start;

/*!
 @brief Returns the input subsequence matched by the previous match.
 <p> For a matcher <i>m</i> with input sequence <i>s</i>,
  the expressions <i>m.</i><tt>group()</tt> and 
 <i>s.</i><tt>substring(</tt><i>m.</i><tt>start(),</tt>&nbsp;<i>m.</i><tt>end())</tt>
  are equivalent.  </p>
  
 <p> Note that some patterns, for example <tt>a*</tt>, match the empty
  string.  This method will return the empty string when the pattern
  successfully matches the empty string in the input.  </p>
 @return The (possibly empty) subsequence matched by the previous match,
          in string form
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 */
- (NSString * __nonnull)group;

/*!
 @brief Returns the input subsequence captured by the given group during the
  previous match operation.
 <p> For a matcher <i>m</i>, input sequence <i>s</i>, and group index 
 <i>g</i>, the expressions <i>m.</i><tt>group(</tt><i>g</i><tt>)</tt> and 
 <i>s.</i><tt>substring(</tt><i>m.</i><tt>start(</tt><i>g</i><tt>),</tt>&nbsp;<i>m.</i><tt>end(</tt><i>g</i><tt>))</tt>
  are equivalent.  </p>
  
 <p> <a href="Pattern.html#cg">Capturing groups</a> are indexed from left
  to right, starting at one.  Group zero denotes the entire pattern, so
  the expression <tt>m.group(0)</tt> is equivalent to <tt>m.group()</tt>.
  </p>
  
 <p> If the match was successful but the group specified failed to match
  any part of the input sequence, then <tt>null</tt> is returned. Note
  that some groups, for example <tt>(a*)</tt>, match the empty string.
  This method will return the empty string when such a group successfully
  matches the empty string in the input.  </p>
 @param group The index of a capturing group in this matcher's pattern
 @return The (possibly empty) subsequence captured by the group
           during the previous match, or <tt>null</tt> if the group
           failed to match part of the input
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IndexOutOfBoundsException
 If there is no capturing group in the pattern
           with the given index
 */
- (NSString * __nullable)groupWithInt:(jint)group;

/*!
 @brief Returns the input subsequence captured by the given 
 <a href="Pattern.html#groupname">named-capturing group</a> during the previous
  match operation.
 <p> If the match was successful but the group specified failed to match
  any part of the input sequence, then <tt>null</tt> is returned. Note
  that some groups, for example <tt>(a*)</tt>, match the empty string.
  This method will return the empty string when such a group successfully
  matches the empty string in the input.  </p>
 @param name The name of a named-capturing group in this matcher's pattern
 @return The (possibly empty) subsequence captured by the named group
           during the previous match, or <tt>null</tt> if the group
           failed to match part of the input
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IllegalArgumentException
 If there is no capturing group in the pattern
           with the given name
 @since 1.7
 */
- (NSString * __nullable)groupWithNSString:(NSString *)name;

/*!
 @brief Returns the number of capturing groups in this matcher's pattern.
 <p> Group zero denotes the entire pattern by convention. It is not
  included in this count. 
 <p> Any non-negative integer smaller than or equal to the value
  returned by this method is guaranteed to be a valid group index for
  this matcher.  </p>
 @return The number of capturing groups in this matcher's pattern
 */
- (jint)groupCount;

/*!
 @brief Queries the anchoring of region bounds for this matcher.
 <p> This method returns <tt>true</tt> if this matcher uses 
 <i>anchoring</i> bounds, <tt>false</tt> otherwise. 
 <p> See <code>useAnchoringBounds</code> for a
  description of anchoring bounds. 
 <p> By default, a matcher uses anchoring region boundaries.
 @return <tt>true</tt> iff this matcher is using anchoring bounds,
          <tt>false</tt> otherwise.
 - seealso: java.util.regex.Matcher#useAnchoringBounds(boolean)
 @since 1.5
 */
- (jboolean)hasAnchoringBounds;

/*!
 @brief Queries the transparency of region bounds for this matcher.
 <p> This method returns <tt>true</tt> if this matcher uses 
 <i>transparent</i> bounds, <tt>false</tt> if it uses <i>opaque</i>
  bounds. 
 <p> See <code>useTransparentBounds</code> for a
  description of transparent and opaque bounds. 
 <p> By default, a matcher uses opaque region boundaries.
 @return <tt>true</tt> iff this matcher is using transparent bounds,
          <tt>false</tt> otherwise.
 - seealso: java.util.regex.Matcher#useTransparentBounds(boolean)
 @since 1.5
 */
- (jboolean)hasTransparentBounds;

/*!
 @brief <p>Returns true if the end of input was hit by the search engine in
  the last match operation performed by this matcher.
 <p>When this method returns true, then it is possible that more input
  would have changed the result of the last search.
 @return true iff the end of input was hit in the last match; false
           otherwise
 @since 1.5
 */
- (jboolean)hitEnd;

/*!
 @brief Attempts to match the input sequence, starting at the beginning of the
  region, against the pattern.
 <p> Like the <code>matches</code> method, this method always starts
  at the beginning of the region; unlike that method, it does not
  require that the entire region be matched. 
 <p> If the match succeeds then more information can be obtained via the 
 <tt>start</tt>, <tt>end</tt>, and <tt>group</tt> methods.  </p>
 @return <tt>true</tt> if, and only if, a prefix of the input
           sequence matches this matcher's pattern
 */
- (jboolean)lookingAt;

/*!
 @brief Attempts to match the entire region against the pattern.
 <p> If the match succeeds then more information can be obtained via the 
 <tt>start</tt>, <tt>end</tt>, and <tt>group</tt> methods.  </p>
 @return <tt>true</tt> if, and only if, the entire region sequence
           matches this matcher's pattern
 */
- (jboolean)matches;

/*!
 @brief Returns the pattern that is interpreted by this matcher.
 @return The pattern for which this matcher was created
 */
- (JavaUtilRegexPattern * __nonnull)pattern;

/*!
 @brief Returns a literal replacement <code>String</code> for the specified 
 <code>String</code>.
 This method produces a <code>String</code> that will work
  as a literal replacement <code>s</code> in the 
 <code>appendReplacement</code> method of the <code>Matcher</code> class.
  The <code>String</code> produced will match the sequence of characters
  in <code>s</code> treated as a literal sequence. Slashes ('\') and
  dollar signs ('$') will be given no special meaning.
 @param s The string to be literalized
 @return A literal string replacement
 @since 1.5
 */
+ (NSString * __nonnull)quoteReplacementWithNSString:(NSString *)s;

/*!
 @brief Sets the limits of this matcher's region.The region is the part of the
  input sequence that will be searched to find a match.
 Invoking this
  method resets the matcher, and then sets the region to start at the
  index specified by the <code>start</code> parameter and end at the
  index specified by the <code>end</code> parameter. 
 <p>Depending on the transparency and anchoring being used (see 
 <code>useTransparentBounds</code> and 
 <code>useAnchoringBounds</code>), certain constructs such
  as anchors may behave differently at or around the boundaries of the
  region.
 @param start The index to start searching at (inclusive)
 @param end The index to end searching at (exclusive)
 @throw IndexOutOfBoundsException
 If start or end is less than zero, if
           start is greater than the length of the input sequence, if
           end is greater than the length of the input sequence, or if
           start is greater than end.
 @return this matcher
 @since 1.5
 */
- (JavaUtilRegexMatcher * __nonnull)regionWithInt:(jint)start
                                          withInt:(jint)end;

/*!
 @brief Reports the end index (exclusive) of this matcher's region.
 The searches this matcher conducts are limited to finding matches
  within <code>regionStart</code> (inclusive) and 
 <code>regionEnd</code> (exclusive).
 @return the ending point of this matcher's region
 @since 1.5
 */
- (jint)regionEnd;

/*!
 @brief Reports the start index of this matcher's region.The
  searches this matcher conducts are limited to finding matches
  within <code>regionStart</code> (inclusive) and 
 <code>regionEnd</code> (exclusive).
 @return The starting point of this matcher's region
 @since 1.5
 */
- (jint)regionStart;

/*!
 @brief Replaces every subsequence of the input sequence that matches the
  pattern with the given replacement string.
 <p> This method first resets this matcher.  It then scans the input
  sequence looking for matches of the pattern.  Characters that are not
  part of any match are appended directly to the result string; each match
  is replaced in the result by the replacement string.  The replacement
  string may contain references to captured subsequences as in the <code>appendReplacement</code>
  method. 
 <p> Note that backslashes (<tt>\</tt>) and dollar signs (<tt>$</tt>) in
  the replacement string may cause the results to be different than if it
  were being treated as a literal replacement string. Dollar signs may be
  treated as references to captured subsequences as described above, and
  backslashes are used to escape literal characters in the replacement
  string. 
 <p> Given the regular expression <tt>a*b</tt>, the input 
 <tt>"aabfooaabfooabfoob"</tt>, and the replacement string 
 <tt>"-"</tt>, an invocation of this method on a matcher for that
  expression would yield the string <tt>"-foo-foo-foo-"</tt>.
  
 <p> Invoking this method changes this matcher's state.  If the matcher
  is to be used in further matching operations then it should first be
  reset.  </p>
 @param replacement The replacement string
 @return The string constructed by replacing each matching subsequence
           by the replacement string, substituting captured subsequences
           as needed
 */
- (NSString * __nonnull)replaceAllWithNSString:(NSString *)replacement;

/*!
 @brief Replaces the first subsequence of the input sequence that matches the
  pattern with the given replacement string.
 <p> This method first resets this matcher.  It then scans the input
  sequence looking for a match of the pattern.  Characters that are not
  part of the match are appended directly to the result string; the match
  is replaced in the result by the replacement string.  The replacement
  string may contain references to captured subsequences as in the <code>appendReplacement</code>
  method. 
 <p>Note that backslashes (<tt>\</tt>) and dollar signs (<tt>$</tt>) in
  the replacement string may cause the results to be different than if it
  were being treated as a literal replacement string. Dollar signs may be
  treated as references to captured subsequences as described above, and
  backslashes are used to escape literal characters in the replacement
  string. 
 <p> Given the regular expression <tt>dog</tt>, the input 
 <tt>"zzzdogzzzdogzzz"</tt>, and the replacement string 
 <tt>"cat"</tt>, an invocation of this method on a matcher for that
  expression would yield the string <tt>"zzzcatzzzdogzzz"</tt>.  </p>
  
 <p> Invoking this method changes this matcher's state.  If the matcher
  is to be used in further matching operations then it should first be
  reset.  </p>
 @param replacement The replacement string
 @return The string constructed by replacing the first matching
           subsequence by the replacement string, substituting captured
           subsequences as needed
 */
- (NSString * __nonnull)replaceFirstWithNSString:(NSString *)replacement;

/*!
 @brief <p>Returns true if more input could change a positive match into a
  negative one.
 <p>If this method returns true, and a match was found, then more
  input could cause the match to be lost. If this method returns false
  and a match was found, then more input might change the match but the
  match won't be lost. If a match was not found, then requireEnd has no
  meaning.
 @return true iff more input could change a positive match into a
           negative one.
 @since 1.5
 */
- (jboolean)requireEnd;

/*!
 @brief Resets this matcher.
 <p> Resetting a matcher discards all of its explicit state information
  and sets its append position to zero. The matcher's region is set to the
  default region, which is its entire character sequence. The anchoring
  and transparency of this matcher's region boundaries are unaffected.
 @return This matcher
 */
- (JavaUtilRegexMatcher * __nonnull)reset;

/*!
 @brief Resets this matcher with a new input sequence.
 <p> Resetting a matcher discards all of its explicit state information
  and sets its append position to zero.  The matcher's region is set to
  the default region, which is its entire character sequence.  The
  anchoring and transparency of this matcher's region boundaries are
  unaffected.
 @param input The new input character sequence
 @return This matcher
 */
- (JavaUtilRegexMatcher * __nonnull)resetWithJavaLangCharSequence:(id<JavaLangCharSequence>)input;

/*!
 @brief Returns the start index of the previous match.
 @return The index of the first character matched
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 */
- (jint)start;

/*!
 @brief Returns the start index of the subsequence captured by the given group
  during the previous match operation.
 <p> <a href="Pattern.html#cg">Capturing groups</a> are indexed from left
  to right, starting at one.  Group zero denotes the entire pattern, so
  the expression <i>m.</i><tt>start(0)</tt> is equivalent to 
 <i>m.</i><tt>start()</tt>.  </p>
 @param group The index of a capturing group in this matcher's pattern
 @return The index of the first character captured by the group,
           or <tt>-1</tt> if the match was successful but the group
           itself did not match anything
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IndexOutOfBoundsException
 If there is no capturing group in the pattern
           with the given index
 */
- (jint)startWithInt:(jint)group;

/*!
 @brief Returns the start index of the subsequence captured by the given 
 <a href="Pattern.html#groupname">named-capturing group</a> during the
  previous match operation.
 @param name The name of a named-capturing group in this matcher's pattern
 @return The index of the first character captured by the group,
           or <code>-1</code> if the match was successful but the group
           itself did not match anything
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IllegalArgumentException
 If there is no capturing group in the pattern
           with the given name
 @since 1.8
 */
- (jint)startWithNSString:(NSString *)name;

/*!
 @brief Returns the match state of this matcher as a <code>MatchResult</code>.
 The result is unaffected by subsequent operations performed upon this
  matcher.
 @return a <code>MatchResult</code> with the state of this matcher
 @since 1.5
 */
- (id<JavaUtilRegexMatchResult> __nonnull)toMatchResult;

/*!
 @brief <p>Returns the string representation of this matcher.
 The
  string representation of a <code>Matcher</code> contains information
  that may be useful for debugging. The exact format is unspecified.
 @return The string representation of this matcher
 @since 1.5
 */
- (NSString * __nonnull)description;

/*!
 @brief Sets the anchoring of region bounds for this matcher.
 <p> Invoking this method with an argument of <tt>true</tt> will set this
  matcher to use <i>anchoring</i> bounds. If the boolean
  argument is <tt>false</tt>, then <i>non-anchoring</i> bounds will be
  used. 
 <p> Using anchoring bounds, the boundaries of this
  matcher's region match anchors such as ^ and $. 
 <p> Without anchoring bounds, the boundaries of this
  matcher's region will not match anchors such as ^ and $. 
 <p> By default, a matcher uses anchoring region boundaries.
 @param b a boolean indicating whether or not to use anchoring bounds.
 @return this matcher
 - seealso: java.util.regex.Matcher#hasAnchoringBounds
 @since 1.5
 */
- (JavaUtilRegexMatcher * __nonnull)useAnchoringBoundsWithBoolean:(jboolean)b;

/*!
 @brief Changes the <tt>Pattern</tt> that this <tt>Matcher</tt> uses to
  find matches with.
 <p> This method causes this matcher to lose information
  about the groups of the last match that occurred. The
  matcher's position in the input is maintained and its
  last append position is unaffected.</p>
 @param newPattern The new pattern used by this matcher
 @return This matcher
 @throw IllegalArgumentException
 If newPattern is <tt>null</tt>
 @since 1.5
 */
- (JavaUtilRegexMatcher * __nonnull)usePatternWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)newPattern;

/*!
 @brief Sets the transparency of region bounds for this matcher.
 <p> Invoking this method with an argument of <tt>true</tt> will set this
  matcher to use <i>transparent</i> bounds. If the boolean
  argument is <tt>false</tt>, then <i>opaque</i> bounds will be used. 
 <p> Using transparent bounds, the boundaries of this
  matcher's region are transparent to lookahead, lookbehind,
  and boundary matching constructs. Those constructs can see beyond the
  boundaries of the region to see if a match is appropriate. 
 <p> Using opaque bounds, the boundaries of this matcher's
  region are opaque to lookahead, lookbehind, and boundary matching
  constructs that may try to see beyond them. Those constructs cannot
  look past the boundaries so they will fail to match anything outside
  of the region. 
 <p> By default, a matcher uses opaque bounds.
 @param b a boolean indicating whether to use opaque or transparent          regions
 @return this matcher
 - seealso: java.util.regex.Matcher#hasTransparentBounds
 @since 1.5
 */
- (JavaUtilRegexMatcher * __nonnull)useTransparentBoundsWithBoolean:(jboolean)b;

#pragma mark Protected

- (void)java_finalize;

#pragma mark Package-Private

/*!
 @brief All matchers have the state used by Pattern during a match.
 */
- (instancetype __nonnull)initWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)parent
                              withJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Generates a String from this Matcher's input in the specified range.
 @param beginIndex the beginning index, inclusive
 @param endIndex the ending index, exclusive
 @return A String generated from this Matcher's input
 */
- (id<JavaLangCharSequence>)getSubSequenceWithInt:(jint)beginIndex
                                          withInt:(jint)endIndex;

/*!
 @brief Returns the end index of the text.
 @return the index after the last character in the text
 */
- (jint)getTextLength;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilRegexMatcher)

J2OBJC_FIELD_SETTER(JavaUtilRegexMatcher, groups_, IOSIntArray *)
J2OBJC_FIELD_SETTER(JavaUtilRegexMatcher, text_, NSString *)

FOUNDATION_EXPORT void JavaUtilRegexMatcher_initWithJavaUtilRegexPattern_withJavaLangCharSequence_(JavaUtilRegexMatcher *self, JavaUtilRegexPattern *parent, id<JavaLangCharSequence> text);

FOUNDATION_EXPORT JavaUtilRegexMatcher *new_JavaUtilRegexMatcher_initWithJavaUtilRegexPattern_withJavaLangCharSequence_(JavaUtilRegexPattern *parent, id<JavaLangCharSequence> text) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilRegexMatcher *create_JavaUtilRegexMatcher_initWithJavaUtilRegexPattern_withJavaLangCharSequence_(JavaUtilRegexPattern *parent, id<JavaLangCharSequence> text);

FOUNDATION_EXPORT NSString *JavaUtilRegexMatcher_quoteReplacementWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexMatcher)

#endif

#if !defined (JavaUtilRegexMatcher_OffsetBasedMatchResult_) && (INCLUDE_ALL_JavaUtilRegexMatcher || defined(INCLUDE_JavaUtilRegexMatcher_OffsetBasedMatchResult))
#define JavaUtilRegexMatcher_OffsetBasedMatchResult_

#define RESTRICT_JavaUtilRegexMatchResult 1
#define INCLUDE_JavaUtilRegexMatchResult 1
#include "java/util/regex/MatchResult.h"

@class IOSIntArray;

/*!
 @brief A trivial match result implementation that's based on an array of integers
  representing match offsets.The array is of the form 
 {@@code { start1, end1, start2, end2 ....}) where each consecutive pair of elements represents
 the start and end of a match respectively.
 */
@interface JavaUtilRegexMatcher_OffsetBasedMatchResult : NSObject < JavaUtilRegexMatchResult >

#pragma mark Public

- (jint)end;

- (jint)endWithInt:(jint)group;

- (NSString *)group;

- (NSString *)groupWithInt:(jint)group;

- (jint)groupCount;

- (jint)start;

- (jint)startWithInt:(jint)group;

#pragma mark Package-Private

- (instancetype __nonnull)initWithNSString:(NSString *)input
                              withIntArray:(IOSIntArray *)offsets;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexMatcher_OffsetBasedMatchResult)

FOUNDATION_EXPORT void JavaUtilRegexMatcher_OffsetBasedMatchResult_initWithNSString_withIntArray_(JavaUtilRegexMatcher_OffsetBasedMatchResult *self, NSString *input, IOSIntArray *offsets);

FOUNDATION_EXPORT JavaUtilRegexMatcher_OffsetBasedMatchResult *new_JavaUtilRegexMatcher_OffsetBasedMatchResult_initWithNSString_withIntArray_(NSString *input, IOSIntArray *offsets) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilRegexMatcher_OffsetBasedMatchResult *create_JavaUtilRegexMatcher_OffsetBasedMatchResult_initWithNSString_withIntArray_(NSString *input, IOSIntArray *offsets);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexMatcher_OffsetBasedMatchResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilRegexMatcher")
