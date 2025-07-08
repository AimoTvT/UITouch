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
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"

UTouchWidget::UTouchWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//设置默认可视状态,不然无法触控
	SetVisibilityInternal(ESlateVisibility::Visible);
}


void UTouchWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	SetVisibleDisabled(GetIsEnabled()); //我不知道这是不是Bug,IsDesignTime()编辑器设计模式下,GetIsEnabled()永远是真,导致无法预览未启用图片,如果官方修复好了@我一下
}
void UTouchWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	//自动获取控制器里的触控组件
	GetWidgetTouchComponent();
}

void UTouchWidget::NativeDestruct()
{
	Super::NativeDestruct();
	SetWidgetTouchComponent(nullptr);
}


void UTouchWidget::SetIsEnabled(bool bInIsEnabled)
{
	Super::SetIsEnabled(bInIsEnabled);
	SetVisibleDisabled(GetIsEnabled(), true);
}

UUserWidget* UTouchWidget::GetParentUserWidget()
{
	return ParentUserWidget;
}

void UTouchWidget::SetParentUserWidget(UUserWidget* InUserWidget)
{
	ParentUserWidget = InUserWidget;
}

bool UTouchWidget::TouchTriggerLocation(const FVector& Location, const ETouchState TouchState)
{
	switch (TouchState)
	{
	case ETouchState::Released:
		return TouchReleasedLocation(Location);
	case ETouchState::Pressed:
		return TouchPressedLocation(Location);
	case ETouchState::Moved:
		TouchMovedLocation(Location);
		return true;
	case ETouchState::Canceled:
		break;
	default: 
		return false;
	}
	return false;
}

bool UTouchWidget::TouchPressedLocation(const FVector& Location)
{
	if (TriggerPriorityIndex == 255 && !IsAllowTouch(Location))  /** * 是否进入触控区域 */
	{
		return false;
	}
	LastTriggerLocation = Location;
	OnTouchLocationState.Broadcast(LastTriggerLocation, ETouchState::Pressed); /** * 触发触摸位置 */
	TriggerIndexAnimation(0);
	return true;
}

void UTouchWidget::TouchPressedLocation_Event(const FVector& Location)
{
	if (TriggerPriorityIndex == 255 && !IsAllowTouch(Location))  /** * 是否进入触控区域 */
	{
		TouchPressedLocation(Location);
		return;
	}
}

void UTouchWidget::TouchMovedLocation(const FVector& Location)
{
	if (!GetIsEnabled() || GetVisibility() != ESlateVisibility::Visible)  /** * 是否启用,只有可视才能互交 */
	{
		return;
	}
	LastTriggerLocation = Location;
	/** * 子类继承重写使用 */
}

void UTouchWidget::TouchReleasedLocation_Event(const FVector& Location)
{
	TouchReleasedLocation(Location);
}

bool UTouchWidget::TouchReleasedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (TriggerTouchIndex != TouchIndex)
	{
		return false;
	}
	return true;
}

FVector2D UTouchWidget::GetLocalPositionAndParentPosition()
{
	const FGeometry& CachedGeometry = GetCachedGeometry();
	FVector2D Offset = CachedGeometry.GetLocalPositionAtCoordinates({ 0.0,0.0 });
	const UWidget* Parent = GetParent();
	while (Parent)
	{
		Offset += Parent->GetPaintSpaceGeometry().GetLocalPositionAtCoordinates({ 0.0,0.0 });
		Parent = Parent->GetParent();
	}
	if (ParentUserWidget)
	{
		Parent = ParentUserWidget;
		while (Parent)
		{
			Offset += Parent->GetPaintSpaceGeometry().GetLocalPositionAtCoordinates({ 0.0,0.0 });
			Parent = Parent->GetParent();
		}
	}
	return Offset + CustomOffsetPosition;
}

bool UTouchWidget::UpdateCacheLocation(const FVector& Location)
{
	const FGeometry& CachedGeometry = GetCachedGeometry();
	const float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this); /** * 视口触控缩放 */
	// 计算控件在视口空间中的绝对位置和大小
	const FVector2D LocalSize = CachedGeometry.GetLocalSize() * ViewportScale * GetRenderTransform().Scale;
	// 缓存需要的变量
	LocalWidgetPosition = GetLocalPositionAndParentPosition(); // 控件左上角屏幕位置
	LocalCentreWidgetPosition = LocalWidgetPosition + LocalSize * 0.5f; // 控件中心屏幕位置
    
	// 计算触摸位置在控件局部空间中的偏移
	TriggerOffsetPosition = FVector2D(Location) / ViewportScale - LocalWidgetPosition;
	return true;
}

/** * 判断是否触控位置是否进入触控区域 */

bool UTouchWidget::IsTouchLocation(const FVector& Location)
{
	const float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this); /** * 视口触控缩放 */
	// 获取控件的几何信息（包含所有变换和视口缩放）
	const FGeometry& CachedGeometry = GetCachedGeometry();
	// 更新缓存位置
	UpdateCacheLocation(Location);
	// 计算控件在视口空间中的绝对位置和大小
	const FVector2D LocalSize = CachedGeometry.GetLocalSize() * ViewportScale * GetRenderTransform().Scale;
	const FVector2D TransformLocalWidgetPosition = LocalWidgetPosition * ViewportScale - LocalSize / 4 * (GetRenderTransform().Scale - 1); /** * 计算缩放偏移 */
	return Location.X >= TransformLocalWidgetPosition.X && Location.X <= TransformLocalWidgetPosition.X + LocalSize.X  \
		&& Location.Y >= TransformLocalWidgetPosition.Y && Location.Y <= TransformLocalWidgetPosition.Y + LocalSize.Y; // \是链接下一行 后面不许有空格
}

bool UTouchWidget::IsAllowTouch(const FVector& Location)
{
	if (!GetIsEnabled() || GetVisibility() != ESlateVisibility::Visible)  /** * 是否启用,只有可视才能互交 */
	{
		return false;
	}
	if (TriggerTouchIndex == 255 && IsTouchLocation(Location))
	{
		return true;
	}
	return false;
}

void UTouchWidget::SetVisibleDisabled(bool bVisible, bool bFlushInput)
{
}


void UTouchWidget::TriggerIndexAnimation(int Index)
{
	BPTriggerIndexAnimation(Index);
}

void UTouchWidget::ComponentDeactivated(UActorComponent* ActorComponent)
{
	if (WidgetTouchComponent == ActorComponent)
	{
		SetWidgetTouchComponent(nullptr);
	}
}

void UTouchWidget::SetTriggerPriorityIndex(uint8 PriorityIndex)
{
	if (GetWidgetTouchComponent())
	{
		if (TriggerPriorityIndex != 255)
		{
			WidgetTouchComponent->RemoveTouchWidget(this);
		}
		TriggerPriorityIndex = PriorityIndex;
		if (TriggerPriorityIndex != 255)
		{
			WidgetTouchComponent->AddTouchWidget(this, TriggerPriorityIndex);
		}
	}
}

UTouchComponent* UTouchWidget::GetWidgetTouchComponent()
{
	if (WidgetTouchComponent)
	{
		return WidgetTouchComponent;
	}
	if (GetOwningPlayer())
	{
		if (UActorComponent* ActorComponent = GetOwningPlayer()->GetComponentByClass(UTouchComponent::StaticClass()))
		{
			SetWidgetTouchComponent(Cast<UTouchComponent>(ActorComponent));
			return WidgetTouchComponent;
		}
		UE_LOG(LogTemp, Warning, TEXT("[UTouchWidget] The UTouchComponent failed to be obtained. It should be bound to the controller"));
	}
	return nullptr;
}

void UTouchWidget::SetWidgetTouchComponent(UTouchComponent* InTouchComponent)
{
	if (WidgetTouchComponent != InTouchComponent)
	{
		if (WidgetTouchComponent)
		{
			if (TriggerPriorityIndex != 255)
			{
				WidgetTouchComponent->RemoveTouchWidget(this);
			}
			if (WidgetTouchComponent->OnTouchPressed.IsAlreadyBound(this, &UTouchWidget::TouchPressedLocation_Event))
			{
				WidgetTouchComponent->OnTouchPressed.RemoveDynamic(this, &UTouchWidget::TouchPressedLocation_Event);
			}
			if (WidgetTouchComponent->OnComponentDeactivated.IsAlreadyBound(this, &UTouchWidget::ComponentDeactivated))
			{
				WidgetTouchComponent->OnComponentDeactivated.RemoveDynamic(this, &UTouchWidget::ComponentDeactivated);
			}
		}
		WidgetTouchComponent = InTouchComponent;
		if (WidgetTouchComponent)
		{
			if (!bCustomTrigger)
			{
				if (TriggerPriorityIndex == 255)
				{
					WidgetTouchComponent->OnTouchPressed.AddDynamic(this, &UTouchWidget::TouchPressedLocation_Event);
				}
				else 
				{
					WidgetTouchComponent->AddTouchWidget(this, TriggerPriorityIndex);
				}
			}
			if (!WidgetTouchComponent->OnComponentDeactivated.IsAlreadyBound(this, &UTouchWidget::ComponentDeactivated))
			{
				WidgetTouchComponent->OnComponentDeactivated.AddDynamic(this, &UTouchWidget::ComponentDeactivated);
			}
		}
	}
}

void UTouchWidget::BindTouchPressedDelegate()
{
	if (WidgetTouchComponent && !WidgetTouchComponent->OnTouchReleased.IsAlreadyBound(this, &UTouchWidget::TouchReleasedLocation_Event))
	{
		WidgetTouchComponent->OnTouchPressed.AddDynamic(this, &UTouchWidget::TouchPressedLocation_Event);
	}
}

void UTouchWidget::RemoveTouchPressedDelegate()
{
	if (WidgetTouchComponent && WidgetTouchComponent->OnTouchReleased.IsAlreadyBound(this, &UTouchWidget::TouchReleasedLocation_Event))
	{
		WidgetTouchComponent->OnTouchPressed.RemoveDynamic(this, &UTouchWidget::TouchPressedLocation_Event);
	}
}

void UTouchWidget::BindTouchReleasedDelegate()
{
	if (WidgetTouchComponent && !WidgetTouchComponent->OnTouchReleased.IsAlreadyBound(this, &UTouchWidget::TouchReleasedLocation_Event))
	{
		WidgetTouchComponent->OnTouchReleased.AddDynamic(this, &UTouchWidget::TouchReleasedLocation_Event);
	}
}

void UTouchWidget::RemoveTouchReleasedDelegate()
{
	if (WidgetTouchComponent && WidgetTouchComponent->OnTouchReleased.IsAlreadyBound(this, &UTouchWidget::TouchReleasedLocation_Event))
	{
		WidgetTouchComponent->OnTouchReleased.RemoveDynamic(this, &UTouchWidget::TouchReleasedLocation_Event);
	}
}

bool UTouchWidget::BindTouchMoveDelegate(const uint8 TouchIndex)
{
	if (WidgetTouchComponent == nullptr)
	{
		return false;
	}
	switch (TouchIndex)
	{
	case 0:
		if (!WidgetTouchComponent->OnTouchMoved1.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved1.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 1:
		if (!WidgetTouchComponent->OnTouchMoved2.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved2.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 2:
		if (!WidgetTouchComponent->OnTouchMoved3.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved3.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 3:
		if (!WidgetTouchComponent->OnTouchMoved4.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved4.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 4:
		if (!WidgetTouchComponent->OnTouchMoved5.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved5.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 5:
		if (!WidgetTouchComponent->OnTouchMoved6.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved6.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 6:
		if (!WidgetTouchComponent->OnTouchMoved7.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved7.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 7:
		if (!WidgetTouchComponent->OnTouchMoved8.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved8.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 8:
		if (!WidgetTouchComponent->OnTouchMoved9.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved9.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 9:
		if (!WidgetTouchComponent->OnTouchMoved10.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved10.AddDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	default:
		return false;
	}
	return false;
}

bool UTouchWidget::RemoveTouchMoveDelegate(const uint8 TouchIndex)
{if (WidgetTouchComponent == nullptr)
	{
		return false;
	}
	switch (TouchIndex)
	{
	case 0:
		if (WidgetTouchComponent->OnTouchMoved1.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved1.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 1:
		if (WidgetTouchComponent->OnTouchMoved2.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved2.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 2:
		if (WidgetTouchComponent->OnTouchMoved3.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved3.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 3:
		if (WidgetTouchComponent->OnTouchMoved4.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved4.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 4:
		if (WidgetTouchComponent->OnTouchMoved5.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved5.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 5:
		if (WidgetTouchComponent->OnTouchMoved6.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved6.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 6:
		if (WidgetTouchComponent->OnTouchMoved7.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved7.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 7:
		if (WidgetTouchComponent->OnTouchMoved8.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved8.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 8:
		if (WidgetTouchComponent->OnTouchMoved9.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved9.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	case 9:
		if (WidgetTouchComponent->OnTouchMoved10.IsAlreadyBound(this, &UTouchWidget::TouchMovedLocation))
		{
			WidgetTouchComponent->OnTouchMoved10.RemoveDynamic(this, &UTouchWidget::TouchMovedLocation); //绑定对接变量
		}
		break;
	default:
		return false;
	}
	return false;
}
