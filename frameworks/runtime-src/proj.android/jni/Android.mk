LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cocos2dlua_shared

LOCAL_MODULE_FILENAME := libcocos2dlua

LOCAL_SRC_FILES := hellolua/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/anysdkbindings.cpp \
                   ../../Classes/anysdk_manual_bindings.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes \
					../protocols_c++_static/include \
					../protocols_c++_static/android
					
LOCAL_STATIC_LIBRARIES := cocos2d_lua_static
LOCAL_STATIC_LIBRARIES += PluginProtocolStatic

include $(BUILD_SHARED_LIBRARY)

$(call import-module,scripting/lua-bindings/proj.android)
$(call import-module,protocols_c++_static/android)