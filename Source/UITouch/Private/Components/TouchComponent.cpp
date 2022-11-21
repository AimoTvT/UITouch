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


#include "Components/TouchComponent.h"

// Sets default values for this component's properties
UTouchComponent::UTouchComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTouchComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTouchComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTouchComponent::Touch(FVector Moved, uint8 FingerIndex)
{
	switch (int(Moved.Z))
	{
	case 0:
		OnPressedTouch.Broadcast(Moved, FingerIndex);
		TouchIndex(Moved, FingerIndex);
		break;
	case 1:
		OnPressedTouch.Broadcast( Moved, FingerIndex);
		TouchIndex(Moved, FingerIndex);
		break;
	case 2:
		//OnPressedTouch.Broadcast(true, Moved, FingerIndex);
		TouchIndex(Moved, FingerIndex);
		break;
	default:
		OnPressedTouch.Broadcast( Moved, FingerIndex);
		break;
	}
}


void UTouchComponent::TouchIndex(FVector Moved, uint8 FingerIndex)
{
	Moved.Z = FingerIndex;
	switch (FingerIndex)
	{
	case 0:
		OnTouch1.Broadcast(Moved);
		break;
	case 1:
		OnTouch2.Broadcast(Moved);
		break;
	case 2:
		OnTouch3.Broadcast(Moved);
		break;
	case 3:
		OnTouch4.Broadcast(Moved);
		break;
	case 4:
		OnTouch5.Broadcast(Moved);
		break;
	case 5:
		OnTouch6.Broadcast(Moved);
		break;
	case 6:
		OnTouch7.Broadcast(Moved);
		break;
	case 7:
		OnTouch8.Broadcast(Moved);
		break;
	case 8:
		OnTouch9.Broadcast(Moved);
		break;
	case 9:
		OnTouch10.Broadcast(Moved);
		break;
	default:
		break;
	}
}






