#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef CLAYSDK_SWIFT_H
#define CLAYSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import SaltoJustINMobileSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ClaySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@protocol ClayDelegate;
@protocol OpenDoorDelegate;

/// The main class that handles security and Mobile Key openings
SWIFT_CLASS("_TtC7ClaySDK4Clay")
@interface Clay : NSObject
/// Initialisation
/// \param installationUID Unique installation Identifier. Used to store a unique <code>ClayKeypair</code> in the iOS Keychain.
///
/// \param apiKey The Public Key of the API
///
/// \param delegate The delegate should comply to <code>ClayDelegate</code>. This handles the feedback for the <code>ClaySDK</code> initialisation
///
- (nonnull instancetype)initWithInstallationUID:(NSString * _Nonnull)installationUID apiKey:(NSString * _Nonnull)apiKey delegate:(id <ClayDelegate> _Nonnull)delegate;
/// Fetch the App Public Key
///
/// returns:
/// The Base64 encoded Public Key
- (NSString * _Nonnull)getPublicKey SWIFT_WARN_UNUSED_RESULT;
/// In case delegate returned ClayError.storeLoadError or ClayError.storeError this method will try to reload keys from keychain. Example for this would be when phone is locked and keychain can not be accessed. Calling this method will reload keys if phone was unlocked in meantime.
///
/// returns:
/// true if keys were reloaded successfully
- (BOOL)reloadKeys SWIFT_WARN_UNUSED_RESULT;
/// Open a lock with a Mobile Key
/// \param key the encrypted Mobile Key returned by the Clay Locking Platform
///
/// \param delegate The delegate should comply to OpenDoorDelegate. This handles the feedback for the Mobile Key opening
///
- (void)openDoorWith:(NSString * _Nonnull)key delegate:(id <OpenDoorDelegate> _Nonnull)delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// <code>ClayDelegate</code> is the delegate to handle feedback from the <code>ClaySDK</code> initialisation. Implement this delegate to handle error handling.
SWIFT_PROTOCOL("_TtP7ClaySDK12ClayDelegate_")
@protocol ClayDelegate
/// Error handler
/// \param error Error
///
- (void)didReceiveWithError:(NSError * _Nonnull)error;
@end


/// <code>ClayResult</code> is the result returned by the <code>openDoor(with:delegate:)</code> method
/// <ul>
///   <li>
///     Example on how to use:
///   </li>
/// </ul>
/// \code
/// import SaltoJustINMobileSDK
/// //...
/// func didOpen(with result: ClayResult?) {
///    guard let result = result else { return }
///    if (result.getOpResult() == AUTH_SUCCESS_CANCELLED_KEY) {
///        // reactivate key
///    }
///    // or by using SSOperationGrup
///    let group = SSOpResult.getGroup(result.getOpResult())
///    switch group {
///    case .groupAccepted: // success
///        break
///    case .groupFailure, .groupRejected, .groupUnknownResult:
///        break
///    default:
///        break
///    }
/// }
///
/// \endcodeList of authentication operation results.
/// <code>SSOpResult</code> can be one of:
/// \code
///   // Successful authentication but no information about the operation result.
///   extern unsigned char const AUTH_SUCCESS_UNKNOWN_RESULT
///   // Successful authentication and access granted (lock opened).
///   extern unsigned char const AUTH_SUCCESS_ACCESS_GRANTED
///   // Successful authentication and access rejected.
///   extern unsigned char const AUTH_SUCCESS_ACCESS_REJECTED
///   // Successful authentication and door opened with office mode set.
///   extern unsigned char const AUTH_SUCCESS_DOOR_IN_OFFICE
///   // Successful authentication and door closed with office mode removed.
///   extern unsigned char const AUTH_SUCCESS_END_OFFICE
///   // Successful authentication and opening roller.
///   extern unsigned char const AUTH_SUCCESS_OPENING_ROLLER
///   // Successful authentication and closing roller.
///   extern unsigned char const AUTH_SUCCESS_CLOSING_ROLLER
///   // Successful authentication and stop roller.
///   extern unsigned char const AUTH_SUCCESS_STOP_ROLLER
///   // Successful authentication and waiting for a second valid key for opening.
///   extern unsigned char const AUTH_SUCCESS_WAIT_SECOND_CARD
///   // Successful authentication, access rejected, PIN required. Introduce PIN before key.
///   extern unsigned char const AUTH_SUCCESS_PIN_REQUIRED
///   // Successful authentication, access rejected and key should be deleted.
///   extern unsigned char const AUTH_SUCCESS_CANCELLED_KEY
///   // Successful authentication, access rejected, fingerprint required. Input fingerprint before key.
///   extern unsigned char const AUTH_SUCCESS_FINGER_REQUIRED
///   // Successful authentication, key data was processed successfully. Doesn't imply any further outcome.
///   extern unsigned char const AUTH_SUCCESS_KEY_PROCESSED
///
/// \endcode<code>SSOpResultGroup</code> can be one of:
/// typedef NS_ENUM(NSInteger, SSOpResultGroup) {
/// kGroupUnknownResult,
/// kGroupFailure,
/// kGroupAccepted,
/// kGroupRejected
/// };
SWIFT_CLASS("_TtC7ClaySDK10ClayResult")
@interface ClayResult : SSResult
/// Authentication operation result
///
/// returns:
/// Result code. One of <code>SSOpResult</code> codes.
- (NSInteger)getOpResult SWIFT_WARN_UNUSED_RESULT;
- (nullable instancetype)initWithOpResult:(NSInteger)opResult auditTrailEvents:(NSString * _Nullable)events OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>OpenDoorDelegate</code> is the delegate to handle feedback from the <code>openDoor(with:delegate:)</code> method. Implement this delegate to handle error handling and feedback.
SWIFT_PROTOCOL("_TtP7ClaySDK16OpenDoorDelegate_")
@protocol OpenDoorDelegate <ClayDelegate>
/// Lock found handler
- (void)didFindLock;
/// Open handler
/// \param result <code>ClayResult</code>
///
- (void)didOpenWith:(ClayResult * _Nullable)result;
/// Timeout handler
- (void)didReceiveTimeout;
/// MKey process already running
- (void)alreadyRunning;
/// BLE Error handler
- (void)didReceiveBLEWithError:(NSError * _Nonnull)error;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef CLAYSDK_SWIFT_H
#define CLAYSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import SaltoJustINMobileSDK;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ClaySDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@protocol ClayDelegate;
@protocol OpenDoorDelegate;

/// The main class that handles security and Mobile Key openings
SWIFT_CLASS("_TtC7ClaySDK4Clay")
@interface Clay : NSObject
/// Initialisation
/// \param installationUID Unique installation Identifier. Used to store a unique <code>ClayKeypair</code> in the iOS Keychain.
///
/// \param apiKey The Public Key of the API
///
/// \param delegate The delegate should comply to <code>ClayDelegate</code>. This handles the feedback for the <code>ClaySDK</code> initialisation
///
- (nonnull instancetype)initWithInstallationUID:(NSString * _Nonnull)installationUID apiKey:(NSString * _Nonnull)apiKey delegate:(id <ClayDelegate> _Nonnull)delegate;
/// Fetch the App Public Key
///
/// returns:
/// The Base64 encoded Public Key
- (NSString * _Nonnull)getPublicKey SWIFT_WARN_UNUSED_RESULT;
/// In case delegate returned ClayError.storeLoadError or ClayError.storeError this method will try to reload keys from keychain. Example for this would be when phone is locked and keychain can not be accessed. Calling this method will reload keys if phone was unlocked in meantime.
///
/// returns:
/// true if keys were reloaded successfully
- (BOOL)reloadKeys SWIFT_WARN_UNUSED_RESULT;
/// Open a lock with a Mobile Key
/// \param key the encrypted Mobile Key returned by the Clay Locking Platform
///
/// \param delegate The delegate should comply to OpenDoorDelegate. This handles the feedback for the Mobile Key opening
///
- (void)openDoorWith:(NSString * _Nonnull)key delegate:(id <OpenDoorDelegate> _Nonnull)delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// <code>ClayDelegate</code> is the delegate to handle feedback from the <code>ClaySDK</code> initialisation. Implement this delegate to handle error handling.
SWIFT_PROTOCOL("_TtP7ClaySDK12ClayDelegate_")
@protocol ClayDelegate
/// Error handler
/// \param error Error
///
- (void)didReceiveWithError:(NSError * _Nonnull)error;
@end


/// <code>ClayResult</code> is the result returned by the <code>openDoor(with:delegate:)</code> method
/// <ul>
///   <li>
///     Example on how to use:
///   </li>
/// </ul>
/// \code
/// import SaltoJustINMobileSDK
/// //...
/// func didOpen(with result: ClayResult?) {
///    guard let result = result else { return }
///    if (result.getOpResult() == AUTH_SUCCESS_CANCELLED_KEY) {
///        // reactivate key
///    }
///    // or by using SSOperationGrup
///    let group = SSOpResult.getGroup(result.getOpResult())
///    switch group {
///    case .groupAccepted: // success
///        break
///    case .groupFailure, .groupRejected, .groupUnknownResult:
///        break
///    default:
///        break
///    }
/// }
///
/// \endcodeList of authentication operation results.
/// <code>SSOpResult</code> can be one of:
/// \code
///   // Successful authentication but no information about the operation result.
///   extern unsigned char const AUTH_SUCCESS_UNKNOWN_RESULT
///   // Successful authentication and access granted (lock opened).
///   extern unsigned char const AUTH_SUCCESS_ACCESS_GRANTED
///   // Successful authentication and access rejected.
///   extern unsigned char const AUTH_SUCCESS_ACCESS_REJECTED
///   // Successful authentication and door opened with office mode set.
///   extern unsigned char const AUTH_SUCCESS_DOOR_IN_OFFICE
///   // Successful authentication and door closed with office mode removed.
///   extern unsigned char const AUTH_SUCCESS_END_OFFICE
///   // Successful authentication and opening roller.
///   extern unsigned char const AUTH_SUCCESS_OPENING_ROLLER
///   // Successful authentication and closing roller.
///   extern unsigned char const AUTH_SUCCESS_CLOSING_ROLLER
///   // Successful authentication and stop roller.
///   extern unsigned char const AUTH_SUCCESS_STOP_ROLLER
///   // Successful authentication and waiting for a second valid key for opening.
///   extern unsigned char const AUTH_SUCCESS_WAIT_SECOND_CARD
///   // Successful authentication, access rejected, PIN required. Introduce PIN before key.
///   extern unsigned char const AUTH_SUCCESS_PIN_REQUIRED
///   // Successful authentication, access rejected and key should be deleted.
///   extern unsigned char const AUTH_SUCCESS_CANCELLED_KEY
///   // Successful authentication, access rejected, fingerprint required. Input fingerprint before key.
///   extern unsigned char const AUTH_SUCCESS_FINGER_REQUIRED
///   // Successful authentication, key data was processed successfully. Doesn't imply any further outcome.
///   extern unsigned char const AUTH_SUCCESS_KEY_PROCESSED
///
/// \endcode<code>SSOpResultGroup</code> can be one of:
/// typedef NS_ENUM(NSInteger, SSOpResultGroup) {
/// kGroupUnknownResult,
/// kGroupFailure,
/// kGroupAccepted,
/// kGroupRejected
/// };
SWIFT_CLASS("_TtC7ClaySDK10ClayResult")
@interface ClayResult : SSResult
/// Authentication operation result
///
/// returns:
/// Result code. One of <code>SSOpResult</code> codes.
- (NSInteger)getOpResult SWIFT_WARN_UNUSED_RESULT;
- (nullable instancetype)initWithOpResult:(NSInteger)opResult auditTrailEvents:(NSString * _Nullable)events OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// <code>OpenDoorDelegate</code> is the delegate to handle feedback from the <code>openDoor(with:delegate:)</code> method. Implement this delegate to handle error handling and feedback.
SWIFT_PROTOCOL("_TtP7ClaySDK16OpenDoorDelegate_")
@protocol OpenDoorDelegate <ClayDelegate>
/// Lock found handler
- (void)didFindLock;
/// Open handler
/// \param result <code>ClayResult</code>
///
- (void)didOpenWith:(ClayResult * _Nullable)result;
/// Timeout handler
- (void)didReceiveTimeout;
/// MKey process already running
- (void)alreadyRunning;
/// BLE Error handler
- (void)didReceiveBLEWithError:(NSError * _Nonnull)error;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
