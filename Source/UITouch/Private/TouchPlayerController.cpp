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


#include "TouchPlayerController.h"
#include "Components/InputComponent.h"

 //EnhancedInput
#include "EnhancedInputComponent.h"



ATouchPlayerController::ATouchPlayerController()
{
	TouchComponent = CreateDefaultSubobject<UTouchComponent>(TEXT("TouchComponent"));
	
}

void ATouchPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (IsLocalController())
	{
		if (InputComponent == nullptr)
		{
			InputComponent = NewObject<UInputComponent>(this);
		}
		SetupPlayerInputComponent(InputComponent);
	}
}
	

void ATouchPlayerController::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent); 

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		for (size_t i = 0; i < InputActionTouchs.Num(); i++)
		{
			if (InputActionTouchs[i])
			{
				EnhancedInputComponent->BindAction(InputActionTouchs[i], ETriggerEvent::Started, this, &ATouchPlayerController::IA_TouchPressed);
				EnhancedInputComponent->BindAction(InputActionTouchs[i], ETriggerEvent::Completed, this, &ATouchPlayerController::IA_TouchReleased);
				EnhancedInputComponent->BindAction(InputActionTouchs[i], ETriggerEvent::Triggered, this, &ATouchPlayerController::IA_TouchMove);
			}
		}
		
	}
}



void ATouchPlayerController::IA_TouchPressed(const FInputActionValue& Value)
{
	if (TouchComponent)
	{
		FVector Location = Value.Get<FVector>();
		uint8 FingerIndex = Location.Z;
		Location.Z = 1;
		TouchComponent->TouchIndexLocation(Location, FingerIndex);
	}
}

void ATouchPlayerController::IA_TouchReleased(const FInputActionValue& Value)
{
	if (TouchComponent)
	{
		FVector Location = Value.Get<FVector>();
		TArray<uint8> FingerIndexs = TouchComponent->NoInputTouchIndex(this);
		Location.Z = 0;
		for (size_t i = 0; i < FingerIndexs.Num(); i++)
		{
			TouchComponent->TouchIndexLocation(Location, FingerIndexs[i]);
		}
	}
}

void ATouchPlayerController::IA_TouchMove(const FInputActionValue& Value)
{
	if (TouchComponent)
	{
		FVector Location = Value.Get<FVector>();
		uint8 FingerIndex = Location.Z;
		Location.Z = 2;
		TouchComponent->TouchIndexLocation(Location, FingerIndex);
	}
}

