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
 //EnhancedInput
#include "InputModifiers.h"
#include "TouchInputModifiers.generated.h"

/**
 *  暂时停用

UCLASS()
class UITOUCH_API UTouchInputModifiers : public UInputModifier
{
	GENERATED_BODY()

};
*/

/** 添加修改器
	*  添加对应的标量来做标记
	*/
UCLASS(NotBlueprintable, MinimalAPI, meta = (DisplayName = "AddScalar"))
class UInputModifierAddScalar : public UInputModifier
{
	GENERATED_BODY()

public:

#if WITH_EDITOR
	/* //暂时停用修改
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
	*/
#endif

	// TODO: Detail customization to only show modifiable axes for the relevant binding? This thing has no idea what it's bound to...
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Settings)
	FVector Scalar = FVector::OneVector;

protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override;
};