LOCAL_PATH := $(call my-dir)
$(call import-add-path,$(LOCAL_PATH)/../)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dlua_shared

LOCAL_MODULE_FILENAME := libcocos2dlua

LOCAL_SRC_FILES := hellolua/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/anysdkbindings.cpp \
                   ../../Classes/anysdk_manual_bindings.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes
					
LOCAL_STATIC_LIBRARIES := cocos2d_lua_static

LOCAL_WHOLE_STATIC_LIBRARIES := PluginProtocolStatic

LOCAL_C_INCLUDES += ../protocols/android \
                    ../protocols/include 
include $(BUILD_SHARED_LIBRARY)

$(call import-module,scripting/lua-bindings/proj.android)
$(call import-module,protocols/android)