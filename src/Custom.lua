
local custom_plugin = nil

local function onCustomResult(code, msg )
    print("on Custom result listener.")
    if code == CustomResultCode.kCustomExtension then
        --MessageBox(msg, "kCustomExtension")
    end
end

Custom = class()

function Custom:ctor()
	custom_plugin = AgentManager:getInstance():getCustomPlugin()
	if custom_plugin ~= nil then
		custom_plugin:setResultListener(onCustomResult)
	end
end



