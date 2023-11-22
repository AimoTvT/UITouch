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


void UTouchDetectionWidget::TouchMovedLocation(const FVector& Location)
{
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
			OnTouchLocation.Broadcast({ LastTriggerLocation.X, LastTriggerLocation.Y, LastTriggerLocation.Z + 1 }); /** * 触发触摸位置 */
			if (DetectionImageWidget)
			{
				DetectionImageWidget->SetBrush(TriggerDetectionSlateBrush);  /** * 设置按下的图片 */
			}
			TriggerInedxAnimation(1);
		}
	}
	else
	{
		if (bDetectionTouch)
		{
			bDetectionTouch = false;
			OnTouchLocation.Broadcast({ LastTriggerLocation.X, LastTriggerLocation.Y, 0.0 }); /** * 触发触摸位置 */
			if (DetectionImageWidget)
			{
				DetectionImageWidget->SetBrush(DetectionSlateBrush);  /** * 设置按下的图片 */
			}
			TriggerInedxAnimation(0);
		}
	}
}

void UTouchDetectionWidget::SetDisabled(bool bIsDisabled)
{
	Super::SetDisabled(bIsDisabled);
	if (bDisabled)
	{
		if (IsDesignTime() == false)
		{
			if (TouchFingerIndex != 255)
			{
				SetIndexTouchDelegate(false, TouchFingerIndex);
			}
		}
		if (DetectionImageWidget)
		{
			UCanvasPanelSlot* DetectionCanvasPanelSlot = Cast<UCanvasPanelSlot>(DetectionImageWidget->Slot);  /** * 获取画布 */
			if (DetectionCanvasPanelSlot)
			{
				DetectionCanvasPanelSlot->SetSize(DisabledSlateBrush.GetImageSize());  /** * 设置大小 */
			}
			DetectionImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置按下的图片 */
		}
		TriggerInedxAnimation(-1);
	}
	else
	{
		if (DetectionImageWidget)
		{
			UCanvasPanelSlot* DetectionCanvasPanelSlot = Cast<UCanvasPanelSlot>(DetectionImageWidget->Slot);  /** * 获取画布 */
			if (DetectionCanvasPanelSlot)
			{
				DetectionCanvasPanelSlot->SetSize(DetectionSlateBrush.GetImageSize());  /** * 设置大小 */
			}
			DetectionImageWidget->SetBrush(DetectionSlateBrush);  /** * 设置按下的图片 */
		}
		TriggerInedxAnimation(0);
	}
}

void UTouchDetectionWidget::SetOnIndexTouchDelegate(uint8 FingerIndex)
{
	if (bDisabled)
	{
		return;
	}
	if (FingerIndex != 255)
	{
		if (TouchFingerIndex != 255)
		{
			SetIndexTouchDelegate(false, TouchFingerIndex);
		}
		TouchFingerIndex = FingerIndex;
		SetIndexTouchDelegate(true, TouchFingerIndex);
	}
	else
	{
		SetIndexTouchDelegate(false, TouchFingerIndex);
		TouchMovedLocation({ LastTriggerLocation.X, LastTriggerLocation.Y, -1.0 });
		TouchFingerIndex = 255;
	}
}
