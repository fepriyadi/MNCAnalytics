//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorGlobalParamDecl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalParamDecl")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorGlobalParamDecl
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalParamDecl 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalParamDecl 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorGlobalParamDecl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanProcessorProcessorGlobalParamDecl_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalParamDecl || defined(INCLUDE_OrgApacheXalanProcessorProcessorGlobalParamDecl))
#define OrgApacheXalanProcessorProcessorGlobalParamDecl_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "org/apache/xalan/processor/ProcessorTemplateElem.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemTemplateElement;

/*!
 @brief This class processes parse events for an xsl:param element.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorGlobalParamDecl : OrgApacheXalanProcessorProcessorTemplateElem
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Receive notification of the end of an element.
 @param name The element type name.
 @param attributes The specified or defaulted attributes.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

#pragma mark Protected

/*!
 @brief Append the current template element to the current
  template element, and then push it onto the current template
  element stack.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param elem The non-null reference to the ElemParam element.
 @throw org.xml.sax.SAXExceptionAny SAX exception, possibly
             wrapping another exception.
 */
- (void)appendAndPushWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                   withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorGlobalParamDecl)

inline jlong OrgApacheXalanProcessorProcessorGlobalParamDecl_get_serialVersionUID(void);
#define OrgApacheXalanProcessorProcessorGlobalParamDecl_serialVersionUID 1900450872353587350LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorGlobalParamDecl, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorGlobalParamDecl_initPackagePrivate(OrgApacheXalanProcessorProcessorGlobalParamDecl *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorGlobalParamDecl *new_OrgApacheXalanProcessorProcessorGlobalParamDecl_initPackagePrivate(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorGlobalParamDecl *create_OrgApacheXalanProcessorProcessorGlobalParamDecl_initPackagePrivate(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorGlobalParamDecl)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalParamDecl")
