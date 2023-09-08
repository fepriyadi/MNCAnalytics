//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/TypeSafeMatching.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationTypeSafeMatching")
#ifdef RESTRICT_OrgMockitoInternalInvocationTypeSafeMatching
#define INCLUDE_ALL_OrgMockitoInternalInvocationTypeSafeMatching 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationTypeSafeMatching 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationTypeSafeMatching

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalInvocationTypeSafeMatching_) && (INCLUDE_ALL_OrgMockitoInternalInvocationTypeSafeMatching || defined(INCLUDE_OrgMockitoInternalInvocationTypeSafeMatching))
#define OrgMockitoInternalInvocationTypeSafeMatching_

#define RESTRICT_OrgMockitoInternalInvocationArgumentMatcherAction 1
#define INCLUDE_OrgMockitoInternalInvocationArgumentMatcherAction 1
#include "org/mockito/internal/invocation/ArgumentMatcherAction.h"

@protocol OrgMockitoArgumentMatcher;

@interface OrgMockitoInternalInvocationTypeSafeMatching : NSObject < OrgMockitoInternalInvocationArgumentMatcherAction >

#pragma mark Public

- (jboolean)applyWithOrgMockitoArgumentMatcher:(id<OrgMockitoArgumentMatcher>)matcher
                                        withId:(id)argument;

+ (id<OrgMockitoInternalInvocationArgumentMatcherAction>)matchesTypeSafe;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalInvocationTypeSafeMatching)

FOUNDATION_EXPORT id<OrgMockitoInternalInvocationArgumentMatcherAction> OrgMockitoInternalInvocationTypeSafeMatching_matchesTypeSafe(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationTypeSafeMatching)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationTypeSafeMatching")
