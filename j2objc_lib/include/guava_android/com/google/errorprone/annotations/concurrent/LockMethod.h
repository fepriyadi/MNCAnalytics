//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/android/build_result/java/com/google/errorprone/annotations/concurrent/LockMethod.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentLockMethod")
#ifdef RESTRICT_ComGoogleErrorproneAnnotationsConcurrentLockMethod
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentLockMethod 0
#else
#define INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentLockMethod 1
#endif
#undef RESTRICT_ComGoogleErrorproneAnnotationsConcurrentLockMethod

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleErrorproneAnnotationsConcurrentLockMethod_) && (INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentLockMethod || defined(INCLUDE_ComGoogleErrorproneAnnotationsConcurrentLockMethod))
#define ComGoogleErrorproneAnnotationsConcurrentLockMethod_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief The method to which this annotation is applied acquires one or more locks.The caller will hold
  the locks when the function finishes execution.
 <p>This annotation does not apply to built-in (synchronization) locks, which cannot be acquired
  without being released in the same method. 
 <p>The arguments determine which locks the annotated method acquires: 
 <ul>
    <li><code>field-name</code>: The lock is referenced by the final instance field specified by
        <em>field-name</em>.
    <li><code>class-name.this.field-name</code>: For inner classes, it may be necessary to
        disambiguate 'this'; the <em>class-name.this</em> designation allows you to specify which
        'this' reference is intended.   
 <li><code>class-name.field-name</code>: The lock is referenced by the static final field
        specified by <em>class-name.field-name</em>.
    <li><code>method-name()</code>: The lock object is returned by calling the named nullary
        method. 
 </ul>
 */
@protocol ComGoogleErrorproneAnnotationsConcurrentLockMethod < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComGoogleErrorproneAnnotationsConcurrentLockMethod : NSObject < ComGoogleErrorproneAnnotationsConcurrentLockMethod > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleErrorproneAnnotationsConcurrentLockMethod)

FOUNDATION_EXPORT id<ComGoogleErrorproneAnnotationsConcurrentLockMethod> create_ComGoogleErrorproneAnnotationsConcurrentLockMethod(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleErrorproneAnnotationsConcurrentLockMethod)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleErrorproneAnnotationsConcurrentLockMethod")
