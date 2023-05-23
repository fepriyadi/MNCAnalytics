//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/common/collect/ArrayTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectArrayTable")
#ifdef RESTRICT_ComGoogleCommonCollectArrayTable
#define INCLUDE_ALL_ComGoogleCommonCollectArrayTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectArrayTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectArrayTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectArrayTable_) && (INCLUDE_ALL_ComGoogleCommonCollectArrayTable || defined(INCLUDE_ComGoogleCommonCollectArrayTable))
#define ComGoogleCommonCollectArrayTable_

#define RESTRICT_ComGoogleCommonCollectAbstractTable 1
#define INCLUDE_ComGoogleCommonCollectAbstractTable 1
#include "com/google/common/collect/AbstractTable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableSet;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonCollectTable;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief Fixed-size <code>Table</code> implementation backed by a two-dimensional array.
 <p>The allowed row and column keys must be supplied when the table is created. The table always
  contains a mapping for every row key / column pair. The value corresponding to a given row and
  column is null unless another value is provided. 
 <p>The table's size is constant: the product of the number of supplied row keys and the number of
  supplied column keys. The <code>remove</code> and <code>clear</code> methods are not supported by the table
  or its views. The <code>erase</code> and <code>eraseAll</code> methods may be used instead. 
 <p>The ordering of the row and column keys provided when the table is constructed determines the
  iteration ordering across rows and columns in the table's views. None of the view iterators
  support <code>Iterator.remove</code>. If the table is modified after an iterator is created, the
  iterator remains valid. 
 <p>This class requires less memory than the <code>HashBasedTable</code> and <code>TreeBasedTable</code>
  implementations, except when the table is sparse. 
 <p>Null row keys or column keys are not permitted. 
 <p>This class provides methods involving the underlying array structure, where the array indices
  correspond to the position of a row or column in the lists of allowed keys and values. See the 
 <code>at</code>, <code>set</code>, <code>toArray</code>, <code>rowKeyList</code>, and <code>columnKeyList</code>
  methods for more details. 
 <p>Note that this implementation is not synchronized. If multiple threads access the same cell of
  an <code>ArrayTable</code> concurrently and one of the threads modifies its value, there is no
  guarantee that the new value will be fully visible to the other threads. To guarantee that
  modifications are visible, synchronize access to the table. Unlike other <code>Table</code>
  implementations, synchronization is unnecessary between a thread that writes to one cell and a
  thread that reads from another. 
 <p>See the Guava User Guide article on <a href="https://github.com/google/guava/wiki/NewCollectionTypesExplained#table">
  <code>Table</code></a>.
 @author Jared Levy
 @since 10.0
 */
@interface ComGoogleCommonCollectArrayTable : ComGoogleCommonCollectAbstractTable < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Returns the value corresponding to the specified row and column indices.The same value is
  returned by <code>get(rowKeyList().get(rowIndex), columnKeyList().get(columnIndex))</code>, but this
  method runs more quickly.
 @param rowIndex position of the row key in <code>rowKeyList()</code>
 @param columnIndex position of the row key in <code>columnKeyList()</code>
 @return the value with the specified row and column
 @throw IndexOutOfBoundsExceptionif either index is negative, <code>rowIndex</code> is greater than
      or equal to the number of allowed row keys, or <code>columnIndex</code> is greater than or equal
      to the number of allowed column keys
 */
- (id)atWithInt:(jint)rowIndex
        withInt:(jint)columnIndex;

/*!
 @brief Returns an unmodifiable set of all row key / column key / value triplets.Changes to the table
  will update the returned set.
 <p>The returned set's iterator traverses the mappings with the first row key, the mappings with
  the second row key, and so on. 
 <p>The value in the returned cells may change if the table subsequently changes.
 @return set of table cells consisting of row key / column key / value triplets
 */
- (id<JavaUtilSet>)cellSet;

/*!
 @brief Not supported.Use <code>eraseAll</code> instead.
 @throw UnsupportedOperationExceptionalways
 */
- (void)clear __attribute__((deprecated));

/*!
 @brief Returns a view of all mappings that have the given column key.If the column key isn't in 
 <code>columnKeySet()</code>, an empty immutable map is returned.
 <p>Otherwise, for each row key in <code>rowKeySet()</code>, the returned map associates the row key
  with the corresponding value in the table. Changes to the returned map will update the
  underlying table, and vice versa.
 @param columnKey key of column to search for in the table
 @return the corresponding map from row keys to values
 */
- (id<JavaUtilMap>)columnWithId:(id __nonnull)columnKey;

/*!
 @brief Returns, as an immutable list, the column keys provided when the table was constructed,
  including those that are mapped to null values only.
 */
- (ComGoogleCommonCollectImmutableList *)columnKeyList;

/*!
 @brief Returns an immutable set of the valid column keys, including those that are associated with
  null values only.
 @return immutable set of column keys
 */
- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (id<JavaUtilMap>)columnMap;

/*!
 @brief Returns <code>true</code> if the provided keys are among the keys provided when the table was
  constructed.
 */
- (jboolean)containsWithId:(id __nullable)rowKey
                    withId:(id __nullable)columnKey;

/*!
 @brief Returns <code>true</code> if the provided column key is among the column keys provided when the
  table was constructed.
 */
- (jboolean)containsColumnWithId:(id __nullable)columnKey;

/*!
 @brief Returns <code>true</code> if the provided row key is among the row keys provided when the table was
  constructed.
 */
- (jboolean)containsRowWithId:(id __nullable)rowKey;

- (jboolean)containsValueWithId:(id __nullable)value;

/*!
 @brief Creates an <code>ArrayTable</code> filled with <code>null</code>.
 @param rowKeys row keys that may be stored in the generated table
 @param columnKeys column keys that may be stored in the generated table
 @throw NullPointerExceptionif any of the provided keys is null
 @throw IllegalArgumentExceptionif <code>rowKeys</code> or <code>columnKeys</code> contains duplicates
      or if exactly one of <code>rowKeys</code> or <code>columnKeys</code> is empty.
 */
+ (ComGoogleCommonCollectArrayTable *)createWithJavaLangIterable:(id<JavaLangIterable> __nonnull)rowKeys
                                            withJavaLangIterable:(id<JavaLangIterable> __nonnull)columnKeys;

/*!
 @brief Creates an <code>ArrayTable</code> with the mappings in the provided table.
 <p>If <code>table</code> includes a mapping with row key <code>r</code> and a separate mapping with
  column key <code>c</code>, the returned table contains a mapping with row key <code>r</code> and column
  key <code>c</code>. If that row key / column key pair in not in <code>table</code>, the pair maps to 
 <code>null</code> in the generated table. 
 <p>The returned table allows subsequent <code>put</code> calls with the row keys in <code>table.rowKeySet()</code>
  and the column keys in <code>table.columnKeySet()</code>. Calling <code>put</code>
  with other keys leads to an <code>IllegalArgumentException</code>.
  
 <p>The ordering of <code>table.rowKeySet()</code> and <code>table.columnKeySet()</code> determines the
  row and column iteration ordering of the returned table.
 @throw NullPointerExceptionif <code>table</code> has a null key
 */
+ (ComGoogleCommonCollectArrayTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

/*!
 @brief Associates the value <code>null</code> with the specified keys, assuming both keys are valid.If
  either key is null or isn't among the keys provided during construction, this method has no
  effect.
 <p>This method is equivalent to <code>put(rowKey, columnKey, null)</code> when both provided keys
  are valid.
 @param rowKey row key of mapping to be erased
 @param columnKey column key of mapping to be erased
 @return the value previously associated with the keys, or <code>null</code> if no mapping existed
      for the keys
 */
- (id)eraseWithId:(id __nullable)rowKey
           withId:(id __nullable)columnKey;

/*!
 @brief Associates the value <code>null</code> with every pair of allowed row and column keys.
 */
- (void)eraseAll;

- (id)getWithId:(id __nullable)rowKey
         withId:(id __nullable)columnKey;

/*!
 @brief Returns <code>true</code> if <code>rowKeyList().size == 0</code> or <code>columnKeyList().size() == 0</code>.
 */
- (jboolean)isEmpty;

/*!
 @throw IllegalArgumentExceptionif <code>rowKey</code> is not in <code>rowKeySet()</code> or <code>columnKey</code>
  is not in <code>columnKeySet()</code>.
 */
- (id)putWithId:(id __nonnull)rowKey
         withId:(id __nonnull)columnKey
         withId:(id __nullable)value;

/*!
 @brief <p>If <code>table</code> is an <code>ArrayTable</code>, its null values will be stored in this table,
  possibly replacing values that were previously non-null.
 @throw NullPointerExceptionif <code>table</code> has a null key
 @throw IllegalArgumentExceptionif any of the provided table's row keys or column keys is not
      in <code>rowKeySet()</code> or <code>columnKeySet()</code>
 */
- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable> __nonnull)table;

/*!
 @brief Not supported.Use <code>erase</code> instead.
 @throw UnsupportedOperationExceptionalways
 */
- (id)removeWithId:(id __nonnull)rowKey
            withId:(id __nonnull)columnKey __attribute__((deprecated));

/*!
 @brief Returns a view of all mappings that have the given row key.If the row key isn't in <code>rowKeySet()</code>
 , an empty immutable map is returned.
 <p>Otherwise, for each column key in <code>columnKeySet()</code>, the returned map associates the
  column key with the corresponding value in the table. Changes to the returned map will update
  the underlying table, and vice versa.
 @param rowKey key of row to search for in the table
 @return the corresponding map from column keys to values
 */
- (id<JavaUtilMap>)rowWithId:(id __nonnull)rowKey;

/*!
 @brief Returns, as an immutable list, the row keys provided when the table was constructed, including
  those that are mapped to null values only.
 */
- (ComGoogleCommonCollectImmutableList *)rowKeyList;

/*!
 @brief Returns an immutable set of the valid row keys, including those that are associated with null
  values only.
 @return immutable set of row keys
 */
- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (id<JavaUtilMap>)rowMap;

/*!
 @brief Associates <code>value</code> with the specified row and column indices.The logic <code>put(rowKeyList().get(rowIndex), columnKeyList().get(columnIndex), value)</code>
  has the same
  behavior, but this method runs more quickly.
 @param rowIndex position of the row key in <code>rowKeyList()</code>
 @param columnIndex position of the row key in <code>columnKeyList()</code>
 @param value value to store in the table
 @return the previous value with the specified row and column
 @throw IndexOutOfBoundsExceptionif either index is negative, <code>rowIndex</code> is greater than
      or equal to the number of allowed row keys, or <code>columnIndex</code> is greater than or equal
      to the number of allowed column keys
 */
- (id)setWithInt:(jint)rowIndex
         withInt:(jint)columnIndex
          withId:(id __nullable)value;

- (jint)size;

/*!
 @brief Returns a two-dimensional array with the table contents.The row and column indices correspond
  to the positions of the row and column in the iterables provided during table construction.
 If
  the table lacks a mapping for a given row and column, the corresponding array element is null. 
 <p>Subsequent table changes will not modify the array, and vice versa.
 @param valueClass class of values stored in the returned array
 */
- (IOSObjectArray *)toArrayWithIOSClass:(IOSClass * __nonnull)valueClass;

/*!
 @brief Returns an unmodifiable collection of all values, which may contain duplicates.Changes to the
  table will update the returned collection.
 <p>The returned collection's iterator traverses the values of the first row key, the values of
  the second row key, and so on.
 @return collection of values
 */
- (id<JavaUtilCollection>)values;

#pragma mark Package-Private

- (id<JavaUtilIterator>)cellIterator;

- (id<JavaUtilIterator>)valuesIterator;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayTable)

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> rowKeys, id<JavaLangIterable> columnKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayTable *ComGoogleCommonCollectArrayTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayTable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectArrayTable")
