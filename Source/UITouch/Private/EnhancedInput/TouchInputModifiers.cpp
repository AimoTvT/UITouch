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

#include "EnhancedInput/TouchInputModifiers.h"

 /*  //暂时停用修改
 virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override
 {
	 EDataValidationResult Result = CombineDataValidationResults(Super::IsDataValid(Context), EDataValidationResult::Valid);

	 // You cannot scale a boolean value
	 if (UInputAction* IA = Cast<UInputAction>(GetOuter()))
	 {
		 if (IA->ValueType == EInputActionValueType::Boolean)
		 {
			 Result = EDataValidationResult::Invalid;
			 Context.AddError(LOCTEXT("InputScalarInvalidActionType", "A Scalar modifier cannot be used on a 'Boolean' input action"));
		 }
	 }

	 return Result;
 };
 */

FInputActionValue UInputModifierAddScalar::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	// Don't try and scale bools
	if (ensureMsgf(CurrentValue.GetValueType() != EInputActionValueType::Boolean, TEXT("Scale modifier doesn't support boolean values.")))
	{ //改动为添加
		return CurrentValue.Get<FVector>() + Scalar;
	}
	return CurrentValue;
};