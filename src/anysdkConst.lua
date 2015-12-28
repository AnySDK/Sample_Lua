Plugin_type = {
    kPluginAds          = 16,
    kPluginAnalytics    = 1,
    kPluginIAP          = 8,
    kPluginShare        = 4,
    kPluginUser         = 32,
    kPluginSocial       = 2,
    kPluginPush         = 64,
    kPluginCrash        = 128,
    kPluginCustom       = 256,
    kPluginREC          = 512
}

RECResultCode = {
    kRECInitSuccess     = 0,                --enum value is callback of succeeding in initing sdk . */
    kRECInitFail        = 1,                --enum is callback of failing to init sdk. */
    kRECStartRecording  = 2,                --enum  value is callback of starting to record. */
    kRECStopRecording   = 3,                --enum value is callback of stoping to record. */
    kRECPauseRecording  = 4,                --enum  value is callback of pausing to record. */
    kRECResumeRecording = 5,                --enum value is callback of resuming to record. */
    kRECEnterSDKPage    = 6,                --enum  value is callback of failing to init sdk. */
    kRECQuitSDKPage     = 7,                --enum  value is callback of entering SDK`s page. */
    kRECShareSuccess    = 8,                --enum value is callback of  quiting SDK`s page. */
    kRECShareFail       = 9,                --enum value is callback of failing to share. */
    kRECExtension       = 90000             --enum value is  extension code . */
} ;

CustomResultCode = {
    kCustomExtension = 80000 --enum value is  extension code .
}--custom result code

-- for ads
AdsResultCode = {
    kAdsReceived                 = 0,       --enum value is callback of ad is received at center.
    kAdsShown                    = 1,       --enum value is callback of advertisement shown.
    kAdsDismissed                = 2,       --enum value is callback of advertisement dismissed.
    kPointsSpendSucceed          = 3,       --enum value is callback of points spend succeed.
    kPointsSpendFailed           = 4,       --enum value is callback of points spend failed.
    kNetworkError                = 5,       --enum value is callback of network error at center.
    kUnknownError                = 6,       --enum value is callback of unknown error.
    kOfferWallOnPointsChanged    = 7,       --enum value is callback of changing the point of offerwall.
    kAdsExtension                = 40000    --enum value is extension code.
}	--ads result code

AdsPos = {
    kPosCenter         = 0,   --enum the toolbar is at center.
    kPosTop            = 1,   --enum the toolbar is at top.
    kPosTopLeft        = 2,	  --enum the toolbar is at topleft.
    kPosTopRight       = 3,	  --enum the toolbar is at topright.
    kPosBottom         = 4,   --enum the toolbar is at bottom.
    kPosBottomLeft     = 5,	  --enum the toolbar is at bottomleft.
    kPosBottomRight    = 6    --enum the toolbar is at bottomright.
}	--ads pos

AdsType = {
	AD_TYPE_BANNER        = 0,   --enum value is banner ads.
	AD_TYPE_FULLSCREEN    = 1,   --enum value is fullscreen ads.
	AD_TYPE_MOREAPP       = 2,   --enum value is moreapp ads.
	AD_TYPE_OFFERWALL	  = 3    --enum value is offerwall ads.
}	--ads type

--for pay result code
PayResultCode = {
    kPaySuccess                      = 0,       --enum value is callback of succeeding in paying.
    kPayFail                         = 1,       --enum value is callback of failing to pay.
    kPayCancel                       = 2,       --enum value is callback of canceling to pay.
    kPayNetworkError                 = 3,       --enum value is callback of network error.
    kPayProductionInforIncomplete    = 4,       --enum value is callback of incomplete info.
	kPayInitSuccess                  = 5,       --enum value is callback of succeeding in initing sdk.
	kPayInitFail                     = 6,       --enum value is callback of failing to init sdk.
	kPayNowPaying                    = 7,       --enum value is callback of paying now.
	kPayRechargeSuccess              = 8,       --enum value is callback of succeeding in recharging.
    kPayExtension                    = 30000    --enum value is extension code.
}

RequestResultCode = {
  	kRequestSuccess                  = 31000,/**< enum value is callback of succeeding in paying . */
    kRequestFail                     = 31001  /**< enum value is callback of failing to pay . */
} 

-- for push action result code
PushActionResultCode = {
	kPushReceiveMessage    = 0,       --enum value is callback of receiving message.
	kPushExtensionCode     = 60000    --enum value is extension code.
}

-- for share result code
ShareResultCode = {
    kShareSuccess         = 0,       --enum value is callback of succeeding in sharing.
    kShareFail            = 1,       --enum value is callback of failing to share.
    kShareCancel          = 2,       --enum value is callback of canceling to share.
    kShareNetworkError    = 3,       --enum value is callback of network error.
    kShareExtension       = 10000    --enum value is extension code.
}

--for social ret code
SocialRetCode = {
	-- code for leaderboard feature
	kScoreSubmitSucceed      = 1,       --enum value is callback of succeeding in submiting.
    kScoreSubmitfail         = 2,       --enum value is callback of failing to submit.
    -- code for achievement feature
    kAchUnlockSucceed        = 3,       --enum value is callback of succeeding in unlocking.
    kAchUnlockFail           = 4,       --enum value is callback of failing to unlock.
    kSocialSignInSucceed     = 5,       --enum value is callback of succeeding to login.
    kSocialSignInFail        = 6,       --enum value is callback of failing to login.
    kSocialSignOutSucceed    = 7,       --enum value is callback of succeeding in logouting.
    kSocialSignOutFail       = 8,       --enum value is callback of failing to logout.
    kSocialGetGameFriends    = 9,       --enum value is callback of getting game friends.
    kSocialExtensionCode     = 20000    --enum value is extension code.
}

-- for user action result code
UserActionResultCode = {
	kInitSuccess             = 0,       --enum value is callback of succeeding in initing sdk.
	kInitFail                = 1,       --enum value is callback of failing to init sdk.
    kLoginSuccess            = 2,       --enum value is callback of succeeding in logining.
    kLoginNetworkError       = 3,       --enum value is callback of network error.
    kLoginNoNeed             = 4,       --enum value is callback of no need login.
    kLoginFail               = 5,       --enum value is callback of failing to login.
    kLoginCancel             = 6,       --enum value is callback of canceling to login.
    kLogoutSuccess           = 7,       --enum value is callback of succeeding in logouting.
    kLogoutFail              = 8,       --enum value is callback of failing to logout.
    kPlatformEnter           = 9,       --enum value is callback of after enter platform.
    kPlatformBack            = 10,      --enum value is callback of after exit antiAddiction.
    kPausePage               = 11,      --enum value is callback of after exit pause page.
    kExitPage                = 12,      --enum value is callback of after exit exit page.
    kAntiAddictionQuery      = 13,      --enum value is callback of after querying antiAddiction.
    kRealNameRegister        = 14,      --enum value is callback of after registering realname.
    kAccountSwitchSuccess    = 15,      --enum value is callback of succeeding in switching account.
    kAccountSwitchFail       = 16,      --enum value is callback of failing to switch account.
    kOpenShop                = 17,      --enum value is callback of opening the shop.
    kUserExtension           = 50000    --enum value is extension code.
}

-- for toolBar place
ToolBarPlace = {
    kToolBarTopLeft        = 1,   --enum the toolbar is at topleft.
    kToolBarTopRight       = 2,   --enum the toolbar is at topright.
    kToolBarMidLeft        = 3,   --enum the toolbar is at midleft.
    kToolBarMidRight       = 4,   --enum the toolbar is at midright.
    kToolBarBottomLeft     = 5,   --enum the toolbar is at bottomleft.
    kToolBarBottomRight    = 6    --enum the toolbar is at bottomright.
}

-------------for analytics---------------
AccountType = {
    ANONYMOUS        = 0,
    REGISTED         = 1,
    SINA_WEIBO       = 2,
    TENCENT_WEIBO    = 3,
    QQ               = 4,
    ND91             = 5
} 

AccountOperate = {
    LOGIN       = 0,
    LOGOUT      = 1,
    REGISTER    = 2
}

AccountGender = {
    MALE       = 0,
    FEMALE     = 1,
    UNKNOWN    = 2
}

TaskType = {
    GUIDE_LINE     = 0,
    MAIN_LINE      = 1,
    BRANCH_LINE    = 2,
    DAILY          = 3,
    ACTIVITY       = 4,
    OTHER          = 5
}
-------------for analytics---------------
