//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/hash/Hasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashHasher")
#ifdef RESTRICT_ComGoogleCommonHashHasher
#define INCLUDE_ALL_ComGoogleCommonHashHasher 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashHasher 1
#endif
#undef RESTRICT_ComGoogleCommonHashHasher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashHasher_) && (INCLUDE_ALL_ComGoogleCommonHashHasher || defined(INCLUDE_ComGoogleCommonHashHasher))
#define ComGoogleCommonHashHasher_

#define RESTRICT_ComGoogleCommonHashPrimitiveSink 1
#define INCLUDE_ComGoogleCommonHashPrimitiveSink 1
#include "com/google/common/hash/PrimitiveSink.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashFunnel;
@protocol JavaLangCharSequence;

/*!
 @brief A <code>PrimitiveSink</code> that can compute a hash code after reading the input.Each hasher should
  translate all multibyte values (<code>putInt(int)</code>, <code>putLong(long)</code>, etc) to bytes in
  little-endian order.
 <p><b>Warning:</b> The result of calling any methods after calling <code>hash</code> is undefined. 
 <p><b>Warning:</b> Using a specific character encoding when hashing a <code>CharSequence</code> with 
 <code>putString(CharSequence, Charset)</code> is generally only useful for cross-language
  compatibility (otherwise prefer <code>putUnencodedChars</code>). However, the character encodings
  must be identical across languages. Also beware that <code>Charset</code> definitions may occasionally
  change between Java releases. 
 <p><b>Warning:</b> Chunks of data that are put into the <code>Hasher</code> are not delimited. The
  resulting <code>HashCode</code> is dependent only on the bytes inserted, and the order in which they
  were inserted, not how those bytes were chunked into discrete put() operations. For example, the
  following three expressions all generate colliding hash codes: 
 @code
 newHasher().putByte(b1).putByte(b2).putByte(b3).hash()
  newHasher().putByte(b1).putBytes(new byte[] { b2, b3 }).hash()
  newHasher().putBytes(new byte[] { b1, b2, b3 }).hash() 
 
@endcode
  
 <p>If you wish to avoid this, you should either prepend or append the size of each chunk. Keep in
  mind that when dealing with char sequences, the encoded form of two concatenated char sequences
  is not equivalent to the concatenation of their encoded form. Therefore, <code>putString(CharSequence, Charset)</code>
  should only be used consistently with <i>complete</i>
  sequences and not broken into chunks.
 @author Kevin Bourrillion
 @since 11.0
 */
@protocol ComGoogleCommonHashHasher < ComGoogleCommonHashPrimitiveSink, JavaObject >

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray * __nonnull)bytes;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray * __nonnull)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)bytes;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

/*!
 @brief Equivalent to <code>putInt(Float.floatToRawIntBits(f))</code>.
 */
- (id<ComGoogleCommonHashHasher>)putFloatWithFloat:(jfloat)f;

/*!
 @brief Equivalent to <code>putLong(Double.doubleToRawLongBits(d))</code>.
 */
- (id<ComGoogleCommonHashHasher>)putDoubleWithDouble:(jdouble)d;

/*!
 @brief Equivalent to <code>putByte(b ?
 (byte) 1 : (byte) 0)</code>.
 */
- (id<ComGoogleCommonHashHasher>)putBooleanWithBoolean:(jboolean)b;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

/*!
 @brief Equivalent to processing each <code>char</code> value in the <code>CharSequence</code>, in order.In
  other words, no character encoding is performed; the low byte and high byte of each <code>char</code>
  are hashed directly (in that order).
 The input must not be updated while this method is
  in progress. 
 <p><b>Warning:</b> This method will produce different output than most other languages do when
  running the same hash function on the equivalent input. For cross-language compatibility, use 
 <code>putString</code>, usually with a charset of UTF-8. For other use cases, use <code>putUnencodedChars</code>
 .
 @since 15.0 (since 11.0 as putString(CharSequence)).
 */
- (id<ComGoogleCommonHashHasher>)putUnencodedCharsWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)charSequence;

/*!
 @brief Equivalent to <code>putBytes(charSequence.toString().getBytes(charset))</code>.
 <p><b>Warning:</b> This method, which reencodes the input before hashing it, is useful only for
  cross-language compatibility. For other use cases, prefer <code>putUnencodedChars</code>, which is
  faster, produces the same output across Java releases, and hashes every <code>char</code> in the
  input, even if some are invalid.
 */
- (id<ComGoogleCommonHashHasher>)putStringWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)charSequence
                                         withJavaNioCharsetCharset:(JavaNioCharsetCharset * __nonnull)charset;

/*!
 @brief A simple convenience for <code>funnel.funnel(object, this)</code>.
 */
- (id<ComGoogleCommonHashHasher>)putObjectWithId:(id __nonnull)instance
                   withComGoogleCommonHashFunnel:(id<ComGoogleCommonHashFunnel> __nonnull)funnel;

/*!
 @brief Computes a hash code based on the data that have been provided to this hasher.The result is
  unspecified if this method is called more than once on the same instance.
 */
- (ComGoogleCommonHashHashCode *)hash__;

/*!
 */
- (NSUInteger)hash __attribute__((deprecated));

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHasher)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashHasher")
