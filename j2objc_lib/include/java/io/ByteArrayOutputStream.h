//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/ByteArrayOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoByteArrayOutputStream")
#ifdef RESTRICT_JavaIoByteArrayOutputStream
#define INCLUDE_ALL_JavaIoByteArrayOutputStream 0
#else
#define INCLUDE_ALL_JavaIoByteArrayOutputStream 1
#endif
#undef RESTRICT_JavaIoByteArrayOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoByteArrayOutputStream_) && (INCLUDE_ALL_JavaIoByteArrayOutputStream || defined(INCLUDE_JavaIoByteArrayOutputStream))
#define JavaIoByteArrayOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "java/io/OutputStream.h"

@class IOSByteArray;

/*!
 @brief This class implements an output stream in which the data is
  written into a byte array.The buffer automatically grows as data
  is written to it.
 The data can be retrieved using <code>toByteArray()</code> and 
 <code>toString()</code>.
  <p>
  Closing a <tt>ByteArrayOutputStream</tt> has no effect. The methods in
  this class can be called after the stream has been closed without
  generating an <tt>IOException</tt>.
 @author Arthur van Hoff
 @since JDK1.0
 */
@interface JavaIoByteArrayOutputStream : JavaIoOutputStream {
 @public
  /*!
   @brief The buffer where data is stored.
   */
  IOSByteArray *buf_;
  /*!
   @brief The number of valid bytes in the buffer.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Creates a new byte array output stream.The buffer capacity is
  initially 32 bytes, though its size increases if necessary.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new byte array output stream, with a buffer capacity of
  the specified size, in bytes.
 @param size the initial size.
 @throw IllegalArgumentExceptionif size is negative.
 */
- (instancetype __nonnull)initWithInt:(jint)size;

/*!
 @brief Closing a <tt>ByteArrayOutputStream</tt> has no effect.The methods in
  this class can be called after the stream has been closed without
  generating an <tt>IOException</tt>.
 */
- (void)close;

/*!
 @brief Resets the <code>count</code> field of this byte array output
  stream to zero, so that all currently accumulated output in the
  output stream is discarded.The output stream can be used again,
  reusing the already allocated buffer space.
 - seealso: java.io.ByteArrayInputStream#count
 */
- (void)reset;

/*!
 @brief Returns the current size of the buffer.
 @return the value of the <code>count</code> field, which is the number
           of valid bytes in this output stream.
 - seealso: java.io.ByteArrayOutputStream#count
 */
- (jint)size;

/*!
 @brief Creates a newly allocated byte array.Its size is the current
  size of this output stream and the valid contents of the buffer
  have been copied into it.
 @return the current contents of this output stream, as a byte array.
 - seealso: java.io.ByteArrayOutputStream#size()
 */
- (IOSByteArray * __nonnull)toByteArray;

/*!
 @brief Converts the buffer's contents into a string decoding bytes using the
  platform's default character set.The length of the new <tt>String</tt>
  is a function of the character set, and hence may not be equal to the
  size of the buffer.
 <p> This method always replaces malformed-input and unmappable-character
  sequences with the default replacement string for the platform's
  default character set. The java.nio.charset.CharsetDecoder
  class should be used when more control over the decoding process is
  required.
 @return String decoded from the buffer's contents.
 @since JDK1.1
 */
- (NSString * __nonnull)description;

/*!
 @brief Creates a newly allocated string.Its size is the current size of
  the output stream and the valid contents of the buffer have been
  copied into it.
 Each character <i>c</i> in the resulting string is
  constructed from the corresponding element <i>b</i> in the byte
  array such that: 
 <blockquote>@code

      c == (char)(((hibyte &amp; 0xff) &lt;&lt; 8) | (b &amp; 0xff)) 
  
@endcode</blockquote>
 @param hibyte the high byte of each resulting Unicode character.
 @return the current contents of the output stream, as a string.
 - seealso: java.io.ByteArrayOutputStream#size()
 - seealso: java.io.ByteArrayOutputStream#toString(String)
 - seealso: java.io.ByteArrayOutputStream#toString()
 */
- (NSString * __nonnull)toStringWithInt:(jint)hibyte __attribute__((deprecated));

/*!
 @brief Converts the buffer's contents into a string by decoding the bytes using
  the named <code>charset</code>.The length of the new 
 <tt>String</tt> is a function of the charset, and hence may not be equal
  to the length of the byte array.
 <p> This method always replaces malformed-input and unmappable-character
  sequences with this charset's default replacement string. The <code>java.nio.charset.CharsetDecoder</code>
  class should be used when more control
  over the decoding process is required.
 @param charsetName the name of a supported              
 <code>charset</code>
 @return String decoded from the buffer's contents.
 @throw UnsupportedEncodingException
 If the named charset is not supported
 @since JDK1.1
 */
- (NSString * __nonnull)toStringWithNSString:(NSString *)charsetName;

/*!
 @brief Writes <code>len</code> bytes from the specified byte array
  starting at offset <code>off</code> to this byte array output stream.
 @param b the data.
 @param off the start offset in the data.
 @param len the number of bytes to write.
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes the specified byte to this byte array output stream.
 @param b the byte to be written.
 */
- (void)writeWithInt:(jint)b;

/*!
 @brief Writes the complete contents of this byte array output stream to
  the specified output stream argument, as if by calling the output
  stream's write method using <code>out.write(buf, 0, count)</code>.
 @param outArg the output stream to which to write the data.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)writeToWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoByteArrayOutputStream)

J2OBJC_FIELD_SETTER(JavaIoByteArrayOutputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoByteArrayOutputStream_init(JavaIoByteArrayOutputStream *self);

FOUNDATION_EXPORT JavaIoByteArrayOutputStream *new_JavaIoByteArrayOutputStream_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoByteArrayOutputStream *create_JavaIoByteArrayOutputStream_init(void);

FOUNDATION_EXPORT void JavaIoByteArrayOutputStream_initWithInt_(JavaIoByteArrayOutputStream *self, jint size);

FOUNDATION_EXPORT JavaIoByteArrayOutputStream *new_JavaIoByteArrayOutputStream_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoByteArrayOutputStream *create_JavaIoByteArrayOutputStream_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoByteArrayOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoByteArrayOutputStream")
