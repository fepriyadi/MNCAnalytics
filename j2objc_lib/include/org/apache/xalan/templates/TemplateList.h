//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/TemplateList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesTemplateList")
#ifdef RESTRICT_OrgApacheXalanTemplatesTemplateList
#define INCLUDE_ALL_OrgApacheXalanTemplatesTemplateList 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesTemplateList 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesTemplateList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXalanTemplatesTemplateList_) && (INCLUDE_ALL_OrgApacheXalanTemplatesTemplateList || defined(INCLUDE_OrgApacheXalanTemplatesTemplateList))
#define OrgApacheXalanTemplatesTemplateList_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesTemplateList_TemplateWalker;
@class OrgApacheXalanTemplatesTemplateSubPatternAssociation;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTM;

/*!
 @brief Encapsulates a template list, and helps locate individual templates.
 */
@interface OrgApacheXalanTemplatesTemplateList : NSObject < JavaIoSerializable >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, class) jboolean DEBUG_ NS_SWIFT_NAME(DEBUG_);

#pragma mark Public

/*!
 @brief Construct a TemplateList object.Needs to be public so it can
  be invoked from the CompilingStylesheetHandler.
 */
- (instancetype __nonnull)init;

/*!
 @brief After all templates have been added, this function
  should be called.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Get the head of the most likely list of associations to check, based on 
  the name and type of the targetNode argument.
 @param xctxt The XPath runtime context.
 @param targetNode The target node that will be checked for a match.
 @param dtm The dtm owner for the target node.
 @return The head of a linked list that contains all possible match pattern to 
  template associations.
 */
- (OrgApacheXalanTemplatesTemplateSubPatternAssociation *)getHeadWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                                        withInt:(jint)targetNode
                                                                         withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Locate a named template.
 @param qname Qualified name of the template.
 @return Template argument with the requested name, or null if not found.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Given a target element, find the template that best
  matches in the given XSL document, according
  to the rules specified in the xsl draft.
 @param xctxt
 @param targetNode
 @param mode A string indicating the display mode.
 @param quietConflictWarnings
 @return Rule that best matches targetElem.
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                           withInt:(jint)targetNode
                                                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode
                                                                       withBoolean:(jboolean)quietConflictWarnings
                                                            withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Given a target element, find the template that best
  matches in the given XSL document, according
  to the rules specified in the xsl draft.
 @param xctxt
 @param targetNode
 @param mode A string indicating the display mode.
 @param maxImportLevel The maximum importCountComposed that we should consider or -1         if we should consider all import levels.  This is used by apply-imports to
          access templates that have been overridden.
 @param endImportLevel The count of composed imports
 @param quietConflictWarnings
 @return Rule that best matches targetElem.
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                           withInt:(jint)targetNode
                                                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode
                                                                           withInt:(jint)maxImportLevel
                                                                           withInt:(jint)endImportLevel
                                                                       withBoolean:(jboolean)quietConflictWarnings
                                                            withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Given a target element, find the template that best
  matches in the given XSL document, according
  to the rules specified in the xsl draft.This variation of getTemplate 
  assumes the current node and current expression node have already been 
  pushed.
 @param xctxt
 @param targetNode
 @param mode A string indicating the display mode.
 @param maxImportLevel The maximum importCountComposed that we should consider or -1         if we should consider all import levels.  This is used by apply-imports to
          access templates that have been overridden.
 @param quietConflictWarnings
 @return Rule that best matches targetElem.
 @throw XSLProcessorExceptionthrown if the active ProblemListener and XPathContext decide
  the error condition is severe enough to halt processing.
 @throw TransformerException
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateFastWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                               withInt:(jint)targetNode
                                                                               withInt:(jint)expTypeID
                                                            withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode
                                                                               withInt:(jint)maxImportLevel
                                                                           withBoolean:(jboolean)quietConflictWarnings
                                                                withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Get a TemplateWalker for use by a compiler.See the documentation for
  the TreeWalker inner class for further details.
 */
- (OrgApacheXalanTemplatesTemplateList_TemplateWalker *)getWalker;

/*!
 @brief Add a template to the table of named templates and/or the table of templates
  with match patterns.This routine should
  be called in decreasing order of precedence but it checks nonetheless.
 @param template_
 */
- (void)setTemplateWithOrgApacheXalanTemplatesElemTemplate:(OrgApacheXalanTemplatesElemTemplate *)template_;

#pragma mark Package-Private

/*!
 @brief Dump all patterns and elements that match those patterns
 */
- (void)dumpAssociationTables;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesTemplateList)

inline jlong OrgApacheXalanTemplatesTemplateList_get_serialVersionUID(void);
#define OrgApacheXalanTemplatesTemplateList_serialVersionUID 5803675288911728791LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesTemplateList, serialVersionUID, jlong)

/*!
 @brief Flag to indicate whether in DEBUG mode
 */
inline jboolean OrgApacheXalanTemplatesTemplateList_get_DEBUG(void);
#define OrgApacheXalanTemplatesTemplateList_DEBUG false
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesTemplateList, DEBUG, jboolean)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesTemplateList_init(OrgApacheXalanTemplatesTemplateList *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesTemplateList *new_OrgApacheXalanTemplatesTemplateList_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesTemplateList *create_OrgApacheXalanTemplatesTemplateList_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesTemplateList)

#endif

#if !defined (OrgApacheXalanTemplatesTemplateList_TemplateWalker_) && (INCLUDE_ALL_OrgApacheXalanTemplatesTemplateList || defined(INCLUDE_OrgApacheXalanTemplatesTemplateList_TemplateWalker))
#define OrgApacheXalanTemplatesTemplateList_TemplateWalker_

@class OrgApacheXalanTemplatesElemTemplate;

/*!
 @brief An inner class used by a compiler to iterate over all of the ElemTemplates
  stored in this TemplateList.The compiler can replace returned templates
  with their compiled equivalent.
 */
@interface OrgApacheXalanTemplatesTemplateList_TemplateWalker : NSObject

#pragma mark Public

- (OrgApacheXalanTemplatesElemTemplate *)next;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesTemplateList_TemplateWalker)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesTemplateList_TemplateWalker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesTemplateList")
