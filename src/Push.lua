require "ClassBase"

local push_plugin = nil

local function onActionResult(plugin, code, msg)
	if code == PushActionResultCode.kPushReceiveMessage then
	    --do
	    print(code,msg)
	end
end

Push = class()
function Push:ctor()
	push_plugin = AgentManager:getInstance():getPushPlugin()
	if push_plugin ~= nil then
	    push_plugin:setActionListener(onActionResult)
	end
end

function Push:startPush()
	if push_plugin ~= nil then
	    push_plugin:startPush()
	end
end

function Push:closePush()
	if push_plugin ~= nil then
	    push_plugin:closePush()
	end
end

function Push:setAlias()
	if push_plugin ~= nil then
	    push_plugin:setAlias("ivenKill")
	end
end

function Push:delAlias()
	if push_plugin ~= nil then
	    push_plugin:delAlias("ivenKill")
	end
end

function Push:setTags()
	if push_plugin ~= nil then
	    push_plugin:setTags({"easy","fast","qwe"})
	end
end

function Push:delTags()
	if push_plugin ~= nil then
	    push_plugin:delTags({"easy","fast"})
	end
end