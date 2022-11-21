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

	PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ATouchPlayerController::TouchPressed);
	PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ATouchPlayerController::TouchReleased);
	PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &ATouchPlayerController::TouchMove);

}


void ATouchPlayerController::TouchPressed(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (TouchComponent)
	{
		TouchComponent->Touch(Location, FingerIndex);
	}
}

void ATouchPlayerController::TouchReleased(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (TouchComponent)
	{
		TouchComponent->Touch(Location, FingerIndex);
	}
}

void ATouchPlayerController::TouchMove(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (TouchComponent)
	{
		Location.Z = 2;
		TouchComponent->Touch(Location, FingerIndex);
	}
}

