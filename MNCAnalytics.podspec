#
# Be sure to run `pod lib lint MNCAnalytics.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MNCAnalytics'
  s.version          = '1.0.1'
  s.summary          = 'A short description of MNCAnalytics.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/fepriyadi/ios-mnca'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fepriyadi' => 'fepriyadihrp@gmail.com' }
  s.source           = { :git => 'https://github.com/fepriyadi/ios-mnca.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  # s.preserve_paths = 'j2objc/**/*'
  s.public_header_files = 'MNCAnalytics/Classes/Headers/*.h', 'j2objc_lib/include/**/*.h'
  s.source_files ='MNCAnalytics/Classes/**/*.{h,m}'
  # 'MNCAnalytics/Classes/**/*.{h,m}', 
  # s.header_mappings_dir = 'MNCAnalytics/Classes'
  
  # s.libraries = 'jre_emul', 'icucore', 'z', 'iconv'
  # s.vendored_libraries = 'lib/libjre_emul.a', 'lib/libjavax_inject.a'
  
  s.xcconfig = {
      'HEADER_SEARCH_PATHS' => '"MNCAnalytics/Classes/Headers"'
      # ,'FRAMEWORK_SEARCH_PATHS' => '~/dev/android/office/mnc/digital/analytics/mobile-sdk/ios'
  }
  
  s.pod_target_xcconfig = { 'INCLUDED_ARCHS[sdk=iphoneos*]' => ''}
  s.pod_target_xcconfig = { 'INCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386'}
  s.pod_target_xcconfig = { 'INCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
  s.pod_target_xcconfig = { 'INCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64'}
  
  s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'YES' }
  # s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'YES' }
  # s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'YES' }

  # s.resource_bundles = {
  #   'MNCAnalytics' => ['MNCAnalytics/Assets/*.png']
  # }

  # s.public_header_files = 'MNCAnalytics/Classes/MncDigitalAnalytics.h'
  s.dependency 'j2objc-mnca', '~> 2.8'
end
