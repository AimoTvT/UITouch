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
#include "GameFramework/PlayerController.h"
#include "Components/TouchComponent.h"

//EnhancedInput
#include "InputAction.h"
#include "InputModifiers.h"


#include "TouchPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API ATouchPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:

	ATouchPlayerController();

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Aimo|Variable")
		TObjectPtr <UTouchComponent> TouchComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EnhancedInput|Action", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInputAction> InputActionTouch;
	

protected:

	/** 重写 玩家输入 */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 触摸按下1 */
		virtual void IA_TouchPressed(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 触摸松开1 */
		virtual void IA_TouchReleased(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 触摸移动1 */
		virtual void IA_TouchMove(const FInputActionValue& Value);




};


/** Scalar
	*  Scales input by a set factor per axis
	*/
UCLASS(NotBlueprintable, MinimalAPI, meta = (DisplayName = "AddScalar"))
class UInputModifierAddScalar : public UInputModifier
{
	GENERATED_BODY()

public:

#if WITH_EDITOR
	/*
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
#endif

	// TODO: Detail customization to only show modifiable axes for the relevant binding? This thing has no idea what it's bound to...
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Settings)
	FVector Scalar = FVector::OneVector;

protected:
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) override
	{
		// Don't try and scale bools
		if (ensureMsgf(CurrentValue.GetValueType() != EInputActionValueType::Boolean, TEXT("Scale modifier doesn't support boolean values.")))
		{
			return CurrentValue.Get<FVector>() + Scalar;
		}
		return CurrentValue;
	};
};

