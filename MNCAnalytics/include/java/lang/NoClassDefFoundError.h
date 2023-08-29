//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/NoClassDefFoundError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNoClassDefFoundError")
#ifdef RESTRICT_JavaLangNoClassDefFoundError
#define INCLUDE_ALL_JavaLangNoClassDefFoundError 0
#else
#define INCLUDE_ALL_JavaLangNoClassDefFoundError 1
#endif
#undef RESTRICT_JavaLangNoClassDefFoundError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangNoClassDefFoundError_) && (INCLUDE_ALL_JavaLangNoClassDefFoundError || defined(INCLUDE_JavaLangNoClassDefFoundError))
#define JavaLangNoClassDefFoundError_

#define RESTRICT_JavaLangLinkageError 1
#define INCLUDE_JavaLangLinkageError 1
#include "java/lang/LinkageError.h"

/*!
 @brief Thrown if the Java Virtual Machine or a <code>ClassLoader</code> instance
  tries to load in the definition of a class (as part of a normal method call
  or as part of creating a new instance using the <code>new</code> expression)
  and no definition of the class could be found.
 <p>
  The searched-for class definition existed when the currently
  executing class was compiled, but the definition can no longer be
  found.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangNoClassDefFoundError : JavaLangLinkageError

#pragma mark Public

/*!
 @brief Constructs a <code>NoClassDefFoundError</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>NoClassDefFoundError</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoClassDefFoundError)

FOUNDATION_EXPORT void JavaLangNoClassDefFoundError_init(JavaLangNoClassDefFoundError *self);

FOUNDATION_EXPORT JavaLangNoClassDefFoundError *new_JavaLangNoClassDefFoundError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoClassDefFoundError *create_JavaLangNoClassDefFoundError_init(void);

FOUNDATION_EXPORT void JavaLangNoClassDefFoundError_initWithNSString_(JavaLangNoClassDefFoundError *self, NSString *s);

FOUNDATION_EXPORT JavaLangNoClassDefFoundError *new_JavaLangNoClassDefFoundError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoClassDefFoundError *create_JavaLangNoClassDefFoundError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoClassDefFoundError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNoClassDefFoundError")