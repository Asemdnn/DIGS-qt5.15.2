################################################################################
#
# (c) 2009-2020 QGROUNDCONTROL PROJECT <http://jiacdi.com.jo>
#
# DIGS is licensed according to the terms in the file
# COPYING.md in the root of the source code directory.
#
################################################################################

# Android-only Post Link steps - Android deployment handled by androiddeployqt
# Generic post link is handled in QGCPostLinkInstaller.pri

QMAKE_POST_LINK += echo "Android build"
