//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ForwardingBlockingDeque.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingDeque")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingBlockingDeque
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingDeque 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingDeque 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingBlockingDeque

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingBlockingDeque_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingDeque || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingBlockingDeque))
#define ComGoogleCommonUtilConcurrentForwardingBlockingDeque_

#define RESTRICT_ComGoogleCommonCollectForwardingDeque 1
#define INCLUDE_ComGoogleCommonCollectForwardingDeque 1
#include "com/google/common/collect/ForwardingDeque.h"

#define RESTRICT_JavaUtilConcurrentBlockingDeque 1
#define INCLUDE_JavaUtilConcurrentBlockingDeque 1
#include "java/util/concurrent/BlockingDeque.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;

/*!
 @brief A <code>BlockingDeque</code> which forwards all its method calls to another <code>BlockingDeque</code>.
 Subclasses should override one or more methods to modify the behavior of the backing deque as
  desired per the <a href="http://en.wikipedia.org/wiki/Decorator_pattern">decorator pattern</a>.
  
 <p><b>Warning:</b> The methods of <code>ForwardingBlockingDeque</code> forward <b>indiscriminately</b>
  to the methods of the delegate. For example, overriding <code>add</code> alone <b>will not</b> change
  the behaviour of <code>offer</code> which can lead to unexpected behaviour. In this case, you should
  override <code>offer</code> as well, either providing your own implementation, or delegating to the
  provided <code>standardOffer</code> method. 
 <p><b><code>default</code> method warning:</b> This class does <i>not</i> forward calls to <code>default</code>
  methods. Instead, it inherits their default implementations. When those implementations
  invoke methods, they invoke methods on the <code>ForwardingBlockingDeque</code>.
  
 <p>The <code>standard</code> methods are not guaranteed to be thread-safe, even when all of the
  methods that they depend on are thread-safe.
 @author Emily Soldal
 @since 21.0 (since 14.0 as <code>com.google.common.collect.ForwardingBlockingDeque</code>)
 */
@interface ComGoogleCommonUtilConcurrentForwardingBlockingDeque : ComGoogleCommonCollectForwardingDeque < JavaUtilConcurrentBlockingDeque >

#pragma mark Public

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)c
                              withInt:(jint)maxElements;

- (jboolean)offerWithId:(id __nonnull)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (jboolean)offerFirstWithId:(id __nonnull)e
                    withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (jboolean)offerLastWithId:(id __nonnull)e
                   withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id)pollFirstWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id)pollLastWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (void)putWithId:(id __nonnull)e;

- (void)putFirstWithId:(id __nonnull)e;

- (void)putLastWithId:(id __nonnull)e;

- (jint)remainingCapacity;

- (id)take;

- (id)takeFirst;

- (id)takeLast;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

- (id<JavaUtilConcurrentBlockingDeque>)delegate;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingBlockingDeque)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingBlockingDeque_init(ComGoogleCommonUtilConcurrentForwardingBlockingDeque *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingBlockingDeque)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingBlockingDeque")
