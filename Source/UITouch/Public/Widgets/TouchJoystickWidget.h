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
#include "TouchWidget.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Components/CanvasPanel.h"

#include "TouchJoystickWidget.generated.h"

 /**
  *
  */
UCLASS()
class UITOUCH_API UTouchJoystickWidget : public UTouchWidget
{
	GENERATED_BODY()



public:

	/** * 缩放控件变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<USizeBox> SizeBoxWidget;

	/** * 包裹控件的视口 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<UCanvasPanel> CanvasPanelWidget;

	/**  * 操控杆背景图片 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<UImage> BackdropImageWidget;

	/** * 操控杆图片变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<UImage> ControlImageWidget;

	/** * 操控杆背景图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush BackdropSlateBrush;

	/** * 操控杆图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush ControlSlateBrush;

	/** * 触控索引,255 = 空 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	uint8 TouchFingerIndex = 255;

	/** * Y轴倍数,-1符合直觉 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	float YShaftTimes = -1.0f;

	/** * 忽略值,XY < IgnoreNumerical && XY > IgnoreNumerical * -1,则返回0.0f */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	FVector2D IgnoreNumerical;

	/** * 摇杆动画倍数 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	float JoystickAnimationRangeMultiple = 1.0f;

	/** * 固定操纵杆 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bFixedJoystick;

	/** * 实时调度器(需要实时触发移动) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bTickDelegated;

	/** * 限制XY轴,0不限制,1限制X轴,2限制Y轴 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	uint8 ClampXY;

protected:

	virtual void NativePreConstruct() override;


public:

	virtual	bool TouchIndexLocation(const FVector& Location, uint8 FingerIndex) override;

	virtual void TouchMovedLocation(const FVector& Location) override;

	virtual void SetDisabled(bool bIsDisabled) override;

	/** * 设置操控杆位置 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetControlPosition(const FVector2D& Position);

	/** * 设置操控杆位置 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual FVector2D GetPositionScale(const FVector2D& Position);

};
