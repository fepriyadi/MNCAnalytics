//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/GetChars.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextGetChars")
#ifdef RESTRICT_AndroidTextGetChars
#define INCLUDE_ALL_AndroidTextGetChars 0
#else
#define INCLUDE_ALL_AndroidTextGetChars 1
#endif
#undef RESTRICT_AndroidTextGetChars

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTextGetChars_) && (INCLUDE_ALL_AndroidTextGetChars || defined(INCLUDE_AndroidTextGetChars))
#define AndroidTextGetChars_

#define RESTRICT_JavaLangCharSequence 1
#define INCLUDE_JavaLangCharSequence 1
#include "java/lang/CharSequence.h"

@class IOSCharArray;

/*!
 @brief Please implement this interface if your CharSequence has a
  getChars() method like the one in String that is faster than
  calling charAt() multiple times.
 */
@protocol AndroidTextGetChars < JavaLangCharSequence, JavaObject >

/*!
 @brief Exactly like String.getChars(): copy chars <code>start</code>
  through <code>end - 1</code> from this CharSequence into <code>dest</code>
  beginning at offset <code>destoff</code>.
 */
- (void)getCharsWithInt:(jint)start
                withInt:(jint)end
          withCharArray:(IOSCharArray *)dest
                withInt:(jint)destoff;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextGetChars)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextGetChars)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextGetChars")