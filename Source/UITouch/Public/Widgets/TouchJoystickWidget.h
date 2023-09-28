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

	/** 缩放控件变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		USizeBox* SizeBoxWidget;

	/** 包裹控件的视口 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		UCanvasPanel* CanvasPanelWidget;

	/**  操控杆背景图片 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		UImage* BackdropImageWidget;

	/** 操控杆背景图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FSlateBrush BackdropSlateBrush;

	/** 操控杆图片变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		UImage* ControlImageWidget;

	/** 操控杆图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FSlateBrush ControlSlateBrush;

	/** * 触控索引 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		uint8 TouchFingerIndex = 255;

	/** * Y轴倍数 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		float YShaftTimes = -1.0f;

	/** * 忽略值 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FVector2D IgnoreNumerical;

	/** * 摇杆动画倍数 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		float JoystickAnimationRangeMultiple = 1.0f;

	/** * 固定操纵杆 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		bool bFixedJoystick;

	/** * 实时调度器(需要实时触发移动) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		bool bTickDelegated;

protected:

	virtual void NativePreConstruct() override;
	

public:

	virtual	void TouchIndex(const FVector& Moved, uint8 FingerIndex) override;

	virtual void TouchMoved(const FVector& Moved) override;

	virtual void SetDisabled(bool bIsDisabled) override;

	/** * 设置操控杆位置 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void SetControlPosition(const FVector2D& Moved);

	/** * 设置操控杆位置 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual FVector2D GetPositionScale(const FVector2D& Moved);

};
