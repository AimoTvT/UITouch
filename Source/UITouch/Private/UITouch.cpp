/**
 * Copyright: Aimo_皑墨
 * Release date: October 12, 2022
 * Do not steal or use it for profit
 * No modification is allowed to be published on the Internet without the person's consent
 * BiLiBiLi (哔哩哔哩) address: https://space.bilibili.com/146962867
 * making address: https://github.com/AimoTvT/UETouchPlugin
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!
 *
 * 版权所有权: Aimo_皑墨
 * 发布时间: 2022年10月12号
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UETouchPlugin
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */

#include "UITouch.h"

#define LOCTEXT_NAMESPACE "FUITouchModule"

void FUITouchModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FUITouchModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FUITouchModule, UITouch)