//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/management/ReflectiveRuntimeMXBean.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalManagementReflectiveRuntimeMXBean")
#ifdef RESTRICT_OrgJunitInternalManagementReflectiveRuntimeMXBean
#define INCLUDE_ALL_OrgJunitInternalManagementReflectiveRuntimeMXBean 0
#else
#define INCLUDE_ALL_OrgJunitInternalManagementReflectiveRuntimeMXBean 1
#endif
#undef RESTRICT_OrgJunitInternalManagementReflectiveRuntimeMXBean

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJunitInternalManagementReflectiveRuntimeMXBean_) && (INCLUDE_ALL_OrgJunitInternalManagementReflectiveRuntimeMXBean || defined(INCLUDE_OrgJunitInternalManagementReflectiveRuntimeMXBean))
#define OrgJunitInternalManagementReflectiveRuntimeMXBean_

#define RESTRICT_OrgJunitInternalManagementRuntimeMXBean 1
#define INCLUDE_OrgJunitInternalManagementRuntimeMXBean 1
#include "org/junit/internal/management/RuntimeMXBean.h"

@protocol JavaUtilList;

/*!
 @brief Implementation of <code>RuntimeMXBean</code> using the JVM reflectively.
 */
@interface OrgJunitInternalManagementReflectiveRuntimeMXBean : NSObject < OrgJunitInternalManagementRuntimeMXBean >

#pragma mark Public

/*!
 */
- (id<JavaUtilList>)getInputArguments;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivateWithId:(id)runtimeMxBean;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalManagementReflectiveRuntimeMXBean)

FOUNDATION_EXPORT void OrgJunitInternalManagementReflectiveRuntimeMXBean_initPackagePrivateWithId_(OrgJunitInternalManagementReflectiveRuntimeMXBean *self, id runtimeMxBean);

FOUNDATION_EXPORT OrgJunitInternalManagementReflectiveRuntimeMXBean *new_OrgJunitInternalManagementReflectiveRuntimeMXBean_initPackagePrivateWithId_(id runtimeMxBean) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalManagementReflectiveRuntimeMXBean *create_OrgJunitInternalManagementReflectiveRuntimeMXBean_initPackagePrivateWithId_(id runtimeMxBean);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalManagementReflectiveRuntimeMXBean)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalManagementReflectiveRuntimeMXBean")