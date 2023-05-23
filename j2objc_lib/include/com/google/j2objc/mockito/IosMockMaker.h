//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/com/google/j2objc/mockito/IosMockMaker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcMockitoIosMockMaker")
#ifdef RESTRICT_ComGoogleJ2objcMockitoIosMockMaker
#define INCLUDE_ALL_ComGoogleJ2objcMockitoIosMockMaker 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcMockitoIosMockMaker 1
#endif
#undef RESTRICT_ComGoogleJ2objcMockitoIosMockMaker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleJ2objcMockitoIosMockMaker_) && (INCLUDE_ALL_ComGoogleJ2objcMockitoIosMockMaker || defined(INCLUDE_ComGoogleJ2objcMockitoIosMockMaker))
#define ComGoogleJ2objcMockitoIosMockMaker_

#define RESTRICT_OrgMockitoPluginsMockMaker 1
#define INCLUDE_OrgMockitoPluginsMockMaker 1
#include "org/mockito/plugins/MockMaker.h"

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoInvocationMockHandler;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoPluginsMockMaker_TypeMockability;

/*!
 @brief MockMaker implementation for iOS.Unlike the JRE and Android versions,
  this class creates mocks for classes using the Objective-C runtime.
 @author Tom Ball
 */
@interface ComGoogleJ2objcMockitoIosMockMaker : NSObject < OrgMockitoPluginsMockMaker >

#pragma mark Public

- (instancetype __nonnull)init;

- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings
                   withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (id<OrgMockitoInvocationMockHandler>)getHandlerWithId:(id)mock;

- (id<OrgMockitoPluginsMockMaker_TypeMockability>)isTypeMockableWithIOSClass:(IOSClass *)type;

- (void)resetMockWithId:(id)mock
withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)newHandler
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

#pragma mark Package-Private

- (IOSClass *)getProxyClassWithIOSClass:(IOSClass *)typeToMock
                      withIOSClassArray:(IOSObjectArray *)interfaces;

@end

J2OBJC_STATIC_INIT(ComGoogleJ2objcMockitoIosMockMaker)

FOUNDATION_EXPORT void ComGoogleJ2objcMockitoIosMockMaker_init(ComGoogleJ2objcMockitoIosMockMaker *self);

FOUNDATION_EXPORT ComGoogleJ2objcMockitoIosMockMaker *new_ComGoogleJ2objcMockitoIosMockMaker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleJ2objcMockitoIosMockMaker *create_ComGoogleJ2objcMockitoIosMockMaker_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcMockitoIosMockMaker)

#endif

#if !defined (ComGoogleJ2objcMockitoIosMockMaker_ClassProxy_) && (INCLUDE_ALL_ComGoogleJ2objcMockitoIosMockMaker || defined(INCLUDE_ComGoogleJ2objcMockitoIosMockMaker_ClassProxy))
#define ComGoogleJ2objcMockitoIosMockMaker_ClassProxy_

@protocol JavaLangReflectInvocationHandler;

@interface ComGoogleJ2objcMockitoIosMockMaker_ClassProxy : NSObject {
 @public
  id<JavaLangReflectInvocationHandler> invocationHandler_;
}

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (id<JavaLangReflectInvocationHandler>)getHandler;

- (void)setHandlerWithJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler>)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcMockitoIosMockMaker_ClassProxy)

J2OBJC_FIELD_SETTER(ComGoogleJ2objcMockitoIosMockMaker_ClassProxy, invocationHandler_, id<JavaLangReflectInvocationHandler>)

FOUNDATION_EXPORT void ComGoogleJ2objcMockitoIosMockMaker_ClassProxy_init(ComGoogleJ2objcMockitoIosMockMaker_ClassProxy *self);

FOUNDATION_EXPORT ComGoogleJ2objcMockitoIosMockMaker_ClassProxy *new_ComGoogleJ2objcMockitoIosMockMaker_ClassProxy_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleJ2objcMockitoIosMockMaker_ClassProxy *create_ComGoogleJ2objcMockitoIosMockMaker_ClassProxy_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcMockitoIosMockMaker_ClassProxy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcMockitoIosMockMaker")
