LOCAL_PATH := $(call my-dir)

# FMOD Shared Library
#include $(CLEAR_VARS)
#LOCAL_MODULE            := fmod
#LOCAL_SRC_FILES         := ../../../../fmod/android/lib/$(TARGET_ARCH_ABI)/libfmodL.so
#LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../../../../fmod/android/inc
#include $(PREBUILT_SHARED_LIBRARY)
# FMOD END

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dlua_shared

LOCAL_MODULE_FILENAME := libcocos2dlua

LOCAL_SRC_FILES := \
../../../Classes/AppDelegate.cpp \
hellolua/main.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../Classes
#LOCAL_C_INCLUDES += $(LOCAL_PATH)/../../../../fmod

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END

#LOCAL_SHARED_LIBRARIES := fmod
LOCAL_STATIC_LIBRARIES := cclua_static

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module, cocos/scripting/lua-bindings/proj.android)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
