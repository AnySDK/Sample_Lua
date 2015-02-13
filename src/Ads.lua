require "ClassBase"

local ads_plugin = nil

local function onAdsListener(code, msg)
    cclog("code:%d, msg:%s", code, msg)
    if code == AdsResultCode.kAdsReceived then
        --do
        cclog("ad is received!")
    end
end

Ads = class()
function Ads:ctor()
	ads_plugin = AgentManager:getInstance():getAdsPlugin()
    if nil ~= ads_plugin then
        ads_plugin:setAdsListener(onAdsListener)
    end
end


function Ads:showAds(adType,idx)
    if ads_plugin ~= nil then
        if ads_plugin:isAdTypeSupported(adType) then
            ads_plugin:showAds(adType,idx)
        end
    end
end

function Ads:preloadAds(adType,idx)
    if ads_plugin ~= nil then
        if ads_plugin:isAdTypeSupported(adType) then
            ads_plugin:preloadAds(adType,idx)
        end
    end
end

function Ads:hideAds(adType,idx)
    if ads_plugin ~= nil then
        if ads_plugin:isAdTypeSupported(adType) then
            ads_plugin:hideAds(adType,idx)
        end
    end
end
