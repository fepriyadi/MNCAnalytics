//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/TriesToReturnSelf.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf))
#define OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf_init(OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf *new_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf *create_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersTriesToReturnSelf")