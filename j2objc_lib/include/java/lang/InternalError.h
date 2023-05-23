//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/InternalError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInternalError")
#ifdef RESTRICT_JavaLangInternalError
#define INCLUDE_ALL_JavaLangInternalError 0
#else
#define INCLUDE_ALL_JavaLangInternalError 1
#endif
#undef RESTRICT_JavaLangInternalError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangInternalError_) && (INCLUDE_ALL_JavaLangInternalError || defined(INCLUDE_JavaLangInternalError))
#define JavaLangInternalError_

#define RESTRICT_JavaLangVirtualMachineError 1
#define INCLUDE_JavaLangVirtualMachineError 1
#include "java/lang/VirtualMachineError.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate some unexpected internal error has occurred in
  the Java Virtual Machine.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangInternalError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs an <code>InternalError</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an <code>InternalError</code> with the specified
  detail message.
 @param message the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Constructs an <code>InternalError</code> with the specified detail
  message and cause.
 <p>Note that the detail message associated
  with <code>cause</code> is <i>not</i> automatically incorporated in
  this error's detail message.
 @param message the detail message (which is saved for later retrieval          by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the          
 <code>getCause()</code>  method).  (A <code>null</code>  value is          permitted, and indicates that the cause is nonexistent or
           unknown.)
 @since 1.8
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs an <code>InternalError</code> with the specified cause
  and a detail message of <code>(cause==null ?
 null :
  cause.toString())</code>
  (which typically contains the class and
  detail message of <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the          
 <code>getCause()</code>  method).  (A <code>null</code>  value is          permitted, and indicates that the cause is nonexistent or
           unknown.)
 @since 1.8
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInternalError)

FOUNDATION_EXPORT void JavaLangInternalError_init(JavaLangInternalError *self);

FOUNDATION_EXPORT JavaLangInternalError *new_JavaLangInternalError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInternalError *create_JavaLangInternalError_init(void);

FOUNDATION_EXPORT void JavaLangInternalError_initWithNSString_(JavaLangInternalError *self, NSString *message);

FOUNDATION_EXPORT JavaLangInternalError *new_JavaLangInternalError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInternalError *create_JavaLangInternalError_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangInternalError_initWithNSString_withJavaLangThrowable_(JavaLangInternalError *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangInternalError *new_JavaLangInternalError_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInternalError *create_JavaLangInternalError_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaLangInternalError_initWithJavaLangThrowable_(JavaLangInternalError *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangInternalError *new_JavaLangInternalError_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInternalError *create_JavaLangInternalError_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInternalError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangInternalError")