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

function Analytics:logEvent(eventID, paramMap)
	if analytics_plugin ~= nil then
		if paramMap == nil then
	    	analytics_plugin:logEvent(eventID)
	    else
	    	analytics_plugin:logEvent(eventID, paramMap)
	    end
	end
end

function Analytics:logTimedEventBegin(eventID)
	if analytics_plugin then
		analytics_plugin:logTimedEventBegin(eventID)
	end
end

function Analytics:logTimedEventEnd(eventID)
	if analytics_plugin then
		analytics_plugin:logTimedEventEnd(eventID)
	end
end

function Analytics:setAccount()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("setAccount") then
			local paramMap = {
					Account_Id = "123456",
					Account_Name = "test",
					Account_Type = tostring(AccountType.ANONYMOUS),
					Account_Level = "1",
					Account_Age = "1",
					Account_Operate = tostring(AccountOperate.LOGIN),
					Account_Gender = tostring(AccountGender.MALE),
					Server_Id = "1",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("setAccount", data)
		end
	end
end

function Analytics:onChargeRequest()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onChargeRequest") then
			local paramMap = {
					Order_Id = "123456",
					Product_Name = "60钻石",
					Currency_Amount = "6",
					Currency_Type = "CNY",
					Payment_Type = "1",
					Virtual_Currency_Amount = "6",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("onChargeRequest", data)
		end
	end
end

function Analytics:onChargeOnlySuccess()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onChargeOnlySuccess") then
			local paramMap = {
					Order_Id = "123456",
					Product_Name = "test",
					Currency_Amount = tostring(2.0),
					Currency_Type = "CNY",
					Payment_Type = "1",
					Virtual_Currency_Amount = tostring(100),
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("onChargeOnlySuccess", data)
		end
	end
end

function Analytics:onChargeSuccess()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onChargeSuccess") then
			local data = PluginParam:create("123456")
			analytics_plugin:callFuncWithParam("onChargeSuccess", data)
		end
	end
end

function Analytics:onChargeFail()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onChargeFail") then
			local paramMap = {
					Order_Id = "123456",
					Fail_Reason = "test",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("onChargeFail", data)
		end
	end
end

function Analytics:onPurchase()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onPurchase") then
			local paramMap = {
					Item_Id = "123456",
					Item_Type = "test",
					Item_Count = tostring(2),
					Vitural_Currency = "1",
					Currency_Type = "000000",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("onPurchase", data)
		end
	end
end

function Analytics:onUse()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onUse") then
			local paramMap = {
					Item_Id = "123456",
					Item_Type = "test",
					Item_Count = tostring(2),
					Use_Reason = "1",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("onUse", data)
		end
	end
end

function Analytics:onReward()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("onReward") then
			local paramMap = {
					Item_Id = "123456",
					Item_Type = "test",
					Item_Count = tostring(2),
					Use_Reason = "1",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("onReward", data)
		end
	end
end

function Analytics:startLevel()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("startLevel") then
			local paramMap = {
					Level_Id = "123456",
					Seq_Num = "1",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("startLevel", data)
		end
	end
end

function Analytics:finishLevel()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("finishLevel") then
			local data = PluginParam:create("123456")
			analytics_plugin:callFuncWithParam("finishLevel", data)
		end
	end
end

function Analytics:failLevel()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("failLevel") then
			local paramMap = {
					Level_Id = "123456",
					Fail_Reason = "test",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("failLevel", data)
		end
	end
end

function Analytics:startTask()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("startTask") then
			local paramMap = {
					Task_Id = "123456",
					Task_Type = tostring(TaskType.GUIDE_LINE),
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("startTask", data)
		end
	end
end

function Analytics:finishTask()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("finishTask") then
			local data = PluginParam:create("123456")
			analytics_plugin:callFuncWithParam("finishTask", data)
		end
	end
end

function Analytics:failTask()
	if analytics_plugin ~= nil then
		if analytics_plugin:isFunctionSupported("failTask") then
			local paramMap = {
					Task_Id = "123456",
					Fail_Reason = "test",
				}
			local data = PluginParam:create(paramMap)
			analytics_plugin:callFuncWithParam("failTask", data)
		end
	end
end