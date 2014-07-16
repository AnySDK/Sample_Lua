#include "AppDelegate.h"
#include "CCLuaEngine.h"
#include "SimpleAudioEngine.h"
#include "cocos2d.h"
#include "AgentManager.h"
#include "anysdkbindings.h"
#include "anysdk_manual_bindings.h"

using namespace CocosDenshion;

USING_NS_CC;
using namespace std;

AppDelegate::AppDelegate()
{
}

AppDelegate::~AppDelegate()
{
    SimpleAudioEngine::end();
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    auto director = Director::getInstance();
	auto glview = director->getOpenGLView();
	if(!glview) {
		glview = GLView::createWithRect("anysdkq", Rect(0,0,900,640));
		director->setOpenGLView(glview);
	}

    glview->setDesignResolutionSize(480, 320, ResolutionPolicy::NO_BORDER);

    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    auto engine = LuaEngine::getInstance();
    ScriptEngineManager::getInstance()->setScriptEngine(engine);

    CCLOG("will register anysdk bindings function.");
    LuaStack* stack = engine->getLuaStack();
    lua_getglobal(stack->getLuaState(), "_G");
    tolua_anysdk_open(stack->getLuaState());
    tolua_anysdk_manual_open(stack->getLuaState());
    lua_pop(stack->getLuaState(), 1);
    
    if (engine->executeScriptFile("src/main.lua")) {
        return false;
    }

    login();

    return true;
}

void AppDelegate::login()
{
    // CCLOG("will test login.");
    // if(AgentManager::getInstance()->getUserPlugin())
    // {
    //     AgentManager::getInstance()->getUserPlugin()->login();
    // }
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    Director::getInstance()->stopAnimation();

    SimpleAudioEngine::getInstance()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    Director::getInstance()->startAnimation();

    SimpleAudioEngine::getInstance()->resumeBackgroundMusic();
}
