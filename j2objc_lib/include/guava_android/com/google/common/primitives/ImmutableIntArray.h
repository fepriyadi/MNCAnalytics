//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/primitives/ImmutableIntArray.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray")
#ifdef RESTRICT_ComGoogleCommonPrimitivesImmutableIntArray
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesImmutableIntArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonPrimitivesImmutableIntArray_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableIntArray))
#define ComGoogleCommonPrimitivesImmutableIntArray_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonPrimitivesImmutableIntArray_Builder;
@class IOSIntArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

/*!
 @brief An immutable array of <code>int</code> values, with an API resembling <code>List</code>.
 <p>Advantages compared to <code>int[]</code>:
  
 <ul>
    <li>All the many well-known advantages of immutability (read <i>Effective Java</i>, third
        edition, Item 17).   
 <li>Has the value-based (not identity-based) <code>equals</code>, <code>hashCode</code>, and <code>toString</code>
  behavior you expect
    <li>Offers useful operations beyond just <code>get</code> and <code>length</code>, so you don't have to
        hunt through classes like <code>Arrays</code> and <code>Ints</code> for them.
    <li>Supports a copy-free <code>subArray</code> view, so methods that accept this type don't need to
        add overloads that accept start and end indexes.   
 <li>Access to all collection-based utilities via <code>asList</code> (though at the cost of
        allocating garbage). 
 </ul>
  
 <p>Disadvantages compared to <code>int[]</code>:
  
 <ul>
    <li>Memory footprint has a fixed overhead (about 24 bytes per instance).
    <li><i>Some</i> construction use cases force the data to be copied (though several construction
        APIs are offered that don't).   
 <li>Can't be passed directly to methods that expect <code>int[]</code> (though the most common
        utilities do have replacements here).   
 <li>Dependency on <code>com.google.common</code> / Guava. 
 </ul>
  
 <p>Advantages compared to <code>ImmutableList</code><code><Integer></code>
 :
  
 <ul>
    <li>Improved memory compactness and locality
    <li>Can be queried without allocating garbage 
 </ul>
  
 <p>Disadvantages compared to <code>ImmutableList<Integer></code>:
  
 <ul>
    <li>Can't be passed directly to methods that expect <code>Iterable</code>, <code>Collection</code>, or
        <code>List</code> (though the most common utilities do have replacements here, and there is a
        lazy <code>asList</code> view). 
 </ul>
 @since 22.0
 */
@interface ComGoogleCommonPrimitivesImmutableIntArray : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns an immutable <i>view</i> of this array's values as a <code>List</code>; note that <code>int</code>
  values are boxed into <code>Integer</code> instances on demand, which can be very expensive.
 The returned list should be used once and discarded. For any usages beyond that, pass the
  returned list to <code>ImmutableList.copyOf</code>
  and use that list instead.
 */
- (id<JavaUtilList>)asList;

/*!
 @brief Returns a new, empty builder for <code>ImmutableIntArray</code> instances, with a default initial
  capacity.The returned builder is not thread-safe.
 <p><b>Performance note:</b> The <code>ImmutableIntArray</code> that is built will very likely occupy
  more memory than necessary; to trim memory usage, build using <code>builder.build().trimmed()</code>
 .
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)builder;

/*!
 @brief Returns a new, empty builder for <code>ImmutableIntArray</code> instances, sized to hold up to 
 <code>initialCapacity</code> values without resizing.The returned builder is not thread-safe.
 <p><b>Performance note:</b> When feasible, <code>initialCapacity</code> should be the exact number
  of values that will be added, if that knowledge is readily available. It is better to guess a
  value slightly too high than slightly too low. If the value is not exact, the <code>ImmutableIntArray</code>
  that is built will very likely occupy more memory than strictly necessary;
  to trim memory usage, build using <code>builder.build().trimmed()</code>.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)builderWithInt:(jint)initialCapacity;

/*!
 @brief Returns <code>true</code> if <code>target</code> is present at any index in this array.Equivalent to 
 <code>asList().contains(target)</code>.
 */
- (jboolean)containsWithInt:(jint)target;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)copyOfWithIntArray:(IOSIntArray * __nonnull)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns an immutable array containing the given values, in order.
 <p><b>Performance note:</b> this method delegates to <code>copyOf(Collection)</code> if <code>values</code>
  is a <code>Collection</code>. Otherwise it creates a <code>builder</code> and uses <code>Builder.addAll(Iterable)</code>
 , with all the performance implications associated with that.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)copyOfWithJavaLangIterable:(id<JavaLangIterable> __nonnull)values OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns <code>true</code> if <code>object</code> is an <code>ImmutableIntArray</code> containing the same
  values as this one, in the same order.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief Returns the <code>int</code> value present at the given index.
 @throw IndexOutOfBoundsExceptionif <code>index</code> is negative, or greater than or equal to
      <code>length</code>
 */
- (jint)getWithInt:(jint)index;

/*!
 @brief Returns an unspecified hash code for the contents of this immutable array.
 */
- (NSUInteger)hash;

/*!
 @brief Returns the smallest index for which <code>get</code> returns <code>target</code>, or <code>-1</code> if no
  such index exists.Equivalent to <code>asList().indexOf(target)</code>.
 */
- (jint)indexOfWithInt:(jint)target;

/*!
 @brief Returns <code>true</code> if there are no values in this array (<code>length</code> is zero).
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the largest index for which <code>get</code> returns <code>target</code>, or <code>-1</code> if no
  such index exists.Equivalent to <code>asList().lastIndexOf(target)</code>.
 */
- (jint)lastIndexOfWithInt:(jint)target;

/*!
 @brief Returns the number of values in this array.
 */
- (jint)length;

/*!
 @brief Returns the empty array.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)of;

/*!
 @brief Returns an immutable array containing a single value.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1;

/*!
 @brief Returns an immutable array containing the given values, in order.
 <p>The array <code>rest</code> must not be longer than <code>Integer.MAX_VALUE - 1</code>.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)first
                                             withIntArray:(IOSIntArray * __nonnull)rest;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2
                                                  withInt:(jint)e3;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2
                                                  withInt:(jint)e3
                                                  withInt:(jint)e4;

/*!
 @brief Returns an immutable array containing the given values, in order.
 */
+ (ComGoogleCommonPrimitivesImmutableIntArray *)ofWithInt:(jint)e0
                                                  withInt:(jint)e1
                                                  withInt:(jint)e2
                                                  withInt:(jint)e3
                                                  withInt:(jint)e4
                                                  withInt:(jint)e5;

/*!
 @brief Returns a new immutable array containing the values in the specified range.
 <p><b>Performance note:</b> The returned array has the same full memory footprint as this one
  does (no actual copying is performed). To reduce memory usage, use <code>subArray(start,
  end).trimmed()</code>
 .
 */
- (ComGoogleCommonPrimitivesImmutableIntArray *)subArrayWithInt:(jint)startIndex
                                                        withInt:(jint)endIndex;

/*!
 @brief Returns a new, mutable copy of this array's values, as a primitive <code>int[]</code>.
 */
- (IOSIntArray *)toArray;

/*!
 @brief Returns a string representation of this array in the same form as <code>Arrays.toString(int[])</code>
 , for example <code>"[1, 2, 3]"</code>.
 */
- (NSString *)description;

/*!
 @brief Returns an immutable array containing the same values as <code>this</code> array.This is logically
  a no-op, and in some circumstances <code>this</code> itself is returned.
 However, if this instance
  is a <code>subArray</code> view of a larger array, this method will copy only the appropriate range
  of values, resulting in an equivalent array with a smaller memory footprint.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray *)trimmed;

#pragma mark Package-Private

- (id)readResolve;

- (id)writeReplace;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesImmutableIntArray)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_of(void);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_(jint e0);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_(jint e0, jint e1);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_(jint e0, jint e1, jint e2);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_withInt_(jint e0, jint e1, jint e2, jint e3);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_withInt_withInt_(jint e0, jint e1, jint e2, jint e3, jint e4);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withInt_withInt_withInt_withInt_withInt_(jint e0, jint e1, jint e2, jint e3, jint e4, jint e5);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_ofWithInt_withIntArray_(jint first, IOSIntArray *rest);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_copyOfWithIntArray_(IOSIntArray *values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray *ComGoogleCommonPrimitivesImmutableIntArray_copyOfWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *ComGoogleCommonPrimitivesImmutableIntArray_builderWithInt_(jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *ComGoogleCommonPrimitivesImmutableIntArray_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableIntArray)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableIntArray_Builder_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableIntArray_Builder))
#define ComGoogleCommonPrimitivesImmutableIntArray_Builder_

@class ComGoogleCommonPrimitivesImmutableIntArray;
@class IOSIntArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;

/*!
 @brief A builder for <code>ImmutableIntArray</code> instances; obtained using <code>ImmutableIntArray.builder</code>
 .
 */
@interface ComGoogleCommonPrimitivesImmutableIntArray_Builder : NSObject

#pragma mark Public

/*!
 @brief Appends <code>value</code> to the end of the values the built <code>ImmutableIntArray</code> will
  contain.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addWithInt:(jint)value;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableIntArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithJavaUtilCollection:(id<JavaUtilCollection> __nonnull)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableIntArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithComGoogleCommonPrimitivesImmutableIntArray:(ComGoogleCommonPrimitivesImmutableIntArray * __nonnull)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableIntArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithIntArray:(IOSIntArray * __nonnull)values;

/*!
 @brief Appends <code>values</code>, in order, to the end of the values the built <code>ImmutableIntArray</code>
  will contain.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable> __nonnull)values;

/*!
 @brief Returns a new immutable array.The builder can continue to be used after this call, to append
  more values and build again.
 <p><b>Performance note:</b> the returned array is backed by the same array as the builder, so
  no data is copied as part of this step, but this may occupy more memory than strictly
  necessary. To copy the data to a right-sized backing array, use <code>.build().trimmed()</code>.
 */
- (ComGoogleCommonPrimitivesImmutableIntArray *)build;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)initialCapacity;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableIntArray_Builder)

FOUNDATION_EXPORT void ComGoogleCommonPrimitivesImmutableIntArray_Builder_initWithInt_(ComGoogleCommonPrimitivesImmutableIntArray_Builder *self, jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *new_ComGoogleCommonPrimitivesImmutableIntArray_Builder_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesImmutableIntArray_Builder *create_ComGoogleCommonPrimitivesImmutableIntArray_Builder_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableIntArray_Builder)

#endif

#if !defined (ComGoogleCommonPrimitivesImmutableIntArray_AsList_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray || defined(INCLUDE_ComGoogleCommonPrimitivesImmutableIntArray_AsList))
#define ComGoogleCommonPrimitivesImmutableIntArray_AsList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "java/util/AbstractList.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "java/util/RandomAccess.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangInteger;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesImmutableIntArray_AsList : JavaUtilAbstractList < JavaUtilRandomAccess, JavaIoSerializable >

#pragma mark Public

- (jboolean)containsWithId:(id __nonnull)target;

- (jboolean)isEqual:(id __nullable)object;

- (JavaLangInteger *)getWithInt:(jint)index;

- (NSUInteger)hash;

- (jint)indexOfWithId:(id __nonnull)target;

- (jint)lastIndexOfWithId:(id __nonnull)target;

- (JavaLangInteger *)removeWithInt:(jint)arg0;

- (JavaLangInteger *)setWithInt:(jint)arg0
                         withId:(JavaLangInteger * __nonnull)arg1;

- (jint)size;

- (id<JavaUtilList>)subListWithInt:(jint)fromIndex
                           withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesImmutableIntArray_AsList)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesImmutableIntArray_AsList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesImmutableIntArray")
