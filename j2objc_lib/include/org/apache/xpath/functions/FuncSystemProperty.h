//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncSystemProperty.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSystemProperty")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncSystemProperty
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSystemProperty 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncSystemProperty 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncSystemProperty

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathFunctionsFuncSystemProperty_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncSystemProperty || defined(INCLUDE_OrgApacheXpathFunctionsFuncSystemProperty))
#define OrgApacheXpathFunctionsFuncSystemProperty_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class JavaUtilProperties;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the SystemProperty() function.
 */
@interface OrgApacheXpathFunctionsFuncSystemProperty : OrgApacheXpathFunctionsFunctionOneArg
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);
@property (readonly, copy, class) NSString *XSLT_PROPERTIES NS_SWIFT_NAME(XSLT_PROPERTIES);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Execute the function.The function must return
  a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throw javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Retrieve a propery bundle from a specified file
 @param file The string name of the property file.  The name   should already be fully qualified as path/filename
 @param target The target property bag the file will be placed into.
 */
- (void)loadPropertyFileWithNSString:(NSString *)file
              withJavaUtilProperties:(JavaUtilProperties *)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncSystemProperty)

inline jlong OrgApacheXpathFunctionsFuncSystemProperty_get_serialVersionUID(void);
#define OrgApacheXpathFunctionsFuncSystemProperty_serialVersionUID 3694874980992204867LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncSystemProperty, serialVersionUID, jlong)

/*!
 @brief The path/filename of the property file: XSLTInfo.properties
  Maintenance note: see also
  org.apache.xalan.processor.TransformerFactoryImpl.XSLT_PROPERTIES
 */
inline NSString *OrgApacheXpathFunctionsFuncSystemProperty_get_XSLT_PROPERTIES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathFunctionsFuncSystemProperty_XSLT_PROPERTIES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathFunctionsFuncSystemProperty, XSLT_PROPERTIES, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncSystemProperty_init(OrgApacheXpathFunctionsFuncSystemProperty *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSystemProperty *new_OrgApacheXpathFunctionsFuncSystemProperty_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncSystemProperty *create_OrgApacheXpathFunctionsFuncSystemProperty_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncSystemProperty)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncSystemProperty")
