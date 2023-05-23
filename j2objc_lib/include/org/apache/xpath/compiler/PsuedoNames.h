//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/PsuedoNames.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerPsuedoNames")
#ifdef RESTRICT_OrgApacheXpathCompilerPsuedoNames
#define INCLUDE_ALL_OrgApacheXpathCompilerPsuedoNames 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerPsuedoNames 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerPsuedoNames

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXpathCompilerPsuedoNames_) && (INCLUDE_ALL_OrgApacheXpathCompilerPsuedoNames || defined(INCLUDE_OrgApacheXpathCompilerPsuedoNames))
#define OrgApacheXpathCompilerPsuedoNames_

/*!
 @brief This is used to represent names of nodes that may not be named, like a 
  comment node.
 */
@interface OrgApacheXpathCompilerPsuedoNames : NSObject
@property (readonly, copy, class) NSString *PSEUDONAME_ANY NS_SWIFT_NAME(PSEUDONAME_ANY);
@property (readonly, copy, class) NSString *PSEUDONAME_ROOT NS_SWIFT_NAME(PSEUDONAME_ROOT);
@property (readonly, copy, class) NSString *PSEUDONAME_TEXT NS_SWIFT_NAME(PSEUDONAME_TEXT);
@property (readonly, copy, class) NSString *PSEUDONAME_COMMENT NS_SWIFT_NAME(PSEUDONAME_COMMENT);
@property (readonly, copy, class) NSString *PSEUDONAME_PI NS_SWIFT_NAME(PSEUDONAME_PI);
@property (readonly, copy, class) NSString *PSEUDONAME_OTHER NS_SWIFT_NAME(PSEUDONAME_OTHER);

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathCompilerPsuedoNames)

/*!
 @brief Psuedo name for a wild card pattern ('*').
 */
inline NSString *OrgApacheXpathCompilerPsuedoNames_get_PSEUDONAME_ANY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerPsuedoNames_PSEUDONAME_ANY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerPsuedoNames, PSEUDONAME_ANY, NSString *)

/*!
 @brief Psuedo name for the root node.
 */
inline NSString *OrgApacheXpathCompilerPsuedoNames_get_PSEUDONAME_ROOT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerPsuedoNames_PSEUDONAME_ROOT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerPsuedoNames, PSEUDONAME_ROOT, NSString *)

/*!
 @brief Psuedo name for a text node.
 */
inline NSString *OrgApacheXpathCompilerPsuedoNames_get_PSEUDONAME_TEXT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerPsuedoNames_PSEUDONAME_TEXT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerPsuedoNames, PSEUDONAME_TEXT, NSString *)

/*!
 @brief Psuedo name for a comment node.
 */
inline NSString *OrgApacheXpathCompilerPsuedoNames_get_PSEUDONAME_COMMENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerPsuedoNames_PSEUDONAME_COMMENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerPsuedoNames, PSEUDONAME_COMMENT, NSString *)

/*!
 @brief Psuedo name for a processing instruction node.
 */
inline NSString *OrgApacheXpathCompilerPsuedoNames_get_PSEUDONAME_PI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerPsuedoNames_PSEUDONAME_PI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerPsuedoNames, PSEUDONAME_PI, NSString *)

/*!
 @brief Psuedo name for an unknown type value.
 */
inline NSString *OrgApacheXpathCompilerPsuedoNames_get_PSEUDONAME_OTHER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathCompilerPsuedoNames_PSEUDONAME_OTHER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathCompilerPsuedoNames, PSEUDONAME_OTHER, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathCompilerPsuedoNames_init(OrgApacheXpathCompilerPsuedoNames *self);

FOUNDATION_EXPORT OrgApacheXpathCompilerPsuedoNames *new_OrgApacheXpathCompilerPsuedoNames_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerPsuedoNames *create_OrgApacheXpathCompilerPsuedoNames_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerPsuedoNames)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerPsuedoNames")