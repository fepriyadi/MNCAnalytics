//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/validator/AnnotationsValidator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitValidatorAnnotationsValidator")
#ifdef RESTRICT_OrgJunitValidatorAnnotationsValidator
#define INCLUDE_ALL_OrgJunitValidatorAnnotationsValidator 0
#else
#define INCLUDE_ALL_OrgJunitValidatorAnnotationsValidator 1
#endif
#undef RESTRICT_OrgJunitValidatorAnnotationsValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitValidatorAnnotationsValidator_) && (INCLUDE_ALL_OrgJunitValidatorAnnotationsValidator || defined(INCLUDE_OrgJunitValidatorAnnotationsValidator))
#define OrgJunitValidatorAnnotationsValidator_

#define RESTRICT_OrgJunitValidatorTestClassValidator 1
#define INCLUDE_OrgJunitValidatorTestClassValidator 1
#include "org/junit/validator/TestClassValidator.h"

@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

/*!
 @brief An <code>AnnotationsValidator</code> validates all annotations of a test class,
  including its annotated fields and methods.
 @since 4.12
 */
@interface OrgJunitValidatorAnnotationsValidator : NSObject < OrgJunitValidatorTestClassValidator >

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Validate all annotations of the specified test class that are be
  annotated with <code>ValidateWith</code>.
 @param testClass the 
 <code>TestClass</code>  that is validated.
 @return the errors found by the validator.
 */
- (id<JavaUtilList>)validateTestClassWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

@end

J2OBJC_STATIC_INIT(OrgJunitValidatorAnnotationsValidator)

FOUNDATION_EXPORT void OrgJunitValidatorAnnotationsValidator_init(OrgJunitValidatorAnnotationsValidator *self);

FOUNDATION_EXPORT OrgJunitValidatorAnnotationsValidator *new_OrgJunitValidatorAnnotationsValidator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitValidatorAnnotationsValidator *create_OrgJunitValidatorAnnotationsValidator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitValidatorAnnotationsValidator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitValidatorAnnotationsValidator")
