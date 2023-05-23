//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/graph/MapIteratorCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache")
#ifdef RESTRICT_ComGoogleCommonGraphMapIteratorCache
#define INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache 1
#endif
#undef RESTRICT_ComGoogleCommonGraphMapIteratorCache

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonGraphMapIteratorCache_) && (INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache || defined(INCLUDE_ComGoogleCommonGraphMapIteratorCache))
#define ComGoogleCommonGraphMapIteratorCache_

@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A map-like data structure that wraps a backing map and caches values while iterating through 
 <code>unmodifiableKeySet()</code>.By design, the cache is cleared when this structure is mutated.
 If
  this structure is never mutated, it provides a thread-safe view of the backing map. 
 <p>The <code>MapIteratorCache</code> assumes ownership of the backing map, and cannot guarantee
  correctness in the face of external mutations to the backing map. As such, it is <b>strongly</b>
  recommended that the caller does not persist a reference to the backing map (unless the backing
  map is immutable). 
 <p>This class is tailored toward use cases in common.graph. It is *NOT* a general purpose map.
 @author James Sexton
 */
@interface ComGoogleCommonGraphMapIteratorCache : NSObject

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id __nullable)key;

- (id)getWithId:(id __nullable)key;

- (id)getWithoutCachingWithId:(id __nullable)key;

- (id)putWithId:(id __nullable)key
         withId:(id __nullable)value;

- (id)removeWithId:(id __nullable)key;

- (id<JavaUtilSet>)unmodifiableKeySet;

#pragma mark Protected

- (void)clearCache;

- (id)getIfCachedWithId:(id __nullable)key;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithJavaUtilMap:(id<JavaUtilMap> __nonnull)backingMap;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonGraphMapIteratorCache)

FOUNDATION_EXPORT void ComGoogleCommonGraphMapIteratorCache_initPackagePrivateWithJavaUtilMap_(ComGoogleCommonGraphMapIteratorCache *self, id<JavaUtilMap> backingMap);

FOUNDATION_EXPORT ComGoogleCommonGraphMapIteratorCache *new_ComGoogleCommonGraphMapIteratorCache_initPackagePrivateWithJavaUtilMap_(id<JavaUtilMap> backingMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonGraphMapIteratorCache *create_ComGoogleCommonGraphMapIteratorCache_initPackagePrivateWithJavaUtilMap_(id<JavaUtilMap> backingMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonGraphMapIteratorCache)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonGraphMapIteratorCache")
