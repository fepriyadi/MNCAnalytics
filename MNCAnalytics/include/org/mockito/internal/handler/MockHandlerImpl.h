//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/MockHandlerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl")
#ifdef RESTRICT_OrgMockitoInternalHandlerMockHandlerImpl
#define INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerMockHandlerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalHandlerMockHandlerImpl_) && (INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl || defined(INCLUDE_OrgMockitoInternalHandlerMockHandlerImpl))
#define OrgMockitoInternalHandlerMockHandlerImpl_

#define RESTRICT_OrgMockitoInvocationMockHandler 1
#define INCLUDE_OrgMockitoInvocationMockHandler 1
#include "org/mockito/invocation/MockHandler.h"

@class OrgMockitoInternalInvocationMatchersBinder;
@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationInvocationContainer;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief Invocation handler set on mock objects.
 */
@interface OrgMockitoInternalHandlerMockHandlerImpl : NSObject < OrgMockitoInvocationMockHandler > {
 @public
  OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainer_;
  OrgMockitoInternalInvocationMatchersBinder *matchersBinder_;
}

#pragma mark Public

- (instancetype __nonnull)initWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)mockSettings;

- (id<OrgMockitoInvocationInvocationContainer>)getInvocationContainer;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerMockHandlerImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, invocationContainer_, OrgMockitoInternalStubbingInvocationContainerImpl *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalHandlerMockHandlerImpl, matchersBinder_, OrgMockitoInternalInvocationMatchersBinder *)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerMockHandlerImpl_initWithOrgMockitoMockMockCreationSettings_(OrgMockitoInternalHandlerMockHandlerImpl *self, id<OrgMockitoMockMockCreationSettings> mockSettings);

FOUNDATION_EXPORT OrgMockitoInternalHandlerMockHandlerImpl *new_OrgMockitoInternalHandlerMockHandlerImpl_initWithOrgMockitoMockMockCreationSettings_(id<OrgMockitoMockMockCreationSettings> mockSettings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerMockHandlerImpl *create_OrgMockitoInternalHandlerMockHandlerImpl_initWithOrgMockitoMockMockCreationSettings_(id<OrgMockitoMockMockCreationSettings> mockSettings);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerMockHandlerImpl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerMockHandlerImpl")