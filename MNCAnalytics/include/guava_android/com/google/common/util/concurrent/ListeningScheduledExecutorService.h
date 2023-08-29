//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/util/concurrent/ListeningScheduledExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonUtilConcurrentListeningScheduledExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService))
#define ComGoogleCommonUtilConcurrentListeningScheduledExecutorService_

#define RESTRICT_JavaUtilConcurrentScheduledExecutorService 1
#define INCLUDE_JavaUtilConcurrentScheduledExecutorService 1
#include "java/util/concurrent/ScheduledExecutorService.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentListeningExecutorService 1
#include "com/google/common/util/concurrent/ListeningExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol ComGoogleCommonUtilConcurrentListenableScheduledFuture;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

/*!
 @brief A <code>ScheduledExecutorService</code> that returns <code>ListenableFuture</code> instances from its 
 <code>ExecutorService</code> methods.To create an instance from an existing <code>ScheduledExecutorService</code>
 , call <code>MoreExecutors.listeningDecorator(ScheduledExecutorService)</code>
 .
 @author Chris Povirk
 @since 10.0
 */
@protocol ComGoogleCommonUtilConcurrentListeningScheduledExecutorService < JavaUtilConcurrentScheduledExecutorService, ComGoogleCommonUtilConcurrentListeningExecutorService, JavaObject >

/*!
 @since 15.0 (previously returned ScheduledFuture)
 */
- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)command
                                                                                  withLong:(jlong)delay
                                                            withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @since 15.0 (previously returned ScheduledFuture)
 */
- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)callable
                                                                                            withLong:(jlong)delay
                                                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @since 15.0 (previously returned ScheduledFuture)
 */
- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)command
                                                                                             withLong:(jlong)initialDelay
                                                                                             withLong:(jlong)period
                                                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

/*!
 @since 15.0 (previously returned ScheduledFuture)
 */
- (id<ComGoogleCommonUtilConcurrentListenableScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)command
                                                                                                withLong:(jlong)initialDelay
                                                                                                withLong:(jlong)delay
                                                                          withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit * __nonnull)unit;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)arg0;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable> __nonnull)arg0
                                                                         withId:(id __nonnull)arg1;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable> __nonnull)arg0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListeningScheduledExecutorService)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListeningScheduledExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListeningScheduledExecutorService")