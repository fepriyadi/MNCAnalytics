//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/verification/VerificationEvent.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationEvent")
#ifdef RESTRICT_OrgMockitoVerificationVerificationEvent
#define INCLUDE_ALL_OrgMockitoVerificationVerificationEvent 0
#else
#define INCLUDE_ALL_OrgMockitoVerificationVerificationEvent 1
#endif
#undef RESTRICT_OrgMockitoVerificationVerificationEvent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoVerificationVerificationEvent_) && (INCLUDE_ALL_OrgMockitoVerificationVerificationEvent || defined(INCLUDE_OrgMockitoVerificationVerificationEvent))
#define OrgMockitoVerificationVerificationEvent_

@class JavaLangThrowable;
@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

/*!
 @brief Contains all information about a verification that has happened.
 */
@protocol OrgMockitoVerificationVerificationEvent < JavaObject >

/*!
 @return The mock that a verification happened on.
 */
- (id)getMock;

/*!
 @return the <code>VerificationMode</code> that was used.
 */
- (id<OrgMockitoVerificationVerificationMode>)getMode;

/*!
 @return the <code>VerificationData</code> that was verified on.
 */
- (id<OrgMockitoInternalVerificationApiVerificationData>)getData;

/*!
 @brief A nullable Throwable if it is null, the verification succeeded,
  otherwise the throwable contains the cause of why the verification failed.
 @return null or the error.
 */
- (JavaLangThrowable *)getVerificationError;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationVerificationEvent)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationVerificationEvent)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationEvent")
