//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractMapEntry.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapEntry")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMapEntry
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapEntry 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapEntry 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMapEntry

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractMapEntry_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapEntry || defined(INCLUDE_ComGoogleCommonCollectAbstractMapEntry))
#define ComGoogleCommonCollectAbstractMapEntry_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap_Entry 1
#include "java/util/Map.h"

/*!
 @brief Implementation of the <code>equals</code>, <code>hashCode</code>, and <code>toString</code> methods of <code>Entry</code>
 .
 @author Jared Levy
 */
@interface ComGoogleCommonCollectAbstractMapEntry : NSObject < JavaUtilMap_Entry >

#pragma mark Public

- (jboolean)isEqual:(id __nullable)object;

- (id)getKey;

- (id)getValue;

- (NSUInteger)hash;

- (id)setValueWithId:(id __nonnull)value;

/*!
 @brief Returns a string representation of the form <code>{key}={value}</code>.
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype __nonnull)initPackagePrivate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapEntry)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapEntry_initPackagePrivate(ComGoogleCommonCollectAbstractMapEntry *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapEntry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapEntry")
