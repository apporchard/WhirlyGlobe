To build from the command line in the root directory (right above WhirlyGlobeSrc), do the following:

xcodebuild ARCHS="armv7 armv7s" ONLY_ACTIVE_ARCH=NO -workspace WhirlyGlobe.xcworkspace -scheme WhirlyGlobeSDK -sdk iphoneos -configuration Debug clean build
xcodebuild ARCHS="i386" ONLY_ACTIVE_ARCH=NO -workspace WhirlyGlobe.xcworkspace -scheme WhirlyGlobeSDK -sdk iphonesimulator -configuration Debug build

The output will be in WhirlyGlobeSDK/SDKRoot
