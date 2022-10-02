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

#include "TouchControlWidget.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API UTouchControlWidget : public UTouchWidget
{
	GENERATED_BODY()
	

public:

	UPROPERTY(BlueprintReadWrite, Meta = (BindWidget), Category = "Aimo|Variable")
		/** 缩放控件变量 */
		USizeBox* SizeBoxWidget;

	UPROPERTY(BlueprintReadOnly, Meta = (BindWidget), Category = "Aimo|Variable")
		/** 图像变量 */
		UImage* ImageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** 图片设置 */
		FSlateBrush SlateBrush;

	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 触控索引组 */
		TArray<uint8> TouchFingerIndexs;

	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 触控索引位置组 */
		TArray<FVector2D> TouchLocations;


protected:

	virtual void NativePreConstruct() override;

public:

	virtual	void TouchIndex(FVector Moved, uint8 FingerIndex) override;

	virtual void TouchMoved(FVector Moved) override;

};
