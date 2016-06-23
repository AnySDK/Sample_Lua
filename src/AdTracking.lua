require "ClassBase"

local adtracking_plugin = nil

AdTracking = class()
function AdTracking:ctor()
	adtracking_plugin = AgentManager:getInstance():getAdTrackingPlugin()
end

function AdTracking:onRegister()
	if adtracking_plugin ~= nil then
	    adtracking_plugin:onRegister("userid")
	end
end

function AdTracking:onLogin()
	if adtracking_plugin ~= nil then
		local paramMap = {
        	User_Id = "123456",
        	Role_Id = "test",
        	Role_Name = "test"
		}
	    adtracking_plugin:onLogin(paramMap)
	end
end

function AdTracking:onPay()
	if adtracking_plugin ~= nil then
		local date = os.date("%Y-%m-%d %H:%M:%S");
	    local paramMap = {
        	User_Id = "123456",
        	Order_Id = tostring(date),
        	Currency_Amount = "5",
        	Currency_Type ="CNY",
        	Payment_Type = "test",
        	Payment_Time =  tostring(date)
        };
	    adtracking_plugin:onPay(paramMap)
	end
end

function AdTracking:trackEvent()
	if adtracking_plugin ~= nil then
		adtracking_plugin:trackEvent("event_1")
        adtracking_plugin:trackEvent("event_2")
        adtracking_plugin:trackEvent("onCustEvent1")
		adtracking_plugin:trackEvent("onCustEvent2")
	end
end

function AdTracking:onCreateRole()
	if adtracking_plugin ~= nil and adtracking_plugin:isFunctionSupported("onCreateRole") then
		local paramMap = {
        	User_Id = "123456",
        	Role_Id = "test",
        	Role_Name = "test"
		}
		adtracking_plugin:trackEvent("onCreateRole", paramMap)
	end
end

function AdTracking:onLevelUp()
	if adtracking_plugin ~= nil and adtracking_plugin:isFunctionSupported("onLevelUp") then
		local paramMap = {
        	User_Id = "123456",
        	Role_Id = "test",
        	Role_Name = "test",
        	Level = "10"
		}
		adtracking_plugin:trackEvent("onLevelUp", paramMap)
	end
end

function AdTracking:onStartToPay()
	if adtracking_plugin ~= nil and adtracking_plugin:isFunctionSupported("onStartToPay") then
		local date=os.date("%Y-%m-%d %H:%M:%S");
	    local paramMap = {
        	User_Id = "123456",
        	Order_Id = tostring(date),
        	Currency_Amount = "5",
        	Currency_Type ="CNY",
        	Payment_Type = "test",
        	Payment_Time =  tostring(date)
        };
		adtracking_plugin:trackEvent("onStartToPay", paramMap)
	end
end