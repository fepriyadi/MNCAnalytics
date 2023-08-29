//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/hash/AbstractStreamingHasher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher")
#ifdef RESTRICT_ComGoogleCommonHashAbstractStreamingHasher
#define INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher 1
#endif
#undef RESTRICT_ComGoogleCommonHashAbstractStreamingHasher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonHashAbstractStreamingHasher_) && (INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher || defined(INCLUDE_ComGoogleCommonHashAbstractStreamingHasher))
#define ComGoogleCommonHashAbstractStreamingHasher_

#define RESTRICT_ComGoogleCommonHashAbstractHasher 1
#define INCLUDE_ComGoogleCommonHashAbstractHasher 1
#include "com/google/common/hash/AbstractHasher.h"

@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@class JavaNioByteBuffer;
@protocol ComGoogleCommonHashHasher;

/*!
 @brief A convenience base class for implementors of <code>Hasher</code>; handles accumulating data until an
  entire "chunk" (of implementation-dependent length) is ready to be hashed.
 @author Kevin Bourrillion
 @author Dimitris Andreou
 */
@interface ComGoogleCommonHashAbstractStreamingHasher : ComGoogleCommonHashAbstractHasher

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hash__;

- (id<ComGoogleCommonHashHasher>)putByteWithByte:(jbyte)b;

- (id<ComGoogleCommonHashHasher>)putBytesWithByteArray:(IOSByteArray * __nonnull)bytes
                                               withInt:(jint)off
                                               withInt:(jint)len;

- (id<ComGoogleCommonHashHasher>)putBytesWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)readBuffer;

- (id<ComGoogleCommonHashHasher>)putCharWithChar:(jchar)c;

- (id<ComGoogleCommonHashHasher>)putIntWithInt:(jint)i;

- (id<ComGoogleCommonHashHasher>)putLongWithLong:(jlong)l;

- (id<ComGoogleCommonHashHasher>)putShortWithShort:(jshort)s;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.This hasher instance will process chunks of the specified
  size.
 @param chunkSize the number of bytes available per <code>process(ByteBuffer)</code>  invocation;
       must be at least 4
 */
- (instancetype __nonnull)initPackagePrivateWithInt:(jint)chunkSize;

/*!
 @brief Constructor for use by subclasses.This hasher instance will process chunks of the specified
  size, using an internal buffer of <code>bufferSize</code> size, which must be a multiple of <code>chunkSize</code>
 .
 @param chunkSize the number of bytes available per <code>process(ByteBuffer)</code>  invocation;
       must be at least 4
 @param bufferSize the size of the internal buffer. Must be a multiple of chunkSize
 */
- (instancetype __nonnull)initPackagePrivateWithInt:(jint)chunkSize
                                            withInt:(jint)bufferSize;

/*!
 @brief Computes a hash code based on the data that have been provided to this hasher.This is called
  after all chunks are handled with <code>process</code> and any leftover bytes that did not make a
  complete chunk are handled with <code>processRemaining</code>.
 */
- (ComGoogleCommonHashHashCode *)makeHash;

/*!
 @brief Processes the available bytes of the buffer (at most <code>chunk</code> bytes).
 */
- (void)processWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)bb;

/*!
 @brief This is invoked for the last bytes of the input, which are not enough to fill a whole chunk.
 The passed <code>ByteBuffer</code> is guaranteed to be non-empty. 
 <p>This implementation simply pads with zeros and delegates to <code>process(ByteBuffer)</code>.
 */
- (void)processRemainingWithJavaNioByteBuffer:(JavaNioByteBuffer * __nonnull)bb;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashAbstractStreamingHasher)

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHasher_initPackagePrivateWithInt_(ComGoogleCommonHashAbstractStreamingHasher *self, jint chunkSize);

FOUNDATION_EXPORT void ComGoogleCommonHashAbstractStreamingHasher_initPackagePrivateWithInt_withInt_(ComGoogleCommonHashAbstractStreamingHasher *self, jint chunkSize, jint bufferSize);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashAbstractStreamingHasher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashAbstractStreamingHasher")