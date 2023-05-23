//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/ProxySelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetProxySelector")
#ifdef RESTRICT_JavaNetProxySelector
#define INCLUDE_ALL_JavaNetProxySelector 0
#else
#define INCLUDE_ALL_JavaNetProxySelector 1
#endif
#undef RESTRICT_JavaNetProxySelector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetProxySelector_) && (INCLUDE_ALL_JavaNetProxySelector || defined(INCLUDE_JavaNetProxySelector))
#define JavaNetProxySelector_

@class JavaIoIOException;
@class JavaNetSocketAddress;
@class JavaNetURI;
@protocol JavaUtilList;

/*!
 @brief Selects the proxy server to use, if any, when connecting to the
  network resource referenced by a URL.A proxy selector is a
  concrete sub-class of this class and is registered by invoking the 
 <code>setDefault</code> method.
 The
  currently registered proxy selector can be retrieved by calling 
 <code>getDefault</code> method. 
 <p> When a proxy selector is registered, for instance, a subclass
  of URLConnection class should call the <code>select</code>
  method for each URL request so that the proxy selector can decide
  if a direct, or proxied connection should be used. The <code>select</code>
  method returns an iterator over a collection with
  the preferred connection approach. 
 <p> If a connection cannot be established to a proxy (PROXY or
  SOCKS) servers then the caller should call the proxy selector's 
 <code>connectFailed</code> method to notify the proxy
  selector that the proxy server is unavailable. </p>
  
 <P>The default proxy selector does enforce a 
 <a href="doc-files/net-properties.html#Proxies">set of System Properties</a>
  related to proxy settings.</P>
 @author Yingxian Wang
 @author Jean-Christophe Collet
 @since 1.5
 */
@interface JavaNetProxySelector : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Called to indicate that a connection could not be established
  to a proxy/socks server.An implementation of this method can
  temporarily remove the proxies or reorder the sequence of
  proxies returned by <code>select(URI)</code>, using the address
  and the IOException caught when trying to connect.
 @param uri The URI that the proxy at sa failed to serve.
 @param sa The socket address of the proxy/SOCKS server
 @param ioe The I/O exception thrown when the connect failed.
 @throw IllegalArgumentExceptionif either argument is null
 */
- (void)connectFailedWithJavaNetURI:(JavaNetURI *)uri
           withJavaNetSocketAddress:(JavaNetSocketAddress *)sa
              withJavaIoIOException:(JavaIoIOException *)ioe;

/*!
 @brief Gets the system-wide proxy selector.
 @throw SecurityException
 If a security manager has been installed and it denies 
 <code>NetPermission</code><code>("getProxySelector")</code>
 - seealso: #setDefault(ProxySelector)
 @return the system-wide <code>ProxySelector</code>
 @since 1.5
 */
+ (JavaNetProxySelector *)getDefault;

/*!
 @brief Selects all the applicable proxies based on the protocol to
  access the resource with and a destination address to access
  the resource at.
 The format of the URI is defined as follow: 
 <UL>
  <LI>http URI for http connections</LI>
  <LI>https URI for https connections 
 <LI><code>socket://host:port</code><br>
      for tcp client sockets connections</LI>
  </UL>
 @param uri The URI that a connection is required to
 @return a List of Proxies. Each element in the
           the List is of type          
 <code>Proxy</code>;
           when no proxy is available, the list will
           contain one element of type          
 <code>Proxy</code>
           that represents a direct connection.
 @throw IllegalArgumentExceptionif the argument is null
 */
- (id<JavaUtilList>)selectWithJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Sets (or unsets) the system-wide proxy selector.
 Note: non-standard protocol handlers may ignore this setting.
 @param ps The HTTP proxy selector, or           
 <code>null</code>  to unset the proxy selector.
 @throw SecurityException
 If a security manager has been installed and it denies 
 <code>NetPermission</code><code>("setProxySelector")</code>
 - seealso: #getDefault()
 @since 1.5
 */
+ (void)setDefaultWithJavaNetProxySelector:(JavaNetProxySelector *)ps;

@end

J2OBJC_STATIC_INIT(JavaNetProxySelector)

FOUNDATION_EXPORT void JavaNetProxySelector_init(JavaNetProxySelector *self);

FOUNDATION_EXPORT JavaNetProxySelector *JavaNetProxySelector_getDefault(void);

FOUNDATION_EXPORT void JavaNetProxySelector_setDefaultWithJavaNetProxySelector_(JavaNetProxySelector *ps);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetProxySelector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetProxySelector")
