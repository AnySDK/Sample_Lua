
cc.FileUtils:getInstance():addSearchPath("src")
cc.FileUtils:getInstance():addSearchPath("res")

-- CC_USE_DEPRECATED_API = true
require "cocos.init"

-- cclog
cclog = function(...)
    print(string.format(...))
end

-- for CCLuaEngine traceback
function __G__TRACKBACK__(msg)
    cclog("----------------------------------------")
    cclog("LUA ERROR: " .. tostring(msg) .. "\n")
    cclog(debug.traceback())
    cclog("----------------------------------------")
    return msg
end

local function main()
    collectgarbage("collect")
    -- avoid memory leak
    collectgarbage("setpause", 100)
    collectgarbage("setstepmul", 5000)

    -- initialize director
    local director = cc.Director:getInstance()
    local glview = director:getOpenGLView()
    if nil == glview then
        glview = cc.GLViewImpl:createWithRect("HelloLua", cc.rect(0,0,900,640))
        director:setOpenGLView(glview)
    end

    glview:setDesignResolutionSize(480, 320, cc.ResolutionPolicy.NO_BORDER)

    --turn on display FPS
    director:setDisplayStats(true)

    --set FPS. the default value is 1.0/60 if you don't call this
    director:setAnimationInterval(1.0 / 60)

    local schedulerID = 0
    --support debug
    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if (cc.PLATFORM_OS_IPHONE == targetPlatform) or (cc.PLATFORM_OS_IPAD == targetPlatform) or
       (cc.PLATFORM_OS_ANDROID == targetPlatform) or (cc.PLATFORM_OS_WINDOWS == targetPlatform) or
       (cc.PLATFORM_OS_MAC == targetPlatform) then
        cclog("result is ")
        --require('debugger')()

    end
    require "hello2"
    require "anysdkConst"
    require "Ads"
    require "Analytics"
    require "Push"
    require "Share"
    require "Social"
    require "PluginChannel"

    local plugin_channel = PluginChannel.new()
    local _ads = Ads.new()
    local _social =  Social.new()
    local _share =  Share.new()
    local _push =  Push.new()
    local _analytics =  Analytics.new()

    ---------------

    local visibleSize = cc.Director:getInstance():getVisibleSize()
    local origin = cc.Director:getInstance():getVisibleOrigin()

    function CreatEnumTable(tbl, index) 
        local enumtbl = {} 
        local enumindex = index or 0 
        for i, v in ipairs(tbl) do 
            enumtbl[v] = enumindex + i - 1
        end 
        return enumtbl 
    end 
    -- add buttons
    -- local function addButton()
    --     l
    -- end
    base_menu = {
        "USER_SYS",
        "IAP_SYS",
        "SHARE_SYS",
        "ADS_SYS",
        "SOCIAL_SYS",
        "PUSH_SYS",
    }
    base_menu = CreatEnumTable(base_menu, 1)
    local info_btns = {
        {text = "User system", tag = base_menu.USER_SYS},
        {text = "IAP system", tag = base_menu.IAP_SYS},
        {text = "Share system", tag = base_menu.SHARE_SYS},
        {text = "Ads system", tag = base_menu.ADS_SYS},
        {text = "Social system", tag = base_menu.SOCIAL_SYS},
        {text = "Push system", tag = base_menu.PUSH_SYS}
    }
    user_menu = {
        "LOGIN",
        "LOGOUT",
        "ENTER_PLATFORM",
        "SHOW_TOOLBAR",
        "HIDE_TOOLBAR",
        "ACCOUNTSWITCH_PAY",
        "REALNAME_REGISTER",
        "ANTI_ADDICTION_QUERY",
        "SUBMIT_LOGIN_GAMEROLE",
    }
    user_menu = CreatEnumTable(user_menu, 100)
    local user_btns = {
        {text = "login", tag = user_menu.LOGIN},
        {text = "logout", tag = user_menu.LOGOUT},
        {text = "enterPlatform", tag = user_menu.ENTER_PLATFORM},
        {text = "showToolBar", tag = user_menu.SHOW_TOOLBAR},
        {text = "hideToolBar", tag = user_menu.HIDE_TOOLBAR},
        {text = "accountSwitch pay", tag = user_menu.ACCOUNTSWITCH_PAY},
        {text = "realNameRegister", tag = user_menu.REALNAME_REGISTER},
        {text = "antiAddictionQuery", tag = user_menu.ANTI_ADDICTION_QUERY},
        {text = "submitLoginGameRole", tag = user_menu.SUBMIT_LOGIN_GAMEROLE}
    }
    iap_menu = {"PAY"}
    iap_menu = CreatEnumTable(iap_menu, 200)
    local iap_btns = {
        {text="pay", tag = iap_menu.PAY}
    }
    share_menu = {"SHARE"}
    share_menu = CreatEnumTable(share_menu, 300)
    local share_btns = {
        {text="share", tag = share_menu.SHARE}
    }
    ads_menu = {"SHOW_ADS", "HIDE_ADS"}
    ads_menu = CreatEnumTable(ads_menu, 400)
    local ads_btns = {
        {text="show ads", tag = ads_menu.SHOW_ADS},
        {text="hide ads", tag = ads_menu.HIDE_ADS}
    }
    social_menu = {
        "SUBMIT_SCORE", 
        "SHOW_LEADERBOARD", 
        "UNLOCK_ACHIEVEMENT", 
        "SHOW_ACHIEVEMENT"
    }
    social_menu = CreatEnumTable(social_menu, 500)
    local social_btns = {
        {text="submit score", tag = social_menu.SUBMIT_SCORE},
        {text="show Leaderboard", tag = social_menu.SHOW_LEADERBOARD},
        {text="unlock achievement", tag = social_menu.UNLOCK_ACHIEVEMENT},
        {text="show achievements", tag = social_menu.SHOW_ACHIEVEMENT}
    }
    push_menu = {
        "CLOSE_PUSH", 
        "SET_ALIAS", 
        "DEL_ALIAS", 
        "SET_TAGS", 
        "DEL_TAGS"
    }
    push_menu = CreatEnumTable(push_menu, 600)
    local push_btns = {
        {text="close push", tag = push_menu.CLOSE_PUSH},
        {text="set Alias", tag = push_menu.SET_ALIAS},
        {text="del Alias", tag = push_menu.DEL_ALIAS},
        {text="set Tags", tag = push_menu.SET_TAGS},
        {text="del Tags", tag = push_menu.DEL_TAGS}
    }
    local sec_infos = {
        user_btns, iap_btns, share_btns, ads_btns, social_btns, push_btns
    }
    local FONT_SIZE = 24
    local current_menu_idx = -1
    local display_second_menu = false

    local function createClickLayer()
        local pLayer = cc.Layer:create()
        local menu = cc.Menu:create()
        menu:setPosition(0, 0)
        pLayer:addChild(menu)

        local x = 100
        local y = 310
        local h = 43
        
        local function createBtn(str, tag, pos)
            local lb = cc.Label:createWithSystemFont(str, "Helvetica", FONT_SIZE)
            lb:setTextColor(cc.c4b(255, 255, 255, 255))
            local btn = cc.MenuItemLabel:create(lb)
            btn:setPosition(pos)
            btn:setTag(tag)
            return btn
        end
        local BASE_LEVEL = 100
        local USER_LEVEL = 200
        local IAP_LEVEL = 300
        local SHARE_LEVEL = 400
        local ADS_LEVEL = 500
        local SOCIAL_LEVEL = 600
        local PUSH_LEVEL = 700
        local sec_btns = {}
        local sec_top_arr = {}
        local sec_top_idx = 0
        local function menuCallback(item)
            cclog("on click:%d", item)
            x = 300
            if item == base_menu.USER_SYS then
                y = 320
                h = 31.5
            elseif item == base_menu.ADS_SYS then
                y = 330
                h = 35
            else
                y = 300
                h = 35
            end

            local function createBtns( tb )
                local arr = {}
                for i=1, #(tb) do
                    local btn = createBtn(tb[i].text, tb[i].tag, cc.p(x, y-i*h))
                    btn:registerScriptTapHandler(menuCallback)
                    menu:addChild(btn)
                    arr[i] = btn
                end
                return arr
            end
            local function setBtnState( tb )
                local visible = tb[1]:isVisible()
                cclog("is visible: " .. type(visible))
                for i=1, #(tb) do
                    tb[i]:setVisible(not visible)
                end
            end
            local function setOtherInvisible( idx )
                local function setInvisible(tb)
                    if tb == nil then
                        return
                    end
                    for i=1, #(tb) do
                        tb[i]:setVisible(false)
                    end
                end
                print("sec_btns count:" .. #(sec_btns))
                for i=1, #(sec_top_arr) do
                    setInvisible(sec_btns[sec_top_arr[i]])
                end
            end

            if item < BASE_LEVEL then
                setOtherInvisible()
                if item ~= current_menu_idx then
                    if sec_btns[item] == nil then
                        sec_btns[item] = createBtns(sec_infos[item])
                        sec_top_idx = sec_top_idx + 1
                        sec_top_arr[sec_top_idx] = item
                    else
                        setBtnState(sec_btns[item])
                    end
                    display_second_menu = true
                    current_menu_idx = item
                elseif display_second_menu then
                    display_second_menu = false
                    current_menu_idx = -1
                end
            elseif item < USER_LEVEL then
                if item == user_menu.LOGIN then
                    plugin_channel:login()
                elseif item == user_menu.LOGOUT then
                    plugin_channel:logout()
                elseif item == user_menu.ENTER_PLATFORM then
                    plugin_channel:enterPlatform()
                elseif item == user_menu.SHOW_TOOLBAR then
                    plugin_channel:showToolBar()
                elseif item == user_menu.HIDE_TOOLBAR then
                    plugin_channel:hideToolBar()
                elseif item == user_menu.ACCOUNTSWITCH_PAY then
                    plugin_channel:accountSwitch()
                elseif item == user_menu.REALNAME_REGISTER then
                    plugin_channel:realNameRegister()
                elseif item == user_menu.ANTI_ADDICTION_QUERY then
                    plugin_channel:antiAddictionQuery()
                elseif item == user_menu.SUBMIT_LOGIN_GAMEROLE then
                    plugin_channel:submitLoginGameRole()
                end
            elseif item < IAP_LEVEL then
                if item == iap_menu.PAY then
                    cclog("on clicked pay.")
                    plugin_channel:pay();
                end
            elseif item < SHARE_LEVEL then
                if item == share_menu.SHARE then
                    cclog("on clicked share.")
                    _share:share()
                end
            elseif item < ADS_LEVEL then
                if item == ads_menu.SHOW_ADS then
                    _ads:showAds(AdsType.AD_TYPE_FULLSCREEN)
                elseif item == ads_menu.HIDE_ADS then
                    _ads:hideAds(AdsType.AD_TYPE_FULLSCREEN)
                end
            elseif item < SOCIAL_LEVEL then
                cclog("on clicked social.")
                if item == social_menu.SUBMIT_SCORE then
                    _social:submitScore()
                elseif item == social_menu.SHOW_LEADERBOARD then
                    _social:showLeaderboard();
                elseif item == social_menu.UNLOCK_ACHIEVEMENT then
                    _social:unlockAchievement()
                elseif item == social_menu.SHOW_ACHIEVEMENT then
                    _social:showAchievements()
                end
            elseif item < PUSH_LEVEL then
                cclog("on clicked push.")
                if item == push_menu.CLOSE_PUSH then
                    _push:closePush()
                elseif item == push_menu.SET_ALIAS then
                    _push:setAlias()
                elseif item == push_menu.DEL_ALIAS then
                    _push:delAlias()
                elseif item == push_menu.SET_TAGS then
                    _push:setTags()
                elseif item == push_menu.DEL_TAGS then
                    _push:delTags()
                end
            end
        end
        
        for i=1, #(info_btns) do
            local btn = createBtn(info_btns[i].text, info_btns[i].tag, cc.p(x, y-i*h))
            btn:registerScriptTapHandler(menuCallback)
            menu:addChild(btn)
        end

        return pLayer
    end
    local operateLy = createClickLayer()

    -- add the moving dog
    local function createDog()
        local frameWidth = 105
        local frameHeight = 95

        -- create dog animate
        local textureDog = cc.Director:getInstance():getTextureCache():addImage("dog.png")
        local rect = cc.rect(0, 0, frameWidth, frameHeight)
        local frame0 = cc.SpriteFrame:createWithTexture(textureDog, rect)
        rect = cc.rect(frameWidth, 0, frameWidth, frameHeight)
        local frame1 = cc.SpriteFrame:createWithTexture(textureDog, rect)

        local spriteDog = cc.Sprite:createWithSpriteFrame(frame0)
        spriteDog.isPaused = false
        spriteDog:setPosition(origin.x, origin.y + visibleSize.height / 4 * 3)
--[[
        local animFrames = CCArray:create()

        animFrames:addObject(frame0)
        animFrames:addObject(frame1)
]]--

        local animation = cc.Animation:createWithSpriteFrames({frame0,frame1}, 0.5)
        local animate = cc.Animate:create(animation);
        spriteDog:runAction(cc.RepeatForever:create(animate))

        -- moving dog at every frame
        local function tick()
            if spriteDog.isPaused then return end
            local x, y = spriteDog:getPosition()
            if x > origin.x + visibleSize.width then
                x = origin.x
            else
                x = x + 1
            end

            spriteDog:setPositionX(x)
        end

        schedulerID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(tick, 0, false)

        return spriteDog
    end

    -- create farm
    local function createLayerFarm()
        local layerFarm = cc.Layer:create()

        -- add in farm background
        local bg = cc.Sprite:create("farm.jpg")
        bg:setPosition(origin.x + visibleSize.width / 2 + 80, origin.y + visibleSize.height / 2)
        layerFarm:addChild(bg)

        -- add land sprite
        for i = 0, 3 do
            for j = 0, 1 do
                local spriteLand = cc.Sprite:create("land.png")
                spriteLand:setPosition(200 + j * 180 - i % 2 * 90, 10 + i * 95 / 2)
                layerFarm:addChild(spriteLand)
            end
        end

        -- add crop
        local frameCrop = cc.SpriteFrame:create("crop.png", cc.rect(0, 0, 105, 95))
        for i = 0, 3 do
            for j = 0, 1 do
                local spriteCrop = cc.Sprite:createWithSpriteFrame(frameCrop);
                spriteCrop:setPosition(10 + 200 + j * 180 - i % 2 * 90, 30 + 10 + i * 95 / 2)
                layerFarm:addChild(spriteCrop)
            end
        end

        -- add moving dog
        local spriteDog = createDog()
        layerFarm:addChild(spriteDog)

        -- handing touch events
        local touchBeginPoint = nil
        local function onTouchBegan(touch, event)
            local location = touch:getLocation()
            cclog("onTouchBegan: %0.2f, %0.2f", location.x, location.y)
            touchBeginPoint = {x = location.x, y = location.y}
            spriteDog.isPaused = true
            -- CCTOUCHBEGAN event must return true
            return true
        end

        local function onTouchMoved(touch, event)
            local location = touch:getLocation()
            cclog("onTouchMoved: %0.2f, %0.2f", location.x, location.y)
            if touchBeginPoint then
                local cx, cy = layerFarm:getPosition()
                layerFarm:setPosition(cx + location.x - touchBeginPoint.x,
                                      cy + location.y - touchBeginPoint.y)
                touchBeginPoint = {x = location.x, y = location.y}
            end
        end

        local function onTouchEnded(touch, event)
            local location = touch:getLocation()
            cclog("onTouchEnded: %0.2f, %0.2f", location.x, location.y)
            touchBeginPoint = nil
            spriteDog.isPaused = false
        end

        local listener = cc.EventListenerTouchOneByOne:create()
        listener:registerScriptHandler(onTouchBegan,cc.Handler.EVENT_TOUCH_BEGAN )
        listener:registerScriptHandler(onTouchMoved,cc.Handler.EVENT_TOUCH_MOVED )
        listener:registerScriptHandler(onTouchEnded,cc.Handler.EVENT_TOUCH_ENDED )
        local eventDispatcher = layerFarm:getEventDispatcher()
        eventDispatcher:addEventListenerWithSceneGraphPriority(listener, layerFarm)

        local function onNodeEvent(event)
           if "exit" == event then
               cc.Director:getInstance():getScheduler():unscheduleScriptEntry(schedulerID)
           end
        end
        layerFarm:registerScriptHandler(onNodeEvent)

        return layerFarm
    end


    -- create menu
    local function createLayerMenu()
        local layerMenu = cc.Layer:create()

        local menuPopup, menuTools, effectID

        local function menuCallbackClosePopup()
            -- stop test sound effect
            cc.SimpleAudioEngine:getInstance():stopEffect(effectID)
            menuPopup:setVisible(false)
        end

        local function menuCallbackOpenPopup()
            -- loop test sound effect
            local effectPath = cc.FileUtils:getInstance():fullPathForFilename("effect1.wav")
            effectID = cc.SimpleAudioEngine:getInstance():playEffect(effectPath)
            menuPopup:setVisible(true)
        end

        -- add a popup menu
        local menuPopupItem = cc.MenuItemImage:create("menu2.png", "menu2.png")
        menuPopupItem:setPosition(0, 0)
        menuPopupItem:registerScriptTapHandler(menuCallbackClosePopup)
        menuPopup = cc.Menu:create(menuPopupItem)
        menuPopup:setPosition(origin.x + visibleSize.width / 2, origin.y + visibleSize.height / 2)
        menuPopup:setVisible(false)
        layerMenu:addChild(menuPopup)

        -- add the left-bottom "tools" menu to invoke menuPopup
        local menuToolsItem = cc.MenuItemImage:create("menu1.png", "menu1.png")
        menuToolsItem:setPosition(0, 0)
        menuToolsItem:registerScriptTapHandler(menuCallbackOpenPopup)
        menuTools = cc.Menu:create(menuToolsItem)
        local itemWidth = menuToolsItem:getContentSize().width
        local itemHeight = menuToolsItem:getContentSize().height
        menuTools:setPosition(origin.x + itemWidth/2, origin.y + itemHeight/2)
        layerMenu:addChild(menuTools)

        return layerMenu
    end

    -- play background music, preload effect
    local bgMusicPath = cc.FileUtils:getInstance():fullPathForFilename("background.mp3")
    cc.SimpleAudioEngine:getInstance():playMusic(bgMusicPath, true)
    local effectPath = cc.FileUtils:getInstance():fullPathForFilename("effect1.wav")
    cc.SimpleAudioEngine:getInstance():preloadEffect(effectPath)

    -- run
    local sceneGame = cc.Scene:create()
    sceneGame:addChild(createLayerFarm())
    sceneGame:addChild(createLayerMenu())
    sceneGame:addChild(operateLy)

    if cc.Director:getInstance():getRunningScene() then
        cc.Director:getInstance():replaceScene(sceneGame)
    else
        cc.Director:getInstance():runWithScene(sceneGame)
    end

end


local status, msg = xpcall(main, __G__TRACKBACK__)
if not status then
    error(msg)
end
