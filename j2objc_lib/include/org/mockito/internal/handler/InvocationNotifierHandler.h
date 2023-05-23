//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/InvocationNotifierHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler")
#ifdef RESTRICT_OrgMockitoInternalHandlerInvocationNotifierHandler
#define INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerInvocationNotifierHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalHandlerInvocationNotifierHandler_) && (INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler || defined(INCLUDE_OrgMockitoInternalHandlerInvocationNotifierHandler))
#define OrgMockitoInternalHandlerInvocationNotifierHandler_

#define RESTRICT_OrgMockitoInvocationMockHandler 1
#define INCLUDE_OrgMockitoInvocationMockHandler 1
#include "org/mockito/invocation/MockHandler.h"

@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationInvocationContainer;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief Handler, that call all listeners wanted for this mock, before delegating it
  to the parameterized handler.
 Also imposterize MockHandlerImpl, delegate all call of InternalMockHandler to the real mockHandler
 */
@interface OrgMockitoInternalHandlerInvocationNotifierHandler : NSObject < OrgMockitoInvocationMockHandler >

#pragma mark Public

- (instancetype __nonnull)initPackagePrivateWithOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)mockHandler
                                         withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (id<OrgMockitoInvocationInvocationContainer>)getInvocationContainer;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerInvocationNotifierHandler)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerInvocationNotifierHandler_initPackagePrivateWithOrgMockitoInvocationMockHandler_withOrgMockitoMockMockCreationSettings_(OrgMockitoInternalHandlerInvocationNotifierHandler *self, id<OrgMockitoInvocationMockHandler> mockHandler, id<OrgMockitoMockMockCreationSettings> settings);

FOUNDATION_EXPORT OrgMockitoInternalHandlerInvocationNotifierHandler *new_OrgMockitoInternalHandlerInvocationNotifierHandler_initPackagePrivateWithOrgMockitoInvocationMockHandler_withOrgMockitoMockMockCreationSettings_(id<OrgMockitoInvocationMockHandler> mockHandler, id<OrgMockitoMockMockCreationSettings> settings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerInvocationNotifierHandler *create_OrgMockitoInternalHandlerInvocationNotifierHandler_initPackagePrivateWithOrgMockitoInvocationMockHandler_withOrgMockitoMockMockCreationSettings_(id<OrgMockitoInvocationMockHandler> mockHandler, id<OrgMockitoMockMockCreationSettings> settings);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerInvocationNotifierHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerInvocationNotifierHandler")
