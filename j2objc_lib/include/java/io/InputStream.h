//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/InputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInputStream")
#ifdef RESTRICT_JavaIoInputStream
#define INCLUDE_ALL_JavaIoInputStream 0
#else
#define INCLUDE_ALL_JavaIoInputStream 1
#endif
#undef RESTRICT_JavaIoInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoInputStream_) && (INCLUDE_ALL_JavaIoInputStream || defined(INCLUDE_JavaIoInputStream))
#define JavaIoInputStream_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class IOSByteArray;

/*!
 @brief This abstract class is the superclass of all classes representing
  an input stream of bytes.
 <p> Applications that need to define a subclass of <code>InputStream</code>
  must always provide a method that returns the next byte of input.
 @author Arthur van Hoff
 - seealso: java.io.BufferedInputStream
 - seealso: java.io.ByteArrayInputStream
 - seealso: java.io.DataInputStream
 - seealso: java.io.FilterInputStream
 - seealso: java.io.InputStream#read()
 - seealso: java.io.OutputStream
 - seealso: java.io.PushbackInputStream
 @since JDK1.0
 */
@interface JavaIoInputStream : NSObject < JavaIoCloseable >

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Returns an estimate of the number of bytes that can be read (or
  skipped over) from this input stream without blocking by the next
  invocation of a method for this input stream.The next invocation
  might be the same thread or another thread.
 A single read or skip of this
  many bytes will not block, but may read or skip fewer bytes. 
 <p> Note that while some implementations of <code>InputStream</code> will return
  the total number of bytes in the stream, many will not.  It is
  never correct to use the return value of this method to allocate
  a buffer intended to hold all data in this stream. 
 <p> A subclass' implementation of this method may choose to throw an 
 <code>IOException</code> if this input stream has been closed by
  invoking the <code>close()</code> method. 
 <p> The <code>available</code> method for class <code>InputStream</code> always
  returns <code>0</code>.
  
 <p> This method should be overridden by subclasses.
 @return an estimate of the number of bytes that can be read (or skipped
              over) from this input stream without blocking or <code>0</code> when
              it reaches the end of the input stream.
 @throw IOExceptionif an I/O error occurs.
 */
- (jint)available;

/*!
 @brief Closes this input stream and releases any system resources associated
  with the stream.
 <p> The <code>close</code> method of <code>InputStream</code> does
  nothing.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)close;

/*!
 @brief Marks the current position in this input stream.A subsequent call to
  the <code>reset</code> method repositions this stream at the last marked
  position so that subsequent reads re-read the same bytes.
 <p> The <code>readlimit</code> arguments tells this input stream to
  allow that many bytes to be read before the mark position gets
  invalidated. 
 <p> The general contract of <code>mark</code> is that, if the method 
 <code>markSupported</code> returns <code>true</code>, the stream somehow
  remembers all the bytes read after the call to <code>mark</code> and
  stands ready to supply those same bytes again if and whenever the method 
 <code>reset</code> is called.  However, the stream is not required to
  remember any data at all if more than <code>readlimit</code> bytes are
  read from the stream before <code>reset</code> is called. 
 <p> Marking a closed stream should not have any effect on the stream. 
 <p> The <code>mark</code> method of <code>InputStream</code> does
  nothing.
 @param readlimit the maximum limit of bytes that can be read before                       the mark position becomes invalid.
 - seealso: java.io.InputStream#reset()
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Tests if this input stream supports the <code>mark</code> and 
 <code>reset</code> methods.Whether or not <code>mark</code> and 
 <code>reset</code> are supported is an invariant property of a
  particular input stream instance.
 The <code>markSupported</code> method
  of <code>InputStream</code> returns <code>false</code>.
 @return <code>true</code> if this stream instance supports the mark
           and reset methods; <code>false</code> otherwise.
 - seealso: java.io.InputStream#mark(int)
 - seealso: java.io.InputStream#reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads the next byte of data from the input stream.The value byte is
  returned as an <code>int</code> in the range <code>0</code> to 
 <code>255</code>.
 If no byte is available because the end of the stream
  has been reached, the value <code>-1</code> is returned. This method
  blocks until input data is available, the end of the stream is detected,
  or an exception is thrown. 
 <p> A subclass must provide an implementation of this method.
 @return the next byte of data, or <code>-1</code> if the end of the
              stream is reached.
 @throw IOExceptionif an I/O error occurs.
 */
- (jint)read;

/*!
 @brief Reads some number of bytes from the input stream and stores them into
  the buffer array <code>b</code>.The number of bytes actually read is
  returned as an integer.
 This method blocks until input data is
  available, end of file is detected, or an exception is thrown. 
 <p> If the length of <code>b</code> is zero, then no bytes are read and 
 <code>0</code> is returned; otherwise, there is an attempt to read at
  least one byte. If no byte is available because the stream is at the
  end of the file, the value <code>-1</code> is returned; otherwise, at
  least one byte is read and stored into <code>b</code>.
  
 <p> The first byte read is stored into element <code>b[0]</code>, the
  next one into <code>b[1]</code>, and so on. The number of bytes read is,
  at most, equal to the length of <code>b</code>. Let <i>k</i> be the
  number of bytes actually read; these bytes will be stored in elements 
 <code>b[0]</code> through <code>b[</code><i>k</i><code>-1]</code>,
  leaving elements <code>b[</code><i>k</i><code>]</code> through 
 <code>b[b.length-1]</code> unaffected. 
 <p> The <code>read(b)</code> method for class <code>InputStream</code>
  has the same effect as: @code
<code> read(b, 0, b.length) </code>
@endcode
 @param b the buffer into which the data is read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end of
              the stream has been reached.
 @throw IOExceptionIf the first byte cannot be read for any reason
  other than the end of the file, if the input stream has been closed, or
  if some other I/O error occurs.
 @throw NullPointerExceptionif <code>b</code> is <code>null</code>.
 - seealso: java.io.InputStream#read(byte[], int, int)
 */
- (jint)readWithByteArray:(IOSByteArray *)b;

/*!
 @brief Reads up to <code>len</code> bytes of data from the input stream into
  an array of bytes.An attempt is made to read as many as 
 <code>len</code> bytes, but a smaller number may be read.
 The number of bytes actually read is returned as an integer. 
 <p> This method blocks until input data is available, end of file is
  detected, or an exception is thrown. 
 <p> If <code>len</code> is zero, then no bytes are read and 
 <code>0</code> is returned; otherwise, there is an attempt to read at
  least one byte. If no byte is available because the stream is at end of
  file, the value <code>-1</code> is returned; otherwise, at least one
  byte is read and stored into <code>b</code>.
  
 <p> The first byte read is stored into element <code>b[off]</code>, the
  next one into <code>b[off+1]</code>, and so on. The number of bytes read
  is, at most, equal to <code>len</code>. Let <i>k</i> be the number of
  bytes actually read; these bytes will be stored in elements 
 <code>b[off]</code> through <code>b[off+</code><i>k</i><code>-1]</code>,
  leaving elements <code>b[off+</code><i>k</i><code>]</code> through 
 <code>b[off+len-1]</code> unaffected. 
 <p> In every case, elements <code>b[0]</code> through 
 <code>b[off]</code> and elements <code>b[off+len]</code> through 
 <code>b[b.length-1]</code> are unaffected. 
 <p> The <code>read(b,</code> <code>off,</code> <code>len)</code> method
  for class <code>InputStream</code> simply calls the method 
 <code>read()</code> repeatedly. If the first such call results in an 
 <code>IOException</code>, that exception is returned from the call to the 
 <code>read(b,</code> <code>off,</code> <code>len)</code> method.  If
  any subsequent call to <code>read()</code> results in a 
 <code>IOException</code>, the exception is caught and treated as if it
  were end of file; the bytes read up to that point are stored into 
 <code>b</code> and the number of bytes read before the exception
  occurred is returned. The default implementation of this method blocks
  until the requested amount of input data <code>len</code> has been read,
  end of file is detected, or an exception is thrown. Subclasses are encouraged
  to provide a more efficient implementation of this method.
 @param b the buffer into which the data is read.
 @param off the start offset in array  <code> b </code>
                     at which the data is written.
 @param len the maximum number of bytes to read.
 @return the total number of bytes read into the buffer, or
              <code>-1</code> if there is no more data because the end of
              the stream has been reached.
 @throw IOExceptionIf the first byte cannot be read for any reason
  other than end of file, or if the input stream has been closed, or if
  some other I/O error occurs.
 @throw NullPointerExceptionIf <code>b</code> is <code>null</code>.
 @throw IndexOutOfBoundsExceptionIf <code>off</code> is negative, 
 <code>len</code> is negative, or <code>len</code> is greater than 
 <code>b.length - off</code>
 - seealso: java.io.InputStream#read()
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Repositions this stream to the position at the time the 
 <code>mark</code> method was last called on this input stream.
 <p> The general contract of <code>reset</code> is: 
 <ul>
  <li> If the method <code>markSupported</code> returns 
 <code>true</code>, then:
      
 <ul><li> If the method <code>mark</code> has not been called since
      the stream was created, or the number of bytes read from the stream
      since <code>mark</code> was last called is larger than the argument
      to <code>mark</code> at that last call, then an
      <code>IOException</code> might be thrown.
      
 <li> If such an <code>IOException</code> is not thrown, then the
      stream is reset to a state such that all the bytes read since the
      most recent call to <code>mark</code> (or since the start of the
      file, if <code>mark</code> has not been called) will be resupplied
      to subsequent callers of the <code>read</code> method, followed by
      any bytes that otherwise would have been the next input data as of
      the time of the call to <code>reset</code>. </ul>
  
 <li> If the method <code>markSupported</code> returns 
 <code>false</code>, then:
      
 <ul><li> The call to <code>reset</code> may throw an
      <code>IOException</code>.
      
 <li> If an <code>IOException</code> is not thrown, then the stream
      is reset to a fixed state that depends on the particular type of the
      input stream and how it was created. The bytes that will be supplied
      to subsequent callers of the <code>read</code> method depend on the
      particular type of the input stream. </ul></ul>
  
 <p>The method <code>reset</code> for class <code>InputStream</code>
  does nothing except throw an <code>IOException</code>.
 @throw IOExceptionif this stream has not been marked or if the
                mark has been invalidated.
 - seealso: java.io.InputStream#mark(int)
 - seealso: java.io.IOException
 */
- (void)reset;

/*!
 @brief Skips over and discards <code>n</code> bytes of data from this input
  stream.The <code>skip</code> method may, for a variety of reasons, end
  up skipping over some smaller number of bytes, possibly <code>0</code>.
 This may result from any of a number of conditions; reaching end of file
  before <code>n</code> bytes have been skipped is only one possibility.
  The actual number of bytes skipped is returned. If <code>n</code> is
  negative, the <code>skip</code> method for class <code>InputStream</code> always
  returns 0, and no bytes are skipped. Subclasses may handle the negative
  value differently. 
 <p> The <code>skip</code> method of this class creates a
  byte array and then repeatedly reads into it until <code>n</code> bytes
  have been read or the end of the stream has been reached. Subclasses are
  encouraged to provide a more efficient implementation of this method.
  For instance, the implementation may depend on the ability to seek.
 @param n the number of bytes to be skipped.
 @return the actual number of bytes skipped.
 @throw IOExceptionif the stream does not support seek,
                           or if some other I/O error occurs.
 */
- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInputStream)

FOUNDATION_EXPORT void JavaIoInputStream_init(JavaIoInputStream *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoInputStream")
