LOCAL_PATH := $(call my-dir)

#FMOD_BEGIN
FMOD_ANDROID_DIR := ../../../../fmod/android
FMOD_LIBRARY_PATH := $(FMOD_ANDROID_DIR)/lib/$(TARGET_ARCH_ABI)

include $(CLEAR_VARS)
LOCAL_MODULE := fmod
LOCAL_SRC_FILES := $(FMOD_LIBRARY_PATH)/libfmod.so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/$(FMOD_ANDROID_DIR)/inc
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := fmodL
LOCAL_SRC_FILES := $(FMOD_LIBRARY_PATH)/libfmodL.so
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/$(FMOD_ANDROID_DIR)/inc
include $(PREBUILT_SHARED_LIBRARY)
#FMOD_END

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dlua_shared

LOCAL_MODULE_FILENAME := libcocos2dlua

LOCAL_SRC_FILES := \
../../../Classes/AppDelegate.cpp \
../../../../fmod/FmodSound.cpp \
hellolua/main.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../../Classes

# _COCOS_HEADER_ANDROID_BEGIN
# _COCOS_HEADER_ANDROID_END

LOCAL_STATIC_LIBRARIES := cclua_static
LOCAL_STATIC_LIBRARIES += fmod
LOCAL_STATIC_LIBRARIES += fmodL

# _COCOS_LIB_ANDROID_BEGIN
# _COCOS_LIB_ANDROID_END

include $(BUILD_SHARED_LIBRARY)

$(call import-module, cocos/scripting/lua-bindings/proj.android)

# _COCOS_LIB_IMPORT_ANDROID_BEGIN
# _COCOS_LIB_IMPORT_ANDROID_END
