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


#include "Widgets/TouchControlWidget.h"
#include "Components/CanvasPanelSlot.h"


void UTouchControlWidget::NativeConstruct()
{
	Super::NativeConstruct();
}


void UTouchControlWidget::SetWidgetTouchComponent(UTouchComponent* InTouchComponent)
{
	if (WidgetTouchComponent && WidgetTouchComponent != InTouchComponent)
	{
		for (size_t i = 0; i < TouchLocations.Num(); i++)
		{
			if (TouchLocations[i] != FVector(0.0f, 0.0f, -1.0f))
			{
				RemoveTouchMoveDelegate(static_cast<uint8>(TouchLocations[i].Z));
			}
		}
	}
	Super::SetWidgetTouchComponent(InTouchComponent);
}

bool UTouchControlWidget::TouchPressedLocation(const FVector& Location)
{
	BindTouchReleasedDelegate();
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (TouchLocations.IsValidIndex(TouchIndex))
	{
		TouchLocations[TouchIndex] = Location;
	}
	else
	{
		TouchLocations.SetNum(TouchIndex + 1);
		TouchLocations[TouchIndex] = Location;
	}
	BindTouchMoveDelegate(TouchIndex);
	LastTriggerLocation = Location;
	return true;
}


void UTouchControlWidget::TouchMovedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (TouchLocations.IsValidIndex(TouchIndex)) /** * 判断是否寻找成功 */
	{
		FVector TouchMovedLocation = (Location - TouchLocations[TouchIndex]) * DistanceMultiple;/** * 计算移动位置,并乘于距离倍数 */
		TouchLocations[TouchIndex] = Location; /** * 覆盖旧位置 */
		if (ClampDifferenceDistance != 0 && FVector2D(TouchMovedLocation).Size() > ClampDifferenceDistance)
		{
			return;
		}
		TouchMovedLocation.Z = Location.Z;
		OnTouchLocationState.Broadcast(TouchMovedLocation, ETouchState::Moved); /** * 分发移动位置 */
		LastTriggerLocation = Location;
	}
}

bool UTouchControlWidget::TouchReleasedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (TouchLocations.IsValidIndex(TouchIndex))
	{
		if (TouchLocations[TouchIndex].Z != Location.Z)
		{
			return false;
		}
		if (GetTouchLocationsTouchNum() <= 1)
		{
			RemoveTouchReleasedDelegate();
		}
	
		TouchLocations[TouchIndex] = FVector(0.0f,0.0f,-1.0f); /** * 清除触控位置组的位置 */
		RemoveTouchMoveDelegate(TouchIndex); /** * 解除绑定移动位置调度器 */
		return true;
	}
	return false;
}

void UTouchControlWidget::SetVisibleDisabled(bool bVisible, bool bFlushInput)
{
	Super::SetVisibleDisabled(bVisible, bFlushInput);
	if (bVisible)
	{
		if (ControlImageWidget)
		{
			ControlImageWidget->SetBrush(ControlSlateBrush);  /** * 设置背景的图片 */
		}
		TriggerIndexAnimation(0);
	}
	else
	{
		if (bFlushInput && IsDesignTime() == false)
		{
			for (size_t i = 0; i < TouchLocations.Num(); i++)
			{
				RemoveTouchMoveDelegate(static_cast<uint8>(TouchLocations[i].Z)); /** * 解除绑定移动位置调度器 */
			}
			TouchLocations.Empty(); /** * 并清除标记 */
		}
		if (ControlImageWidget)
		{
			ControlImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置背景的图片 */
		}
		TriggerIndexAnimation(-1);
	}
}

int UTouchControlWidget::GetTouchLocationsTouchNum()
{
	int ToucheNum = 0;
	for (const FVector& TouchLocation : TouchLocations)
	{
		if (TouchLocation.Z >= 0.0f)
		{
			ToucheNum += 1;
		}
	}
	return ToucheNum;
}

bool UTouchControlWidget::IsTouchLocationsTouch()
{
	for (const FVector& TouchLocation : TouchLocations)
	{
		if (TouchLocation.Z >= 0.0f)
		{
			return true;
		}
	}
	return false;
}
