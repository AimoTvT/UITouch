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

#include "TouchControlWidget.generated.h"

 /**
  *
  */
UCLASS()
class UITOUCH_API UTouchControlWidget : public UTouchWidget
{
	GENERATED_BODY()


public:

	/** * 缩放控件变量 */
	UPROPERTY(BlueprintReadWrite, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<USizeBox> SizeBoxWidget;

	/** * 图像变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<UImage> ControlImageWidget;

	/** * 图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush ControlSlateBrush;

	/** * 触控索引位置组,255 = 空 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	TArray<FVector> TouchLocations;

	/** 限制差值距离,0.0代表不启用,中间位置变化过大会忽略*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	float ClampDifferenceDistance = 100.0f;

	/** 距离倍数,影响反馈值,一般用于灵敏度调节 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	float DistanceMultiple = 1.0f;

protected:

	virtual void NativeConstruct() override;

public:

	virtual void SetWidgetTouchComponent(UTouchComponent* InTouchComponent) override;
	
	virtual	bool TouchPressedLocation(const FVector& Location) override;

	virtual void TouchMovedLocation(const FVector& Location) override;

	virtual	bool TouchReleasedLocation(const FVector& Location) override;

	virtual void SetVisibleDisabled(bool bVisible, bool bFlushInput) override;

	/** * 获取触控位置组有效数量 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual int GetTouchLocationsTouchNum();
	
	/** * 是否触控位置组还有触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool IsTouchLocationsTouch();

};
