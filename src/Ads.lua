require "ClassBase"

local ads_plugin = nil

Ads = class()
function Ads:ctor()
	ads_plugin = AgentManager:getInstance():getAdsPlugin()
end

function Ads:showAds(adType)
    if ads_plugin ~= nil then
        if ads_plugin:isAdTypeSupported(adType) then
            ads_plugin:showAds(adType)
        end
    end
end

function Ads:hideAds(adType)
    if ads_plugin ~= nil then
        if ads_plugin:isAdTypeSupported(adType) then
            ads_plugin:hideAds(adType)
        end
    end
end
