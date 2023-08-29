//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/UserPrincipalLookupService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeUserPrincipalLookupService")
#ifdef RESTRICT_JavaNioFileAttributeUserPrincipalLookupService
#define INCLUDE_ALL_JavaNioFileAttributeUserPrincipalLookupService 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeUserPrincipalLookupService 1
#endif
#undef RESTRICT_JavaNioFileAttributeUserPrincipalLookupService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeUserPrincipalLookupService_) && (INCLUDE_ALL_JavaNioFileAttributeUserPrincipalLookupService || defined(INCLUDE_JavaNioFileAttributeUserPrincipalLookupService))
#define JavaNioFileAttributeUserPrincipalLookupService_

@protocol JavaNioFileAttributeGroupPrincipal;
@protocol JavaNioFileAttributeUserPrincipal;

/*!
 @brief An object to lookup user and group principals by name.A <code>UserPrincipal</code>
  represents an identity that may be used to determine access rights to objects
  in a file system.
 A <code>GroupPrincipal</code> represents a <em>group identity</em>.
  A <code>UserPrincipalLookupService</code> defines methods to lookup identities by
  name or group name (which are typically user or account names). Whether names
  and group names are case sensitive or not depends on the implementation.
  The exact definition of a group is implementation specific but typically a
  group represents an identity created for administrative purposes so as to
  determine the access rights for the members of the group. In particular it is
  implementation specific if the <em>namespace</em> for names and groups is the
  same or is distinct. To ensure consistent and correct behavior across
  platforms it is recommended that this API be used as if the namespaces are
  distinct. In other words, the <code>lookupPrincipalByName</code>
  should be used to lookup users, and <code>lookupPrincipalByGroupName</code>
  should be used to
  lookup groups.
 @since 1.7
 - seealso: java.nio.file.FileSystem#getUserPrincipalLookupService
 */
@interface JavaNioFileAttributeUserPrincipalLookupService : NSObject

#pragma mark Public

/*!
 @brief Lookup a group principal by group name.
 <p> Where an implementation does not support any notion of group then
  this method always throws <code>UserPrincipalNotFoundException</code>. Where
  the namespace for user accounts and groups is the same, then this method
  is identical to invoking <code>lookupPrincipalByName</code>
 .
 @param group the string representation of the group to lookup
 @return a group principal
 @throw UserPrincipalNotFoundException
 the principal does not exist or is not a group
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default provider, and a security manager is
           installed, it checks <code>RuntimePermission</code><tt>("lookupUserInformation")</tt>
 */
- (id<JavaNioFileAttributeGroupPrincipal>)lookupPrincipalByGroupNameWithNSString:(NSString *)group;

/*!
 @brief Lookup a user principal by name.
 @param name the string representation of the user principal to lookup
 @return a user principal
 @throw UserPrincipalNotFoundException
 the principal does not exist
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default provider, and a security manager is
           installed, it checks <code>RuntimePermission</code><tt>("lookupUserInformation")</tt>
 */
- (id<JavaNioFileAttributeUserPrincipal>)lookupPrincipalByNameWithNSString:(NSString *)name;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeUserPrincipalLookupService)

FOUNDATION_EXPORT void JavaNioFileAttributeUserPrincipalLookupService_init(JavaNioFileAttributeUserPrincipalLookupService *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeUserPrincipalLookupService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeUserPrincipalLookupService")