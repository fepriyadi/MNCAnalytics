//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/util/VersionInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuUtilVersionInfo")
#ifdef RESTRICT_AndroidIcuUtilVersionInfo
#define INCLUDE_ALL_AndroidIcuUtilVersionInfo 0
#else
#define INCLUDE_ALL_AndroidIcuUtilVersionInfo 1
#endif
#undef RESTRICT_AndroidIcuUtilVersionInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuUtilVersionInfo_) && (INCLUDE_ALL_AndroidIcuUtilVersionInfo || defined(INCLUDE_AndroidIcuUtilVersionInfo))
#define AndroidIcuUtilVersionInfo_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSObjectArray;

/*!
 @brief Class to store version numbers of the form major.minor.milli.micro.
 @author synwee
 */
@interface AndroidIcuUtilVersionInfo : NSObject < JavaLangComparable >
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_1_0 NS_SWIFT_NAME(UNICODE_1_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_1_0_1 NS_SWIFT_NAME(UNICODE_1_0_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_1_1_0 NS_SWIFT_NAME(UNICODE_1_1_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_1_1_5 NS_SWIFT_NAME(UNICODE_1_1_5);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_2_0 NS_SWIFT_NAME(UNICODE_2_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_2_1_2 NS_SWIFT_NAME(UNICODE_2_1_2);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_2_1_5 NS_SWIFT_NAME(UNICODE_2_1_5);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_2_1_8 NS_SWIFT_NAME(UNICODE_2_1_8);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_2_1_9 NS_SWIFT_NAME(UNICODE_2_1_9);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_3_0 NS_SWIFT_NAME(UNICODE_3_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_3_0_1 NS_SWIFT_NAME(UNICODE_3_0_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_3_1_0 NS_SWIFT_NAME(UNICODE_3_1_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_3_1_1 NS_SWIFT_NAME(UNICODE_3_1_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_3_2 NS_SWIFT_NAME(UNICODE_3_2);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_4_0 NS_SWIFT_NAME(UNICODE_4_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_4_0_1 NS_SWIFT_NAME(UNICODE_4_0_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_4_1 NS_SWIFT_NAME(UNICODE_4_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_5_0 NS_SWIFT_NAME(UNICODE_5_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_5_1 NS_SWIFT_NAME(UNICODE_5_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_5_2 NS_SWIFT_NAME(UNICODE_5_2);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_6_0 NS_SWIFT_NAME(UNICODE_6_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_6_1 NS_SWIFT_NAME(UNICODE_6_1);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_6_2 NS_SWIFT_NAME(UNICODE_6_2);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_6_3 NS_SWIFT_NAME(UNICODE_6_3);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_7_0 NS_SWIFT_NAME(UNICODE_7_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_8_0 NS_SWIFT_NAME(UNICODE_8_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UNICODE_9_0 NS_SWIFT_NAME(UNICODE_9_0);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *ICU_VERSION NS_SWIFT_NAME(ICU_VERSION);
@property (readonly, copy, class) NSString *ICU_DATA_VERSION_PATH NS_SWIFT_NAME(ICU_DATA_VERSION_PATH);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *ICU_DATA_VERSION NS_SWIFT_NAME(ICU_DATA_VERSION);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UCOL_RUNTIME_VERSION NS_SWIFT_NAME(UCOL_RUNTIME_VERSION);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UCOL_BUILDER_VERSION NS_SWIFT_NAME(UCOL_BUILDER_VERSION);
@property (readonly, class, strong) AndroidIcuUtilVersionInfo *UCOL_TAILORINGS_VERSION NS_SWIFT_NAME(UCOL_TAILORINGS_VERSION);

#pragma mark Public

/*!
 @brief Compares other with this VersionInfo.
 @param other VersionInfo to be compared
 @return 0 if the argument is a VersionInfo object that has version
            information equals to this object.
            Less than 0 if the argument is a VersionInfo object that has
            version information greater than this object.
            Greater than 0 if the argument is a VersionInfo object that
            has version information less than this object.
 */
- (jint)compareToWithId:(AndroidIcuUtilVersionInfo *)other;

/*!
 @brief Checks if this version information is equals to the argument version
 @param other object to be compared
 @return true if other is equals to this object's version information,
          false otherwise
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns an instance of VersionInfo with the argument version.
 Equivalent to getInstance(major, 0, 0, 0).
 @param major major version, non-negative number  &lt; = 255.
 @throw IllegalArgumentExceptionwhen either arguments are
                                      negative or &gt; 255
 */
+ (AndroidIcuUtilVersionInfo *)getInstanceWithInt:(jint)major;

/*!
 @brief Returns an instance of VersionInfo with the argument version.
 Equivalent to getInstance(major, minor, 0, 0).
 @param major major version, non-negative number  &lt; = 255.
 @param minor minor version, non-negative number  &lt; = 255.
 @throw IllegalArgumentExceptionwhen either arguments are
                                      negative or &gt; 255
 */
+ (AndroidIcuUtilVersionInfo *)getInstanceWithInt:(jint)major
                                          withInt:(jint)minor;

/*!
 @brief Returns an instance of VersionInfo with the argument version.
 Equivalent to getInstance(major, minor, milli, 0).
 @param major major version, non-negative number  &lt; = 255.
 @param minor minor version, non-negative number  &lt; = 255.
 @param milli milli version, non-negative number  &lt; = 255.
 @throw IllegalArgumentExceptionwhen either arguments are
                                      negative or &gt; 255
 */
+ (AndroidIcuUtilVersionInfo *)getInstanceWithInt:(jint)major
                                          withInt:(jint)minor
                                          withInt:(jint)milli;

/*!
 @brief Returns an instance of VersionInfo with the argument version.
 @param major major version, non-negative number  &lt; = 255.
 @param minor minor version, non-negative number  &lt; = 255.
 @param milli milli version, non-negative number  &lt; = 255.
 @param micro micro version, non-negative number  &lt; = 255.
 @throw IllegalArgumentExceptionwhen either arguments are negative or &gt; 255
 */
+ (AndroidIcuUtilVersionInfo *)getInstanceWithInt:(jint)major
                                          withInt:(jint)minor
                                          withInt:(jint)milli
                                          withInt:(jint)micro;

/*!
 @brief Returns an instance of VersionInfo with the argument version.
 @param version_ version String in the format of "major.minor.milli.micro"                 or "major.minor.milli" or "major.minor" or "major",
                  where major, minor, milli, micro are non-negative numbers
                  
  &lt; = 255. If the trailing version numbers are                 not specified they are taken as 0s. E.g. Version "3.1" is                 equivalent to "3.1.0.0".
 @return an instance of VersionInfo with the argument version.
 @throw IllegalArgumentExceptionwhen the argument version
                 is not in the right format
 */
+ (AndroidIcuUtilVersionInfo *)getInstanceWithNSString:(NSString *)version_;

/*!
 @brief Returns the major version number
 @return the major version number
 */
- (jint)getMajor;

/*!
 @brief Returns the micro version number
 @return the micro version number
 */
- (jint)getMicro;

/*!
 @brief Returns the milli version number
 @return the milli version number
 */
- (jint)getMilli;

/*!
 @brief Returns the minor version number
 @return the minor version number
 */
- (jint)getMinor;

/*!
 @brief Generate version string separated by dots with
  the specified digit width.Version digit 0
  after <code>minDigits</code> will be trimmed off.
 @param minDigits Minimum number of version digits
 @param maxDigits Maximum number of version digits
 @return A tailored version string
 */
- (NSString *)getVersionStringWithInt:(jint)minDigits
                              withInt:(jint)maxDigits __attribute__((deprecated));

/*!
 @brief Returns the hash code value for this set.
 @return the hash code value for this set.
 - seealso: java.lang.Object#hashCode()
 */
- (NSUInteger)hash;

/*!
 */
+ (AndroidIcuUtilVersionInfo *)javaVersion __attribute__((deprecated));

/*!
 @brief Main method prints out ICU version information
 @param args arguments (currently not used)
 */
+ (void)mainWithNSStringArray:(IOSObjectArray *)args;

/*!
 @brief Returns the String representative of VersionInfo in the format of
  "major.minor.milli.micro"
 @return String representative of VersionInfo
 */
- (NSString *)description;

#pragma mark Package-Private

+ (NSString *)getTZDataVersion;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(AndroidIcuUtilVersionInfo)

/*!
 @brief Unicode 1.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_1_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_1_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_1_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 1.0.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_1_0_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_1_0_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_1_0_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 1.1.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_1_1_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_1_1_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_1_1_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 1.1.5 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_1_1_5(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_1_1_5;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_1_1_5, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 2.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_2_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_2_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_2_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 2.1.2 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_2_1_2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_2_1_2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_2_1_2, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 2.1.5 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_2_1_5(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_2_1_5;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_2_1_5, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 2.1.8 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_2_1_8(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_2_1_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_2_1_8, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 2.1.9 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_2_1_9(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_2_1_9;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_2_1_9, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 3.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_3_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_3_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_3_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 3.0.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_3_0_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_3_0_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_3_0_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 3.1.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_3_1_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_3_1_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_3_1_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 3.1.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_3_1_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_3_1_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_3_1_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 3.2 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_3_2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_3_2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_3_2, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 4.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_4_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_4_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_4_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 4.0.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_4_0_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_4_0_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_4_0_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 4.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_4_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_4_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_4_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 5.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_5_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_5_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_5_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 5.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_5_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_5_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_5_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 5.2 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_5_2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_5_2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_5_2, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 6.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_6_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_6_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_6_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 6.1 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_6_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_6_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_6_1, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 6.2 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_6_2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_6_2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_6_2, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 6.3 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_6_3(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_6_3;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_6_3, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 7.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_7_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_7_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_7_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 8.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_8_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_8_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_8_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief Unicode 9.0 version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UNICODE_9_0(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UNICODE_9_0;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UNICODE_9_0, AndroidIcuUtilVersionInfo *)

/*!
 @brief ICU4J current release version
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_ICU_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_ICU_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, ICU_VERSION, AndroidIcuUtilVersionInfo *)

/*!
 @brief Data version string for ICU's internal data.
 Used for appending to data path (e.g. icudt43b)
 */
inline NSString *AndroidIcuUtilVersionInfo_get_ICU_DATA_VERSION_PATH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *AndroidIcuUtilVersionInfo_ICU_DATA_VERSION_PATH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, ICU_DATA_VERSION_PATH, NSString *)

/*!
 @brief Data version in ICU4J.
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_ICU_DATA_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_ICU_DATA_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, ICU_DATA_VERSION, AndroidIcuUtilVersionInfo *)

/*!
 @brief Collation runtime version (sort key generator, string comparisons).
 If the version is different, sort keys for the same string could be different.
  This value may change in subsequent releases of ICU.
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UCOL_RUNTIME_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UCOL_RUNTIME_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UCOL_RUNTIME_VERSION, AndroidIcuUtilVersionInfo *)

/*!
 @brief Collation builder code version.
 When this is different, the same tailoring might result
  in assigning different collation elements to code points.
  This value may change in subsequent releases of ICU.
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UCOL_BUILDER_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UCOL_BUILDER_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UCOL_BUILDER_VERSION, AndroidIcuUtilVersionInfo *)

/*!
 @brief Constant version 1.
 This was intended to be the version of collation tailorings,
  but instead the tailoring data carries a version number.
 */
inline AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_get_UCOL_TAILORINGS_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_UCOL_TAILORINGS_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidIcuUtilVersionInfo, UCOL_TAILORINGS_VERSION, AndroidIcuUtilVersionInfo *)

FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_getInstanceWithNSString_(NSString *version_);

FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_getInstanceWithInt_withInt_withInt_withInt_(jint major, jint minor, jint milli, jint micro);

FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_getInstanceWithInt_withInt_withInt_(jint major, jint minor, jint milli);

FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_getInstanceWithInt_withInt_(jint major, jint minor);

FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_getInstanceWithInt_(jint major);

FOUNDATION_EXPORT AndroidIcuUtilVersionInfo *AndroidIcuUtilVersionInfo_javaVersion(void);

FOUNDATION_EXPORT void AndroidIcuUtilVersionInfo_mainWithNSStringArray_(IOSObjectArray *args);

FOUNDATION_EXPORT NSString *AndroidIcuUtilVersionInfo_getTZDataVersion(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuUtilVersionInfo)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuUtilVersionInfo")
