//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/stubbing/VoidAnswer5.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoStubbingVoidAnswer5")
#ifdef RESTRICT_OrgMockitoStubbingVoidAnswer5
#define INCLUDE_ALL_OrgMockitoStubbingVoidAnswer5 0
#else
#define INCLUDE_ALL_OrgMockitoStubbingVoidAnswer5 1
#endif
#undef RESTRICT_OrgMockitoStubbingVoidAnswer5

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoStubbingVoidAnswer5_) && (INCLUDE_ALL_OrgMockitoStubbingVoidAnswer5 || defined(INCLUDE_OrgMockitoStubbingVoidAnswer5))
#define OrgMockitoStubbingVoidAnswer5_

/*!
 @brief Generic interface to be used for configuring mock's answer for a five argument invocation that returns nothing.
 Answer specifies an action that is executed when you interact with the mock. 
 <p>
  Example of stubbing a mock with this custom answer: 
 <pre class="code"><code class="java">
  import static org.mockito.AdditionalAnswers.answerVoid;
  doAnswer(answerVoid(
      new VoidAnswer5&lt;String, Integer, String, Character, String&gt;() {
          public void answer(String msg, Integer count, String another, Character c, String subject) throws Exception {
              throw new Exception(String.format(msg, another, c, count, subject));
          }
  })).when(mock).someMethod(anyString(), anyInt(), anyString(), anyChar(), anyString());
  //Following will raise an exception with the message "ka-boom <3 mockito"
  mock.someMethod("%s-boom %c%d %s", 3, "ka", '&lt;', "mockito"); 
 </code>
@endcode
 - seealso: Answer
 */
@protocol OrgMockitoStubbingVoidAnswer5 < JavaObject >

/*!
 @param argument0 the first argument.
 @param argument1 the second argument.
 @param argument2 the third argument.
 @param argument3 the fourth argument.
 @param argument4 the fifth argument.
 @throw Throwablethe throwable to be thrown
 */
- (void)answerWithId:(id)argument0
              withId:(id)argument1
              withId:(id)argument2
              withId:(id)argument3
              withId:(id)argument4;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoStubbingVoidAnswer5)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoStubbingVoidAnswer5)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoStubbingVoidAnswer5")