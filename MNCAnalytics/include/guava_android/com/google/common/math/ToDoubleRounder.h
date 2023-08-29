//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/math/ToDoubleRounder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathToDoubleRounder")
#ifdef RESTRICT_ComGoogleCommonMathToDoubleRounder
#define INCLUDE_ALL_ComGoogleCommonMathToDoubleRounder 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathToDoubleRounder 1
#endif
#undef RESTRICT_ComGoogleCommonMathToDoubleRounder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonMathToDoubleRounder_) && (INCLUDE_ALL_ComGoogleCommonMathToDoubleRounder || defined(INCLUDE_ComGoogleCommonMathToDoubleRounder))
#define ComGoogleCommonMathToDoubleRounder_

@class JavaMathRoundingMode;
@protocol JavaLangComparable;

/*!
 @brief Helper type to implement rounding <code>X</code> to a representable <code>double</code> value according to
  a <code>RoundingMode</code>.
 */
@interface ComGoogleCommonMathToDoubleRounder : NSObject

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

/*!
 @brief Returns a - b, guaranteed that both arguments are nonnegative.
 */
- (NSNumber<JavaLangComparable> *)minusWithNSNumber:(NSNumber<JavaLangComparable> * __nonnull)a
                                       withNSNumber:(NSNumber<JavaLangComparable> * __nonnull)b;

/*!
 @brief Rounds <code>x</code> to a <code>double</code>.
 */
- (jdouble)roundToDoubleWithNSNumber:(NSNumber<JavaLangComparable> * __nonnull)x
            withJavaMathRoundingMode:(JavaMathRoundingMode * __nonnull)mode;

/*!
 @brief Returns x rounded to either the greatest double less than or equal to the precise value of x,
  or the least double greater than or equal to the precise value of x.
 */
- (jdouble)roundToDoubleArbitrarilyWithNSNumber:(NSNumber<JavaLangComparable> * __nonnull)x;

/*!
 @brief Returns the sign of x: either -1, 0, or 1.
 */
- (jint)signWithNSNumber:(NSNumber<JavaLangComparable> * __nonnull)x;

/*!
 @brief Returns d's value as an X, rounded with the specified mode.
 */
- (NSNumber<JavaLangComparable> *)toXWithDouble:(jdouble)d
                       withJavaMathRoundingMode:(JavaMathRoundingMode * __nonnull)mode;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonMathToDoubleRounder)

FOUNDATION_EXPORT void ComGoogleCommonMathToDoubleRounder_initPackagePrivate(ComGoogleCommonMathToDoubleRounder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathToDoubleRounder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathToDoubleRounder")