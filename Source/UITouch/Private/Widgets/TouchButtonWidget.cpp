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


#include "Widgets/TouchButtonWidget.h"
#include "Components/CanvasPanelSlot.h"



void UTouchButtonWidget::SetWidgetTouchComponent(UTouchComponent* InTouchComponent)
{
	if (WidgetTouchComponent && WidgetTouchComponent != InTouchComponent)
	{
		RemoveTouchReleasedDelegate();
	}
	Super::SetWidgetTouchComponent(InTouchComponent);
}

bool UTouchButtonWidget::TouchPressedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (bPressedHandover)
	{
		bPressed = !bPressed;
		OnTouchLocationState.Broadcast(Location, bPressed ? ETouchState::Pressed : ETouchState::Released);
		if (ButtonImageWidget)
		{
			ButtonImageWidget->SetBrush(bPressed ? PressedButtonSlateBrush : ButtonSlateBrush);
			if (UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(ButtonImageWidget->Slot))
			{
				UpSpeedCanvasPanelSlot->SetSize((bPressed ? PressedButtonSlateBrush : ButtonSlateBrush).GetImageSize()); /** * 设置图片大小 */
			}
		}
		TriggerIndexAnimation(bPressed ? 1 : 0);
		LastTriggerLocation = Location;
		return true;
	}
	else
	{
		bPressed = true;
		TriggerTouchIndex = TouchIndex;
		OnTouchLocationState.Broadcast(Location, ETouchState::Pressed);
		BindTouchReleasedDelegate();
		if (ButtonImageWidget)
		{
			ButtonImageWidget->SetBrush(PressedButtonSlateBrush);
			if (UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(ButtonImageWidget->Slot))
			{
				UpSpeedCanvasPanelSlot->SetSize(PressedButtonSlateBrush.GetImageSize()); /** * 设置图片大小 */
			}
		}
		TriggerIndexAnimation(1);
		LastTriggerLocation = Location;
		return true;
	}
	return false;
}

bool UTouchButtonWidget::TouchReleasedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (TriggerTouchIndex != TouchIndex)
	{
		return false;
	}
	RemoveTouchReleasedDelegate();
	if (TriggerTouchIndex == TouchIndex)  /** * 判断是否是第二次松下触控 */
	{
		TriggerTouchIndex = 255;
		bPressed = false;
		OnTouchLocationState.Broadcast(LastTriggerLocation, ETouchState::Released);
		if (ButtonImageWidget)
		{
			ButtonImageWidget->SetBrush(ButtonSlateBrush);
			if (UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(ButtonImageWidget->Slot))
			{
				UpSpeedCanvasPanelSlot->SetSize(ButtonSlateBrush.GetImageSize()); /** * 设置图片大小 */
			}
		}
		TriggerIndexAnimation(0);
		return true;
	}
	return false;
}

void UTouchButtonWidget::SetVisibleDisabled(bool bVisible, bool bFlushInput)
{
	Super::SetVisibleDisabled(bVisible, bFlushInput);
	if (bVisible)
	{
		if (ButtonImageWidget)
		{
			ButtonImageWidget->SetBrush(bPressed ? PressedButtonSlateBrush : ButtonSlateBrush);  /** * 设置按下的图片 */
			if (UCanvasPanelSlot* ButtonCanvasPanelSlot = Cast<UCanvasPanelSlot>(ButtonImageWidget->Slot))
			{
				ButtonCanvasPanelSlot->SetSize(bPressed ? PressedButtonSlateBrush.GetImageSize() : ButtonSlateBrush.GetImageSize());  /** * 设置大小 */
			}
		}
		TriggerIndexAnimation(0);
	}
	else
	{
		if (bFlushInput && IsDesignTime() == false)
		{
			if (bPressed)
			{
				RemoveTouchMoveDelegate(TriggerTouchIndex);
				bPressed = false;
			}
		}
		if (ButtonImageWidget)
		{
			ButtonImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置按下的图片 */
			if (UCanvasPanelSlot* ButtonCanvasPanelSlot = Cast<UCanvasPanelSlot>(ButtonImageWidget->Slot))
			{
				ButtonCanvasPanelSlot->SetSize(DisabledSlateBrush.GetImageSize());  /** * 设置大小 */
			}
		}
		TriggerIndexAnimation(-1);
	}
}
