//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/ThreadControllerWrapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsThreadControllerWrapper")
#ifdef RESTRICT_OrgApacheXmlUtilsThreadControllerWrapper
#define INCLUDE_ALL_OrgApacheXmlUtilsThreadControllerWrapper 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsThreadControllerWrapper 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsThreadControllerWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlUtilsThreadControllerWrapper_) && (INCLUDE_ALL_OrgApacheXmlUtilsThreadControllerWrapper || defined(INCLUDE_OrgApacheXmlUtilsThreadControllerWrapper))
#define OrgApacheXmlUtilsThreadControllerWrapper_

@class JavaLangThread;
@protocol JavaLangRunnable;

/*!
 @brief A utility class that wraps the ThreadController, which is used
  by IncrementalSAXSource for the incremental building of DTM.
 */
@interface OrgApacheXmlUtilsThreadControllerWrapper : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (JavaLangThread *)runThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                          withInt:(jint)priority;

+ (void)waitThreadWithJavaLangThread:(JavaLangThread *)worker
                withJavaLangRunnable:(id<JavaLangRunnable>)task;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsThreadControllerWrapper)

FOUNDATION_EXPORT void OrgApacheXmlUtilsThreadControllerWrapper_init(OrgApacheXmlUtilsThreadControllerWrapper *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsThreadControllerWrapper *new_OrgApacheXmlUtilsThreadControllerWrapper_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsThreadControllerWrapper *create_OrgApacheXmlUtilsThreadControllerWrapper_init(void);

FOUNDATION_EXPORT JavaLangThread *OrgApacheXmlUtilsThreadControllerWrapper_runThreadWithJavaLangRunnable_withInt_(id<JavaLangRunnable> runnable, jint priority);

FOUNDATION_EXPORT void OrgApacheXmlUtilsThreadControllerWrapper_waitThreadWithJavaLangThread_withJavaLangRunnable_(JavaLangThread *worker, id<JavaLangRunnable> task);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsThreadControllerWrapper)

#endif

#if !defined (OrgApacheXmlUtilsThreadControllerWrapper_ThreadController_) && (INCLUDE_ALL_OrgApacheXmlUtilsThreadControllerWrapper || defined(INCLUDE_OrgApacheXmlUtilsThreadControllerWrapper_ThreadController))
#define OrgApacheXmlUtilsThreadControllerWrapper_ThreadController_

@class JavaLangThread;
@protocol JavaLangRunnable;

/*!
 @brief Thread controller utility class for incremental SAX source.Must 
  be overriden with a derived class to support thread pooling.
 All thread-related stuff is in this class.
 */
@interface OrgApacheXmlUtilsThreadControllerWrapper_ThreadController : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Will get a thread from the pool, execute the task
   and return the thread to the pool.
 The return value is used only to wait for completion
  NEEDSDOC @@param task
 @param priority if  > 0 the task will run with the given priority
    ( doesn't seem to be used in xalan, since it's allways the default )
 @return The thread that is running the task, can be used
           to wait for completion
 */
- (JavaLangThread *)runWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                    withInt:(jint)priority;

/*!
 @brief Wait until the task is completed on the worker
   thread.
 NEEDSDOC @@param worker
  NEEDSDOC @@param task
 @throw InterruptedException
 */
- (void)waitThreadWithJavaLangThread:(JavaLangThread *)worker
                withJavaLangRunnable:(id<JavaLangRunnable>)task;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsThreadControllerWrapper_ThreadController)

FOUNDATION_EXPORT void OrgApacheXmlUtilsThreadControllerWrapper_ThreadController_init(OrgApacheXmlUtilsThreadControllerWrapper_ThreadController *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsThreadControllerWrapper_ThreadController *new_OrgApacheXmlUtilsThreadControllerWrapper_ThreadController_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsThreadControllerWrapper_ThreadController *create_OrgApacheXmlUtilsThreadControllerWrapper_ThreadController_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsThreadControllerWrapper_ThreadController)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsThreadControllerWrapper")
