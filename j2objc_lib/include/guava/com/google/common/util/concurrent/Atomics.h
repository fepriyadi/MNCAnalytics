//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/util/concurrent/Atomics.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAtomics
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAtomics

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentAtomics_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics || defined(INCLUDE_ComGoogleCommonUtilConcurrentAtomics))
#define ComGoogleCommonUtilConcurrentAtomics_

@class IOSObjectArray;
@class JavaUtilConcurrentAtomicAtomicReference;
@class JavaUtilConcurrentAtomicAtomicReferenceArray;

/*!
 @brief Static utility methods pertaining to classes in the <code>java.util.concurrent.atomic</code> package.
 @author Kurt Alfred Kluever
 @since 10.0
 */
@interface ComGoogleCommonUtilConcurrentAtomics : NSObject

#pragma mark Public

/*!
 @brief Creates an <code>AtomicReference</code> instance with no initial value.
 @return a new <code>AtomicReference</code> with no initial value
 */
+ (JavaUtilConcurrentAtomicAtomicReference *)newReference OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an <code>AtomicReference</code> instance with the given initial value.
 @param initialValue the initial value
 @return a new <code>AtomicReference</code> with the given initial value
 */
+ (JavaUtilConcurrentAtomicAtomicReference *)newReferenceWithId:(id __nullable)initialValue OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an <code>AtomicReferenceArray</code> instance with the same length as, and all elements
  copied from, the given array.
 @param array the array to copy elements from
 @return a new <code>AtomicReferenceArray</code> copied from the given array
 */
+ (JavaUtilConcurrentAtomicAtomicReferenceArray *)newReferenceArrayWithNSObjectArray:(IOSObjectArray * __nonnull)array OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an <code>AtomicReferenceArray</code> instance of given length.
 @param length the length of the array
 @return a new <code>AtomicReferenceArray</code> with the given length
 */
+ (JavaUtilConcurrentAtomicAtomicReferenceArray *)newReferenceArrayWithInt:(jint)length OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAtomics)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *ComGoogleCommonUtilConcurrentAtomics_newReference(void);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *ComGoogleCommonUtilConcurrentAtomics_newReferenceWithId_(id initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *ComGoogleCommonUtilConcurrentAtomics_newReferenceArrayWithInt_(jint length);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReferenceArray *ComGoogleCommonUtilConcurrentAtomics_newReferenceArrayWithNSObjectArray_(IOSObjectArray *array);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAtomics)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAtomics")
