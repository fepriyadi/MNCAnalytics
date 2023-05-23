//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/ForwardingSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSet")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingSet
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectForwardingSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingSet || defined(INCLUDE_ComGoogleCommonCollectForwardingSet))
#define ComGoogleCommonCollectForwardingSet_

#define RESTRICT_ComGoogleCommonCollectForwardingCollection 1
#define INCLUDE_ComGoogleCommonCollectForwardingCollection 1
#include "com/google/common/collect/ForwardingCollection.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

@protocol JavaUtilCollection;
@protocol JavaUtilSpliterator;

/*!
 @brief A set which forwards all its method calls to another set.Subclasses should override one or more
  methods to modify the behavior of the backing set as desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">
 decorator pattern</a>.
 <p><b>Warning:</b> The methods of <code>ForwardingSet</code> forward <b>indiscriminately</b> to the
  methods of the delegate. For example, overriding <code>add</code> alone <b>will not</b> change the
  behavior of <code>addAll</code>, which can lead to unexpected behavior. In this case, you should
  override <code>addAll</code> as well, either providing your own implementation, or delegating to the
  provided <code>standardAddAll</code> method. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingSet</code>.
  
 <p>The <code>standard</code> methods are not guaranteed to be thread-safe, even when all of the
  methods that they depend on are thread-safe.
 @author Kevin Bourrillion
 @author Louis Wasserman
 @since 2.0
 */
@interface ComGoogleCommonCollectForwardingSet : ComGoogleCommonCollectForwardingCollection < JavaUtilSet >

#pragma mark Public

- (jboolean)isEqual:(id __nullable)object;

- (NSUInteger)hash;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilSet>)delegate;

/*!
 @brief A sensible definition of <code>equals</code> in terms of <code>size</code> and <code>containsAll</code>.If
  you override either of those methods, you may wish to override <code>equals</code> to forward to
  this implementation.
 @since 7.0
 */
- (jboolean)standardEqualsWithId:(id __nullable)object;

/*!
 @brief A sensible definition of <code>hashCode</code> in terms of <code>iterator</code>.If you override 
 <code>iterator</code>, you may wish to override <code>equals</code> to forward to this implementation.
 @since 7.0
 */
- (jint)standardHashCode;

/*!
 @brief A sensible definition of <code>removeAll</code> in terms of <code>iterator</code> and <code>remove</code>.
 If you override <code>iterator</code> or <code>remove</code>, you may wish to override <code>removeAll</code>
  to forward to this implementation.
 @since 7.0 (this version overrides the <code>ForwardingCollection</code> version as of 12.0)
 */
- (jboolean)standardRemoveAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)collection;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSet_init(ComGoogleCommonCollectForwardingSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSet")
