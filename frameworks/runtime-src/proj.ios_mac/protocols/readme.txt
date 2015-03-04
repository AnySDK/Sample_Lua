AnySDK_Framework_iOS_C++ 1.5.0

v1.5	— 2015.1.30
库更新：
1、新增AnySDK统计，该统计只是统计了接口调用的次数，以方便AnySDK产品的分析，默认是开启的，如果开发者介意改统计可以调用
AgentManager::getInstance()->setIsAnaylticsEnabled（false）关闭统计接口
2、新增getFrameworkVersion接口
