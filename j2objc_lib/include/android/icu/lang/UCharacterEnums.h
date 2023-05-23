//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/lang/UCharacterEnums.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuLangUCharacterEnums")
#ifdef RESTRICT_AndroidIcuLangUCharacterEnums
#define INCLUDE_ALL_AndroidIcuLangUCharacterEnums 0
#else
#define INCLUDE_ALL_AndroidIcuLangUCharacterEnums 1
#endif
#undef RESTRICT_AndroidIcuLangUCharacterEnums

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuLangUCharacterEnums_) && (INCLUDE_ALL_AndroidIcuLangUCharacterEnums || defined(INCLUDE_AndroidIcuLangUCharacterEnums))
#define AndroidIcuLangUCharacterEnums_

/*!
 @brief A container for the different 'enumerated types' used by UCharacter.
 */
@interface AndroidIcuLangUCharacterEnums : NSObject

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuLangUCharacterEnums)

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuLangUCharacterEnums)

#endif

#if !defined (AndroidIcuLangUCharacterEnums_ECharacterCategory_) && (INCLUDE_ALL_AndroidIcuLangUCharacterEnums || defined(INCLUDE_AndroidIcuLangUCharacterEnums_ECharacterCategory))
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_

/*!
 @brief 'Enum' for the CharacterCategory constants.These constants are
  compatible in name <b>but not in value</b> with those defined in 
 <code>java.lang.Character</code>.
 - seealso: UCharacterCategory
 */
@protocol AndroidIcuLangUCharacterEnums_ECharacterCategory < JavaObject >

@end

@interface AndroidIcuLangUCharacterEnums_ECharacterCategory : NSObject
@property (readonly, class) jbyte UNASSIGNED NS_SWIFT_NAME(UNASSIGNED);
@property (readonly, class) jbyte GENERAL_OTHER_TYPES NS_SWIFT_NAME(GENERAL_OTHER_TYPES);
@property (readonly, class) jbyte UPPERCASE_LETTER NS_SWIFT_NAME(UPPERCASE_LETTER);
@property (readonly, class) jbyte LOWERCASE_LETTER NS_SWIFT_NAME(LOWERCASE_LETTER);
@property (readonly, class) jbyte TITLECASE_LETTER NS_SWIFT_NAME(TITLECASE_LETTER);
@property (readonly, class) jbyte MODIFIER_LETTER NS_SWIFT_NAME(MODIFIER_LETTER);
@property (readonly, class) jbyte OTHER_LETTER NS_SWIFT_NAME(OTHER_LETTER);
@property (readonly, class) jbyte NON_SPACING_MARK NS_SWIFT_NAME(NON_SPACING_MARK);
@property (readonly, class) jbyte ENCLOSING_MARK NS_SWIFT_NAME(ENCLOSING_MARK);
@property (readonly, class) jbyte COMBINING_SPACING_MARK NS_SWIFT_NAME(COMBINING_SPACING_MARK);
@property (readonly, class) jbyte DECIMAL_DIGIT_NUMBER NS_SWIFT_NAME(DECIMAL_DIGIT_NUMBER);
@property (readonly, class) jbyte LETTER_NUMBER NS_SWIFT_NAME(LETTER_NUMBER);
@property (readonly, class) jbyte OTHER_NUMBER NS_SWIFT_NAME(OTHER_NUMBER);
@property (readonly, class) jbyte SPACE_SEPARATOR NS_SWIFT_NAME(SPACE_SEPARATOR);
@property (readonly, class) jbyte LINE_SEPARATOR NS_SWIFT_NAME(LINE_SEPARATOR);
@property (readonly, class) jbyte PARAGRAPH_SEPARATOR NS_SWIFT_NAME(PARAGRAPH_SEPARATOR);
@property (readonly, class) jbyte CONTROL NS_SWIFT_NAME(CONTROL);
@property (readonly, class) jbyte FORMAT NS_SWIFT_NAME(FORMAT);
@property (readonly, class) jbyte PRIVATE_USE NS_SWIFT_NAME(PRIVATE_USE);
@property (readonly, class) jbyte SURROGATE NS_SWIFT_NAME(SURROGATE);
@property (readonly, class) jbyte DASH_PUNCTUATION NS_SWIFT_NAME(DASH_PUNCTUATION);
@property (readonly, class) jbyte START_PUNCTUATION NS_SWIFT_NAME(START_PUNCTUATION);
@property (readonly, class) jbyte END_PUNCTUATION NS_SWIFT_NAME(END_PUNCTUATION);
@property (readonly, class) jbyte CONNECTOR_PUNCTUATION NS_SWIFT_NAME(CONNECTOR_PUNCTUATION);
@property (readonly, class) jbyte OTHER_PUNCTUATION NS_SWIFT_NAME(OTHER_PUNCTUATION);
@property (readonly, class) jbyte MATH_SYMBOL NS_SWIFT_NAME(MATH_SYMBOL);
@property (readonly, class) jbyte CURRENCY_SYMBOL NS_SWIFT_NAME(CURRENCY_SYMBOL);
@property (readonly, class) jbyte MODIFIER_SYMBOL NS_SWIFT_NAME(MODIFIER_SYMBOL);
@property (readonly, class) jbyte OTHER_SYMBOL NS_SWIFT_NAME(OTHER_SYMBOL);
@property (readonly, class) jbyte INITIAL_PUNCTUATION NS_SWIFT_NAME(INITIAL_PUNCTUATION);
@property (readonly, class) jbyte INITIAL_QUOTE_PUNCTUATION NS_SWIFT_NAME(INITIAL_QUOTE_PUNCTUATION);
@property (readonly, class) jbyte FINAL_PUNCTUATION NS_SWIFT_NAME(FINAL_PUNCTUATION);
@property (readonly, class) jbyte FINAL_QUOTE_PUNCTUATION NS_SWIFT_NAME(FINAL_QUOTE_PUNCTUATION);
@property (readonly, class) jbyte CHAR_CATEGORY_COUNT NS_SWIFT_NAME(CHAR_CATEGORY_COUNT);

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuLangUCharacterEnums_ECharacterCategory)

/*!
 @brief Unassigned character type
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_UNASSIGNED(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_UNASSIGNED 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, UNASSIGNED, jbyte)

/*!
 @brief Character type Cn
  Not Assigned (no characters in [UnicodeData.txt] have this property)
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_GENERAL_OTHER_TYPES(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_GENERAL_OTHER_TYPES 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, GENERAL_OTHER_TYPES, jbyte)

/*!
 @brief Character type Lu
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_UPPERCASE_LETTER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_UPPERCASE_LETTER 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, UPPERCASE_LETTER, jbyte)

/*!
 @brief Character type Ll
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_LOWERCASE_LETTER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_LOWERCASE_LETTER 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, LOWERCASE_LETTER, jbyte)

/*!
 @brief Character type Lt
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_TITLECASE_LETTER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_TITLECASE_LETTER 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, TITLECASE_LETTER, jbyte)

/*!
 @brief Character type Lm
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_MODIFIER_LETTER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_MODIFIER_LETTER 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, MODIFIER_LETTER, jbyte)

/*!
 @brief Character type Lo
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_OTHER_LETTER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_OTHER_LETTER 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, OTHER_LETTER, jbyte)

/*!
 @brief Character type Mn
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_NON_SPACING_MARK(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_NON_SPACING_MARK 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, NON_SPACING_MARK, jbyte)

/*!
 @brief Character type Me
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_ENCLOSING_MARK(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_ENCLOSING_MARK 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, ENCLOSING_MARK, jbyte)

/*!
 @brief Character type Mc
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_COMBINING_SPACING_MARK(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_COMBINING_SPACING_MARK 8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, COMBINING_SPACING_MARK, jbyte)

/*!
 @brief Character type Nd
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_DECIMAL_DIGIT_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_DECIMAL_DIGIT_NUMBER 9
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, DECIMAL_DIGIT_NUMBER, jbyte)

/*!
 @brief Character type Nl
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_LETTER_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_LETTER_NUMBER 10
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, LETTER_NUMBER, jbyte)

/*!
 @brief Character type No
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_OTHER_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_OTHER_NUMBER 11
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, OTHER_NUMBER, jbyte)

/*!
 @brief Character type Zs
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_SPACE_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_SPACE_SEPARATOR 12
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, SPACE_SEPARATOR, jbyte)

/*!
 @brief Character type Zl
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_LINE_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_LINE_SEPARATOR 13
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, LINE_SEPARATOR, jbyte)

/*!
 @brief Character type Zp
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_PARAGRAPH_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_PARAGRAPH_SEPARATOR 14
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, PARAGRAPH_SEPARATOR, jbyte)

/*!
 @brief Character type Cc
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_CONTROL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_CONTROL 15
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, CONTROL, jbyte)

/*!
 @brief Character type Cf
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_FORMAT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_FORMAT 16
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, FORMAT, jbyte)

/*!
 @brief Character type Co
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_PRIVATE_USE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_PRIVATE_USE 17
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, PRIVATE_USE, jbyte)

/*!
 @brief Character type Cs
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_SURROGATE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_SURROGATE 18
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, SURROGATE, jbyte)

/*!
 @brief Character type Pd
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_DASH_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_DASH_PUNCTUATION 19
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, DASH_PUNCTUATION, jbyte)

/*!
 @brief Character type Ps
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_START_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_START_PUNCTUATION 20
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, START_PUNCTUATION, jbyte)

/*!
 @brief Character type Pe
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_END_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_END_PUNCTUATION 21
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, END_PUNCTUATION, jbyte)

/*!
 @brief Character type Pc
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_CONNECTOR_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_CONNECTOR_PUNCTUATION 22
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, CONNECTOR_PUNCTUATION, jbyte)

/*!
 @brief Character type Po
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_OTHER_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_OTHER_PUNCTUATION 23
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, OTHER_PUNCTUATION, jbyte)

/*!
 @brief Character type Sm
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_MATH_SYMBOL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_MATH_SYMBOL 24
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, MATH_SYMBOL, jbyte)

/*!
 @brief Character type Sc
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_CURRENCY_SYMBOL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_CURRENCY_SYMBOL 25
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, CURRENCY_SYMBOL, jbyte)

/*!
 @brief Character type Sk
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_MODIFIER_SYMBOL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_MODIFIER_SYMBOL 26
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, MODIFIER_SYMBOL, jbyte)

/*!
 @brief Character type So
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_OTHER_SYMBOL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_OTHER_SYMBOL 27
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, OTHER_SYMBOL, jbyte)

/*!
 @brief Character type Pi
 - seealso: #INITIAL_QUOTE_PUNCTUATION
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_INITIAL_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_INITIAL_PUNCTUATION 28
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, INITIAL_PUNCTUATION, jbyte)

/*!
 @brief Character type Pi
  This name is compatible with java.lang.Character's name for this type.
 - seealso: #INITIAL_PUNCTUATION
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_INITIAL_QUOTE_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_INITIAL_QUOTE_PUNCTUATION 28
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, INITIAL_QUOTE_PUNCTUATION, jbyte)

/*!
 @brief Character type Pf
 - seealso: #FINAL_QUOTE_PUNCTUATION
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_FINAL_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_FINAL_PUNCTUATION 29
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, FINAL_PUNCTUATION, jbyte)

/*!
 @brief Character type Pf
  This name is compatible with java.lang.Character's name for this type.
 - seealso: #FINAL_PUNCTUATION
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_FINAL_QUOTE_PUNCTUATION(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_FINAL_QUOTE_PUNCTUATION 29
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, FINAL_QUOTE_PUNCTUATION, jbyte)

/*!
 @brief One more than the highest normal ECharacterCategory value.
 This numeric value is stable (will not change), see
  http://www.unicode.org/policies/stability_policy.html#Property_Value
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterCategory_get_CHAR_CATEGORY_COUNT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterCategory_CHAR_CATEGORY_COUNT 30
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterCategory, CHAR_CATEGORY_COUNT, jbyte)

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuLangUCharacterEnums_ECharacterCategory)

#endif

#if !defined (AndroidIcuLangUCharacterEnums_ECharacterDirection_) && (INCLUDE_ALL_AndroidIcuLangUCharacterEnums || defined(INCLUDE_AndroidIcuLangUCharacterEnums_ECharacterDirection))
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_

/*!
 @brief 'Enum' for the CharacterDirection constants.Some constants are
  compatible in name <b>but not in value</b> with those defined in 
 <code>java.lang.Character</code>.
 - seealso: UCharacterDirection
 */
@protocol AndroidIcuLangUCharacterEnums_ECharacterDirection < JavaObject >

@end

@interface AndroidIcuLangUCharacterEnums_ECharacterDirection : NSObject
@property (readonly, class) jint LEFT_TO_RIGHT NS_SWIFT_NAME(LEFT_TO_RIGHT);
@property (readonly, class) jbyte DIRECTIONALITY_LEFT_TO_RIGHT NS_SWIFT_NAME(DIRECTIONALITY_LEFT_TO_RIGHT);
@property (readonly, class) jint RIGHT_TO_LEFT NS_SWIFT_NAME(RIGHT_TO_LEFT);
@property (readonly, class) jbyte DIRECTIONALITY_RIGHT_TO_LEFT NS_SWIFT_NAME(DIRECTIONALITY_RIGHT_TO_LEFT);
@property (readonly, class) jint EUROPEAN_NUMBER NS_SWIFT_NAME(EUROPEAN_NUMBER);
@property (readonly, class) jbyte DIRECTIONALITY_EUROPEAN_NUMBER NS_SWIFT_NAME(DIRECTIONALITY_EUROPEAN_NUMBER);
@property (readonly, class) jint EUROPEAN_NUMBER_SEPARATOR NS_SWIFT_NAME(EUROPEAN_NUMBER_SEPARATOR);
@property (readonly, class) jbyte DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR NS_SWIFT_NAME(DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR);
@property (readonly, class) jint EUROPEAN_NUMBER_TERMINATOR NS_SWIFT_NAME(EUROPEAN_NUMBER_TERMINATOR);
@property (readonly, class) jbyte DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR NS_SWIFT_NAME(DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR);
@property (readonly, class) jint ARABIC_NUMBER NS_SWIFT_NAME(ARABIC_NUMBER);
@property (readonly, class) jbyte DIRECTIONALITY_ARABIC_NUMBER NS_SWIFT_NAME(DIRECTIONALITY_ARABIC_NUMBER);
@property (readonly, class) jint COMMON_NUMBER_SEPARATOR NS_SWIFT_NAME(COMMON_NUMBER_SEPARATOR);
@property (readonly, class) jbyte DIRECTIONALITY_COMMON_NUMBER_SEPARATOR NS_SWIFT_NAME(DIRECTIONALITY_COMMON_NUMBER_SEPARATOR);
@property (readonly, class) jint BLOCK_SEPARATOR NS_SWIFT_NAME(BLOCK_SEPARATOR);
@property (readonly, class) jbyte DIRECTIONALITY_PARAGRAPH_SEPARATOR NS_SWIFT_NAME(DIRECTIONALITY_PARAGRAPH_SEPARATOR);
@property (readonly, class) jint SEGMENT_SEPARATOR NS_SWIFT_NAME(SEGMENT_SEPARATOR);
@property (readonly, class) jbyte DIRECTIONALITY_SEGMENT_SEPARATOR NS_SWIFT_NAME(DIRECTIONALITY_SEGMENT_SEPARATOR);
@property (readonly, class) jint WHITE_SPACE_NEUTRAL NS_SWIFT_NAME(WHITE_SPACE_NEUTRAL);
@property (readonly, class) jbyte DIRECTIONALITY_WHITESPACE NS_SWIFT_NAME(DIRECTIONALITY_WHITESPACE);
@property (readonly, class) jint OTHER_NEUTRAL NS_SWIFT_NAME(OTHER_NEUTRAL);
@property (readonly, class) jbyte DIRECTIONALITY_OTHER_NEUTRALS NS_SWIFT_NAME(DIRECTIONALITY_OTHER_NEUTRALS);
@property (readonly, class) jint LEFT_TO_RIGHT_EMBEDDING NS_SWIFT_NAME(LEFT_TO_RIGHT_EMBEDDING);
@property (readonly, class) jbyte DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING NS_SWIFT_NAME(DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING);
@property (readonly, class) jint LEFT_TO_RIGHT_OVERRIDE NS_SWIFT_NAME(LEFT_TO_RIGHT_OVERRIDE);
@property (readonly, class) jbyte DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE NS_SWIFT_NAME(DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE);
@property (readonly, class) jint RIGHT_TO_LEFT_ARABIC NS_SWIFT_NAME(RIGHT_TO_LEFT_ARABIC);
@property (readonly, class) jbyte DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC NS_SWIFT_NAME(DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC);
@property (readonly, class) jint RIGHT_TO_LEFT_EMBEDDING NS_SWIFT_NAME(RIGHT_TO_LEFT_EMBEDDING);
@property (readonly, class) jbyte DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING NS_SWIFT_NAME(DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING);
@property (readonly, class) jint RIGHT_TO_LEFT_OVERRIDE NS_SWIFT_NAME(RIGHT_TO_LEFT_OVERRIDE);
@property (readonly, class) jbyte DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE NS_SWIFT_NAME(DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE);
@property (readonly, class) jint POP_DIRECTIONAL_FORMAT NS_SWIFT_NAME(POP_DIRECTIONAL_FORMAT);
@property (readonly, class) jbyte DIRECTIONALITY_POP_DIRECTIONAL_FORMAT NS_SWIFT_NAME(DIRECTIONALITY_POP_DIRECTIONAL_FORMAT);
@property (readonly, class) jint DIR_NON_SPACING_MARK NS_SWIFT_NAME(DIR_NON_SPACING_MARK);
@property (readonly, class) jbyte DIRECTIONALITY_NONSPACING_MARK NS_SWIFT_NAME(DIRECTIONALITY_NONSPACING_MARK);
@property (readonly, class) jint BOUNDARY_NEUTRAL NS_SWIFT_NAME(BOUNDARY_NEUTRAL);
@property (readonly, class) jbyte DIRECTIONALITY_BOUNDARY_NEUTRAL NS_SWIFT_NAME(DIRECTIONALITY_BOUNDARY_NEUTRAL);
@property (readonly, class) jbyte FIRST_STRONG_ISOLATE NS_SWIFT_NAME(FIRST_STRONG_ISOLATE);
@property (readonly, class) jbyte LEFT_TO_RIGHT_ISOLATE NS_SWIFT_NAME(LEFT_TO_RIGHT_ISOLATE);
@property (readonly, class) jbyte RIGHT_TO_LEFT_ISOLATE NS_SWIFT_NAME(RIGHT_TO_LEFT_ISOLATE);
@property (readonly, class) jbyte POP_DIRECTIONAL_ISOLATE NS_SWIFT_NAME(POP_DIRECTIONAL_ISOLATE);
@property (readonly, class) jint CHAR_DIRECTION_COUNT NS_SWIFT_NAME(CHAR_DIRECTION_COUNT);
@property (readonly, class) jbyte DIRECTIONALITY_UNDEFINED NS_SWIFT_NAME(DIRECTIONALITY_UNDEFINED);

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuLangUCharacterEnums_ECharacterDirection)

/*!
 @brief Directional type L
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_LEFT_TO_RIGHT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_LEFT_TO_RIGHT 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, LEFT_TO_RIGHT, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_LEFT_TO_RIGHT</code>
 .
 Synonym of <code>LEFT_TO_RIGHT</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_LEFT_TO_RIGHT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_LEFT_TO_RIGHT 0
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_LEFT_TO_RIGHT, jbyte)

/*!
 @brief Directional type R
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_RIGHT_TO_LEFT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_RIGHT_TO_LEFT 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, RIGHT_TO_LEFT, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_RIGHT_TO_LEFT</code>
 .
 Synonym of <code>RIGHT_TO_LEFT</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_RIGHT_TO_LEFT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_RIGHT_TO_LEFT 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT, jbyte)

/*!
 @brief Directional type EN
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_EUROPEAN_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_EUROPEAN_NUMBER 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, EUROPEAN_NUMBER, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_EUROPEAN_NUMBER</code>
 .
 Synonym of <code>EUROPEAN_NUMBER</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_EUROPEAN_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_EUROPEAN_NUMBER 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_EUROPEAN_NUMBER, jbyte)

/*!
 @brief Directional type ES
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_EUROPEAN_NUMBER_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_EUROPEAN_NUMBER_SEPARATOR 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, EUROPEAN_NUMBER_SEPARATOR, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR</code>
 .
 Synonym of <code>EUROPEAN_NUMBER_SEPARATOR</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR, jbyte)

/*!
 @brief Directional type ET
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_EUROPEAN_NUMBER_TERMINATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_EUROPEAN_NUMBER_TERMINATOR 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, EUROPEAN_NUMBER_TERMINATOR, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR</code>
 .
 Synonym of <code>EUROPEAN_NUMBER_TERMINATOR</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR, jbyte)

/*!
 @brief Directional type AN
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_ARABIC_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_ARABIC_NUMBER 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, ARABIC_NUMBER, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_ARABIC_NUMBER</code>
 .
 Synonym of <code>ARABIC_NUMBER</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_ARABIC_NUMBER(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_ARABIC_NUMBER 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_ARABIC_NUMBER, jbyte)

/*!
 @brief Directional type CS
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_COMMON_NUMBER_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_COMMON_NUMBER_SEPARATOR 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, COMMON_NUMBER_SEPARATOR, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_COMMON_NUMBER_SEPARATOR</code>
 .
 Synonym of <code>COMMON_NUMBER_SEPARATOR</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_COMMON_NUMBER_SEPARATOR, jbyte)

/*!
 @brief Directional type B
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_BLOCK_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_BLOCK_SEPARATOR 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, BLOCK_SEPARATOR, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_PARAGRAPH_SEPARATOR</code>
 .
 Synonym of <code>BLOCK_SEPARATOR</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_PARAGRAPH_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_PARAGRAPH_SEPARATOR 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_PARAGRAPH_SEPARATOR, jbyte)

/*!
 @brief Directional type S
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_SEGMENT_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_SEGMENT_SEPARATOR 8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, SEGMENT_SEPARATOR, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_SEGMENT_SEPARATOR</code>
 .
 Synonym of <code>SEGMENT_SEPARATOR</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_SEGMENT_SEPARATOR(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_SEGMENT_SEPARATOR 8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_SEGMENT_SEPARATOR, jbyte)

/*!
 @brief Directional type WS
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_WHITE_SPACE_NEUTRAL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_WHITE_SPACE_NEUTRAL 9
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, WHITE_SPACE_NEUTRAL, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_WHITESPACE</code>.
 Synonym of <code>WHITE_SPACE_NEUTRAL</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_WHITESPACE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_WHITESPACE 9
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_WHITESPACE, jbyte)

/*!
 @brief Directional type ON
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_OTHER_NEUTRAL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_OTHER_NEUTRAL 10
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, OTHER_NEUTRAL, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_OTHER_NEUTRALS</code>.
 Synonym of <code>OTHER_NEUTRAL</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_OTHER_NEUTRALS(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_OTHER_NEUTRALS 10
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_OTHER_NEUTRALS, jbyte)

/*!
 @brief Directional type LRE
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_LEFT_TO_RIGHT_EMBEDDING(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_LEFT_TO_RIGHT_EMBEDDING 11
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, LEFT_TO_RIGHT_EMBEDDING, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING</code>
 .
 Synonym of <code>LEFT_TO_RIGHT_EMBEDDING</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING 11
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING, jbyte)

/*!
 @brief Directional type LRO
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_LEFT_TO_RIGHT_OVERRIDE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_LEFT_TO_RIGHT_OVERRIDE 12
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, LEFT_TO_RIGHT_OVERRIDE, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE</code>
 .
 Synonym of <code>LEFT_TO_RIGHT_OVERRIDE</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE 12
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE, jbyte)

/*!
 @brief Directional type AL
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_RIGHT_TO_LEFT_ARABIC(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_RIGHT_TO_LEFT_ARABIC 13
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, RIGHT_TO_LEFT_ARABIC, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC</code>
 .
 Synonym of <code>RIGHT_TO_LEFT_ARABIC</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC 13
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC, jbyte)

/*!
 @brief Directional type RLE
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_RIGHT_TO_LEFT_EMBEDDING(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_RIGHT_TO_LEFT_EMBEDDING 14
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, RIGHT_TO_LEFT_EMBEDDING, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING</code>
 .
 Synonym of <code>RIGHT_TO_LEFT_EMBEDDING</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING 14
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING, jbyte)

/*!
 @brief Directional type RLO
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_RIGHT_TO_LEFT_OVERRIDE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_RIGHT_TO_LEFT_OVERRIDE 15
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, RIGHT_TO_LEFT_OVERRIDE, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE</code>
 .
 Synonym of <code>RIGHT_TO_LEFT_OVERRIDE</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE 15
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE, jbyte)

/*!
 @brief Directional type PDF
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_POP_DIRECTIONAL_FORMAT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_POP_DIRECTIONAL_FORMAT 16
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, POP_DIRECTIONAL_FORMAT, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_POP_DIRECTIONAL_FORMAT</code>
 .
 Synonym of <code>POP_DIRECTIONAL_FORMAT</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT 16
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_POP_DIRECTIONAL_FORMAT, jbyte)

/*!
 @brief Directional type NSM
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIR_NON_SPACING_MARK(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIR_NON_SPACING_MARK 17
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIR_NON_SPACING_MARK, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_NONSPACING_MARK</code>
 .
 Synonym of <code>DIR_NON_SPACING_MARK</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_NONSPACING_MARK(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_NONSPACING_MARK 17
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_NONSPACING_MARK, jbyte)

/*!
 @brief Directional type BN
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_BOUNDARY_NEUTRAL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_BOUNDARY_NEUTRAL 18
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, BOUNDARY_NEUTRAL, jint)

/*!
 @brief Equivalent to <code>java.lang.Character.DIRECTIONALITY_BOUNDARY_NEUTRAL</code>
 .
 Synonym of <code>BOUNDARY_NEUTRAL</code>.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_BOUNDARY_NEUTRAL(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_BOUNDARY_NEUTRAL 18
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_BOUNDARY_NEUTRAL, jbyte)

/*!
 @brief Directional type FSI
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_FIRST_STRONG_ISOLATE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_FIRST_STRONG_ISOLATE 19
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, FIRST_STRONG_ISOLATE, jbyte)

/*!
 @brief Directional type LRI
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_LEFT_TO_RIGHT_ISOLATE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_LEFT_TO_RIGHT_ISOLATE 20
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, LEFT_TO_RIGHT_ISOLATE, jbyte)

/*!
 @brief Directional type RLI
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_RIGHT_TO_LEFT_ISOLATE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_RIGHT_TO_LEFT_ISOLATE 21
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, RIGHT_TO_LEFT_ISOLATE, jbyte)

/*!
 @brief Directional type PDI
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_POP_DIRECTIONAL_ISOLATE(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_POP_DIRECTIONAL_ISOLATE 22
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, POP_DIRECTIONAL_ISOLATE, jbyte)

/*!
 @brief One more than the highest normal ECharacterDirection value.
 The highest value is available via UCharacter.getIntPropertyMaxValue(UProperty.BIDI_CLASS).
 */
inline jint AndroidIcuLangUCharacterEnums_ECharacterDirection_get_CHAR_DIRECTION_COUNT(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_CHAR_DIRECTION_COUNT 23
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, CHAR_DIRECTION_COUNT, jint)

/*!
 @brief Undefined bidirectional character type.Undefined <code>char</code>
  values have undefined directionality in the Unicode specification.
 */
inline jbyte AndroidIcuLangUCharacterEnums_ECharacterDirection_get_DIRECTIONALITY_UNDEFINED(void);
#define AndroidIcuLangUCharacterEnums_ECharacterDirection_DIRECTIONALITY_UNDEFINED -1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidIcuLangUCharacterEnums_ECharacterDirection, DIRECTIONALITY_UNDEFINED, jbyte)

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuLangUCharacterEnums_ECharacterDirection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuLangUCharacterEnums")