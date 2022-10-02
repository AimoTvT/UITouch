/**
 * 版权所有权: Aimo_皑墨
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UETouchPlugin
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */


#include "TouchComponent.h"

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






