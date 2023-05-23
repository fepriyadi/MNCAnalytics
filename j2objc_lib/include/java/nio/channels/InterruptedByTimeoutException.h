//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/InterruptedByTimeoutException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsInterruptedByTimeoutException")
#ifdef RESTRICT_JavaNioChannelsInterruptedByTimeoutException
#define INCLUDE_ALL_JavaNioChannelsInterruptedByTimeoutException 0
#else
#define INCLUDE_ALL_JavaNioChannelsInterruptedByTimeoutException 1
#endif
#undef RESTRICT_JavaNioChannelsInterruptedByTimeoutException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsInterruptedByTimeoutException_) && (INCLUDE_ALL_JavaNioChannelsInterruptedByTimeoutException || defined(INCLUDE_JavaNioChannelsInterruptedByTimeoutException))
#define JavaNioChannelsInterruptedByTimeoutException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Checked exception received by a thread when a timeout elapses before an
  asynchronous operation completes.
 @since 1.7
 */
@interface JavaNioChannelsInterruptedByTimeoutException : JavaIoIOException

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

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsInterruptedByTimeoutException)

FOUNDATION_EXPORT void JavaNioChannelsInterruptedByTimeoutException_init(JavaNioChannelsInterruptedByTimeoutException *self);

FOUNDATION_EXPORT JavaNioChannelsInterruptedByTimeoutException *new_JavaNioChannelsInterruptedByTimeoutException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsInterruptedByTimeoutException *create_JavaNioChannelsInterruptedByTimeoutException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsInterruptedByTimeoutException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsInterruptedByTimeoutException")