//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/IndexedImmutableSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet")
#ifdef RESTRICT_ComGoogleCommonCollectIndexedImmutableSet
#define INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectIndexedImmutableSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectIndexedImmutableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet || defined(INCLUDE_ComGoogleCommonCollectIndexedImmutableSet))
#define ComGoogleCommonCollectIndexedImmutableSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet 1
#include "com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilSpliterator;

@interface ComGoogleCommonCollectIndexedImmutableSet : ComGoogleCommonCollectImmutableSet

#pragma mark Public

- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer> __nonnull)consumer;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

- (jint)copyIntoArrayWithNSObjectArray:(IOSObjectArray * __nonnull)dst
                               withInt:(jint)offset OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (id)getWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectIndexedImmutableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectIndexedImmutableSet_initPackagePrivate(ComGoogleCommonCollectIndexedImmutableSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectIndexedImmutableSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectIndexedImmutableSet")
