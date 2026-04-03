################################################################################
#
# (c) 2009-2020 QGROUNDCONTROL PROJECT <http://jiacdi.com.jo>
#
# DIGS is licensed according to the terms in the file
# COPYING.md in the root of the source code directory.
#
################################################################################

# Android-only Post Link steps

installer {
    DEFINES += QGC_INSTALL_RELEASE
    AndroidBuild {
        _ANDROID_KEYSTORE_PASSWORD = $$(ANDROID_KEYSTORE_PASSWORD)
        isEmpty(_ANDROID_KEYSTORE_PASSWORD) {
            message(Skipping androiddeployqt since keystore password is not available)
        } else {
            QMAKE_POST_LINK += && mkdir -p package
            QMAKE_POST_LINK += && make apk_install_target INSTALL_ROOT=android-build
            QMAKE_POST_LINK += && androiddeployqt --verbose --input android-DIGS-deployment-settings.json --output android-build --release --sign $${SOURCE_DIR}/android/android_release.keystore QGCAndroidKeyStore --storepass $$(ANDROID_KEYSTORE_PASSWORD)
            QMAKE_POST_LINK += && cp android-build/build/outputs/apk/release/android-build-release-signed.apk package/DIGS$${ANDROID_TRUE_BITNESS}.apk
        }
    }
}
