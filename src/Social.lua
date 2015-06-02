require "ClassBase"

local social_plugin = nil

local function onSocialResult( code, msg )
	print("on social result listener.")
	print("code:"..code..",msg:"..msg)
	if code == SocialRetCode.kScoreSubmitSucceed then
		--do
	elseif code == SocialRetCode.kScoreSubmitfail then
		--do
	elseif code == SocialRetCode.kAchUnlockSucceed then
		--do
	elseif code == SocialRetCode.kAchUnlockFail then
		--do
	elseif code == SocialRetCode.kSocialSignInSucceed then
		--do
	elseif code == SocialRetCode.kSocialSignInFail then
		--do
	elseif code == SocialRetCode.kSocialSignOutSucceed then
		--do
	elseif code == SocialRetCode.kSocialSignOutFail then
		--do
	elseif code == SocialRetCode.kSocialGetGameFriends then
		--do
	end
end

Social = class()
function Social:ctor()
	social_plugin = AgentManager:getInstance():getSocialPlugin()
	if social_plugin ~= nil then
		social_plugin:setListener(onSocialResult)
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