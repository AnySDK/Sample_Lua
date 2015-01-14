require "ClassBase"

local analytics_plugin = nil

Analytics = class()
function Analytics:ctor()
	analytics_plugin = AgentManager:getInstance():getAnalyticsPlugin()
end

function Analytics:startSession()
	if analytics_plugin ~= nil then
	    analytics_plugin:startSession()
	end
end

function Analytics:stopSession()
	if analytics_plugin ~= nil then
	    analytics_plugin:stopSession()
	end
end

function Analytics:logError(errID, errMsg)
	if analytics_plugin ~= nil then
	    analytics_plugin:logError(errID, errMsg)
	end
end

function Analytics:logEvent(eventID)
	if analytics_plugin ~= nil then
	    analytics_plugin:logEvent(eventID)
	end
end