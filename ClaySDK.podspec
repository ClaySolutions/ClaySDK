#
# Be sure to run `pod lib lint ClaySDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ClaySDK'
  s.version          = '1.5.1'
  s.summary          = 'Open doors with your mobile app, via Mobile Key functionality! The Clay mobile SDKs make it easy to build a seamless door opening experience in your application.'

  s.description      = <<-DESC
  This SDK for iOS contains the most up-to-date frameworks for integrating Mobile Key technology into your own iOS applications. It will setup the necessary security to communicate with Connect API, and unlock locks with encrypted Mobile Keys returned by the Connect API. The SDK for iOS includes iOS libraries, developer documentation and a sample Xcode project to get you up and running quickly and easily.
                       DESC

  s.homepage         = 'https://bitbucket.org/claysolutions/claysdk.ios.distribution'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Jakov' => 'jakov@my-clay.com' , 'Roberto' => 'roberto@my-clay.com'}
  s.source           = { :git => 'https://jakovvidekovic@bitbucket.org/claysolutions/claysdk.ios.distribution.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9'

  s.vendored_frameworks = 'ClaySDK.framework'
  s.dependency 'VirgilCryptoApiImpl', '3.2.3'
  s.dependency 'VirgilSDK', '5.7.0'
end
