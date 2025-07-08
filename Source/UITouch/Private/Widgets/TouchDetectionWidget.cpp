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



#include "Widgets/TouchDetectionWidget.h"
#include "Components/CanvasPanelSlot.h"



void UTouchDetectionWidget::SetWidgetTouchComponent(UTouchComponent* InTouchComponent)
{
	if (WidgetTouchComponent && WidgetTouchComponent != InTouchComponent && TriggerTouchIndex != 255)
	{
		RemoveTouchMoveDelegate(TriggerTouchIndex);
	}
	Super::SetWidgetTouchComponent(InTouchComponent);
}

void UTouchDetectionWidget::TouchMovedLocation(const FVector& Location)
{
	if (!GetIsEnabled() || GetVisibility() != ESlateVisibility::Visible)  /** * 是否启用,只有可视才能互交 */
	{
		return;
	}
	if (LastTriggerLocation == Location)
	{
		return;
	}
	Super::TouchMovedLocation(Location);
	if (Location.Z >= 0.0 && IsTouchLocation(Location))
	{
		if (bDetectionTouch == false)
		{
			bDetectionTouch = true;
			OnTouchLocationState.Broadcast(LastTriggerLocation, ETouchState::Moved); /** * 触发触摸位置 */
			if (DetectionImageWidget)
			{
				DetectionImageWidget->SetBrush(TriggerDetectionSlateBrush);  /** * 设置的图片 */
				if (UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(DetectionImageWidget->Slot))
				{
					UpSpeedCanvasPanelSlot->SetSize(TriggerDetectionSlateBrush.GetImageSize()); /** * 设置图片大小 */
				}
			}
			TriggerIndexAnimation(1);
		}
	}
	else
	{
		if (bDetectionTouch)
		{
			bDetectionTouch = false;
			OnTouchLocationState.Broadcast(LastTriggerLocation, ETouchState::Released); /** * 触发触摸位置 */
			if (DetectionImageWidget)
			{
				DetectionImageWidget->SetBrush(DetectionSlateBrush);  /** * 设置的图片 */
				if (UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(DetectionImageWidget->Slot))
				{
					UpSpeedCanvasPanelSlot->SetSize(DetectionSlateBrush.GetImageSize()); /** * 设置图片大小 */
				}
			}
			TriggerIndexAnimation(0);
		}
	}
}

void UTouchDetectionWidget::SetVisibleDisabled(bool bVisible, bool bFlushInput)
{
	Super::SetVisibleDisabled(bVisible, bFlushInput);
	if (bVisible)
	{
		if (DetectionImageWidget)
		{
			DetectionImageWidget->SetBrush(DetectionSlateBrush);  /** * 设置按下的图片 */
			if (UCanvasPanelSlot* DetectionCanvasPanelSlot = Cast<UCanvasPanelSlot>(DetectionImageWidget->Slot))
			{
				DetectionCanvasPanelSlot->SetSize(DetectionSlateBrush.GetImageSize());  /** * 设置大小 */
			}
		}
		TriggerIndexAnimation(0);
	}
	else
	{
		if (bFlushInput && IsDesignTime() == false)
		{
			if (TriggerTouchIndex != 255)
			{
				RemoveTouchMoveDelegate(TriggerTouchIndex);
				TriggerTouchIndex = 255;
			}
		}
		if (DetectionImageWidget)
		{
			DetectionImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置按下的图片 */
			if (UCanvasPanelSlot* DetectionCanvasPanelSlot = Cast<UCanvasPanelSlot>(DetectionImageWidget->Slot))
			{
				DetectionCanvasPanelSlot->SetSize(DisabledSlateBrush.GetImageSize());  /** * 设置大小 */
			}
		}
		TriggerIndexAnimation(-1);
	}
}

void UTouchDetectionWidget::SetOnIndexTouchDelegate(uint8 TouchIndex)
{
	if (!GetIsEnabled())
	{
		return;
	}
	if (TouchIndex != 255)
	{
		if (TriggerTouchIndex != 255)
		{
			RemoveTouchMoveDelegate(TriggerTouchIndex);
		}
		TriggerTouchIndex = TouchIndex;
		BindTouchMoveDelegate(TriggerTouchIndex);
	}
	else
	{
		RemoveTouchMoveDelegate(TriggerTouchIndex);
		TouchMovedLocation({ LastTriggerLocation.X, LastTriggerLocation.Y, -1.0 });
		TriggerTouchIndex = 255;
	}
}
