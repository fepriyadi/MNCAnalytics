//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/GreaterThan.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersGreaterThan")
#ifdef RESTRICT_OrgMockitoInternalMatchersGreaterThan
#define INCLUDE_ALL_OrgMockitoInternalMatchersGreaterThan 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersGreaterThan 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersGreaterThan

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgMockitoInternalMatchersGreaterThan_) && (INCLUDE_ALL_OrgMockitoInternalMatchersGreaterThan || defined(INCLUDE_OrgMockitoInternalMatchersGreaterThan))
#define OrgMockitoInternalMatchersGreaterThan_

#define RESTRICT_OrgMockitoInternalMatchersCompareTo 1
#define INCLUDE_OrgMockitoInternalMatchersCompareTo 1
#include "org/mockito/internal/matchers/CompareTo.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaLangComparable;

@interface OrgMockitoInternalMatchersGreaterThan : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangComparable:(id<JavaLangComparable>)value;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersGreaterThan)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersGreaterThan_initWithJavaLangComparable_(OrgMockitoInternalMatchersGreaterThan *self, id<JavaLangComparable> value);

FOUNDATION_EXPORT OrgMockitoInternalMatchersGreaterThan *new_OrgMockitoInternalMatchersGreaterThan_initWithJavaLangComparable_(id<JavaLangComparable> value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersGreaterThan *create_OrgMockitoInternalMatchersGreaterThan_initWithJavaLangComparable_(id<JavaLangComparable> value);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersGreaterThan)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersGreaterThan")