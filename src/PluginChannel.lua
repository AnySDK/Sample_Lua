require "ClassBase"

local user_plugin = nil
local iap_plugin_maps = nil

local function onUserResult( plugin, code, msg )
    print("on user action listener.")
    print("code:"..code..",msg:"..msg)
    if code == UserActionResultCode.kInitSuccess then
        --do
    elseif code == UserActionResultCode.kInitFail then
        --do
    elseif code == UserActionResultCode.kLoginSuccess then
        --do
    elseif code == UserActionResultCode.kLoginNetworkError then
        --do
    elseif code == UserActionResultCode.kLoginNoNeed then
        --do
    elseif code == UserActionResultCode.kLoginFail then
        --do
    elseif code == UserActionResultCode.kLoginCancel then
        --do
    elseif code == UserActionResultCode.kLogoutSuccess then
        --do
    elseif code == UserActionResultCode.kLogoutFail then
        --do
    elseif code == UserActionResultCode.kPlatformEnter then
        --do
    elseif code == UserActionResultCode.kPlatformBack then
        --do
    elseif code == UserActionResultCode.kPausePage then
        --do
    elseif code == UserActionResultCode.kExitPage then
        --do
    elseif code == UserActionResultCode.kAntiAddictionQuery then
        --do
    elseif code == UserActionResultCode.kRealNameRegister then
        --do
    elseif code == UserActionResultCode.kAccountSwitchSuccess then
        --do
    elseif code == UserActionResultCode.kAccountSwitchFail then
        --do
    elseif code == UserActionResultCode.kOpenShop then
        --do
    end
end
local function onPayResult( code, msg, info )
    print("on iap result listener.")
    print("code:"..code..",msg:"..msg)
    if code == PayResultCode.kPaySuccess then
        --do
    elseif code == PayResultCode.kPayFail then
        --do
    elseif code == PayResultCode.kPayCancel then
        --do
    elseif code == PayResultCode.kPayNetworkError then
        --do
    elseif code == PayResultCode.kPayProductionInforIncomplete then
        --do
    elseif code == PayResultCode.kPayInitSuccess then
        --do
    elseif code == PayResultCode.kPayInitFail then
        --do
    elseif code == PayResultCode.kPayNowPaying then
        --do
    elseif code == PayResultCode.kPayRechargeSuccess then
        --do
    end
end

PluginChannel = class()
function PluginChannel:ctor()
    --for anysdk
    local agent = AgentManager:getInstance()
    --init
    local appKey = "CED525C0-8D41-F514-96D8-90092EB3899A";
    local appSecret = "a29b4f22aa63b8274f7f6e2dd5893d9b";
    local privateKey = "963C4B4DA71BC51C69EB11D24D0C7D49";

    local oauthLoginServer = "http://oauth.anysdk.com/api/OauthLoginDemo/Login.php";
    agent:init(appKey,appSecret,privateKey,oauthLoginServer)

    local targetPlatform = cc.Application:getInstance():getTargetPlatform()
    if targetPlatform ~= cc.PLATFORM_OS_ANDROID then
        --load
        --Android建议在onCreate里调用PluginWrapper.loadAllPlugins();来进行插件初始化
        agent:loadAllPlugins()
    end

    -- get user plugin
    user_plugin = agent:getUserPlugin()
    if user_plugin ~= nil then
        user_plugin:setActionListener(onUserResult)
    end

    iap_plugin_maps = agent:getIAPPlugin()
    for key, value in pairs(iap_plugin_maps) do
        print("key:" .. key)
        print("value: " .. type(value))
        value:setResultListener(onPayResult)
    end

    agent:setIsAnaylticsEnabled(true)
end

function PluginChannel:login()
	if user_plugin ~= nil then
        user_plugin:setActionListener(onUserResult)
        local paramMap = {
            User_Id = "123456",
            Role_Id = "test",
            Role_Name = "test"
        }
	    user_plugin:login(paramMap)
	end
end

function PluginChannel:logout()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("logout") then
            user_plugin:callFuncWithParam("logout")
        end
	end
end

function PluginChannel:enterPlatform()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("enterPlatform") then
            user_plugin:callFuncWithParam("enterPlatform")
        end
	end
end

function PluginChannel:showToolBar()
	if user_plugin ~= nil then
	    if user_plugin:isFunctionSupported("showToolBar") then
	        local param1 = PluginParam:create(ToolBarPlace.kToolBarTopLeft)
	        user_plugin:callFuncWithParam("showToolBar", param1)
	    end
	end
end

function PluginChannel:hideToolBar()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("hideToolBar") then
            user_plugin:callFuncWithParam("hideToolBar")
        end
	end
end

function PluginChannel:accountSwitch()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("accountSwitch") then
            user_plugin:callFuncWithParam("accountSwitch")
        end
	end
end

function PluginChannel:realNameRegister()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("realNameRegister") then
            user_plugin:callFuncWithParam("realNameRegister")
        end
	end
end

function PluginChannel:antiAddictionQuery()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("antiAddictionQuery") then
            user_plugin:callFuncWithParam("antiAddictionQuery")
        end
	end
end

function PluginChannel:submitLoginGameRole()
	if user_plugin ~= nil then
        if user_plugin:isFunctionSupported("submitLoginGameRole") then
            local info = {
                dataType="1",
                roleId="123456",
                roleName="test",
                roleLevel="1",
                zoneId="1",
                zoneName="test",
                balance="1",
                partyName="test",
                vipLevel="1",
                roleCTime="1480318110",
                roleLevelMTime="-1"
            }
            local data = PluginParam:create(info)
            user_plugin:callFuncWithParam("submitLoginGameRole", data)
        end
	end
end

function PluginChannel:pay()
	if iap_plugin_maps ~= nil then
        local info = {
                Product_Id="1",
                Product_Name="10元宝",
                Product_Price="1",
                Product_Count="1",
                Product_Desc="gold",
                Coin_Name="元宝",
                Coin_Rate="10",
                Role_Id="123456",
                Role_Name="test",
                Role_Grade="1",
                Role_Balance="1",
                Vip_Level="1",
                Party_Name="1",
                Server_Id="1",
                Server_Name="test",
                EXT="test"
            }
        -- analytics_plugin:logEvent("pay", info)
        for key, value in pairs(iap_plugin_maps) do
            print("key:" .. key)
            print("value: " .. type(value))
            value:payForProduct(info)
        end
	end
end