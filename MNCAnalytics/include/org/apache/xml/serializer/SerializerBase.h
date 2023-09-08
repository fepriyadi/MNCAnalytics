//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/SerializerBase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerBase")
#ifdef RESTRICT_OrgApacheXmlSerializerSerializerBase
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerBase 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializerBase 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerSerializerBase

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlSerializerSerializerBase_) && (INCLUDE_ALL_OrgApacheXmlSerializerSerializerBase || defined(INCLUDE_OrgApacheXmlSerializerSerializerBase))
#define OrgApacheXmlSerializerSerializerBase_

#define RESTRICT_OrgApacheXmlSerializerSerializationHandler 1
#define INCLUDE_OrgApacheXmlSerializerSerializationHandler 1
#include "org/apache/xml/serializer/SerializationHandler.h"

#define RESTRICT_OrgApacheXmlSerializerSerializerConstants 1
#define INCLUDE_OrgApacheXmlSerializerSerializerConstants 1
#include "org/apache/xml/serializer/SerializerConstants.h"

@class IOSCharArray;
@class JavaIoWriter;
@class JavaUtilHashtable;
@class JavaxXmlTransformTransformer;
@class OrgApacheXmlSerializerAttributesImplSerializer;
@class OrgApacheXmlSerializerElemContext;
@class OrgApacheXmlSerializerNamespaceMappings;
@class OrgXmlSaxSAXParseException;
@protocol JavaUtilSet;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXmlSerializerDOMSerializer;
@protocol OrgApacheXmlSerializerSerializerTrace;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxLocator;

/*!
 @brief This class acts as a base class for the XML "serializers"
  and the stream serializers.
 It contains a number of common fields and methods.
 */
@interface OrgApacheXmlSerializerSerializerBase : NSObject < OrgApacheXmlSerializerSerializationHandler, OrgApacheXmlSerializerSerializerConstants > {
 @public
  /*!
   @brief true if we still need to call startDocumentInternal()
   */
  jboolean m_needToCallStartDocument_;
  /*!
   @brief True if a trailing "]]>" still needs to be written to be
  written out.Used to merge adjacent CDATA sections
   */
  jboolean m_cdataTagOpen_;
  /*!
   @brief All the attributes of the current element, collected from
  startPrefixMapping() calls, or addAddtribute() calls, or 
  from the SAX attributes in a startElement() call.
   */
  OrgApacheXmlSerializerAttributesImplSerializer *m_attributes_;
  /*!
   @brief Tells if we're in an EntityRef event.
   */
  jboolean m_inEntityRef_;
  /*!
   @brief This flag is set while receiving events from the external DTD
   */
  jboolean m_inExternalDTD_;
  /*!
   @brief The System ID for the doc type.
   */
  NSString *m_doctypeSystem_;
  /*!
   @brief The public ID for the doc type.
   */
  NSString *m_doctypePublic_;
  /*!
   @brief Flag to tell that we need to add the doctype decl, which we can't do
  until the first element is encountered.
   */
  jboolean m_needToOutputDocTypeDecl_;
  /*!
   @brief Tells if we should write the XML declaration.
   */
  jboolean m_shouldNotWriteXMLHeader_;
  /*!
   @brief True if standalone was specified.
   */
  jboolean m_standaloneWasSpecified_;
  /*!
   @brief Flag to tell if indenting (pretty-printing) is on.
   */
  jboolean m_doIndent_;
  /*!
   @brief Amount to indent.
   */
  jint m_indentAmount_;
  /*!
   @brief Tells the XML version, for writing out to the XML decl.
   */
  NSString *m_version_;
  /*!
   @brief The mediatype.Not used right now.
   */
  NSString *m_mediatype_;
  /*!
   @brief Namespace support, that keeps track of currently defined 
  prefix/uri mappings.As processed elements come and go, so do
  the associated mappings for that element.
   */
  OrgApacheXmlSerializerNamespaceMappings *m_prefixMap_;
  /*!
   @brief Handle for firing generate events.This interface may be implemented
  by the referenced transformer object.
   */
  id<OrgApacheXmlSerializerSerializerTrace> m_tracer_;
  id<JavaxXmlTransformSourceLocator> m_sourceLocator_;
  /*!
   @brief The writer to send output to.This field is only used in the ToStream
  serializers, but exists here just so that the fireStartDoc() and
  other fire... methods can flush this writer when tracing.
   */
  JavaIoWriter *m_writer_;
  /*!
   @brief A reference to "stack frame" corresponding to
  the current element.Such a frame is pushed at a startElement()
  and popped at an endElement().
   This frame contains information about
  the element, such as its namespace URI.
   */
  OrgApacheXmlSerializerElemContext *m_elemContext_;
  /*!
   @brief A utility buffer for converting Strings passed to
  character() methods to character arrays.
   Reusing this buffer means not creating a new character array
  everytime and it runs faster.
   */
  IOSCharArray *m_charsBuff_;
  /*!
   @brief A utility buffer for converting Strings passed to
  attribute methods to character arrays.
   Reusing this buffer means not creating a new character array
  everytime and it runs faster.
   */
  IOSCharArray *m_attrBuff_;
  /*!
   @brief The CDATA section names stored in a whitespace separateed list with
  each element being a word of the form "{uri}localName" This list
  comes from the cdata-section-elements attribute.
   This field replaces m_cdataSectionElements Vector.
   */
  NSString *m_StringOfCDATASections_;
  jboolean m_docIsEmpty_;
  JavaUtilHashtable *m_CdataElems_;
}
@property (readonly, copy, class) NSString *PKG_NAME NS_SWIFT_NAME(PKG_NAME);
@property (readonly, copy, class) NSString *PKG_PATH NS_SWIFT_NAME(PKG_PATH);

#pragma mark Public

/*!
 @brief Adds  the given attribute to the set of collected attributes, 
  but only if there is a currently open element.
 @param name the attribute's qualified name
 @param value the value of the attribute
 */
- (void)addAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

/*!
 @brief This method adds an attribute the the current element,
  but should not be used for an xsl:attribute child.
 - seealso: ExtendedContentHandler#addAttribute(java.lang.String, java.lang.String, java.lang.String, java.lang.String, java.lang.String)
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

/*!
 @brief Adds the given attribute to the set of collected attributes , but only if
  there is a currently open element.
 An element is currently open if a startElement() notification has
  occured but the start of the element has not yet been written to the
  output.  In the stream case this means that we have not yet been forced
  to close the elements opening tag by another notification, such as a
  character notification.
 @param uri the URI of the attribute
 @param localName the local name of the attribute
 @param rawName the qualified name of the attribute
 @param type the type of the attribute (probably CDATA)
 @param value the value of the attribute
 @param XSLAttribute true if this attribute is coming from an xsl:attriute element
 - seealso: ExtendedContentHandler#addAttribute(String, String, String, String, String)
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)XSLAttribute;

/*!
 @brief Adds the given attribute to the set of attributes, even if there is
  no currently open element.This is useful if a SAX startPrefixMapping()
  should need to add an attribute before the element name is seen.
 @param uri the URI of the attribute
 @param localName the local name of the attribute
 @param rawName the qualified name of the attribute
 @param type the type of the attribute (probably CDATA)
 @param value the value of the attribute
 @param XSLAttribute true if this attribute is coming from an xsl:attribute element
 @return true if the attribute was added, 
  false if an existing value was replaced.
 */
- (jboolean)addAttributeAlwaysWithNSString:(NSString *)uri
                              withNSString:(NSString *)localName
                              withNSString:(NSString *)rawName
                              withNSString:(NSString *)type
                              withNSString:(NSString *)value
                               withBoolean:(jboolean)XSLAttribute;

/*!
 @brief Add the given attributes to the currently collected ones.These
  attributes are always added, regardless of whether on not an element
  is currently open.
 @param atts List of attributes to add to this list
 */
- (void)addAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Adds the given xsl:attribute to the set of collected attributes, 
  but only if there is a currently open element.
 @param name the attribute's qualified name (prefix:localName)
 @param value the value of the attribute
 @param uri the URI that the prefix of the name points to
 */
- (void)addXSLAttributeWithNSString:(NSString *)name
                       withNSString:(NSString *)value
                       withNSString:(NSString *)uri;

/*!
 @brief Return a <code>ContentHandler</code> interface into this serializer.
 If the serializer does not support the <code>ContentHandler</code>
  interface, it should return null.
 @return A <code>ContentHandler</code> interface into this serializer,
   or null if the serializer is not SAX 2 capable
 @throw IOExceptionAn I/O exception occured
 */
- (id<OrgXmlSaxContentHandler>)asContentHandler;

/*!
 @brief Return a <code>DOM3Serializer</code> interface into this serializer.If the
  serializer does not support the <code>DOM3Serializer</code> interface, it should
  return null.
 @return A <code>DOM3Serializer</code> interface into this serializer,  or null
  if the serializer is not DOM capable
 @throw IOExceptionAn I/O exception occured
 - seealso: org.apache.xml.serializer.Serializer#asDOM3Serializer()
 */
- (id)asDOM3Serializer;

/*!
 @brief Return a <code>DOMSerializer</code> interface into this serializer.If the
  serializer does not support the <code>DOMSerializer</code> interface, it should
  return null.
 @return A <code>DOMSerializer</code> interface into this serializer,  or null
  if the serializer is not DOM capable
 @throw IOExceptionAn I/O exception occured
 - seealso: Serializer#asDOMSerializer()
 */
- (id<OrgApacheXmlSerializerDOMSerializer>)asDOMSerializer;

/*!
 @brief This method gets the nodes value as a String and uses that String as if
  it were an input character notification.
 @param node the Node to serialize
 @throw org.xml.sax.SAXException
 */
- (void)charactersWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Flush and close the underlying java.io.Writer.This method applies to
  ToStream serializers, not ToSAXHandler serializers.
 - seealso: ToStream
 */
- (void)close;

/*!
 @brief Receive notification of a comment.
 - seealso: ExtendedLexicalHandler#comment(String)
 */
- (void)commentWithNSString:(NSString *)data;

/*!
 @brief Return true if nothing has been sent to this result tree yet.
 <p>
  This is not a public API.
 */
- (jboolean)documentIsEmpty;

/*!
 @brief Report the end of an entity.
 @param name The name of the entity that is ending.
 @throw org.xml.sax.SAXExceptionThe application may raise an exception.
 - seealso: #startEntity
 */
- (void)endEntityWithNSString:(NSString *)name;

/*!
 @brief Entity reference event.
 @param name Name of entity
 @throw org.xml.sax.SAXException
 */
- (void)entityReferenceWithNSString:(NSString *)name;

/*!
 - seealso: org.xml.sax.ErrorHandler#error(SAXParseException)
 */
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exc;

/*!
 - seealso: org.xml.sax.ErrorHandler#fatalError(SAXParseException)
 */
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exc;

/*!
 @brief To fire off end entity trace event
 @param name Name of entity
 */
- (void)fireEndEntityWithNSString:(NSString *)name;

/*!
 @brief Returns the previously set value of the value to be used as the public
  identifier in the document type declaration (DTD).
 @return the public identifier to be used in the DOCTYPE declaration in the
  output document.
 */
- (NSString *)getDoctypePublic;

/*!
 @brief Returns the previously set value of the value to be used
  as the system identifier in the document type declaration (DTD).
 @return the system identifier to be used in the DOCTYPE declaration in
  the output document.
 */
- (NSString *)getDoctypeSystem;

/*!
 @brief Returns the character encoding to be used in the output document.
 @return the character encoding to be used in the output document.
 */
- (NSString *)getEncoding;

/*!
 @return true if the output document should be indented to visually
  indicate its structure.
 */
- (jboolean)getIndent;

/*!
 @return the number of spaces to indent for each indentation level.
 */
- (jint)getIndentAmount;

/*!
 @brief Gets the mediatype the media-type or MIME type associated with the output
  document.
 @return the mediatype the media-type or MIME type associated with the
  output document.
 */
- (NSString *)getMediaType;

/*!
 @brief Some users of the serializer may need the current namespace mappings
 @return the current namespace mappings (prefix/uri)
 - seealso: ExtendedContentHandler#getNamespaceMappings()
 */
- (OrgApacheXmlSerializerNamespaceMappings *)getNamespaceMappings;

/*!
 @brief Returns the URI of an element or attribute.Note that default namespaces
  do not apply directly to attributes.
 @param qname a qualified name
 @param isElement true if the qualified name is the name of   an element.
 @return returns the namespace URI associated with the qualified name.
 */
- (NSString *)getNamespaceURIWithNSString:(NSString *)qname
                              withBoolean:(jboolean)isElement;

/*!
 @brief Returns the URI of prefix (if any)
 @param prefix the prefix whose URI is searched for
 @return the namespace URI currently associated with the
  prefix, null if the prefix is undefined.
 */
- (NSString *)getNamespaceURIFromPrefixWithNSString:(NSString *)prefix;

/*!
 @return true if the XML declaration is to be omitted from the output
  document.
 */
- (jboolean)getOmitXMLDeclaration;

/*!
 @brief Get the value of an output property,
  the explicit value, if any, otherwise the
  default value, if any, otherwise null.
 */
- (NSString *)getOutputPropertyWithNSString:(NSString *)name;

/*!
 @brief Get the default value of an xsl:output property,
  which would be null only if no default value exists
  for the property.
 */
- (NSString *)getOutputPropertyDefaultWithNSString:(NSString *)name;

/*!
 @brief Get the value of an output property, 
  not the default value.If there is a default
  value, but no non-default value this method
  will return null.
 <p>
 */
- (NSString *)getOutputPropertyNonDefaultWithNSString:(NSString *)name;

/*!
 @brief Returns the prefix currently pointing to the given URI (if any).
 @param namespaceURI the uri of the namespace in question
 @return a prefix pointing to the given URI (if any).
 - seealso: ExtendedContentHandler#getPrefix(String)
 */
- (NSString *)getPrefixWithNSString:(NSString *)namespaceURI;

/*!
 @brief Gets the XSL standalone attribute
 @return a value of "yes" if the <code>standalone</code> delaration is to
  be included in the output document.
 - seealso: XSLOutputAttributes#getStandalone()
 */
- (NSString *)getStandalone;

/*!
 @brief Gets the transformer associated with this serializer
 @return returns the transformer associated with this serializer.
 - seealso: SerializationHandler#getTransformer()
 */
- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 @brief Gets the version of the output format.
 @return the version of the output format.
 */
- (NSString *)getVersion;

/*!
 @brief This method is used when a prefix/uri namespace mapping
  is indicated after the element was started with a 
  startElement() and before and endElement().
 startPrefixMapping(prefix,uri) would be used before the
  startElement() call.
 @param uri the URI of the namespace
 @param prefix the prefix associated with the given URI.
 - seealso: ExtendedContentHandler#namespaceAfterStartElement(String, String)
 */
- (void)namespaceAfterStartElementWithNSString:(NSString *)uri
                                  withNSString:(NSString *)prefix;

/*!
 - seealso: org.xml.sax.DTDHandler#notationDecl(java.lang.String, java.lang.String, java.lang.String)
 */
- (void)notationDeclWithNSString:(NSString *)arg0
                    withNSString:(NSString *)arg1
                    withNSString:(NSString *)arg2;

- (jboolean)reset;

/*!
 @brief Set the value coming from the xsl:output doctype-public and doctype-system stylesheet properties
 @param doctypeSystem the system identifier to be used in the DOCTYPE  declaration in the output document.
 @param doctypePublic the public identifier to be used in the DOCTYPE  declaration in the output document.
 */
- (void)setDoctypeWithNSString:(NSString *)doctypeSystem
                  withNSString:(NSString *)doctypePublic;

/*!
 @brief Set the value coming from the xsl:output doctype-public stylesheet attribute.
 @param doctypePublic the public identifier to be used in the DOCTYPE  declaration in the output document.
 */
- (void)setDoctypePublicWithNSString:(NSString *)doctypePublic;

/*!
 @brief Set the value coming from the xsl:output doctype-system stylesheet attribute.
 @param doctypeSystem the system identifier to be used in the DOCTYPE  declaration in the output document.
 */
- (void)setDoctypeSystemWithNSString:(NSString *)doctypeSystem;

/*!
 @brief Receive an object for locating the origin of SAX document events.
 @param locator An object that can return the location of any SAX document  event.
     Receive an object for locating the origin of SAX document events.
    <p> SAX parsers are strongly encouraged (though not absolutely
   required) to supply a locator: if it does so, it must supply
   the locator to the application by invoking this method before
   invoking any of the other methods in the DocumentHandler
   interface. </p>   <p> The locator allows the application to determine the end
   position of any document-related event, even if the parser is  not reporting an error.  Typically, the application will
   use this information for reporting its own errors (such as
   character content that does not match an application's
   business rules).  The information returned by the locator
   is probably not sufficient for use with a search engine.
  </p>   <p> Note that the locator will return correct information only
   during the invocation of the events in this interface.  The
   application should not attempt to use it at any other time.
  </p>
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief If set to false the serializer does not expand DTD entities,
  but leaves them as is, the default value is true.
 */
- (void)setDTDEntityExpansionWithBoolean:(jboolean)expand;

/*!
 @brief Sets the character encoding coming from the xsl:output encoding stylesheet attribute.
 @param m_encoding the character encoding
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 @brief Sets the value coming from the xsl:output indent stylesheet
  attribute.
 @param doIndent true if the output document should be indented to  visually indicate its structure.
 - seealso: XSLOutputAttributes#setIndent(boolean)
 */
- (void)setIndentWithBoolean:(jboolean)doIndent;

/*!
 @brief Sets the indentation amount.
 @param m_indentAmount The m_indentAmount to set
 */
- (void)setIndentAmountWithInt:(jint)m_indentAmount;

/*!
 @brief Sets the value coming from the xsl:output media-type stylesheet attribute.
 @param mediaType the non-null media-type or MIME type associated with the  output document.
 - seealso: javax.xml.transform.OutputKeys#MEDIA_TYPE
 - seealso: SerializationHandler#setMediaType(String)
 */
- (void)setMediaTypeWithNSString:(NSString *)mediaType;

/*!
 @brief Used only by TransformerSnapshotImpl to restore the serialization 
  to a previous state.
 @param mappings NamespaceMappings
 */
- (void)setNamespaceMappingsWithOrgApacheXmlSerializerNamespaceMappings:(OrgApacheXmlSerializerNamespaceMappings *)mappings;

/*!
 @brief Sets the value coming from the xsl:output omit-xml-declaration stylesheet attribute
 @param b true if the XML declaration is to be omitted from the output  document.
 */
- (void)setOmitXMLDeclarationWithBoolean:(jboolean)b;

/*!
 @brief Set the value for the output property, typically from
  an xsl:output element, but this does not change what
  the default value is.
 */
- (void)setOutputPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)val;

/*!
 @brief Set the default value for an output property, but this does
  not impact any explicitly set value.
 */
- (void)setOutputPropertyDefaultWithNSString:(NSString *)name
                                withNSString:(NSString *)val;

/*!
 @brief This method is used to set the source locator, which might be used to
  generated an error message.
 @param locator the source locator
 - seealso: ExtendedContentHandler#setSourceLocator(javax.xml.transform.SourceLocator)
 */
- (void)setSourceLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Sets the value coming from the xsl:output standalone stylesheet attribute.
 @param standalone a value of "yes" indicates that the  
  <code> standalone </code>  delaration is to be included in the output  document. This method remembers if the value was explicitly set using
   this method, verses if the value is the default value.
 */
- (void)setStandaloneWithNSString:(NSString *)standalone;

/*!
 @brief Sets the transformer associated with this serializer
 @param t the transformer associated with this serializer.
 - seealso: SerializationHandler#setTransformer(Transformer)
 */
- (void)setTransformerWithJavaxXmlTransformTransformer:(JavaxXmlTransformTransformer *)t;

/*!
 @brief Sets the value coming from the xsl:output version attribute.
 @param version_ the version of the output format.
 - seealso: SerializationHandler#setVersion(String)
 */
- (void)setVersionWithNSString:(NSString *)version_;

/*!
 @brief Receive notification of the beginning of a document.
 This method is never a self generated call, 
  but only called externally. 
 <p>The SAX parser will invoke this method only once, before any
  other methods in this interface or in DTDHandler (except for
  setDocumentLocator).</p>
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 @throw org.xml.sax.SAXException
 */
- (void)startDocument;

/*!
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl(java.lang.String, java.lang.String, java.lang.String, java.lang.String)
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)arg0
                          withNSString:(NSString *)arg1
                          withNSString:(NSString *)arg2
                          withNSString:(NSString *)arg3;

/*!
 - seealso: org.xml.sax.ErrorHandler#warning(SAXParseException)
 */
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exc;

#pragma mark Protected

/*!
 @brief Report the CDATA trace event
 @param chars content of CDATA
 @param start starting index of characters to output
 @param length number of characters to output
 */
- (void)fireCDATAEventWithCharArray:(IOSCharArray *)chars
                            withInt:(jint)start
                            withInt:(jint)length;

/*!
 @brief Report the characters trace event
 @param chars content of characters
 @param start starting index of characters to output
 @param length number of characters to output
 */
- (void)fireCharEventWithCharArray:(IOSCharArray *)chars
                           withInt:(jint)start
                           withInt:(jint)length;

/*!
 @brief Report the comment trace event
 @param chars content of comment
 @param start starting index of comment to output
 @param length number of characters to output
 */
- (void)fireCommentEventWithCharArray:(IOSCharArray *)chars
                              withInt:(jint)start
                              withInt:(jint)length;

/*!
 @brief To fire off end document trace event
 */
- (void)fireEndDoc;

/*!
 @brief To fire off the end element trace event
 @param name Name of element
 */
- (void)fireEndElemWithNSString:(NSString *)name;

/*!
 @brief To fire off the entity reference trace event
 @param name Name of entity reference
 */
- (void)fireEntityReferenceWithNSString:(NSString *)name;

/*!
 @brief To fire off the PI trace event
 @param name Name of PI
 */
- (void)fireEscapingEventWithNSString:(NSString *)name
                         withNSString:(NSString *)data;

/*!
 @brief To fire off start document trace  event
 */
- (void)fireStartDoc;

/*!
 @brief Report the start element trace event.This trace method needs to be
  called just before the attributes are cleared.
 @param elemName the qualified name of the element
 */
- (void)fireStartElemWithNSString:(NSString *)elemName;

/*!
 @brief To fire off start entity trace event
 @param name Name of entity
 */
- (void)fireStartEntityWithNSString:(NSString *)name;

/*!
 @brief Returns the local name of a qualified name.If the name has no prefix,
  then it works as the identity (SAX2).
 @param qname the qualified name
 @return the name, but excluding any prefix and colon.
 */
+ (NSString *)getLocalNameWithNSString:(NSString *)qname;

/*!
 @brief Returns the local name of a qualified name.
 If the name has no prefix,
  then it works as the identity (SAX2).
 @param qname a qualified name
 @return returns the prefix of the qualified name,
  or null if there is no prefix.
 */
+ (NSString *)getPrefixPartWithNSString:(NSString *)qname;

/*!
 @brief Initialize global variables
 */
- (void)initCDATA OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Return true if the current element in m_elemContext
  is a CDATA section.
 CDATA sections are specified in the <xsl:output> attribute
  cdata-section-names or in the JAXP equivalent property.
  In any case the format of the value of such a property is: 
 @code

  "{uri1}localName1 {uri2}localName2 . . . " 
  
@endcode
   
 <p>
  This method is not a public API, but is only used internally by the serializer.
 */
- (jboolean)isCdataSection;

/*!
 @brief If at runtime, when the qname of the attribute is
  known, another prefix is specified for the attribute, then we can
  patch or hack the name with this method.For
  a qname of the form "ns?
 :otherprefix:name", this function patches the
  qname by simply ignoring "otherprefix".
  TODO: This method is a HACK! We do not have access to the
  XML file, it sometimes generates a NS prefix of the form "ns?" for
  an attribute.
 */
- (NSString *)patchNameWithNSString:(NSString *)qname;

/*!
 @brief Sets the XSL standalone attribute, but does not remember if this is a
  default or explicite setting.
 @param standalone "yes" | "no"
 */
- (void)setStandaloneInternalWithNSString:(NSString *)standalone;

/*!
 @brief This method handles what needs to be done at a startDocument() call,
  whether from an external caller, or internally called in the 
  serializer.For historical reasons the serializer is flexible to
  startDocument() not always being called.
 Even if no external call is
  made into startDocument() this method will always be called as a self
  generated internal startDocument, it handles what needs to be done at a
  startDocument() call. 
  This method exists just to make sure that startDocument() is only ever
  called from an external caller, which in principle is just a matter of
  style.
 @throw SAXException
 */
- (void)startDocumentInternal;

#pragma mark Package-Private

- (instancetype __nonnull)init;

/*!
 @brief Get the first char of the local name
 @param name Either a local name, or a local name  preceeded by a uri enclosed in curly braces.
 */
+ (jchar)getFirstCharLocNameWithNSString:(NSString *)name;

- (id<JavaUtilSet>)getOutputPropDefaultKeys;

- (id<JavaUtilSet>)getOutputPropKeys;

- (void)initCdataElemsWithNSString:(NSString *)s OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns true if the serializer is used for temporary output rather than
  final output.
 This concept is made clear in the XSLT 2.0 draft.
 */
- (jboolean)inTemporaryOutputState;

/*!
 @param name The name of the property, e.g. "{http://myprop}indent-tabs" or "indent".
 @param val The value of the property, e.g. "4"
 @param defaultVal true if this is a default value being set for the property as   opposed to a user define on, set say explicitly in the stylesheet or via JAXP
 */
- (void)setPropWithNSString:(NSString *)name
               withNSString:(NSString *)val
                withBoolean:(jboolean)defaultVal;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerSerializerBase)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_attributes_, OrgApacheXmlSerializerAttributesImplSerializer *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_doctypeSystem_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_doctypePublic_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_version_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_mediatype_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_prefixMap_, OrgApacheXmlSerializerNamespaceMappings *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_tracer_, id<OrgApacheXmlSerializerSerializerTrace>)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_sourceLocator_, id<JavaxXmlTransformSourceLocator>)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_writer_, JavaIoWriter *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_elemContext_, OrgApacheXmlSerializerElemContext *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_charsBuff_, IOSCharArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_attrBuff_, IOSCharArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_StringOfCDATASections_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerSerializerBase, m_CdataElems_, JavaUtilHashtable *)

/*!
 @brief The name of the package that this class is in.
 <p>
  Not a public API.
 */
inline NSString *OrgApacheXmlSerializerSerializerBase_get_PKG_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerSerializerBase_PKG_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerSerializerBase, PKG_NAME, NSString *)

/*!
 @brief The same as the name of the package that this class is in
  except that '.' are replaced with '/'.
 <p>
  Not a public API.
 */
inline NSString *OrgApacheXmlSerializerSerializerBase_get_PKG_PATH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerSerializerBase_PKG_PATH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlSerializerSerializerBase, PKG_PATH, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerSerializerBase_init(OrgApacheXmlSerializerSerializerBase *self);

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerSerializerBase_getLocalNameWithNSString_(NSString *qname);

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerSerializerBase_getPrefixPartWithNSString_(NSString *qname);

FOUNDATION_EXPORT jchar OrgApacheXmlSerializerSerializerBase_getFirstCharLocNameWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerSerializerBase)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializerBase")
