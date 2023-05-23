//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runner/manipulation/InvalidOrderingException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerManipulationInvalidOrderingException")
#ifdef RESTRICT_OrgJunitRunnerManipulationInvalidOrderingException
#define INCLUDE_ALL_OrgJunitRunnerManipulationInvalidOrderingException 0
#else
#define INCLUDE_ALL_OrgJunitRunnerManipulationInvalidOrderingException 1
#endif
#undef RESTRICT_OrgJunitRunnerManipulationInvalidOrderingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitRunnerManipulationInvalidOrderingException_) && (INCLUDE_ALL_OrgJunitRunnerManipulationInvalidOrderingException || defined(INCLUDE_OrgJunitRunnerManipulationInvalidOrderingException))
#define OrgJunitRunnerManipulationInvalidOrderingException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief Thrown when an ordering does something invalid (like remove or add children)
 @since 4.13
 */
@interface OrgJunitRunnerManipulationInvalidOrderingException : JavaLangException

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)message;

- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerManipulationInvalidOrderingException)

FOUNDATION_EXPORT void OrgJunitRunnerManipulationInvalidOrderingException_init(OrgJunitRunnerManipulationInvalidOrderingException *self);

FOUNDATION_EXPORT OrgJunitRunnerManipulationInvalidOrderingException *new_OrgJunitRunnerManipulationInvalidOrderingException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerManipulationInvalidOrderingException *create_OrgJunitRunnerManipulationInvalidOrderingException_init(void);

FOUNDATION_EXPORT void OrgJunitRunnerManipulationInvalidOrderingException_initWithNSString_(OrgJunitRunnerManipulationInvalidOrderingException *self, NSString *message);

FOUNDATION_EXPORT OrgJunitRunnerManipulationInvalidOrderingException *new_OrgJunitRunnerManipulationInvalidOrderingException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerManipulationInvalidOrderingException *create_OrgJunitRunnerManipulationInvalidOrderingException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgJunitRunnerManipulationInvalidOrderingException_initWithNSString_withJavaLangThrowable_(OrgJunitRunnerManipulationInvalidOrderingException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT OrgJunitRunnerManipulationInvalidOrderingException *new_OrgJunitRunnerManipulationInvalidOrderingException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerManipulationInvalidOrderingException *create_OrgJunitRunnerManipulationInvalidOrderingException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationInvalidOrderingException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerManipulationInvalidOrderingException")
