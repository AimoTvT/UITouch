/**
 * Copyright: Aimo_皑墨
 * Open source protocol: MIT License
 * Open Source Date: October 2, 2022
 * BiLiBiLi (哔哩哔哩) address: https://space.bilibili.com/146962867
 * making address: https://github.com/AimoTvT/UITouch
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!
 *
 * 版权所有权: Aimo_皑墨
 * 开源协议: MIT License
 * 开源时间: 2022年10月2号
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

	/**  * 加速图片 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<UImage> UpSpeedImageWidget;

	/** * 加速图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush UpSpeedSlateBrush;

	/** * 触发的加速图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush TriggerUpSpeedSlateBrush;

	/** * 是否触发加速 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bTriggerUpSpeed = false;

	/** * 触发加速,如果值过高可能无法触发加速和加速图片显示 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	float TriggerUpSpeedValue = 1.5f;

	/** * XShowUpSpeedValue 在 (X * -1)~ X 值内,显示加速UI */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	float XShowUpSpeedValue = 0.5f;

	/** * Y > YShowUpSpeedValue 值,显示加速UI */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	float YShowUpSpeedValue = 0.2f;

protected:

	virtual void NativePreConstruct() override;

public:

	virtual	void TouchIndexLocation(const FVector& Location, uint8 FingerIndex) override;

	virtual void TouchMovedLocation(const FVector& Location) override;

	virtual void SetDisabled(bool bIsDisabled) override;

};
