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
#include "Blueprint/WidgetLayoutLibrary.h"


// Sets default values for this component's properties
UTouchComponent::UTouchComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	TouchIndexs.SetNum(10); /** * 设置触控位置组的最大索引数 */
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

void UTouchComponent::TouchIndexLocation(FVector Location, uint8 FingerIndex)
{
	switch (int(Location.Z))
	{
	case 0:
		TouchIndexs[FingerIndex] = 0;
		OnTriggerTouch.Broadcast(Location, FingerIndex);
		break;
	case 1:
		TouchIndexs[FingerIndex] = 1;
		OnTriggerTouch.Broadcast(Location, FingerIndex);
		break;
	case 2:
		TouchIndexLocationDelegate(Location, FingerIndex);
		break;
	default:
		TouchIndexs[FingerIndex] = 0;
		OnTriggerTouch.Broadcast(Location, FingerIndex);
		break;
	}
}


void UTouchComponent::TouchIndexLocationDelegate(FVector Location, uint8 FingerIndex)
{
	Location.Z = FingerIndex;
	switch (FingerIndex)
	{
	case 0:
		OnMovedTouch1.Broadcast(Location);
		break;
	case 1:
		OnMovedTouch2.Broadcast(Location);
		break;
	case 2:
		OnMovedTouch3.Broadcast(Location);
		break;
	case 3:
		OnMovedTouch4.Broadcast(Location);
		break;
	case 4:
		OnMovedTouch5.Broadcast(Location);
		break;
	case 5:
		OnMovedTouch6.Broadcast(Location);
		break;
	case 6:
		OnMovedTouch7.Broadcast(Location);
		break;
	case 7:
		OnMovedTouch8.Broadcast(Location);
		break;
	case 8:
		OnMovedTouch9.Broadcast(Location);
		break;
	case 9:
		OnMovedTouch10.Broadcast(Location);
		break;
	default:
		break;
	}
}

bool UTouchComponent::IsClamp(FVector2D& A, FVector2D& B)
{
	return A.X >= 0 && A.X <= B.X && A.Y >= 0 && A.Y <= B.Y;
}

TArray<uint8> UTouchComponent::NoInputTouchIndex(APlayerController* PlayerController)
{

	FVector2D Vector;
	FVector2D Vector2 = UWidgetLayoutLibrary::GetViewportSize(GetWorld());
	bool bIsCurrentlyPressed;
	TArray<uint8> Indexs;
	if (PlayerController && PlayerController->PlayerInput)
	{
		for (size_t i = 0; i < TouchIndexs.Num(); i++)
		{
			PlayerController->GetInputTouchState(static_cast<ETouchIndex::Type>(i), Vector.X, Vector.Y, bIsCurrentlyPressed);
			if (TouchIndexs[i] && bIsCurrentlyPressed == false || IsClamp(Vector, Vector2) == false)
			{
				Indexs.Add(i);
			}
		}
	}
	return Indexs;
}

bool UTouchComponent::DelegateBind(uint8 FingerIndex, bool bDelegateBind, UObject* InFunctionObject, const FName& InFunctionName)
{
	if (InFunctionObject == nullptr)
	{
		return false;
	}
	FScriptDelegate ScriptDelegate; //建立对接变量
	ScriptDelegate.BindUFunction(InFunctionObject, InFunctionName); //对接变量绑定函数
	switch (FingerIndex)
	{
		case 0:
			if (bDelegateBind)
			{
				OnMovedTouch1.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch1.Remove(ScriptDelegate);
			}
			break;
		case 1:
			if (bDelegateBind)
			{
				OnMovedTouch2.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch2.Remove(ScriptDelegate);
			}
			break;
		case 2:
			if (bDelegateBind)
			{
				OnMovedTouch3.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch3.Remove(ScriptDelegate);
			}
			break;
		case 3:
			if (bDelegateBind)
			{
				OnMovedTouch4.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch4.Remove(ScriptDelegate);
			}
			break;
		case 4:
			if (bDelegateBind)
			{
				OnMovedTouch5.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch5.Remove(ScriptDelegate);
			}
			break;
		case 5:
			if (bDelegateBind)
			{
				OnMovedTouch6.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch6.Remove(ScriptDelegate);
			}
			break;
		case 6:
			if (bDelegateBind)
			{
				OnMovedTouch7.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch7.Remove(ScriptDelegate);
			}
			break;
		case 7:
			if (bDelegateBind)
			{
				OnMovedTouch8.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch8.Remove(ScriptDelegate);
			}
			break;
		case 8:
			if (bDelegateBind)
			{
				OnMovedTouch9.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch9.Remove(ScriptDelegate);
			}
			break;
		case 9:
			if (bDelegateBind)
			{
				OnMovedTouch10.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnMovedTouch10.Remove(ScriptDelegate);
			}
			break;
		case 10:
			if (bDelegateBind)
			{
				OnTriggerTouch.Add(ScriptDelegate); //绑定对接变量
			}
			else
			{
				OnTriggerTouch.Remove(ScriptDelegate);
			}
			break;
		default:
			FingerIndex = 255;
			break;
	}
	return FingerIndex != 255;
}




