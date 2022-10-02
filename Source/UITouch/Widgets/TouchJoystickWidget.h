/**
 * 版权所有权: Aimo_皑墨
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UETouchPlugin
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */

#pragma once

#include "CoreMinimal.h"
#include "TouchWidget.h"
#include "UMG/Public/Components/SizeBox.h"
#include "UMG/Public/Components/Image.h"
#include "UMG/Public/Components/CanvasPanel.h"

#include "TouchJoystickWidget.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API UTouchJoystickWidget : public UTouchWidget
{
	GENERATED_BODY()
	


public:

	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		/** 缩放控件变量 */
		USizeBox* SizeBoxWidget;

	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		/** 包裹控件的视口 */
		UCanvasPanel* CanvasPanelWidget;

	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		/**  操控杆背景图片 */
		UImage* BackdropImageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** 操控杆背景图片设置 */
		FSlateBrush BackdropSlateBrush;

	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		/** 操控杆图片变量 */
		UImage* ControlImageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** 操控杆图片设置 */
		FSlateBrush ControlSlateBrush;

	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 触控索引 */
		uint8 TouchFingerIndex = 255;

	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		/** * Y轴倍数 */
		float YShaftTimes = -1.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 忽略值 */
		FVector2D IgnoreNumerical;

protected:

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;
	

public:

	virtual	void TouchIndex(FVector Moved, uint8 FingerIndex) override;

	virtual void TouchMoved(FVector Moved) override;

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 设置操控杆位置 */
		virtual void SetControlPosition(FVector2D Moved);

};
