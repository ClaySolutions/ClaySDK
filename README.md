# ClaySDK

<p align="left">
<a href="https://github.com/Carthage/Carthage"><img src="https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat" alt="Carthage compatible" /></a>
<a href="https://cocoapods.org/pods/ClaySDK"><img src="https://img.shields.io/cocoapods/v/ClaySDK.svg" alt="CocoaPods compatible" /></a>
<a href="https://raw.githubusercontent.com/jakov-clay/ClaySDK/master/LICENSE"><img src="http://img.shields.io/badge/license-MIT-blue.svg?style=flat" alt="License: MIT" /></a>
</p>

By [Salto KS](https://saltoks.com/).

## Breaking changes with version 1.9.0
Because of the bug with Swift module interfaces (https://bugs.swift.org/browse/SR-14195) we had to change name of our main public class. Class was renamed from ClaySDK to Clay.
Before you had:
```swift
import ClaySDK
//...
let clay = ClaySDK(installationUID: "SOME_UNIQUE_ID", apiKey: "THE_API_PUBLIC_KEY", delegate: self)
```
this will change to:
```swift
import ClaySDK
//...
let clay = Clay(installationUID: "SOME_UNIQUE_ID", apiKey: "THE_API_PUBLIC_KEY", delegate: self)
```
If you have troubles with this change in sense that new class name is not detected by Xcode clean project, reinstall pods and restart Xcode.

We also changed framework to different format type. Before it was .framework and now we adopted new format .xcframework.
Bitcode enabled projects should be supported now.

## Introduction

This SDK for iOS contains the most up-to-date frameworks for integrating Mobile Key technology into your own iOS applications. It will setup the necessary security to communicate with Connect API, and unlock locks with encrypted Mobile Keys returned by the Connect API. The SDK for iOS includes iOS libraries, developer documentation and a sample Xcode project to get you up and running quickly and easily.

## Requirements

* iOS 11+

Apart from that, these frameworks must be included into the target project:

- SaltoJustINMobileSDK.xcframework
- CoreBluetooth.framework
- Foundation.framework
- VirgilSDK
- VirgilCrypto
- VirgilCryptoFoundation
- VSCCommon
- VSCFoundation

## Installation

First, you need to obtain a copy of the JustInMobile iOS SDK from Salto Systems. Once you have this copy, you can start using the SDK.

The Virgil libraries can be found at [Virgil Security Objective-C/Swift SDK](https://github.com/VirgilSecurity/virgil-sdk-x)

### CocoaPods

[CocoaPods](https://cocoapods.org/) is a dependency manager for Cocoa projects.

To install ClaySDK, simply add the following line to your Podfile:

```ruby
pod 'ClaySDK', '~> 1.10'
```

## Usage

```swift
import ClaySDK
//...
//'self' must conform to ClayDelegate, the apiKey will be provided to you
let clay = ClaySDK(installationUID: "SOME_UNIQUE_ID", apiKey: "THE_API_PUBLIC_KEY", delegate: self)
//...
// Public key that you need to send via API to activate mobile key
let publicKey = clay.getPublicKey()
//...
//'yourOpenDoorDelegate' must conform to OpenDoorDelegate
clay.openDoor(with: "your-encrypted-key", delegate: yourOpenDoorDelegate)
```
Inside OpenDoorDelegate implementation ClayResult can be handled
```swift
import SaltoJustINMobileSDK
//...
func didOpen(with result: ClayResult?) {
    guard let result = result else { return }
    // by using SSOperationGrup
    let group = SSOpResult.getGroup(result.getOpResult())
    switch group {
    case .groupAccepted: 
        // key sucessfully sent to lock (we don't know if user have access, access is indicated by light of the lock)
        break
    case .groupFailure, .groupRejected, .groupUnknownResult:
        // there was a problem with sending key to the lock
        break
    default:
        break
    }
}
```

## Author

* [ClaySolutions](https://github.com/ClaySolutions) ([Jakov](https://github.com/jakov-clay))

# Changelog

See [CHANGELOG](https://github.com/ClaySolutions/ClaySDK/blob/master/CHANGELOG.md).
