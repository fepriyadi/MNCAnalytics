//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/com/tngtech/java/junit/dataprovider/internal/placeholder/ParameterPlaceholder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder")
#ifdef RESTRICT_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder 0
#else
#define INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder 1
#endif
#undef RESTRICT_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_) && (INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder || defined(INCLUDE_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder))
#define ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_

#define RESTRICT_ComTngtechJavaJunitDataproviderInternalPlaceholderBasePlaceholder 1
#define INCLUDE_ComTngtechJavaJunitDataproviderInternalPlaceholderBasePlaceholder 1
#include "com/tngtech/java/junit/dataprovider/internal/placeholder/BasePlaceholder.h"

@class IOSObjectArray;

/*!
 @brief This placeholder format the parameters of a dataprovider test as comma-separated <code>String</code> according to the
  given index or range subscript (see <code>DataProvider.format()</code>.Furthermore the following parameter values are
  treated specially: 
 <table summary="Special {@@link String} treatment">
  <tr>
  <th>Parameter value</th>
  <th>target <code>String</code></th>
  </tr>
  <tr>
  <td>null</td>
  <td>&lt;null&gt;</td>
  </tr>
  <tr>
  <td>&quot;&quot; (= empty string)</td>
  <td>&lt;empty string&gt;</td>
  </tr>
  <tr>
  <td>array (e.g.
 String[])</td>
  <td><code>"[" + formatPattern(array) + "]"</code></td>
  </tr>
  <tr>
  <td>other</td>
  <td><code>Object.toString()</code></td>
  </tr>
  </table>
 */
@interface ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder : ComTngtechJavaJunitDataproviderInternalPlaceholderBasePlaceholder
@property (readonly, copy, class) NSString *STRING_NULL NS_SWIFT_NAME(STRING_NULL);
@property (readonly, copy, class) NSString *STRING_EMPTY NS_SWIFT_NAME(STRING_EMPTY);

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Protected

- (NSString *)formatWithId:(id)param;

/*!
 @brief Formats the given parameters by retrieving it's <code>String</code> representation and separate it by comma (= 
 <code>,</code>).
 @param parameters to be formatted
 @return the <code>String</code> representation of the given <code>Object</code><code>[]</code>
 */
- (NSString *)formatAllWithNSObjectArray:(IOSObjectArray *)parameters;

- (NSString *)getReplacementForWithNSString:(NSString *)placeholder;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder)

/*!
 @brief <code>String</code> representation of <code>null</code>
 <p>
  This field is package private (= visible) for testing.
 </p>
 */
inline NSString *ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_get_STRING_NULL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_STRING_NULL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder, STRING_NULL, NSString *)

/*!
 @brief <code>String</code> representation of <code>""</code>
 <p>
  This field is package private (= visible) for testing.
 </p>
 */
inline NSString *ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_get_STRING_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_STRING_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder, STRING_EMPTY, NSString *)

FOUNDATION_EXPORT void ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_init(ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder *self);

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder *new_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder *create_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComTngtechJavaJunitDataproviderInternalPlaceholderParameterPlaceholder")
