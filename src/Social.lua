require "ClassBase"

local social_plugin = nil

local function onSocialListener(code, msg)
    cclog("code:%d, msg:%s", code, msg)
    if code == SocialRetCode.kScoreSubmitSucceed then
        --do
        cclog("submit score success!")
    end
end

Social = class()
function Social:ctor()
	social_plugin = AgentManager:getInstance():getSocialPlugin()
	if nil ~= social_plugin then
	    social_plugin:setListener(onSocialListener)
	end
end

function Social:submitScore()
	if social_plugin ~= nil then
        local score = 132   --score
        social_plugin:submitScore("friend", score)
	end
end

function Social:showLeaderboard()
	if social_plugin ~= nil then
        social_plugin:showLeaderboard("friend");
	end
end

function Social:unlockAchievement()
	if social_plugin ~= nil then
        local achInfo = {rank="friends"}
        social_plugin:unlockAchievement(achInfo);
	end
end

function Social:showAchievements()
	if social_plugin ~= nil then
	    social_plugin:showAchievements();
	end
end