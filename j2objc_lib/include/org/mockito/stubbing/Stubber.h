//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/Stubber.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingStubber")
#ifdef RESTRICT_OrgMockitoStubbingStubber
#define INCLUDE_ALL_OrgMockitoStubbingStubber 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingStubber 1
#endif
#undef RESTRICT_OrgMockitoStubbingStubber

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingStubber_) && (INCLUDE_ALL_OrgMockitoStubbingStubber || defined(INCLUDE_OrgMockitoStubbingStubber))
#define OrgMockitoStubbingStubber_

#define RESTRICT_OrgMockitoStubbingBaseStubber 1
#define INCLUDE_OrgMockitoStubbingBaseStubber 1
#include "org/mockito/stubbing/BaseStubber.h"

/*!
 @brief Allows to choose a method when stubbing in doThrow()|doAnswer()|doNothing()|doReturn() style
 <p>
  Example: 
 <pre class="code"><code class="java">
    doThrow(new RuntimeException()).when(mockedList).clear();
    //following throws RuntimeException:
    mockedList.clear(); 
 </code>
@endcode
  Also useful when stubbing consecutive calls: 
 <pre class="code"><code class="java">
    doThrow(new RuntimeException("one")).
 doThrow(new RuntimeException("two"))
    .when(mock).someVoidMethod(); 
 </code>
@endcode
  Read more about those methods: 
 <p>
  <code>Mockito.doThrow(Throwable[])</code>
  <p>
  <code>Mockito.doAnswer(Answer)</code>
  <p>
  <code>Mockito.doNothing()</code>
  <p>
  <code>Mockito.doReturn(Object)</code>
  <p>
  See examples in javadoc for <code>Mockito</code>
 */
@protocol OrgMockitoStubbingStubber < OrgMockitoStubbingBaseStubber, JavaObject >

/*!
 @brief Allows to choose a method when stubbing in doThrow()|doAnswer()|doNothing()|doReturn() style
 <p>
  Example: 
 <pre class="code"><code class="java">
    doThrow(new RuntimeException())
    .when(mockedList).clear();
    //following throws RuntimeException:
    mockedList.clear(); 
 </code>
@endcode
  Read more about those methods: 
 <p>
  <code>Mockito.doThrow(Throwable[])</code>
  <p>
  <code>Mockito.doAnswer(Answer)</code>
  <p>
  <code>Mockito.doNothing()</code>
  <p>
  <code>Mockito.doReturn(Object)</code>
  <p>
  See examples in javadoc for <code>Mockito</code>
 @param mock The mock
 @return select method for stubbing
 */
- (id)whenWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingStubber)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingStubber)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingStubber")
