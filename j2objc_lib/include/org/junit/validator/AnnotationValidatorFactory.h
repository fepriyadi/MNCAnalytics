//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/validator/AnnotationValidatorFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitValidatorAnnotationValidatorFactory")
#ifdef RESTRICT_OrgJunitValidatorAnnotationValidatorFactory
#define INCLUDE_ALL_OrgJunitValidatorAnnotationValidatorFactory 0
#else
#define INCLUDE_ALL_OrgJunitValidatorAnnotationValidatorFactory 1
#endif
#undef RESTRICT_OrgJunitValidatorAnnotationValidatorFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitValidatorAnnotationValidatorFactory_) && (INCLUDE_ALL_OrgJunitValidatorAnnotationValidatorFactory || defined(INCLUDE_OrgJunitValidatorAnnotationValidatorFactory))
#define OrgJunitValidatorAnnotationValidatorFactory_

@class OrgJunitValidatorAnnotationValidator;
@protocol OrgJunitValidatorValidateWith;

/*!
 @brief Creates instances of Annotation Validators.
 @since 4.12
 */
@interface OrgJunitValidatorAnnotationValidatorFactory : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Creates the AnnotationValidator specified by the value in 
 <code>org.junit.validator.ValidateWith</code>.Instances are
  cached.
 @return An instance of the AnnotationValidator.
 @since 4.12
 */
- (OrgJunitValidatorAnnotationValidator *)createAnnotationValidatorWithOrgJunitValidatorValidateWith:(id<OrgJunitValidatorValidateWith>)validateWithAnnotation;

@end

J2OBJC_STATIC_INIT(OrgJunitValidatorAnnotationValidatorFactory)

FOUNDATION_EXPORT void OrgJunitValidatorAnnotationValidatorFactory_init(OrgJunitValidatorAnnotationValidatorFactory *self);

FOUNDATION_EXPORT OrgJunitValidatorAnnotationValidatorFactory *new_OrgJunitValidatorAnnotationValidatorFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitValidatorAnnotationValidatorFactory *create_OrgJunitValidatorAnnotationValidatorFactory_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitValidatorAnnotationValidatorFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitValidatorAnnotationValidatorFactory")
