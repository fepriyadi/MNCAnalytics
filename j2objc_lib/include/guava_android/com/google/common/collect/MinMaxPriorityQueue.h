//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/MinMaxPriorityQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue")
#ifdef RESTRICT_ComGoogleCommonCollectMinMaxPriorityQueue
#define INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMinMaxPriorityQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectMinMaxPriorityQueue_) && (INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue || defined(INCLUDE_ComGoogleCommonCollectMinMaxPriorityQueue))
#define ComGoogleCommonCollectMinMaxPriorityQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "java/util/AbstractQueue.h"

@class ComGoogleCommonCollectMinMaxPriorityQueue_Builder;
@class ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

/*!
 @brief A double-ended priority queue, which provides constant-time access to both its least element and
  its greatest element, as determined by the queue's specified comparator.If no comparator is
  given at creation time, the natural order of elements is used.
 If no maximum size is given at
  creation time, the queue is unbounded. 
 <p>Usage example: 
 @code
 MinMaxPriorityQueue<User> users = MinMaxPriorityQueue.orderedBy(userComparator)
      .maximumSize(1000)
      .create(); 
 
@endcode
  
 <p>As a <code>Queue</code> it functions exactly as a <code>PriorityQueue</code>: its head element -- the
  implicit target of the methods <code>peek()</code>, <code>poll()</code> and <code>remove()</code> -- is
  defined as the <i>least</i> element in the queue according to the queue's comparator. But unlike
  a regular priority queue, the methods <code>peekLast</code>, <code>pollLast</code> and <code>removeLast</code>
  are also provided, to act on the <i>greatest</i> element in the queue instead. 
 <p>A min-max priority queue can be configured with a maximum size. If so, each time the size of
  the queue exceeds that value, the queue automatically removes its greatest element according to
  its comparator (which might be the element that was just added). This is different from
  conventional bounded queues, which either block or reject new elements when full. 
 <p>This implementation is based on the <a href="http://portal.acm.org/citation.cfm?id=6621">
 min-max heap</a> developed by Atkinson, et al.
  Unlike many other double-ended priority queues, it stores elements in a single array, as compact
  as the traditional heap data structure used in <code>PriorityQueue</code>.
  
 <p>This class is not thread-safe, and does not accept null elements. 
 <p><i>Performance notes:</i>
  
 <ul>
    <li>If you only access one end of the queue, and do use a maximum size, this class will perform
        significantly worse than a <code>PriorityQueue</code> with manual eviction above the maximum
        size. In many cases <code>Ordering.leastOf</code> may work for your use case with significantly
        improved (and asymptotically superior) performance.   
 <li>The retrieval operations <code>peek</code>, <code>peekFirst</code>, <code>peekLast</code>, <code>element</code>
 , and <code>size</code> are constant-time.
    <li>The enqueuing and dequeuing operations (<code>offer</code>, <code>add</code>, and all the forms of
        <code>poll</code> and <code>remove()</code>) run in <code>O(log n) time</code>.
    <li>The <code>remove(Object)</code> and <code>contains</code> operations require linear (<code>O(n)</code>)
        time.   
 <li>If you only access one end of the queue, and don't use a maximum size, this class is
        functionally equivalent to <code>PriorityQueue</code>, but significantly slower. 
 </ul>
 @author Sverre Sundsdal
 @author Torbjorn Gannholm
 @since 8.0
 */
@interface ComGoogleCommonCollectMinMaxPriorityQueue : JavaUtilAbstractQueue {
 @public
  jint maximumSize_;
}

#pragma mark Public

/*!
 @brief Adds the given element to this queue.If this queue has a maximum size, after adding <code>element</code>
  the queue will automatically evict its greatest element (according to its comparator),
  which may be <code>element</code> itself.
 @return <code>true</code> always
 */
- (jboolean)addWithId:(id __nonnull)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)newElements;

- (void)clear;

/*!
 @brief Returns the comparator used to order the elements in this queue.Obeys the general contract of 
 <code>PriorityQueue.comparator</code>, but returns <code>Ordering.natural</code> instead of <code>null</code>
  to indicate natural ordering.
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Creates a new min-max priority queue with default settings: natural order, no maximum size, no
  initial contents, and an initial expected size of 11.
 */
+ (ComGoogleCommonCollectMinMaxPriorityQueue *)create;

/*!
 @brief Creates a new min-max priority queue using natural order, no maximum size, and initially
  containing the given elements.
 */
+ (ComGoogleCommonCollectMinMaxPriorityQueue *)createWithJavaLangIterable:(id<JavaLangIterable> __nonnull)initialContents;

/*!
 @brief Creates and returns a new builder, configured to build <code>MinMaxPriorityQueue</code> instances
  sized appropriately to hold <code>expectedSize</code> elements.
 */
+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)expectedSizeWithInt:(jint)expectedSize;

/*!
 @brief Returns an iterator over the elements contained in this collection, <i>in no particular
  order</i>.
 <p>The iterator is <i>fail-fast</i>: If the MinMaxPriorityQueue is modified at any time after
  the iterator is created, in any way except through the iterator's own remove method, the
  iterator will generally throw a <code>ConcurrentModificationException</code>. Thus, in the face of
  concurrent modification, the iterator fails quickly and cleanly, rather than risking arbitrary,
  non-deterministic behavior at an undetermined time in the future. 
 <p>Note that the fail-fast behavior of an iterator cannot be guaranteed as it is, generally
  speaking, impossible to make any hard guarantees in the presence of unsynchronized concurrent
  modification. Fail-fast iterators throw <code>ConcurrentModificationException</code> on a
  best-effort basis. Therefore, it would be wrong to write a program that depended on this
  exception for its correctness: <i>the fail-fast behavior of iterators should be used only to
  detect bugs.</i>
 @return an iterator over the elements contained in this collection
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Creates and returns a new builder, configured to build <code>MinMaxPriorityQueue</code> instances
  that are limited to <code>maximumSize</code> elements.Each time a queue grows beyond this bound, it
  immediately removes its greatest element (according to its comparator), which might be the
  element that was just added.
 */
+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)maximumSizeWithInt:(jint)maximumSize;

/*!
 @brief Adds the given element to this queue.If this queue has a maximum size, after adding <code>element</code>
  the queue will automatically evict its greatest element (according to its comparator),
  which may be <code>element</code> itself.
 */
- (jboolean)offerWithId:(id __nonnull)element;

/*!
 @brief Creates and returns a new builder, configured to build <code>MinMaxPriorityQueue</code> instances
  that use <code>comparator</code> to determine the least and greatest elements.
 */
+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator> __nonnull)comparator;

- (id)peek;

/*!
 @brief Retrieves, but does not remove, the least element of this queue, or returns <code>null</code> if the
  queue is empty.
 */
- (id)peekFirst;

/*!
 @brief Retrieves, but does not remove, the greatest element of this queue, or returns <code>null</code> if
  the queue is empty.
 */
- (id)peekLast;

- (id)poll;

/*!
 @brief Removes and returns the least element of this queue, or returns <code>null</code> if the queue is
  empty.
 */
- (id)pollFirst;

/*!
 @brief Removes and returns the greatest element of this queue, or returns <code>null</code> if the queue is
  empty.
 */
- (id)pollLast;

/*!
 @brief Removes and returns the least element of this queue.
 @throw NoSuchElementExceptionif the queue is empty
 */
- (id)removeFirst;

/*!
 @brief Removes and returns the greatest element of this queue.
 @throw NoSuchElementExceptionif the queue is empty
 */
- (id)removeLast;

- (jint)size;

- (IOSObjectArray *)toArray;

#pragma mark Package-Private

- (jint)capacity;

- (id)elementDataWithInt:(jint)index;

+ (jint)initialQueueSizeWithInt:(jint)configuredExpectedSize
                        withInt:(jint)maximumSize
           withJavaLangIterable:(id<JavaLangIterable> __nonnull)initialContents OBJC_METHOD_FAMILY_NONE;

+ (jboolean)isEvenLevelWithInt:(jint)index;

/*!
 @brief Returns <code>true</code> if the MinMax heap structure holds.This is only used in testing.
 <p>TODO(kevinb): move to the test class?
 */
- (jboolean)isIntact;

/*!
 @brief Removes the element at position <code>index</code>.
 <p>Normally this method leaves the elements at up to <code>index - 1</code>, inclusive, untouched.
  Under these circumstances, it returns <code>null</code>.
  
 <p>Occasionally, in order to maintain the heap invariant, it must swap a later element of the
  list with one before <code>index</code>. Under these circumstances it returns a pair of elements as a 
 <code>MoveDesc</code>. The first one is the element that was previously at the end of the heap and
  is now at some position before <code>index</code>. The second element is the one that was swapped
  down to replace the element at <code>index</code>. This fact is used by iterator.remove so as to
  visit elements during a traversal once and only once.
 */
- (ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *)removeAtWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue)

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue *ComGoogleCommonCollectMinMaxPriorityQueue_create(void);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue *ComGoogleCommonCollectMinMaxPriorityQueue_createWithJavaLangIterable_(id<JavaLangIterable> initialContents);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_expectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_maximumSizeWithInt_(jint maximumSize);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMinMaxPriorityQueue_isEvenLevelWithInt_(jint index);

FOUNDATION_EXPORT jint ComGoogleCommonCollectMinMaxPriorityQueue_initialQueueSizeWithInt_withInt_withJavaLangIterable_(jint configuredExpectedSize, jint maximumSize, id<JavaLangIterable> initialContents);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue)

#endif

#if !defined (ComGoogleCommonCollectMinMaxPriorityQueue_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue || defined(INCLUDE_ComGoogleCommonCollectMinMaxPriorityQueue_Builder))
#define ComGoogleCommonCollectMinMaxPriorityQueue_Builder_

@class ComGoogleCommonCollectMinMaxPriorityQueue;
@protocol JavaLangIterable;

/*!
 @brief The builder class used in creation of min-max priority queues.Instead of constructing one
  directly, use <code>MinMaxPriorityQueue.orderedBy(Comparator)</code>, <code>MinMaxPriorityQueue.expectedSize(int)</code>
  or <code>MinMaxPriorityQueue.maximumSize(int)</code>.
 @since 8.0
 */
@interface ComGoogleCommonCollectMinMaxPriorityQueue_Builder : NSObject

#pragma mark Public

/*!
 @brief Builds a new min-max priority queue using the previously specified options, and having no
  initial contents.
 */
- (ComGoogleCommonCollectMinMaxPriorityQueue *)create;

/*!
 @brief Builds a new min-max priority queue using the previously specified options, and having the
  given initial elements.
 */
- (ComGoogleCommonCollectMinMaxPriorityQueue *)createWithJavaLangIterable:(id<JavaLangIterable> __nonnull)initialContents;

/*!
 @brief Configures this builder to build min-max priority queues with an initial expected size of 
 <code>expectedSize</code>.
 */
- (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)expectedSizeWithInt:(jint)expectedSize;

/*!
 @brief Configures this builder to build <code>MinMaxPriorityQueue</code> instances that are limited to 
 <code>maximumSize</code> elements.Each time a queue grows beyond this bound, it immediately
  removes its greatest element (according to its comparator), which might be the element that
  was just added.
 */
- (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)maximumSizeWithInt:(jint)maximumSize;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue_Builder)

#endif

#if !defined (ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_) && (INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue || defined(INCLUDE_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc))
#define ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_

@interface ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc : NSObject {
 @public
  id toTrickle_;
  id replaced_;
}

#pragma mark Package-Private

- (instancetype __nonnull)initWithId:(id __nonnull)toTrickle
                              withId:(id __nonnull)replaced;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc, toTrickle_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc, replaced_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *self, id toTrickle, id replaced);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *new_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(id toTrickle, id replaced) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *create_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(id toTrickle, id replaced);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue")
