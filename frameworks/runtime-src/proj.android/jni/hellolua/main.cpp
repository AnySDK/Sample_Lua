#include "AppDelegate.h"
#include "cocos2d.h"
#include "platform/android/jni/JniHelper.h"
#include <jni.h>
#include <android/log.h>
#include "PluginJniHelper.h"
#include "AgentManager.h"

#define  LOG_TAG    "main"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

using namespace cocos2d;
using namespace anysdk::framework;

void cocos_android_app_init (JNIEnv* env, jobject thiz) {
    LOGD("cocos_android_app_init");
    AppDelegate *pAppDelegate = new AppDelegate();
    JavaVM* vm;
	env->GetJavaVM(&vm);
	PluginJniHelper::setJavaVM(vm);
}

extern "C"
{

void Java_org_cocos2dx_lua_wrapper_nativeInitPlugins(JNIEnv*  env, jobject thiz)
{
	std::string oauthLoginServer = "http://oauth.anysdk.com/api/OauthLoginDemo/Login.php";
	std::string appKey = "CED525C0-8D41-F514-96D8-90092EB3899A";
	std::string appSecret = "a29b4f22aa63b8274f7f6e2dd5893d9b";
	std::string privateKey = "963C4B4DA71BC51C69EB11D24D0C7D49";

	AgentManager* _pAgent = AgentManager::getInstance();
	_pAgent->init(appKey,appSecret,privateKey,oauthLoginServer);

	//使用框架中代理类进行插件初始化
	_pAgent->loadAllPlugins();
}
}
