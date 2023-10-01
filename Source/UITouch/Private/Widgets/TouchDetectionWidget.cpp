// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/TouchDetectionWidget.h"



void UTouchDetectionWidget::TouchMoved(const FVector& Moved)
{
	if (LastTriggerLocation == Moved)
	{
		return;
	}
	Super::TouchMoved(Moved);
	if (Moved.Z >= 0.0 && IsTouchLocation(Moved))
	{
		if (bDetectionTouch == false)
		{
			bDetectionTouch = true;
			OnPressedLocation.Broadcast({ LastTriggerLocation.X, LastTriggerLocation.Y, LastTriggerLocation.Z + 1 }); /** * 触发触摸位置 */
			if (ImageWidget)
			{
				ImageWidget->SetBrush(DetectionSlateBrush);  /** * 设置按下的图片 */
			}
			TriggerInedxAnimation(1);
		}
	}
	else
	{
		if (bDetectionTouch)
		{
			bDetectionTouch = false;
			OnPressedLocation.Broadcast({ LastTriggerLocation.X, LastTriggerLocation.Y, 0.0 }); /** * 触发触摸位置 */
			if (ImageWidget)
			{
				ImageWidget->SetBrush(SlateBrush);  /** * 设置按下的图片 */
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
		if (ImageWidget)
		{
			ImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置按下的图片 */
		}
		TriggerInedxAnimation(-1);
	}
	else
	{
		if (ImageWidget)
		{
			ImageWidget->SetBrush(SlateBrush);  /** * 设置按下的图片 */
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
		TouchMoved({ LastTriggerLocation.X, LastTriggerLocation.Y, -1.0 });
		TouchFingerIndex =255;
	}
}
