//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ForwardingListMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingListMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingListMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingListMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingListMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingListMultimap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingListMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingListMultimap || defined(INCLUDE_ComGoogleCommonCollectForwardingListMultimap))
#define ComGoogleCommonCollectForwardingListMultimap_

#define RESTRICT_ComGoogleCommonCollectForwardingMultimap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMultimap 1
#include "com/google/common/collect/ForwardingMultimap.h"

#define RESTRICT_ComGoogleCommonCollectListMultimap 1
#define INCLUDE_ComGoogleCommonCollectListMultimap 1
#include "com/google/common/collect/ListMultimap.h"

@protocol JavaLangIterable;
@protocol JavaUtilList;

/*!
 @brief A list multimap which forwards all its method calls to another list multimap.Subclasses should
  override one or more methods to modify the behavior of the backing multimap as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingListMultimap</code>.
 @author Kurt Alfred Kluever
 @since 3.0
 */
@interface ComGoogleCommonCollectForwardingListMultimap : ComGoogleCommonCollectForwardingMultimap < ComGoogleCommonCollectListMultimap >

#pragma mark Public

- (id<JavaUtilList>)getWithId:(id __nullable)key;

- (id<JavaUtilList>)removeAllWithId:(id __nullable)key;

- (id<JavaUtilList>)replaceValuesWithId:(id __nonnull)key
                   withJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<ComGoogleCommonCollectListMultimap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingListMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingListMultimap_init(ComGoogleCommonCollectForwardingListMultimap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingListMultimap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingListMultimap")
