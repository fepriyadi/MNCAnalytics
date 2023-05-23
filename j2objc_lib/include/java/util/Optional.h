//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Optional.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilOptional")
#ifdef RESTRICT_JavaUtilOptional
#define INCLUDE_ALL_JavaUtilOptional 0
#else
#define INCLUDE_ALL_JavaUtilOptional 1
#endif
#undef RESTRICT_JavaUtilOptional

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilOptional_) && (INCLUDE_ALL_JavaUtilOptional || defined(INCLUDE_JavaUtilOptional))
#define JavaUtilOptional_

@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilFunctionSupplier;

/*!
 @brief A container object which may or may not contain a non-null value.
 If a value is present, <code>isPresent()</code> will return <code>true</code> and 
 <code>get()</code> will return the value. 
 <p>Additional methods that depend on the presence or absence of a contained
  value are provided, such as <code>orElse()</code>
  (return a default value if value not present) and 
 <code>ifPresent()</code> (execute a block
  of code if the value is present).
 @since 1.8
 */
@interface JavaUtilOptional : NSObject

#pragma mark Public

/*!
 @brief Returns an empty <code>Optional</code> instance.No value is present for this
  Optional.
 @return an empty <code>Optional</code>
 */
+ (JavaUtilOptional *)empty;

/*!
 @brief Indicates whether some other object is "equal to" this Optional.The
  other object is considered equal if: 
 <ul>
  <li>it is also an <code>Optional</code> and; 
 <li>both instances have no value present or; 
 <li>the present values are "equal to" each other via <code>equals()</code>.
 </ul>
 @param obj an object to be tested for equality
 @return {code true} if the other object is "equal to" this object
  otherwise <code>false</code>
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief If a value is present, and the value matches the given predicate,
  return an <code>Optional</code> describing the value, otherwise return an
  empty <code>Optional</code>.
 @param predicate a predicate to apply to the value, if present
 @return an <code>Optional</code> describing the value of this <code>Optional</code>
  if a value is present and the value matches the given predicate,
  otherwise an empty <code>Optional</code>
 @throw NullPointerExceptionif the predicate is null
 */
- (JavaUtilOptional *)filterWithJavaUtilFunctionPredicate:(id<JavaUtilFunctionPredicate>)predicate;

/*!
 @brief If a value is present, apply the provided <code>Optional</code>-bearing
  mapping function to it, return that result, otherwise return an empty 
 <code>Optional</code>.This method is similar to <code>map(Function)</code>,
  but the provided mapper is one whose result is already an <code>Optional</code>,
  and if invoked, <code>flatMap</code> does not wrap it with an additional 
 <code>Optional</code>.
 @param mapper a mapping function to apply to the value, if present            the mapping function
 @return the result of applying an <code>Optional</code>-bearing mapping
  function to the value of this <code>Optional</code>, if a value is present,
  otherwise an empty <code>Optional</code>
 @throw NullPointerExceptionif the mapping function is null or returns
  a null result
 */
- (JavaUtilOptional *)flatMapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)mapper;

/*!
 @brief If a value is present in this <code>Optional</code>, returns the value,
  otherwise throws <code>NoSuchElementException</code>.
 @return the non-null value held by this <code>Optional</code>
 @throw NoSuchElementExceptionif there is no value present
 - seealso: Optional#isPresent()
 */
- (id)get;

/*!
 @brief Returns the hash code value of the present value, if any, or 0 (zero) if
  no value is present.
 @return hash code value of the present value or 0 if no value is present
 */
- (NSUInteger)hash;

/*!
 @brief If a value is present, invoke the specified consumer with the value,
  otherwise do nothing.
 @param consumer block to be executed if a value is present
 @throw NullPointerExceptionif value is present and <code>consumer</code> is
  null
 */
- (void)ifPresentWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)consumer;

/*!
 @brief Return <code>true</code> if there is a value present, otherwise <code>false</code>.
 @return <code>true</code> if there is a value present, otherwise <code>false</code>
 */
- (jboolean)isPresent;

/*!
 @brief If a value is present, apply the provided mapping function to it,
  and if the result is non-null, return an <code>Optional</code> describing the
  result.Otherwise return an empty <code>Optional</code>.
 @param mapper a mapping function to apply to the value, if present
 @return an <code>Optional</code> describing the result of applying a mapping
  function to the value of this <code>Optional</code>, if a value is present,
  otherwise an empty <code>Optional</code>
 @throw NullPointerExceptionif the mapping function is null
 */
- (JavaUtilOptional *)mapWithJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)mapper;

/*!
 @brief Returns an <code>Optional</code> with the specified present non-null value.
 @param value the value to be present, which must be non-null
 @return an <code>Optional</code> with the value present
 @throw NullPointerExceptionif value is null
 */
+ (JavaUtilOptional *)ofWithId:(id)value;

/*!
 @brief Returns an <code>Optional</code> describing the specified value, if non-null,
  otherwise returns an empty <code>Optional</code>.
 @param value the possibly-null value to describe
 @return an <code>Optional</code> with a present value if the specified value
  is non-null, otherwise an empty <code>Optional</code>
 */
+ (JavaUtilOptional *)ofNullableWithId:(id)value;

/*!
 @brief Return the value if present, otherwise return <code>other</code>.
 @param other the value to be returned if there is no value present, may  be null
 @return the value, if present, otherwise <code>other</code>
 */
- (id)orElseWithId:(id)other;

/*!
 @brief Return the value if present, otherwise invoke <code>other</code> and return
  the result of that invocation.
 @param other a <code>Supplier</code>  whose result is returned if no value
   is present
 @return the value if present otherwise the result of <code>other.get()</code>
 @throw NullPointerExceptionif value is not present and <code>other</code> is
  null
 */
- (id)orElseGetWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)other;

/*!
 @brief Return the contained value, if present, otherwise throw an exception
  to be created by the provided supplier.
 @param exceptionSupplier The supplier which will return the exception to  be thrown
 @return the present value
 @throw Xif there is no value present
 @throw NullPointerExceptionif no value is present and 
 <code>exceptionSupplier</code> is null
 */
- (id)orElseThrowWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)exceptionSupplier;

/*!
 @brief Returns a non-empty string representation of this Optional suitable for
  debugging.The exact presentation format is unspecified and may vary
  between implementations and versions.
 @return the string representation of this instance
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaUtilOptional)

FOUNDATION_EXPORT JavaUtilOptional *JavaUtilOptional_empty(void);

FOUNDATION_EXPORT JavaUtilOptional *JavaUtilOptional_ofWithId_(id value);

FOUNDATION_EXPORT JavaUtilOptional *JavaUtilOptional_ofNullableWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilOptional)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilOptional")