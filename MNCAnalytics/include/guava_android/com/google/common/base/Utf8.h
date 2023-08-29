//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/base/Utf8.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseUtf8")
#ifdef RESTRICT_ComGoogleCommonBaseUtf8
#define INCLUDE_ALL_ComGoogleCommonBaseUtf8 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseUtf8 1
#endif
#undef RESTRICT_ComGoogleCommonBaseUtf8

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonBaseUtf8_) && (INCLUDE_ALL_ComGoogleCommonBaseUtf8 || defined(INCLUDE_ComGoogleCommonBaseUtf8))
#define ComGoogleCommonBaseUtf8_

@class IOSByteArray;
@protocol JavaLangCharSequence;

/*!
 @brief Low-level, high-performance utility methods related to the UTF-8
  character encoding.UTF-8 is defined in section D92 of <a href="http://www.unicode.org/versions/Unicode6.2.0/ch03.pdf">
 The Unicode Standard Core
  Specification, Chapter 3</a>.
 <p>The variant of UTF-8 implemented by this class is the restricted definition of UTF-8
  introduced in Unicode 3.1. One implication of this is that it rejects <a href="http://www.unicode.org/versions/corrigendum1.html">
 "non-shortest form"</a> byte sequences,
  even though the JDK decoder may accept them.
 @author Martin Buchholz
 @author Clément Roux
 @since 16.0
 */
@interface ComGoogleCommonBaseUtf8 : NSObject

#pragma mark Public

/*!
 @brief Returns the number of bytes in the UTF-8-encoded form of <code>sequence</code>.For a string, this
  method is equivalent to <code>string.getBytes(UTF_8).length</code>, but is more efficient in both
  time and space.
 @throw IllegalArgumentExceptionif <code>sequence</code> contains ill-formed UTF-16 (unpaired
      surrogates)
 */
+ (jint)encodedLengthWithJavaLangCharSequence:(id<JavaLangCharSequence> __nonnull)sequence;

/*!
 @brief Returns <code>true</code> if <code>bytes</code> is a <i>well-formed</i> UTF-8 byte sequence according to
  Unicode 6.0.Note that this is a stronger criterion than simply whether the bytes can be
  decoded.
 For example, some versions of the JDK decoder will accept "non-shortest form" byte
  sequences, but encoding never reproduces these. Such byte sequences are <i>not</i> considered
  well-formed. 
 <p>This method returns <code>true</code> if and only if <code>Arrays.equals(bytes, new
  String(bytes, UTF_8).getBytes(UTF_8))</code>
  does, but is more efficient in both time and space.
 */
+ (jboolean)isWellFormedWithByteArray:(IOSByteArray * __nonnull)bytes;

/*!
 @brief Returns whether the given byte array slice is a well-formed UTF-8 byte sequence, as defined by 
 <code>isWellFormed(byte[])</code>.Note that this can be false even when <code>isWellFormed(bytes)</code>
  is true.
 @param bytes the input buffer
 @param off the offset in the buffer of the first byte to read
 @param len the number of bytes to read from the buffer
 */
+ (jboolean)isWellFormedWithByteArray:(IOSByteArray * __nonnull)bytes
                              withInt:(jint)off
                              withInt:(jint)len;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseUtf8)

FOUNDATION_EXPORT jint ComGoogleCommonBaseUtf8_encodedLengthWithJavaLangCharSequence_(id<JavaLangCharSequence> sequence);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseUtf8_isWellFormedWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jboolean ComGoogleCommonBaseUtf8_isWellFormedWithByteArray_withInt_withInt_(IOSByteArray *bytes, jint off, jint len);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseUtf8)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseUtf8")