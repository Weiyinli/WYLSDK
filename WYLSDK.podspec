#
# Be sure to run `pod lib lint WYLSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WYLSDK'
  s.version          = '0.1.0'
  s.summary          = ' 微引力广告SDK .'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/Weiyinli/WYLSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'WYL' => 'weiyinli2020@163.com' }
  s.source           = { :git => 'https://github.com/Weiyinli/WYLSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'http://wyl.cn'

  s.ios.deployment_target = '9.0'
  s.platform     = :ios, "9.0"
  
  #依赖的系统frameworks
  s.frameworks = 'AVFoundation','AdSupport','Accelerate','AudioToolbox','CoreMotion','CoreGraphics','CoreImage','CoreTelephony','CoreText','CoreLocation','CoreTelephony','ImageIO','JavaScriptCore','QuartzCore','StoreKit','SystemConfiguration','Security','MapKit','MediaPlayer','MobileCoreServices','MessageUI','UIKit','WebKit'
  
  #依赖的系统静态库
  #z表示libz.tdb,后缀不需要,lib开头的省略lib
  s.libraries = 'bz2','c++','iconv','resolv.9','sqlite3','xml2','z','c++abi'
  valid_archs = ['armv7', 'i386', 'x86_64', 'arm64']
  
  #framework在工程中的路径
  s.vendored_frameworks = ['WYLSDK/Classes/WYLSDK.framework']
  #资源文件的路径，会在pod中创建“Resources”的文件夹
  s.resource_bundles = {
      'Resources' => ['WYLSDK/Assets/*.bundle']
  }
  
  #s.source_files = 'WYLSDK/Classes/**/*'
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.dependency 'AFNetworking', '~> 2.3'
end
