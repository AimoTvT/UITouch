/**
 * Copyright: Aimo_皑墨
 * Release date: October 21, 2022
 * Do not steal or use it for profit
 * No modification is allowed to be published on the Internet without the person's consent
 * BiLiBiLi (哔哩哔哩) address: https://space.bilibili.com/146962867
 * making address: https://github.com/AimoTvT/UITouch
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!
 *
 * 版权所有权: Aimo_皑墨
 * 发布时间: 2022年10月21号
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UITouch
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */

#pragma once

#include "CoreMinimal.h"
#include "TouchJoystickWidget.h"
#include "TouchAdvancedJoystickWidget.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API UTouchAdvancedJoystickWidget : public UTouchJoystickWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		/**  加速图片 */
		UImage* UpSpeedImageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** 加速图片设置 */
		FSlateBrush UpSpeedSlateBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** 触发的加速图片设置 */
		FSlateBrush TriggerUpSpeedSlateBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 是否触发加速 */
		bool bTriggerUpSpeed = false;

protected:

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

public:

	virtual	void TouchIndex(FVector Moved, uint8 FingerIndex) override;

	virtual void TouchMoved(FVector Moved) override;

};
