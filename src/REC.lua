
local rec_plugin = nil
local function onRECResult(code, msg )
    print(msg)
    if code == RECResultCode.kRECInitSuccess then
        --MessageBox(msg, "kRECInitSuccess")
    elseif code == RECResultCode.RECInitFail then
        --MessageBox(msg, "RECInitFail")
    elseif code == RECResultCode.kRECStartRecording then
        --MessageBox(msg, "kRECStartRecording")
    elseif code == RECResultCode.kRECStopRecording then
        --MessageBox(msg, "kRECStopRecording")
    elseif code == RECResultCode.kRECPauseRecording then
        --MessageBox(msg, "kRECPauseRecording")
    elseif code == RECResultCode.kRECResumeRecording then
        --MessageBox(msg, "kRECResumeRecording")
    elseif code == RECResultCode.kRECEnterSDKPage then
        --MessageBox(msg, "kRECEnterSDKPage")
    elseif code == RECResultCode.kRECQuitSDKPage then
        --MessageBox(msg, "kRECQuitSDKPage")
    elseif code == RECResultCode.kRECShareSuccess then
        --MessageBox(msg, "kRECShareSuccess")
    elseif code == RECResultCode.kRECShareFail then
        --MessageBox(msg, "kRECShareFail")
    end
end

REC= class()
function REC:ctor()
	rec_plugin = AgentManager:getInstance():getRECPlugin()
	if rec_plugin ~= nil then
		rec_plugin:setResultListener(onRECResult)
	end
end



function REC:startRecording(  )
	if rec_plugin ~= nil then
        rec_plugin:startRecording()
	end
end

function REC:stopRecording(  )
    if rec_plugin ~= nil then
        rec_plugin:stopRecording()
    end
end

function REC:share(  )
    if rec_plugin ~= nil then
        local info = {
            Video_Desc = "RECSDK是一个神奇的SDK",
            Video_Title = "RECSDK"
        }
        rec_plugin:share(info)
    end
end

function REC:pauseRecording(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("pauseRecording")then
        rec_plugin:callFuncWithParam("pauseRecording")
    end
end

function REC:resumeRecording(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("resumeRecording") then
        rec_plugin:callFuncWithParam("resumeRecording")
    end
end

function REC:isAvailable(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("isAvailable")then
        return rec_plugin:callBoolFuncWithParam("isAvailable")
    end
    return true
end

function REC:showToolBar(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("showToolBar")  then
        rec_plugin:callFuncWithParam("showToolBar")
    end
end

function REC:hideToolBar(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("hideToolBar")  then
        rec_plugin:callFuncWithParam("hideToolBar")
    end
end

function REC:isRecording(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("isRecording")  then
        return rec_plugin:callBoolFuncWithParam("isRecording")
    end
    return false
end

function REC:showVideoCenter(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("showVideoCenter") then
        rec_plugin:callFuncWithParam("showVideoCenter")
    end
end

function REC:enterPlatform(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("enterPlatform") then
        rec_plugin:callFuncWithParam("enterPlatform")
    end
end

function REC:setMetaData(  )
    if rec_plugin ~= nil and rec_plugin:isFunctionSupported("setMetaData") then
        local info = {
            ext = "RECSDK"
        }
        local data = PluginParam:create(info)
        rec_plugin:callFuncWithParam("setMetaData",data)
    end
end