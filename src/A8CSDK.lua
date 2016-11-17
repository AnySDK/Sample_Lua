require "ClassBase"

local a8csdk = nil

local function onCustomResult(code, msg )
    print(msg)
    if code == (CustomResultCode.kCustomExtension + 1) then
        --MessageBox(msg, "InitSuccess")
    elseif code == (CustomResultCode.kCustomExtension + 2) then
        --MessageBox(msg, "InitFail")
    elseif code == (CustomResultCode.kCustomExtension + 3) then
        --MessageBox(msg, "getLastGameServerInfo")
    end
end

A8CSDK = class()
function A8CSDK:ctor()
	a8csdk = AgentManager:getInstance():getCustomPlugin()
	if a8csdk ~= nil then
		a8csdk:setResultListener(onCustomResult)
	end
end


function A8CSDK:onCreateRole()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onCreateRole") then
		local info = {
        	serverId = "123456",
        	serverName = "test",
        	roleId = "test",
        	roleName = "10",
        	roleLevel = "10",
        	ext = ""
    	}
    	local data = PluginParam:create(info)
    	a8csdk:callFuncWithParam("onCreateRole",data)
    end
end

function A8CSDK:onEnterGame()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onEnterGame") then
		local info = {
        	serverId = "123456",
        	serverName = "test",
        	roleId = "test",
        	roleName = "10",
        	roleLevel = "10",
        	ext = ""
    	}
    	local data = PluginParam:create(info)
    	a8csdk:callFuncWithParam("onEnterGame",data)
    end
end

function A8CSDK:onLogin()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onLogin") then
    	local info = {
        	uid = "123456",
        	uname = "",
        	ext = ""
    	}
    	local data = PluginParam:create(info)
    	a8csdk:callFuncWithParam("onLogin",data)
	end
end

function A8CSDK:onPay()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onPay") then
    	local info = {
        	orderId = "123456",
        	price = "10",
        	count = "1",
        	goodsId = "goodsId",
        	goodsName = "10",
        	title = "10",
        	ext = ""
    	}
    	local data = PluginParam:create(info)
    	a8csdk:callFuncWithParam("onPay",data)
	end
end

function A8CSDK:onExit()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onExit")then
    	a8csdk:callFuncWithParam("onExit")
	end
end

function A8CSDK:onLevelUp()
    if a8csdk ~= nil and a8csdk:isFunctionSupported("onLevelUp") then
        local info = {
            serverId = "123456",
            serverName = "test",
            roleId = "test",
            roleName = "10",
            roleLevel = "10",
            ext = ""
        }
        local data = PluginParam:create(info)
        a8csdk:callFuncWithParam("onLevelUp",data)  
    end
end

function A8CSDK:onRegister()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onRegister") then
    	local info = {
        	uid = "123456",
        	uname = "",
        	ext = ""
    	}
    	local data = PluginParam:create(info)
    	a8csdk:callFuncWithParam("onRegister",data)
    end
end

function A8CSDK:onCustomEvent()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("onCustomEvent") then
    	local info = {
        	dataType = "123456",
        	info = "10",
        	ext = ""
    	}
    	local data = PluginParam:create(info)
    	a8csdk:callFuncWithParam("onCustomEvent",data)
	end
end

function A8CSDK:getLastGameServerInfo()
	if a8csdk ~= nil and a8csdk:isFunctionSupported("getLastGameServerInfo") then
    	a8csdk:callFuncWithParam("getLastGameServerInfo")
	end
end
