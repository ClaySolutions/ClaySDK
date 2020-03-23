# ClaySDK

<p align="left">
<a href="https://github.com/Carthage/Carthage"><img src="https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat" alt="Carthage compatible" /></a>
<a href="https://cocoapods.org/pods/ClaySDK"><img src="https://img.shields.io/cocoapods/v/ClaySDK.svg" alt="CocoaPods compatible" /></a>
<a href="https://raw.githubusercontent.com/jakov-clay/ClaySDK/master/LICENSE"><img src="http://img.shields.io/badge/license-MIT-blue.svg?style=flat" alt="License: MIT" /></a>
</p>

By [ClaySolutions](https://my-clay.com/).

## Introduction

This SDK for iOS contains the most up-to-date frameworks for integrating Mobile Key technology into your own iOS applications. It will setup the necessary security to communicate with Connect API, and unlock locks with encrypted Mobile Keys returned by the Connect API. The SDK for iOS includes iOS libraries, developer documentation and a sample Xcode project to get you up and running quickly and easily.

<!-- <img src="Example/ClaySDK.gif" width="300"/> -->

## Usage

```swift
import ClaySDK
//...
//'self' must conform to ClayDelegate, the apiKey will be provided to you
let clay = ClaySDK(installationUID: "SOME_UNIQUE_ID", apiKey: "THE_API_PUBLIC_KEY", delegate: self)
let publicKey = clay.getPublicKey()
//...
//'yourOpenDoorDelegate' must conform to OpenDoorDelegate
clay.openDoor(with: "your-encrypted-key", delegate: yourOpenDoorDelegate)
```

## Requirements

* iOS 11+
* Xcode 11.3
* Swift 5.1.3

Apart from that, these frameworks must be included into the target project:

- SaltoJustINMobile.framework
- CoreBluetooth.framework
- Foundation.framework
- VirgilSDK
- VirgilCrypto
- VirgilCryptoFoundation
- VSCCommon
- VSCFoundation

## Installation

First, you need to obtain a copy of the JustInMobile iOS SDK from Salto Systems. Once you have this copy, you can start using the SDK.

The Virgil libraries can be found at [Virgil Security Objective-C/Swift SDK](https://github.com/VirgilSecurity/virgil-sdk-x/tree/5.7.0)

### CocoaPods

[CocoaPods](https://cocoapods.org/) is a dependency manager for Cocoa projects.

To install ClaySDK, simply add the following line to your Podfile:

```ruby
pod 'ClaySDK', '~> 1.7'
```

### Carthage

[Carthage](https://github.com/Carthage/Carthage) is a simple, decentralized dependency manager for Cocoa.

To install ClaySDK, simply add the following line to your Cartfile:

```ogdl
github "ClaySolutions/ClaySDK" ~> 1.7.0
```
Include framework from *Carthage/Build/iOS* folder. 
Follow instructions for including [VirgilSDK](https://github.com/VirgilSecurity/virgil-sdk-x/tree/7.1.0#carthage)

## Author

* [ClaySolutions](https://github.com/ClaySolutions) ([Jakov](https://github.com/jakov-clay))

# Changelog

See [CHANGELOG](CHANGELOG.md).
