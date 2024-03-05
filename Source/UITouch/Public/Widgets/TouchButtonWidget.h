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


#include "TouchButtonWidget.generated.h"

 /**
  *
  */
UCLASS()
class UITOUCH_API UTouchButtonWidget : public UTouchWidget
{
	GENERATED_BODY()

public:

	/** * 缩放控件变量 */
	UPROPERTY(BlueprintReadWrite, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<USizeBox> SizeBoxWidget;

	/** * 图像变量 */
	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "UITouch|Variable")
	TObjectPtr<UImage> ButtonImageWidget;

	/** * 图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush ButtonSlateBrush;

	/** * 图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush PressedButtonSlateBrush;

	/** * 触控索引,255=空 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	uint8 TouchFingerIndex = 255;

	/** * 切换按下模式 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bPressedHandover = false;

	/** * 按下 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bPressed = false;


public:

	virtual	bool TouchIndexLocation(const FVector& Location, uint8 FingerIndex) override;

	virtual void SetDisabled(bool bIsDisabled) override;

};
