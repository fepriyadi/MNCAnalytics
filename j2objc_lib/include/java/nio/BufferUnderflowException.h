//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/BufferUnderflowException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioBufferUnderflowException")
#ifdef RESTRICT_JavaNioBufferUnderflowException
#define INCLUDE_ALL_JavaNioBufferUnderflowException 0
#else
#define INCLUDE_ALL_JavaNioBufferUnderflowException 1
#endif
#undef RESTRICT_JavaNioBufferUnderflowException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioBufferUnderflowException_) && (INCLUDE_ALL_JavaNioBufferUnderflowException || defined(INCLUDE_JavaNioBufferUnderflowException))
#define JavaNioBufferUnderflowException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when a relative <i>get</i> operation reaches
  the source buffer's limit.
 @since 1.4
 */
@interface JavaNioBufferUnderflowException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioBufferUnderflowException)

FOUNDATION_EXPORT void JavaNioBufferUnderflowException_init(JavaNioBufferUnderflowException *self);

FOUNDATION_EXPORT JavaNioBufferUnderflowException *new_JavaNioBufferUnderflowException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioBufferUnderflowException *create_JavaNioBufferUnderflowException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioBufferUnderflowException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioBufferUnderflowException")
