// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/TouchWidget.h"
#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "TouchDetectionWidget.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API UTouchDetectionWidget : public UTouchWidget
{
	GENERATED_BODY()

public:
	
	/** 缩放控件变量 */
	UPROPERTY(BlueprintReadWrite, Meta = (BindWidget), Category = "Aimo|Variable")
		USizeBox* SizeBoxWidget;

	/** 图像变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		UImage* ImageWidget;

	/** 图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FSlateBrush SlateBrush;

	/** 检测图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FSlateBrush DetectionSlateBrush;

	/** * 触控索引 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		uint8 TouchFingerIndex = 255;

	/** * 是否触控 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		bool bDetectionTouch;



public:

	virtual void TouchMoved(const FVector& Moved) override;

	virtual void SetDisabled(bool bIsDisabled) override;


	/** * 设置触发索引调用 255=取消 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void SetOnIndexTouchDelegate(uint8 FingerIndex);

};
