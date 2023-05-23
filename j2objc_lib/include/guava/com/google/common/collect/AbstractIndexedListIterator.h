//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractIndexedListIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractIndexedListIterator")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractIndexedListIterator
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractIndexedListIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractIndexedListIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractIndexedListIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractIndexedListIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractIndexedListIterator || defined(INCLUDE_ComGoogleCommonCollectAbstractIndexedListIterator))
#define ComGoogleCommonCollectAbstractIndexedListIterator_

#define RESTRICT_ComGoogleCommonCollectUnmodifiableListIterator 1
#define INCLUDE_ComGoogleCommonCollectUnmodifiableListIterator 1
#include "com/google/common/collect/UnmodifiableListIterator.h"

/*!
 @brief This class provides a skeletal implementation of the <code>ListIterator</code> interface across a
  fixed number of elements that may be retrieved by position.It does not support <code>remove</code>,
  <code>set</code>, or <code>add</code>.
 @author Jared Levy
 */
@interface ComGoogleCommonCollectAbstractIndexedListIterator : ComGoogleCommonCollectUnmodifiableListIterator

#pragma mark Public

- (jboolean)hasNext;

- (jboolean)hasPrevious;

- (id)next;

- (jint)nextIndex;

- (id)previous;

- (jint)previousIndex;

#pragma mark Protected

/*!
 @brief Constructs an iterator across a sequence of the given size whose initial position is 0.That
  is, the first call to <code>next()</code> will return the first element (or throw <code>NoSuchElementException</code>
  if <code>size</code> is zero).
 @throw IllegalArgumentExceptionif <code>size</code> is negative
 */
- (instancetype __nonnull)initPackagePrivateWithInt:(jint)size;

/*!
 @brief Constructs an iterator across a sequence of the given size with the given initial position.
 That is, the first call to <code>nextIndex()</code> will return <code>position</code>, and the first
  call to <code>next()</code> will return the element at that index, if available. Calls to <code>previous()</code>
  can retrieve the preceding <code>position</code> elements.
 @throw IndexOutOfBoundsExceptionif <code>position</code> is negative or is greater than <code>size</code>
 @throw IllegalArgumentExceptionif <code>size</code> is negative
 */
- (instancetype __nonnull)initPackagePrivateWithInt:(jint)size
                                            withInt:(jint)position;

/*!
 @brief Returns the element with the specified index.This method is called by <code>next()</code>.
 */
- (id)getWithInt:(jint)index;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractIndexedListIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractIndexedListIterator_initPackagePrivateWithInt_(ComGoogleCommonCollectAbstractIndexedListIterator *self, jint size);

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractIndexedListIterator_initPackagePrivateWithInt_withInt_(ComGoogleCommonCollectAbstractIndexedListIterator *self, jint size, jint position);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractIndexedListIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractIndexedListIterator")
