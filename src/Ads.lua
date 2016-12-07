require "ClassBase"

local ads_plugin = nil

local function onAdsResult( code, msg )
    print("on ads result listener.")
    print("code:"..code..",msg:"..msg)
    if code == AdsResultCode.kAdsReceived then
        --do
    elseif code == AdsResultCode.kAdsShown then
        --do
    elseif code == AdsResultCode.kAdsDismissed then
        --do
    elseif code == AdsResultCode.kPointsSpendSucceed then
        --do
    elseif code == AdsResultCode.kPointsSpendFailed then
        --do
    elseif code == AdsResultCode.kNetworkError then
        --do
    elseif code == AdsResultCode.kUnknownError then
        --do
    elseif code == AdsResultCode.kOfferWallOnPointsChanged then
        --do
    end
end

Ads = class()
function Ads:ctor()
	ads_plugin = AgentManager:getInstance():getAdsPlugin()
    if ads_plugin ~= nil then
        ads_plugin:setAdsListener(onAdsResult)
    end
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

function Ads:preloadAds(adType)
    if ads_plugin ~= nil then
        if ads_plugin:isAdTypeSupported(adType) then
            ads_plugin:preloadAds(adType)
        end
    end
end

function Ads:queryPoints()
    if ads_plugin ~= nil then
        local points = ads_plugin:queryPoints()
        print("points:"..points)
    end
end

function Ads:spendPoints(points)
    if ads_plugin ~= nil then
        ads_plugin:spendPoints(points)
    end
end