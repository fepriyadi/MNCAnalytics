//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/ArgumentMatchers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoArgumentMatchers")
#ifdef RESTRICT_OrgMockitoArgumentMatchers
#define INCLUDE_ALL_OrgMockitoArgumentMatchers 0
#else
#define INCLUDE_ALL_OrgMockitoArgumentMatchers 1
#endif
#undef RESTRICT_OrgMockitoArgumentMatchers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoArgumentMatchers_) && (INCLUDE_ALL_OrgMockitoArgumentMatchers || defined(INCLUDE_OrgMockitoArgumentMatchers))
#define OrgMockitoArgumentMatchers_

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilRegexPattern;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol OrgMockitoArgumentMatcher;

/*!
 @brief Allow flexible verification or stubbing.See also <code>AdditionalMatchers</code>.
 <p>
  <code>Mockito</code> extends ArgumentMatchers so to get access to all matchers just import Mockito class statically. 
 <pre class="code"><code class="java">
  //stubbing using anyInt() argument matcher
  when(mockedList.get(anyInt())).thenReturn("element");
  //following prints "element"
  System.out.println(mockedList.get(999));
  //you can also verify using argument matcher
  verify(mockedList).get(anyInt()); 
 </code>
@endcode
  
 <p>
  Since Mockito <code>any(Class)</code> and <code>anyInt</code> family matchers perform a type check, thus they won't
  match <code>null</code> arguments. Instead use the <code>isNull</code> matcher. 
 <pre class="code"><code class="java">
  // stubbing using anyBoolean() argument matcher
  when(mock.dryRun(anyBoolean())).thenReturn("state");
  // below the stub won't match, and won't return "state"
  mock.dryRun(null);
  // either change the stub
  when(mock.dryRun(isNull())).thenReturn("state");
  mock.dryRun(null); // ok
  // or fix the code ;)
  when(mock.dryRun(anyBoolean())).thenReturn("state");
  mock.dryRun(true); // ok 
 </code>
@endcode
  The same apply for verification. 
 </p>
  Scroll down to see all methods - full list of matchers. 
 <p>
  <b>Warning:</b><br>
  If you are using argument matchers, <b>all arguments</b> have to be provided by matchers.
  E.g: (example shows verification but the same applies to stubbing): 
 </p>
  
 <pre class="code"><code class="java">
  verify(mock).someMethod(anyInt(), anyString(), <b>eq("third argument")</b>);
  //above is correct - eq() is also an argument matcher
  verify(mock).someMethod(anyInt(), anyString(), <b>"third argument"</b>);
  //above is incorrect - exception will be thrown because third argument is given without argument matcher. 
 </code>
@endcode
  
 <p>
  Matcher methods like <code>anyObject()</code>, <code>eq()</code> <b>do not</b> return matchers.
  Internally, they record a matcher on a stack and return a dummy value (usually null).
  This implementation is due to static type safety imposed by java compiler.
  The consequence is that you cannot use <code>anyObject()</code>, <code>eq()</code> methods outside of verified/stubbed method. 
 </p>
  
 <h1>Additional matchers</h1>
  <p>
  The class <code>AdditionalMatchers</code> offers rarely used matchers, although they can be useful, when
  it is useful to combine multiple matchers or when it is useful to negate a matcher necessary. 
 </p>
  
 <h1>Custom Argument ArgumentMatchers</h1>
  <p>
  It is important to understand the use cases and available options for dealing with non-trivial arguments 
 <b>before</b> implementing custom argument matchers. This way, you can select the best possible approach
  for given scenario and produce highest quality test (clean and maintainable).
  Please read on in the javadoc for <code>ArgumentMatcher</code> to learn about approaches and see the examples. 
 </p>
 - seealso: AdditionalMatchers
 */
@interface OrgMockitoArgumentMatchers : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Matches <strong>anything</strong>, including nulls and varargs.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
  This is an alias of: <code>anyObject()</code> and <code>any(java.lang.Class)</code>
  </p>
  
 <p>
  <strong>Notes : </strong><br>
  <ul>
      <li>For primitive types use <code>anyChar()</code> family or <code>isA(Class)</code> or <code>any(Class)</code>.</li>
      <li>Since mockito 2.1.0 <code>any(Class)</code> is not anymore an alias of this method.</li>
  </ul>
  </p>
 @return <code>null</code>.
 - seealso: #any(Class)
 - seealso: #anyObject()
 - seealso: #anyVararg()
 - seealso: #anyChar()
 - seealso: #anyInt()
 - seealso: #anyBoolean()
 - seealso: #anyCollectionOf(Class)
 */
+ (id)any;

/*!
 @brief Matches any object of given type, excluding nulls.
 <p>
  This matcher will perform a type check with the given type, thus excluding values.
  See examples in javadoc for <code>ArgumentMatchers</code> class.
  This is an alias of: <code>isA(Class)</code>}
  </p>
  
 <p>
  Since Mockito 2.1.0, only allow non-null instance of <code></code>, thus <code>null</code> is not anymore a valid value.
  As reference are nullable, the suggested API to <strong>match</strong> <code>null</code>
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p><strong>Notes : </strong><br>
  <ul>
      <li>For primitive types use <code>anyChar()</code> family.</li>
      <li>Since Mockito 2.1.0 this method will perform a type check thus <code>null</code> values are not authorized.</li>
      <li>Since mockito 2.1.0 <code>any()</code> and <code>anyObject()</code> are not anymore aliases of this method.</li>
  </ul>
  </p>
 @param type the class of the accepted type.
 @return <code>null</code>.
 - seealso: #any()
 - seealso: #anyObject()
 - seealso: #anyVararg()
 - seealso: #isA(Class)
 - seealso: #notNull()
 - seealso: #notNull(Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id)anyWithIOSClass:(IOSClass *)type;

/*!
 @brief Any <code>boolean</code> or <strong>non-null</strong> <code>Boolean</code>
 <p>
  Since Mockito 2.1.0, only allow valued <code>Boolean</code>, thus <code>null</code> is not anymore a valid value.
 As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>false</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jboolean)anyBoolean;

/*!
 @brief Any <code>byte</code> or <strong>non-null</strong> <code>Byte</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Byte</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jbyte)anyByte;

/*!
 @brief Any <code>char</code> or <strong>non-null</strong> <code>Character</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Character</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jchar)anyChar;

/*!
 @brief Any <strong>non-null</strong> <code>Collection</code>.
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Collection</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code>
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return empty Collection.
 - seealso: #anyCollectionOf(Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilCollection>)anyCollection;

/*!
 @brief Any <strong>non-null</strong> <code>Collection</code>.
 <p>
  Generic friendly alias to <code>ArgumentMatchers.anyCollection()</code>.
  It's an alternative to <code>&#064;SuppressWarnings("unchecked")</code> to keep code clean of compiler warnings. 
 </p>
  
 <p>
  This method doesn't do type checks of the collection content with the given type parameter, it is only there
  to avoid casting in the code. 
 </p>
  
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Collection</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code>
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @param clazz Type owned by the collection to avoid casting
 @return empty Collection.
 - seealso: #anyCollection()
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilCollection>)anyCollectionOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>double</code> or <strong>non-null</strong> <code>Double</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Double</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jdouble)anyDouble;

/*!
 @brief Any <code>float</code> or <strong>non-null</strong> <code>Float</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Float</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jfloat)anyFloat;

/*!
 @brief Any int or <strong>non-null</strong> <code>Integer</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Integer</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jint)anyInt;

/*!
 @brief Any <strong>non-null</strong> <code>Iterable</code>.
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Iterable</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code>
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return empty Iterable.
 - seealso: #anyIterableOf(Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 @since 2.1.0
 */
+ (id<JavaLangIterable>)anyIterable;

/*!
 @brief Any <strong>non-null</strong> <code>Iterable</code>.
 <p>
  Generic friendly alias to <code>ArgumentMatchers.anyIterable()</code>.
  It's an alternative to <code>&#064;SuppressWarnings("unchecked")</code> to keep code clean of compiler warnings. 
 </p>
  
 <p>
  This method doesn't do type checks of the iterable content with the given type parameter, it is only there
  to avoid casting in the code. 
 </p>
  
 <p>
  Since Mockito 2.1.0, only allow non-null <code>String</code>.
  As strings are nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @param clazz Type owned by the collection to avoid casting
 @return empty Iterable.
 - seealso: #anyIterable()
 - seealso: #isNull()
 - seealso: #isNull(Class)
 @since 2.1.0
 */
+ (id<JavaLangIterable>)anyIterableOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <strong>non-null</strong> <code>List</code>.
 <p>
  Since Mockito 2.1.0, only allow non-null <code>List</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return empty List.
 - seealso: #anyListOf(Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilList>)anyList;

/*!
 @brief Any <strong>non-null</strong> <code>List</code>.
 Generic friendly alias to <code>ArgumentMatchers.anyList()</code>. It's an alternative to 
 <code>&#064;SuppressWarnings("unchecked")</code> to keep code clean of compiler warnings. 
 <p>
  This method doesn't do type checks of the list content with the given type parameter, it is only there
  to avoid casting in the code. 
 </p>
  
 <p>
  Since Mockito 2.1.0, only allow non-null <code>List</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @param clazz Type owned by the list to avoid casting
 @return empty List.
 - seealso: #anyList()
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilList>)anyListOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>long</code> or <strong>non-null</strong> <code>Long</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Long</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jlong)anyLong;

/*!
 @brief Any <strong>non-null</strong> <code>Map</code>.
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Map</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return empty Map.
 - seealso: #anyMapOf(Class, Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilMap>)anyMap;

/*!
 @brief Any <strong>non-null</strong> <code>Map</code>.
 <p>
  Generic friendly alias to <code>ArgumentMatchers.anyMap()</code>.
  It's an alternative to <code>&#064;SuppressWarnings("unchecked")</code> to keep code clean of compiler warnings. 
 </p>
  
 <p>
  This method doesn't do type checks of the map content with the given type parameter, it is only there
  to avoid casting in the code. 
 </p>
  
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Map</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @param keyClazz Type of the map key to avoid casting
 @param valueClazz Type of the value to avoid casting
 @return empty Map.
 - seealso: #anyMap()
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilMap>)anyMapOfWithIOSClass:(IOSClass *)keyClazz
                           withIOSClass:(IOSClass *)valueClazz;

/*!
 @brief Matches anything, including <code>null</code>.
 <p>
  This is an alias of: <code>any()</code> and <code>any(java.lang.Class)</code>.
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>null</code>.
 - seealso: #any()
 - seealso: #any(Class)
 - seealso: #notNull()
 - seealso: #notNull(Class)
 */
+ (id)anyObject __attribute__((deprecated));

/*!
 @brief Any <strong>non-null</strong> <code>Set</code>.
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Set</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return empty Set
 - seealso: #anySetOf(Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilSet>)anySet;

/*!
 @brief Any <strong>non-null</strong> <code>Set</code>.
 <p>
  Generic friendly alias to <code>ArgumentMatchers.anySet()</code>.
  It's an alternative to <code>&#064;SuppressWarnings("unchecked")</code> to keep code clean of compiler warnings. 
 </p>
  
 <p>
  This method doesn't do type checks of the set content with the given type parameter, it is only there
  to avoid casting in the code. 
 </p>
  
 <p>
  Since Mockito 2.1.0, only allow non-null <code>Set</code>.
  As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @param clazz Type owned by the Set to avoid casting
 @return empty Set
 - seealso: #anySet()
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id<JavaUtilSet>)anySetOfWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Any <code>short</code> or <strong>non-null</strong> <code>Short</code>.
 <p>
  Since Mockito 2.1.0, only allow valued <code>Short</code>, thus <code>null</code> is not anymore a valid value.
  As primitive wrappers are nullable, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>0</code>.
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (jshort)anyShort;

/*!
 @brief Any <strong>non-null</strong> <code>String</code>
 <p>
  Since Mockito 2.1.0, only allow non-null <code>String</code>.
 As this is a nullable reference, the suggested API to <strong>match</strong> <code>null</code> wrapper
  would be <code>isNull()</code>. We felt this change would make tests harness much safer that it was with Mockito
  1.x. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return empty String ("")
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (NSString *)anyString;

/*!
 @brief Any vararg, meaning any number and values of arguments.
 <p>
  Example: 
 <pre class="code"><code class="java">
  //verification:
  mock.foo(1, 2);
  mock.foo(1, 2, 3, 4);
  verify(mock, times(2)).foo(anyVararg());
  //stubbing:
  when(mock.foo(anyVararg()).thenReturn(100);
  //prints 100
  System.out.println(mock.foo(1, 2));
  //also prints 100
  System.out.println(mock.foo(1, 2, 3, 4)); 
 </code>
@endcode
  </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class. 
 </p>
 @return <code>null</code>.
 - seealso: #any()
 - seealso: #any(Class)
 */
+ (id)anyVararg __attribute__((deprecated));

/*!
 @brief Allows creating custom argument matchers.
 <p>
  This API has changed in 2.1.0, please read <code>ArgumentMatcher</code> for rationale and migration guide. 
 <b>NullPointerException</b> auto-unboxing caveat is described below. 
 </p>
  
 <p>
  It is important to understand the use cases and available options for dealing with non-trivial arguments 
 <b>before</b> implementing custom argument matchers. This way, you can select the best possible approach
  for given scenario and produce highest quality test (clean and maintainable).
  Please read the documentation for <code>ArgumentMatcher</code> to learn about approaches and see the examples. 
 </p>
  
 <p>
  <b>NullPointerException</b> auto-unboxing caveat.
  In rare cases when matching primitive parameter types you <b>*must*</b> use relevant intThat(), floatThat(), etc. method.
  This way you will avoid <code>NullPointerException</code> during auto-unboxing.
  Due to how java works we don't really have a clean way of detecting this scenario and protecting the user from this problem.
  Hopefully, the javadoc describes the problem and solution well.
  If you have an idea how to fix the problem, let us know via the mailing list or the issue tracker. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatcher</code> class 
 </p>
 @param matcher decides whether argument matches
 @return <code>null</code>.
 */
+ (id)argThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief Allows creating custom <code>boolean</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>boolean</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>false</code>.
 */
+ (jboolean)booleanThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief Allows creating custom <code>byte</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>byte</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jbyte)byteThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief Allows creating custom <code>char</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>char</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jchar)charThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief <code>String</code> argument that contains the given substring.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param substring the substring.
 @return empty String ("").
 */
+ (NSString *)containsWithNSString:(NSString *)substring;

/*!
 @brief Allows creating custom <code>double</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>double</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jdouble)doubleThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief <code>String</code> argument that ends with the given suffix.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param suffix the suffix.
 @return empty String ("").
 */
+ (NSString *)endsWithWithNSString:(NSString *)suffix;

/*!
 @brief <code>boolean</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jboolean)eqWithBoolean:(jboolean)value;

/*!
 @brief <code>byte</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jbyte)eqWithByte:(jbyte)value;

/*!
 @brief <code>char</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jchar)eqWithChar:(jchar)value;

/*!
 @brief <code>double</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jdouble)eqWithDouble:(jdouble)value;

/*!
 @brief <code>float</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jfloat)eqWithFloat:(jfloat)value;

/*!
 @brief <code>int</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jint)eqWithInt:(jint)value;

/*!
 @brief <code>long</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>0</code>.
 */
+ (jlong)eqWithLong:(jlong)value;

/*!
 @brief <code>short</code> argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param value the given value.
 @return <code>0</code>.
 */
+ (jshort)eqWithShort:(jshort)value;

/*!
 @brief Object argument that is equal to the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>null</code>.
 */
+ (id)eqWithId:(id)value;

/*!
 @brief Allows creating custom <code>float</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>float</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jfloat)floatThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief Allows creating custom <code>int</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>int</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jint)intThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief <code>Object</code> argument that implements the given class.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param type the class of the accepted type.
 @return <code>null</code>.
 - seealso: #any(Class)
 */
+ (id)isAWithIOSClass:(IOSClass *)type;

/*!
 @brief Not <code>null</code> argument.
 <p>
  Alias to <code>ArgumentMatchers.notNull()</code>
  </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @return <code>null</code>.
 - seealso: #isNotNull(Class)
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id)isNotNull;

/*!
 @brief Not <code>null</code> argument, not necessary of the given class.
 <p>
  The class argument is provided to avoid casting.
  Alias to <code>ArgumentMatchers.notNull(Class)</code>
  </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param clazz Type to avoid casting
 @return <code>null</code>.
 */
+ (id)isNotNullWithIOSClass:(IOSClass *)clazz;

/*!
 @brief <code>null</code> argument.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @return <code>null</code>.
 - seealso: #isNull(Class)
 - seealso: #isNotNull()
 - seealso: #isNotNull(Class)
 */
+ (id)isNull;

/*!
 @brief <code>null</code> argument.
 <p>
  The class argument is provided to avoid casting. 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param clazz Type to avoid casting
 @return <code>null</code>.
 - seealso: #isNull()
 - seealso: #isNotNull()
 - seealso: #isNotNull(Class)
 */
+ (id)isNullWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Allows creating custom <code>long</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>long</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jlong)longThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief <code>Pattern</code> argument that matches the given regular expression.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param pattern the regular expression pattern.
 @return empty String ("").
 - seealso: AdditionalMatchers#not(boolean)
 */
+ (NSString *)matchesWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief <code>String</code> argument that matches the given regular expression.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param regex the regular expression.
 @return empty String ("").
 - seealso: AdditionalMatchers#not(boolean)
 */
+ (NSString *)matchesWithNSString:(NSString *)regex;

/*!
 @brief Not <code>null</code> argument.
 <p>
  Alias to <code>ArgumentMatchers.isNotNull()</code>
  </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @return <code>null</code>.
 */
+ (id)notNull;

/*!
 @brief Not <code>null</code> argument, not necessary of the given class.
 <p>
  The class argument is provided to avoid casting.
  Alias to <code>ArgumentMatchers.isNotNull(Class)</code>
  <p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param clazz Type to avoid casting
 @return <code>null</code>.
 - seealso: #isNotNull()
 - seealso: #isNull()
 - seealso: #isNull(Class)
 */
+ (id)notNullWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Argument that is either <code>null</code> or of the given type.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param clazz Type to avoid casting
 @return <code>null</code>.
 */
+ (id)nullableWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Object argument that is reflection-equal to the given value with support for excluding
  selected fields from a class.
 <p>
  This matcher can be used when equals() is not implemented on compared objects.
  Matcher uses java reflection API to compare fields of wanted and actual object. 
 </p>
  
 <p>
  Works similarly to <code>EqualsBuilder.reflectionEquals(this, other, excludeFields)</code> from
  apache commons library. 
 <p>
  <b>Warning</b> The equality check is shallow! 
 </p>
  
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @param excludeFields fields to exclude, if field does not exist it is ignored.
 @return <code>null</code>.
 */
+ (id)refEqWithId:(id)value
withNSStringArray:(IOSObjectArray *)excludeFields;

/*!
 @brief Object argument that is the same as the given value.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class 
 </p>
 @param value the given value.
 @return <code>null</code>.
 */
+ (id)sameWithId:(id)value;

/*!
 @brief Allows creating custom <code>short</code> argument matchers.
 Note that <code>argThat</code> will not work with primitive <code>short</code> matchers due to <code>NullPointerException</code> auto-unboxing caveat. 
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param matcher decides whether argument matches
 @return <code>0</code>.
 */
+ (jshort)shortThatWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher;

/*!
 @brief <code>String</code> argument that starts with the given prefix.
 <p>
  See examples in javadoc for <code>ArgumentMatchers</code> class
 @param prefix the prefix.
 @return empty String ("").
 */
+ (NSString *)startsWithWithNSString:(NSString *)prefix;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoArgumentMatchers)

FOUNDATION_EXPORT void OrgMockitoArgumentMatchers_init(OrgMockitoArgumentMatchers *self);

FOUNDATION_EXPORT OrgMockitoArgumentMatchers *new_OrgMockitoArgumentMatchers_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoArgumentMatchers *create_OrgMockitoArgumentMatchers_init(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_any(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_anyObject(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_anyWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isAWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_anyVararg(void);

FOUNDATION_EXPORT jboolean OrgMockitoArgumentMatchers_anyBoolean(void);

FOUNDATION_EXPORT jbyte OrgMockitoArgumentMatchers_anyByte(void);

FOUNDATION_EXPORT jchar OrgMockitoArgumentMatchers_anyChar(void);

FOUNDATION_EXPORT jint OrgMockitoArgumentMatchers_anyInt(void);

FOUNDATION_EXPORT jlong OrgMockitoArgumentMatchers_anyLong(void);

FOUNDATION_EXPORT jfloat OrgMockitoArgumentMatchers_anyFloat(void);

FOUNDATION_EXPORT jdouble OrgMockitoArgumentMatchers_anyDouble(void);

FOUNDATION_EXPORT jshort OrgMockitoArgumentMatchers_anyShort(void);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_anyString(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoArgumentMatchers_anyList(void);

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoArgumentMatchers_anyListOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoArgumentMatchers_anySet(void);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoArgumentMatchers_anySetOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoArgumentMatchers_anyMap(void);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoArgumentMatchers_anyMapOfWithIOSClass_withIOSClass_(IOSClass *keyClazz, IOSClass *valueClazz);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoArgumentMatchers_anyCollection(void);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoArgumentMatchers_anyCollectionOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaLangIterable> OrgMockitoArgumentMatchers_anyIterable(void);

FOUNDATION_EXPORT id<JavaLangIterable> OrgMockitoArgumentMatchers_anyIterableOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT jboolean OrgMockitoArgumentMatchers_eqWithBoolean_(jboolean value);

FOUNDATION_EXPORT jbyte OrgMockitoArgumentMatchers_eqWithByte_(jbyte value);

FOUNDATION_EXPORT jchar OrgMockitoArgumentMatchers_eqWithChar_(jchar value);

FOUNDATION_EXPORT jdouble OrgMockitoArgumentMatchers_eqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoArgumentMatchers_eqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoArgumentMatchers_eqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoArgumentMatchers_eqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoArgumentMatchers_eqWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_eqWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_refEqWithId_withNSStringArray_(id value, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_sameWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNull(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_notNull(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_notNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNotNull(void);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_isNotNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_nullableWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_containsWithNSString_(NSString *substring);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_matchesWithNSString_(NSString *regex);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_matchesWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_endsWithWithNSString_(NSString *suffix);

FOUNDATION_EXPORT NSString *OrgMockitoArgumentMatchers_startsWithWithNSString_(NSString *prefix);

FOUNDATION_EXPORT id OrgMockitoArgumentMatchers_argThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jchar OrgMockitoArgumentMatchers_charThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jboolean OrgMockitoArgumentMatchers_booleanThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jbyte OrgMockitoArgumentMatchers_byteThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jshort OrgMockitoArgumentMatchers_shortThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jint OrgMockitoArgumentMatchers_intThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jlong OrgMockitoArgumentMatchers_longThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jfloat OrgMockitoArgumentMatchers_floatThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

FOUNDATION_EXPORT jdouble OrgMockitoArgumentMatchers_doubleThatWithOrgMockitoArgumentMatcher_(id<OrgMockitoArgumentMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoArgumentMatchers)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoArgumentMatchers")
