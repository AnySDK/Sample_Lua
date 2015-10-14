
local crash_plugin = nil

Crash = class()
function Crash:ctor()
	crash_plugin = AgentManager:getInstance():getCrashPlugin()
end


function Crash:setUserIdentifier(user)
	if crash_plugin ~= nil  then
		crash_plugin:setUserIdentifier(user)
	end
end

function Crash:reportException(eventId,message)
	if crash_plugin ~= nil  then
		crash_plugin:reportException(eventId,message)
	end
end

function Crash:leaveBreadcrumb(bread)
	if crash_plugin ~= nil  then
		crash_plugin:leaveBreadcrumb(bread)
	end
end

