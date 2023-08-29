#
# Be sure to run `pod lib lint MNCAnalytics.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MNCAnalytics'
  s.version          = '1.2.3'
  s.summary          = 'This is POD version of MNC Analytics'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
  TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/fepriyadi/MNCAnalytics'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fepriyadi' => 'fepriyadihrp@gmail.com' }
  s.source           = { :git => 'https://github.com/fepriyadi/MNCAnalytics.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  s.requires_arc = false
  s.static_framework = true
  s.libraries = 'icucore','z', 'iconv','jre_emul','json'

  s.source_files = 'MNCAnalytics/include/**/*.h', 'MNCAnalytics/public/*.h'
  s.public_header_files = 'MNCAnalytics/public/*.h'
  s.private_header_files = 'MNCAnalytics/include/*.h'
  s.frameworks = 'UIKit', 'Foundation','CoreFoundation'

  s.prepare_command = <<-CMD
      XCODEPROJECT=MNCAnalytics
      XCODETARGET=MNCAnalytics
      BUILDDIR=build
      BUILDROOT=${BUILDDIR}
      CONFIG=Release
      OUTDIR=${BUILDDIR}/${CONFIG}

      j2objc_version=2.8

      if [ ! -d "j2objc_lib" ]; then
        echo "fetching j2objc dist"
        curl -OL https://github.com/google/j2objc/releases/download/${j2objc_version}/j2objc-${j2objc_version}.zip
        unzip -o -q j2objc-${j2objc_version}.zip
        mv j2objc-${j2objc_version} j2objc_lib
        rm j2objc-${j2objc_version}.zip
      fi

      echo "Creating framework"

      if [ -d "MNCAnalytics/lib" ]; then
        rm -rf "MNCAnalytics/lib"
      fi
      mkdir MNCAnalytics/lib

  
      if [ -d "${BUILDDIR}" ]; then
        rm -rf "${BUILDDIR}"
      fi

      mkdir -p "${OUTDIR}"

      if [ -f "${OUTDIR}/lib${XCODEPROJECT}.a" ]; then
          rm "${OUTDIR}/lib${XCODEPROJECT}.a"
      fi

      if [ -f "MNCAnalytics/lib" ]; then
        rm "MNCAnalytics/lib/*.a"
      fi

      cp ${PWD}/j2objc_lib/lib/libjre_emul.a MNCAnalytics/lib
      cp ${PWD}/j2objc_lib/lib/libjson.a MNCAnalytics/lib
      
      APPDIR=${PWD}/j2objc
      JAVASRC=java
      OBJCDIR=objc
      JAVAPAK=com\.mncdigital\.analytics
      JAVA_HOME=/Users/fep/Library/Java/JavaVirtualMachines/liberica-1.8.0_345

      echo "" && echo "Java to ObjC translating..." && echo ""

      if [ -d "${APPDIR}/${OBJCDIR}" ]; then
        rm -r "${APPDIR}/${OBJCDIR}"
      fi
      mkdir ${APPDIR}/${OBJCDIR}

      if [ -d "${PWD}/dist" ]; then
        rm -r "${PWD}/dist"
      fi

      ln -s ${PWD}/j2objc_lib dist

      cd dist
      ./j2objc -classpath lib/json.jar --no-package-directories -use-arc --prefix ${JAVAPAK}= -d ${APPDIR}/${OBJCDIR} -sourcepath ${APPDIR}/${JAVASRC} `find -L ${APPDIR}/${JAVASRC} -iname '*.java'`

      cd ..
      cp "j2objc/bridger/MncDigitalAnalytics.h" "j2objc/objc/"
      cp "j2objc/bridger/MncDigitalAnalytics.m" "j2objc/objc/"

      echo "=======> Building devices..."
      xcodebuild -project ${XCODEPROJECT}.xcodeproj -target ${XCODETARGET} ONLY_ACTIVE_ARCH=YES -configuration ${CONFIG} -sdk iphoneos  
      BUILD_DIR="${BUILDDIR}" BUILD_ROOT="${BUILDROOT}" BITCODE_GENERATION_MODE=bitcode
      if [ $? -gt 0 ]; then
        echo "ERROR! when try to build..."
        exit 1
      fi
      
      echo "=======> Building x86_64..."
      xcodebuild -project ${XCODEPROJECT}.xcodeproj -target ${XCODETARGET} -configuration ${CONFIG} -sdk iphonesimulator -arch x86_64 
      BUILD_DIR="${BUILDDIR}" BUILD_ROOT="${BUILDROOT}" BITCODE_GENERATION_MODE=bitcode
      if [ $? -gt 0 ]; then
        echo "ERROR! when try to build..."
        exit 1
      fi

      echo "=======> Building all..."
      lipo -create -output "${OUTDIR}/lib${XCODEPROJECT}.a" "${BUILDDIR}/${CONFIG}-iphoneos/lib${XCODEPROJECT}.a" "${BUILDDIR}/${CONFIG}-iphonesimulator/lib${XCODEPROJECT}.a"
      if [ $? -gt 0 ]; then
        echo "ERROR! when try to build..."
        exit 1
      fi

      echo "=======> Copying headers..."

      cp "j2objc/objc/TTask.h" "MNCAnalytics/public/"
      cp "j2objc/objc/Core.h" "MNCAnalytics/public/"
      cp "j2objc/bridger/MncDigitalAnalytics.h" "MNCAnalytics/public/"

      cp "${OUTDIR}/lib${XCODEPROJECT}.a" "MNCAnalytics/lib/"

      echo "=======> Done"
  CMD
  
  s.vendored_libraries = 'MNCAnalytics/lib/*.a'
  s.xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
    'ALWAYS_SEARCH_USER_PATHS' => 'NO',
    'ONLY_ACTIVE_ARCH' => 'NO',
    'OTHER_LDFLAGS' => '$(inherited) -liconv -ljson'
  }

  s.pod_target_xcconfig = { 
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' 
  }
  s.user_target_xcconfig = { 
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
    'USER_HEADER_SEARCH_PATHS' => '$(inherited) "${PODS_ROOT}/Headers/Private/MNCAnalytics"',
    'SWIFT_OBJC_BRIDGING_HEADER' => '${PODS_ROOT}/Headers/Public/MNCAnalytics/MncDigitalAnalytics.h'
  }
end
