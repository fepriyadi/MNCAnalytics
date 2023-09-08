//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/NamespaceSupport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3NamespaceSupport")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3NamespaceSupport
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3NamespaceSupport 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3NamespaceSupport 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3NamespaceSupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerDom3NamespaceSupport_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3NamespaceSupport || defined(INCLUDE_OrgApacheXmlSerializerDom3NamespaceSupport))
#define OrgApacheXmlSerializerDom3NamespaceSupport_

@class IOSIntArray;
@class IOSObjectArray;
@protocol JavaUtilEnumeration;

/*!
 @brief Namespace support for XML document handlers.This class doesn't 
  perform any error checking and assumes that all strings passed
  as arguments to methods are unique symbols.
 The SymbolTable class
  can be used for this purpose. 
  Derived from org.apache.xerces.util.NamespaceSupport
 @author Andy Clark, IBM
 @version $Id: Exp $
 */
@interface OrgApacheXmlSerializerDom3NamespaceSupport : NSObject {
 @public
  /*!
   @brief Namespace binding information.This array is composed of a
  series of tuples containing the namespace binding information: 
 &lt;prefix, uri&gt;.
   The default size can be set to anything
  as long as it is a power of 2 greater than 1.
   - seealso: #fNamespaceSize
   - seealso: #fContext
   */
  IOSObjectArray *fNamespace_;
  /*!
   @brief The top of the namespace information array.
   */
  jint fNamespaceSize_;
  /*!
   @brief Context indexes.This array contains indexes into the namespace
  information array.
   The index at the current context is the start
  index of declared namespace bindings and runs to the size of the
  namespace information array.
   - seealso: #fNamespaceSize
   */
  IOSIntArray *fContext_;
  /*!
   @brief The current context.
   */
  jint fCurrentContext_;
  IOSObjectArray *fPrefixes_;
}
@property (readonly, copy, class) NSString *PREFIX_XML NS_SWIFT_NAME(PREFIX_XML);
@property (readonly, copy, class) NSString *PREFIX_XMLNS NS_SWIFT_NAME(PREFIX_XMLNS);
@property (readonly, copy, class) NSString *XML_URI NS_SWIFT_NAME(XML_URI);
@property (readonly, copy, class) NSString *XMLNS_URI NS_SWIFT_NAME(XMLNS_URI);

#pragma mark Public

/*!
 @brief Default constructor.
 */
- (instancetype __nonnull)init;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#declarePrefix(String, String)
 */
- (jboolean)declarePrefixWithNSString:(NSString *)prefix
                         withNSString:(NSString *)uri;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#getAllPrefixes()
 */
- (id<JavaUtilEnumeration>)getAllPrefixes;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#getDeclaredPrefixAt(int)
 */
- (NSString *)getDeclaredPrefixAtWithInt:(jint)index;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#getDeclaredPrefixCount()
 */
- (jint)getDeclaredPrefixCount;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#getPrefix(String)
 */
- (NSString *)getPrefixWithNSString:(NSString *)uri;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#getURI(String)
 */
- (NSString *)getURIWithNSString:(NSString *)prefix;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#popContext()
 */
- (void)popContext;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#pushContext()
 */
- (void)pushContext;

/*!
 - seealso: org.apache.xerces.xni.NamespaceContext#reset()
 */
- (void)reset;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerDom3NamespaceSupport)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerDom3NamespaceSupport, fNamespace_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerDom3NamespaceSupport, fContext_, IOSIntArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerDom3NamespaceSupport, fPrefixes_, IOSObjectArray *)

inline NSString *OrgApacheXmlSerializerDom3NamespaceSupport_get_PREFIX_XML(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerDom3NamespaceSupport_PREFIX_XML;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerDom3NamespaceSupport, PREFIX_XML, NSString *)

inline NSString *OrgApacheXmlSerializerDom3NamespaceSupport_get_PREFIX_XMLNS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerDom3NamespaceSupport_PREFIX_XMLNS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerDom3NamespaceSupport, PREFIX_XMLNS, NSString *)

/*!
 @brief The XML Namespace ("http://www.w3.org/XML/1998/namespace").This is
  the Namespace URI that is automatically mapped to the "xml" prefix.
 */
inline NSString *OrgApacheXmlSerializerDom3NamespaceSupport_get_XML_URI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerDom3NamespaceSupport_XML_URI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerDom3NamespaceSupport, XML_URI, NSString *)

/*!
 @brief XML Information Set REC
  all namespace attributes (including those named xmlns, 
  whose [prefix] property has no value) have a namespace URI of http://www.w3.org/2000/xmlns/
 */
inline NSString *OrgApacheXmlSerializerDom3NamespaceSupport_get_XMLNS_URI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerDom3NamespaceSupport_XMLNS_URI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerDom3NamespaceSupport, XMLNS_URI, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3NamespaceSupport_init(OrgApacheXmlSerializerDom3NamespaceSupport *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3NamespaceSupport *new_OrgApacheXmlSerializerDom3NamespaceSupport_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3NamespaceSupport *create_OrgApacheXmlSerializerDom3NamespaceSupport_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3NamespaceSupport)

#endif

#if !defined (OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3NamespaceSupport || defined(INCLUDE_OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes))
#define OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes_

#define RESTRICT_JavaUtilEnumeration 1
#define INCLUDE_JavaUtilEnumeration 1
#include "java/util/Enumeration.h"

@class IOSObjectArray;
@class OrgApacheXmlSerializerDom3NamespaceSupport;

@interface OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes : NSObject < JavaUtilEnumeration >

#pragma mark Public

/*!
 @brief Constructor for Prefixes.
 */
- (instancetype __nonnull)initWithOrgApacheXmlSerializerDom3NamespaceSupport:(OrgApacheXmlSerializerDom3NamespaceSupport *)outer$
                                                           withNSStringArray:(IOSObjectArray *)prefixes
                                                                     withInt:(jint)size;

/*!
 - seealso: java.util.Enumeration#hasMoreElements()
 */
- (jboolean)hasMoreElements;

/*!
 - seealso: java.util.Enumeration#nextElement()
 */
- (id)nextElement;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes_initWithOrgApacheXmlSerializerDom3NamespaceSupport_withNSStringArray_withInt_(OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes *self, OrgApacheXmlSerializerDom3NamespaceSupport *outer$, IOSObjectArray *prefixes, jint size);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes *new_OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes_initWithOrgApacheXmlSerializerDom3NamespaceSupport_withNSStringArray_withInt_(OrgApacheXmlSerializerDom3NamespaceSupport *outer$, IOSObjectArray *prefixes, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes *create_OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes_initWithOrgApacheXmlSerializerDom3NamespaceSupport_withNSStringArray_withInt_(OrgApacheXmlSerializerDom3NamespaceSupport *outer$, IOSObjectArray *prefixes, jint size);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3NamespaceSupport_Prefixes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3NamespaceSupport")
