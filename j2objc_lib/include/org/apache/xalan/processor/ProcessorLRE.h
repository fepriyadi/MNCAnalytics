//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorLRE.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorLRE
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorLRE

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorLRE_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE || defined(INCLUDE_OrgApacheXalanProcessorProcessorLRE))
#define OrgApacheXalanProcessorProcessorLRE_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "org/apache/xalan/processor/ProcessorTemplateElem.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesStylesheet;
@protocol OrgXmlSaxAttributes;

/*!
 @brief Processes an XSLT literal-result-element, or something that looks 
  like one.The actual <code>org.apache.xalan.templates.ElemTemplateElement</code>
  produced may be a <code>org.apache.xalan.templates.ElemLiteralResult</code>, 
  a <code>org.apache.xalan.templates.StylesheetRoot</code>, or a  
 <code>org.apache.xalan.templates.ElemExtensionCall</code>.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 - seealso: org.apache.xalan.templates.ElemLiteralResult
 */
@interface OrgApacheXalanProcessorProcessorLRE : OrgApacheXalanProcessorProcessorTemplateElem
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Receive notification of the end of an element.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

/*!
 @brief Receive notification of the start of an element.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 @param attributes The specified or defaulted attributes.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Protected

/*!
 @brief This method could be over-ridden by a class that extends this class.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @return an object that represents the stylesheet element.
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheetRootWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorLRE)

inline jlong OrgApacheXalanProcessorProcessorLRE_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorLRE_serialVersionUID -1490218021772101404LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorLRE, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorLRE_init(OrgApacheXalanProcessorProcessorLRE *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorLRE *new_OrgApacheXalanProcessorProcessorLRE_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorLRE *create_OrgApacheXalanProcessorProcessorLRE_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorLRE)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorLRE")
