//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/NotExtensible.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoNotExtensible")
#ifdef RESTRICT_OrgMockitoNotExtensible
#define INCLUDE_ALL_OrgMockitoNotExtensible 0
#else
#define INCLUDE_ALL_OrgMockitoNotExtensible 1
#endif
#undef RESTRICT_OrgMockitoNotExtensible

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoNotExtensible_) && (INCLUDE_ALL_OrgMockitoNotExtensible || defined(INCLUDE_OrgMockitoNotExtensible))
#define OrgMockitoNotExtensible_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Indicates to the user that she should not provide custom implementations of given type.
 Helps framework integrators and our users understand how to use Mockito API safely,
  without the risk of getting exposed to incompatible changes.
  Some types that are a part of Mockito public API are not intended to be extended.
  It's because Mockito team needs to be able to add new methods to some types without breaking compatibility contract.
  We would never break compatibility by changing the signature of an existing public method.
  However, we need flexibility to add new methods to some types to evolve the API if needed.
  Public types are all types that are *not* under "org.mockito.internal.*" package. 
 <p>
  Absence of <code>NotExtensible</code> annotation on a type *does not* mean it is intended to be extended.
  The annotation has been introduced late and therefore it is not used frequently in the codebase.
  Many public types from Mockito API are not intended for extension, even though they do not have this annotation applied.
 @since 2.10.0
 */
@protocol OrgMockitoNotExtensible < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface OrgMockitoNotExtensible : NSObject < OrgMockitoNotExtensible >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoNotExtensible)

FOUNDATION_EXPORT id<OrgMockitoNotExtensible> create_OrgMockitoNotExtensible(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoNotExtensible)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoNotExtensible")
