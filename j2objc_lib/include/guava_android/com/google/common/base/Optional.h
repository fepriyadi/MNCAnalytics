//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/Optional.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseOptional")
#ifdef RESTRICT_ComGoogleCommonBaseOptional
#define INCLUDE_ALL_ComGoogleCommonBaseOptional 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseOptional 1
#endif
#undef RESTRICT_ComGoogleCommonBaseOptional

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseOptional_) && (INCLUDE_ALL_ComGoogleCommonBaseOptional || defined(INCLUDE_ComGoogleCommonBaseOptional))
#define ComGoogleCommonBaseOptional_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaLangIterable;
@protocol JavaUtilSet;

/*!
 @brief An immutable object that may contain a non-null reference to another object.Each instance of
  this type either contains a non-null reference, or contains nothing (in which case we say that
  the reference is "absent"); it is never said to "contain <code>null</code>".
 <p>A non-null <code>Optional<T></code> reference can be used as a replacement for a nullable <code>T</code>
  reference. It allows you to represent "a <code>T</code> that must be present" and a "a <code>T</code> that
  might be absent" as two distinct types in your program, which can aid clarity. 
 <p>Some uses of this class include 
 <ul>
    <li>As a method return type, as an alternative to returning <code>null</code> to indicate that no
        value was available   
 <li>To distinguish between "unknown" (for example, not present in a map) and "known to have no
        value" (present in the map, with value <code>Optional.absent()</code>)
    <li>To wrap nullable references for storage in a collection that does not support <code>null</code>
        (though there are <a href="https://github.com/google/guava/wiki/LivingWithNullHostileCollections">
 several other
        approaches to this</a> that should be considered first) 
 </ul>
  
 <p>A common alternative to using this class is to find or create a suitable <a href="http://en.wikipedia.org/wiki/Null_Object_pattern">
 null object</a> for the type in question. 
 <p>This class is not intended as a direct analogue of any existing "option" or "maybe" construct
  from other programming environments, though it may bear some similarities. 
 <p><b>Comparison to <code>java.util.Optional</code> (JDK 8 and higher):</b> A new <code>Optional</code>
  class was added for Java 8. The two classes are extremely similar, but incompatible (they cannot
  share a common supertype). <i>All</i> known differences are listed either here or with the
  relevant methods below. 
 <ul>
    <li>This class is serializable; <code>java.util.Optional</code> is not.
    <li><code>java.util.Optional</code> has the additional methods <code>ifPresent</code>, <code>filter</code>,
        <code>flatMap</code>, and <code>orElseThrow</code>.
    <li><code>java.util</code> offers the primitive-specialized versions <code>OptionalInt</code>, <code>OptionalLong</code>
  and <code>OptionalDouble</code>, the use of which is recommended; Guava does not
        have these. 
 </ul>
  
 <p><b>There are no plans to deprecate this class in the foreseeable future.</b> However, we do
  gently recommend that you prefer the new, standard Java class whenever possible. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/UsingAndAvoidingNullExplained#optional">
 using <code>Optional</code>
 </a>.
 @author Kurt Alfred Kluever
 @author Kevin Bourrillion
 @since 10.0
 */
@interface ComGoogleCommonBaseOptional : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns an <code>Optional</code> instance with no contained reference.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method is equivalent to Java 8's 
 <code>Optional.empty</code>.
 */
+ (ComGoogleCommonBaseOptional *)absent;

/*!
 @brief Returns an immutable singleton <code>Set</code> whose only element is the contained instance if it
  is present; an empty immutable <code>Set</code> otherwise.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method has no equivalent in Java 8's 
 <code>Optional</code> class. However, this common usage: 
 @code
 for (Foo foo : possibleFoo.asSet()) {
    doSomethingWith(foo);
  } 
 
@endcode
  ... can be replaced with: 
 @code
 possibleFoo.ifPresent(foo -> doSomethingWith(foo)); 
 
@endcode
  
 <p><b>Java 9 users:</b> some use cases can be written with calls to <code>optional.stream()</code>.
 @since 11.0
 */
- (id<JavaUtilSet>)asSet;

/*!
 @brief Returns <code>true</code> if <code>object</code> is an <code>Optional</code> instance, and either the
  contained references are equal to each other or both are absent.
 Note that <code>Optional</code> instances of differing parameterized types can be equal. 
 <p><b>Comparison to <code>java.util.Optional</code>:</b> no differences.
 */
- (jboolean)isEqual:(id __nullable)object;

/*!
 @brief If <code>nullableReference</code> is non-null, returns an <code>Optional</code> instance containing that
  reference; otherwise returns <code>Optional.absent</code>.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method is equivalent to Java 8's 
 <code>Optional.ofNullable</code>.
 */
+ (ComGoogleCommonBaseOptional *)fromNullableWithId:(id __nullable)nullableReference;

/*!
 @brief Returns the contained instance, which must be present.If the instance might be absent, use 
 <code>or(Object)</code> or <code>orNull</code> instead.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> when the value is absent, this method
  throws <code>IllegalStateException</code>, whereas the Java 8 counterpart throws <code>NoSuchElementException</code>
 .
 @throw IllegalStateExceptionif the instance is absent (<code>isPresent</code> returns <code>false</code>
 ); depending on this <i>specific</i> exception type (over the more general <code>RuntimeException</code>
 ) is discouraged
 */
- (id)get;

/*!
 @brief Returns a hash code for this instance.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this class leaves the specific choice of
  hash code unspecified, unlike the Java 8 equivalent.
 */
- (NSUInteger)hash;

/*!
 @brief Returns <code>true</code> if this holder contains a (non-null) instance.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> no differences.
 */
- (jboolean)isPresent;

/*!
 @brief Returns an <code>Optional</code> instance containing the given non-null reference.To have <code>null</code>
  treated as <code>absent</code>, use <code>fromNullable</code> instead.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> no differences.
 @throw NullPointerExceptionif <code>reference</code> is null
 */
+ (ComGoogleCommonBaseOptional *)ofWithId:(id __nonnull)reference;

/*!
 @brief Returns this <code>Optional</code> if it has a value present; <code>secondChoice</code> otherwise.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method has no equivalent in Java 8's 
 <code>Optional</code> class; write <code>thisOptional.isPresent() ? thisOptional : secondChoice</code>
  instead.
 */
- (ComGoogleCommonBaseOptional *)or__WithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional * __nonnull)secondChoice;

/*!
 @brief Returns the contained instance if it is present; <code>supplier.get()</code> otherwise.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method is similar to Java 8's <code>Optional.orElseGet</code>
 , except when <code>supplier</code> returns <code>null</code>. In this case this
  method throws an exception, whereas the Java 8 method returns the <code>null</code> to the caller.
 @throw NullPointerExceptionif this optional's value is absent and the supplier returns <code>null</code>
 */
- (id)or__WithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier> __nonnull)supplier;

/*!
 @brief Returns the contained instance if it is present; <code>defaultValue</code> otherwise.If no default
  value should be required because the instance is known to be present, use <code>get()</code>
  instead.
 For a default value of <code>null</code>, use <code>orNull</code>.
  
 <p>Note about generics: The signature <code>public T or(T defaultValue)</code> is overly
  restrictive. However, the ideal signature, <code>public <S super T> S or(S)</code>, is not legal
  Java. As a result, some sensible operations involving subtypes are compile errors: 
 @code
 Optional<Integer> optionalInt = getSomeOptionalInt();
  Number value = optionalInt.or(0.5); // error
  FluentIterable<? extends Number> numbers = getSomeNumbers();
  Optional<? extends Number> first = numbers.first();
  Number value = first.or(0.5); // error 
 
@endcode
  
 <p>As a workaround, it is always safe to cast an <code>Optional<? extends T></code> to <code>Optional<T></code>
 . Casting either of the above example <code>Optional</code> instances to <code>Optional<Number></code>
  (where <code>Number</code> is the desired output type) solves the problem: 
 @code
 Optional<Number> optionalInt = (Optional) getSomeOptionalInt();
  Number value = optionalInt.or(0.5); // fine
  FluentIterable<? extends Number> numbers = getSomeNumbers();
  Optional<Number> first = (Optional) numbers.first();
  Number value = first.or(0.5); // fine 
 
@endcode
  
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method is similar to Java 8's <code>Optional.orElse</code>
 , but will not accept <code>null</code> as a <code>defaultValue</code> (<code>orNull</code>
  must be used instead). As a result, the value returned by this method is guaranteed non-null,
  which is not the case for the <code>java.util</code> equivalent.
 */
- (id)or__WithId:(id __nonnull)defaultValue;

/*!
 @brief Returns the contained instance if it is present; <code>null</code> otherwise.If the instance is
  known to be present, use <code>get()</code> instead.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method is equivalent to Java 8's 
 <code>Optional.orElse(null)</code>.
 */
- (id __nullable)orNull;

/*!
 @brief Returns the value of each present instance from the supplied <code>optionals</code>, in order,
  skipping over occurrences of <code>Optional.absent</code>.Iterators are unmodifiable and are
  evaluated lazily.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method has no equivalent in Java 8's 
 <code>Optional</code> class; use <code>optionals.stream().filter(Optional::isPresent).map(Optional::get)</code>
  instead. 
 <p><b>Java 9 users:</b> use <code>optionals.stream().flatMap(Optional::stream)</code> instead.
 @since 11.0 (generics widened in 13.0)
 */
+ (id<JavaLangIterable>)presentInstancesWithJavaLangIterable:(id<JavaLangIterable> __nonnull)optionals;

/*!
 @brief Returns a string representation for this instance.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this class leaves the specific string
  representation unspecified, unlike the Java 8 equivalent.
 */
- (NSString *)description;

/*!
 @brief If the instance is present, it is transformed with the given <code>Function</code>; otherwise, 
 <code>Optional.absent</code> is returned.
 <p><b>Comparison to <code>java.util.Optional</code>:</b> this method is similar to Java 8's <code>Optional.map</code>
 , except when <code>function</code> returns <code>null</code>. In this case this method
  throws an exception, whereas the Java 8 method returns <code>Optional.absent()</code>.
 @throw NullPointerExceptionif the function returns <code>null</code>
 @since 12.0
 */
- (ComGoogleCommonBaseOptional *)transformWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction> __nonnull)function;

#pragma mark Package-Private

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseOptional)

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseOptional_absent(void);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseOptional_ofWithId_(id reference);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonBaseOptional_fromNullableWithId_(id nullableReference);

FOUNDATION_EXPORT void ComGoogleCommonBaseOptional_init(ComGoogleCommonBaseOptional *self);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonBaseOptional_presentInstancesWithJavaLangIterable_(id<JavaLangIterable> optionals);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseOptional)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseOptional")
