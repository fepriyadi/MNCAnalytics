//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/ArgumentMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoArgumentMatcher")
#ifdef RESTRICT_OrgMockitoArgumentMatcher
#define INCLUDE_ALL_OrgMockitoArgumentMatcher 0
#else
#define INCLUDE_ALL_OrgMockitoArgumentMatcher 1
#endif
#undef RESTRICT_OrgMockitoArgumentMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoArgumentMatcher_) && (INCLUDE_ALL_OrgMockitoArgumentMatcher || defined(INCLUDE_OrgMockitoArgumentMatcher))
#define OrgMockitoArgumentMatcher_

/*!
 @brief Allows creating customized argument matchers.
 This API was changed in Mockito 2.1.0 in an effort to decouple Mockito from Hamcrest
  and reduce the risk of version incompatibility.
  Migration guide is included close to the bottom of this javadoc. 
 <p>
  For non-trivial method arguments used in stubbing or verification, you have following options
  (in no particular order): 
 <ul>
      <li>refactor the code so that the interactions with collaborators are easier to test with mocks.
      Perhaps it is possible to pass a different argument to the method so that mocking is easier?
      If stuff is hard to test it usually indicates the design could be better, so do refactor for testability!     
 </li>
      <li>don't match the argument strictly, just use one of the lenient argument matchers like
      <code>Mockito.notNull()</code>. Some times it is better to have a simple test that works than
      a complicated test that seem to work.     
 </li>
      <li>implement equals() method in the objects that are used as arguments to mocks.
      Mockito naturally uses equals() for argument matching.
      Many times, this is option is clean and simple.     
 </li>
      <li>use <code>ArgumentCaptor</code> to capture the arguments and perform assertions on their state.
      Useful when you need to verify the arguments. Captor is not useful if you need argument matching for stubbing.
      Many times, this option leads to clean and readable tests with fine-grained validation of arguments.     
 </li>
      <li>use customized argument matchers by implementing <code>ArgumentMatcher</code> interface
      and passing the implementation to the <code>Mockito.argThat</code> method.
      This option is useful if custom matcher is needed for stubbing and can be reused a lot.
      Note that <code>Mockito.argThat</code> demonstrates <b>NullPointerException</b> auto-unboxing caveat.
      </li>
      <li>use an instance of hamcrest matcher and pass it to
      <code>org.mockito.hamcrest.MockitoHamcrest.argThat(org.hamcrest.Matcher)</code>
      Useful if you already have a hamcrest matcher. Reuse and win!
      Note that <code>org.mockito.hamcrest.MockitoHamcrest.argThat(org.hamcrest.Matcher)</code> demonstrates <b>NullPointerException</b> auto-unboxing caveat.
      </li>
      <li>Java 8 only - use a lambda in place of an <code>ArgumentMatcher</code> since <code>ArgumentMatcher</code>
      is effectively a functional interface. A lambda can be used with the <code>Mockito.argThat</code> method.</li>
  </ul>
  
 <p>
  Implementations of this interface can be used with <code>Matchers.argThat</code> method.
  Use <code>toString()</code> method for description of the matcher
  - it is printed in verification errors. 
 <pre class="code"><code class="java">
  class ListOfTwoElements implements ArgumentMatcher&lt;List&gt; {
      public boolean matches(List list) {
          return list.size() == 2;
      }
      public String toString() {
          //printed in verification errors
          return "[list of 2 elements]";
      } }
  List mock = mock(List.class);
  when(mock.addAll(argThat(new ListOfTwoElements))).thenReturn(true);
  mock.addAll(Arrays.asList(&quot;one&quot;, &quot;two&quot;));
  verify(mock).addAll(argThat(new ListOfTwoElements())); 
 </code>
@endcode
  To keep it readable you can extract method, e.g: 
 <pre class="code"><code class="java">
    verify(mock).addAll(<b>argThat(new ListOfTwoElements())</b>);
    //becomes
    verify(mock).addAll(<b>listOfTwoElements()</b>);
  </code>
@endcode
  In Java 8 you can treat ArgumentMatcher as a functional interface
  and use a lambda, e.g.: 
 <pre class="code"><code class="java">
    verify(mock).addAll(<b>argThat(list -> list.size() == 2)</b>);
  </code>
@endcode
  
 <p>
  Read more about other matchers in javadoc for <code>Matchers</code> class. 
 <h2>2.1.0 migration guide</h2>
  All existing custom implementations of <code>ArgumentMatcher</code> will no longer compile.
  All locations where hamcrest matchers are passed to <code>argThat()</code> will no longer compile.
  There are 2 approaches to fix the problems: 
 <ul>
  <li>a) Refactor the hamcrest matcher to Mockito matcher:
  Use "implements ArgumentMatcher" instead of "extends ArgumentMatcher".
  Then refactor <code>describeTo()</code> method into <code>toString()</code> method. 
 </li>
  <li>
  b) Use <code>org.mockito.hamcrest.MockitoHamcrest.argThat()</code> instead of <code>Mockito.argThat()</code>.
  Ensure that there is <a href="http://hamcrest.org/JavaHamcrest/">hamcrest</a> dependency on classpath
  (Mockito does not depend on hamcrest any more). 
 </li>
  </ul>
  What option is right for you? If you don't mind compile dependency to hamcrest
  then option b) is probably right for you.
  Your choice should not have big impact and is fully reversible -
  you can choose different option in future (and refactor the code)
 @since 2.1.0
 */
@protocol OrgMockitoArgumentMatcher < JavaObject >

/*!
 @brief Informs if this matcher accepts the given argument.
 <p>
  The method should <b>never</b> assert if the argument doesn't match. It
  should only return false. 
 <p>
  See the example in the top level javadoc for <code>ArgumentMatcher</code>
 @param argument the argument
 @return true if this matcher accepts the given argument.
 */
- (jboolean)matchesWithId:(id)argument;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoArgumentMatcher)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoArgumentMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoArgumentMatcher")