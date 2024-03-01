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


#include "Widgets/TouchWidget.h"
#include "Components/PanelWidget.h"
#include "Components/TouchComponent.h"
#include "Kismet/KismetMathLibrary.h" //官方函数库
#include "Runtime/Engine/Public/DelayAction.h" //延迟的函数库
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"


void UTouchWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	SetDisabled(bDisabled);
}

void UTouchWidget::NativeConstruct()
{
	Super::NativeConstruct();

}

void UTouchWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if (bCustomTrigger == false)
	{
		BindTouchDelegate();
	}

}

void UTouchWidget::BindTouchDelegate()
{
	if (GetOwningPlayer())
	{
		UActorComponent* ActorComponent = GetOwningPlayer()->GetComponentByClass(UTouchComponent::StaticClass());
		if (ActorComponent)
		{
			UTouchComponent* TouchComponent = Cast<UTouchComponent>(ActorComponent);
			if (TouchComponent)
			{
				TouchComponent->DelegateBind(10, true, this, "TouchIndexLocation");
				FScriptDelegate ScriptDelegate; //建立对接变量
				ScriptDelegate.BindUFunction(this, "ComponentDeactivated"); //对接变量绑定函数
				TouchComponent->OnComponentDeactivated.Add(ScriptDelegate);
				return;
			}
		}
	}
	if (GetWorld())
	{
		FLatentActionManager& LatentActionManager = GetWorld()->GetLatentActionManager();
		FLatentActionInfo Latentinfo;
		Latentinfo.CallbackTarget = this;
		Latentinfo.ExecutionFunction = "BindTouchDelegate";
		Latentinfo.Linkage = 0;
		Latentinfo.UUID = UKismetMathLibrary::RandomIntegerInRange(0, 222);
		LatentActionManager.AddNewAction(this, Latentinfo.UUID, new FDelayAction(0.2, Latentinfo));
	}
}


void UTouchWidget::TouchIndexLocation(const FVector& Location, uint8 FingerIndex)
{
	if (IsTouchLocation(Location))
	{
		LastTriggerLocation = Location;
		LastTriggerLocation.Z = FingerIndex;
		OnTouchLocation.Broadcast(LastTriggerLocation); /** * 触发触摸位置 */
		TriggerInedxAnimation(0);
	}
}

void UTouchWidget::SetIndexTouchDelegate(bool bDelegateBind, uint8 FingerIndex)
{
	UTouchComponent* TouchComponent = Cast<UTouchComponent>(GetOwningPlayer()->GetComponentByClass(UTouchComponent::StaticClass()));
	if (TouchComponent)
	{
		TouchComponent->DelegateBind(FingerIndex, bDelegateBind, this, "TouchMovedLocation");
	}
}

void UTouchWidget::TouchMovedLocation(const FVector& Location)
{
	LastTriggerLocation = Location;
	/** * 子类继承重写使用 */
}

FVector2D UTouchWidget::GetLocalPosition()
{
	FVector2D Offset = GetPaintSpaceGeometry().GetLocalPositionAtCoordinates({ 0.0,0.0 });
	UWidget* Parent = GetParent();
	while (Parent)
	{
		Offset += Parent->GetPaintSpaceGeometry().GetLocalPositionAtCoordinates({ 0.0,0.0 });
		Parent = Parent->GetParent();
	}
	if (ParentWidget)
	{
		Parent = ParentWidget;
		while (Parent)
		{
			Offset += Parent->GetPaintSpaceGeometry().GetLocalPositionAtCoordinates({ 0.0,0.0 });
			Parent = Parent->GetParent();
		}
	}
	return Offset + CustomOffsetPosition;
}

/** * 判断是否触控位置是否进入触控区域 */

bool UTouchWidget::IsTouchLocation(const FVector& Location)
{
	float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this); /** * 视口触控缩放 */
	FVector2D SizeLocation = GetPaintSpaceGeometry().GetLocalSize() * ViewportScale * GetRenderTransform().Scale; /** * 获取控件大小 */
	LocalWidgetPosition = GetLocalPosition(); /** * 获取控件左上角位置 */
	LocalCentreWidgetPosition = LocalWidgetPosition + SizeLocation / 2;
	TriggerOffsetPosition = FVector2D(Location) / ViewportScale - LocalWidgetPosition;
	FVector2D TLocalWidgetPosition = LocalWidgetPosition * ViewportScale - SizeLocation / 4 * (GetRenderTransform().Scale - 1); /** * 计算缩放偏移 */
	return Location.X >= TLocalWidgetPosition.X && Location.X <= TLocalWidgetPosition.X + SizeLocation.X  \
		&& Location.Y >= TLocalWidgetPosition.Y && Location.Y <= TLocalWidgetPosition.Y + SizeLocation.Y; // \是链接下一行 后面不许有空格
}

void UTouchWidget::SetDisabled(bool bIsDisabled)
{
	bDisabled = bIsDisabled;
}

void UTouchWidget::TriggerInedxAnimation(int Index)
{
	BPTriggerInedxAnimation(Index);
}

void UTouchWidget::ComponentDeactivated(UActorComponent* ActorComponent)
{
	BindTouchDelegate();
}


