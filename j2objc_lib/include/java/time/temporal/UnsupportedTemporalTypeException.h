//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/temporal/UnsupportedTemporalTypeException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeTemporalUnsupportedTemporalTypeException")
#ifdef RESTRICT_JavaTimeTemporalUnsupportedTemporalTypeException
#define INCLUDE_ALL_JavaTimeTemporalUnsupportedTemporalTypeException 0
#else
#define INCLUDE_ALL_JavaTimeTemporalUnsupportedTemporalTypeException 1
#endif
#undef RESTRICT_JavaTimeTemporalUnsupportedTemporalTypeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeTemporalUnsupportedTemporalTypeException_) && (INCLUDE_ALL_JavaTimeTemporalUnsupportedTemporalTypeException || defined(INCLUDE_JavaTimeTemporalUnsupportedTemporalTypeException))
#define JavaTimeTemporalUnsupportedTemporalTypeException_

#define RESTRICT_JavaTimeDateTimeException 1
#define INCLUDE_JavaTimeDateTimeException 1
#include "java/time/DateTimeException.h"

@class JavaLangThrowable;

/*!
 @brief UnsupportedTemporalTypeException indicates that a ChronoField or ChronoUnit is
  not supported for a Temporal class.
 @since 1.8
 */
@interface JavaTimeTemporalUnsupportedTemporalTypeException : JavaTimeDateTimeException

#pragma mark Public

/*!
 @brief Constructs a new UnsupportedTemporalTypeException with the specified message.
 @param message the message to use for this exception, may be null
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new UnsupportedTemporalTypeException with the specified message and cause.
 @param message the message to use for this exception, may be null
 @param cause the cause of the exception, may be null
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeTemporalUnsupportedTemporalTypeException)

FOUNDATION_EXPORT void JavaTimeTemporalUnsupportedTemporalTypeException_initWithNSString_(JavaTimeTemporalUnsupportedTemporalTypeException *self, NSString *message);

FOUNDATION_EXPORT JavaTimeTemporalUnsupportedTemporalTypeException *new_JavaTimeTemporalUnsupportedTemporalTypeException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeTemporalUnsupportedTemporalTypeException *create_JavaTimeTemporalUnsupportedTemporalTypeException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaTimeTemporalUnsupportedTemporalTypeException_initWithNSString_withJavaLangThrowable_(JavaTimeTemporalUnsupportedTemporalTypeException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaTimeTemporalUnsupportedTemporalTypeException *new_JavaTimeTemporalUnsupportedTemporalTypeException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeTemporalUnsupportedTemporalTypeException *create_JavaTimeTemporalUnsupportedTemporalTypeException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeTemporalUnsupportedTemporalTypeException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeTemporalUnsupportedTemporalTypeException")
