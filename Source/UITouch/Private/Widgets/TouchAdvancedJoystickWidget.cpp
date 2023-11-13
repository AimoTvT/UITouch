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


#include "Widgets/TouchAdvancedJoystickWidget.h"
#include "Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"


void UTouchAdvancedJoystickWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (UpSpeedImageWidget)
	{
		UpSpeedImageWidget->SetBrush(bTriggerUpSpeed ? TriggerUpSpeedSlateBrush :  UpSpeedSlateBrush);
		UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(UpSpeedImageWidget->Slot);
		if (UpSpeedCanvasPanelSlot)
		{
			UpSpeedCanvasPanelSlot->SetSize(UpSpeedSlateBrush.GetImageSize()); /** * 设置加速图片大小 */
			UpSpeedCanvasPanelSlot->SetPosition({0.0, (BackdropSlateBrush.GetImageSize() * -1).Y}); /** * 设置加速图片位置 */
		}
	}
}


void UTouchAdvancedJoystickWidget::TouchIndexLocation(const FVector& Location, uint8 FingerIndex)
{
	if (bDisabled)
	{
		return;
	}
	if (TouchFingerIndex == 255 && Location.Z > 0.0)
	{
		if (IsTouchLocation(Location))
		{
			LastTriggerLocation += {0.002, 0.002, 0.0};
			TouchFingerIndex = FingerIndex;
			OnTouchLocation.Broadcast({ 0.0, 0.0, FingerIndex + 1.0 });
			SetIndexTouchDelegate(true, FingerIndex);
			TriggerInedxAnimation(1);
			if (bFixedJoystick == false && BackdropImageWidget)
			{
				UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot);
				if (BackdropCanvasPanelSlot)
				{
					FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
					LocalSize = TriggerOffsetPosition - LocalSize;
					BackdropCanvasPanelSlot->SetPosition(LocalSize);
				}
			}
			if (bFixedJoystick == false && UpSpeedImageWidget)
			{
				UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(UpSpeedImageWidget->Slot);
				if (UpSpeedCanvasPanelSlot)
				{
					FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
					LocalSize = TriggerOffsetPosition - LocalSize;
					LocalSize.Y = LocalSize.Y + BackdropSlateBrush.GetImageSize().Y * -1; /** * 偏移Y位置 */
					UpSpeedCanvasPanelSlot->SetPosition(LocalSize);
				}
			}
			
			return;
		}
	}
	if (TouchFingerIndex == FingerIndex)
	{
		TouchFingerIndex = 255;
		SetIndexTouchDelegate(false, FingerIndex);
		OnTouchLocation.Broadcast({ 0.0, 0.0, 0.0 });
		SetControlPosition({ 0.0,0.0 });
		if (bTriggerUpSpeed == true && UpSpeedImageWidget)
		{
			UpSpeedImageWidget->SetBrush(UpSpeedSlateBrush);
			bTriggerUpSpeed = false;
		}
		if (UpSpeedImageWidget && UpSpeedImageWidget->GetVisibility() != ESlateVisibility::Hidden)
		{
			UpSpeedImageWidget->SetVisibility(ESlateVisibility::Hidden);/** * 设置隐藏加速图片 */
		}
		TriggerInedxAnimation(0);
		UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot);
		if (bFixedJoystick == false && BackdropCanvasPanelSlot)
		{
			
			BackdropCanvasPanelSlot->SetPosition({0.0,0.0});
		}
		return;
	}
	return;
}

void UTouchAdvancedJoystickWidget::TouchMovedLocation(const FVector& Location)
{
	if (bTickDelegated == false && LastTriggerLocation == Location)
	{
		return;
	}
	if (TouchFingerIndex != 255)
	{
		FVector2D PositionScale = { Location.X, Location.Y };
		PositionScale = GetPositionScale(PositionScale);
		if (PositionScale.Y < IgnoreNumerical.Y && PositionScale.Y > IgnoreNumerical.Y * -1)
		{
			if (PositionScale.X < IgnoreNumerical.X && PositionScale.X > IgnoreNumerical.X * -1)
			{
				PositionScale.X = 0.0;
				PositionScale.Y = 0.0;
			}
		}
		if(PositionScale.Y > 0.2 && PositionScale.X > -0.5 && PositionScale.X < 0.5)  /** * 判断是否进入加速模式 */
		{
			if (PositionScale.Y > 1.5) /** * 判断是否进入加速模式 */
			{
				PositionScale.Y = 2;
				OnTouchLocation.Broadcast({ FMath::Clamp(PositionScale.X,-1.0,1.0),  FMath::Clamp(PositionScale.Y,-1.0, 2), Location.Z + 1 }); /** * 返回 Y = 2 是加速模式 */
				if (bTriggerUpSpeed == false && UpSpeedImageWidget)
				{
					UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(UpSpeedImageWidget->Slot);
					if (UpSpeedCanvasPanelSlot)
					{
						UpSpeedCanvasPanelSlot->SetSize(TriggerUpSpeedSlateBrush.GetImageSize()); /** * 设置加速图片大小 */
					}
					UpSpeedImageWidget->SetBrush(TriggerUpSpeedSlateBrush);
					bTriggerUpSpeed = true;
					TriggerInedxAnimation(2);
				}
			}
			else
			{
				OnTouchLocation.Broadcast({ FMath::Clamp(PositionScale.X,-1.0,1.0),  FMath::Clamp(PositionScale.Y,-1.0, 1.0), Location.Z + 1 }); /** * 分发普通移动 */
				if (bTriggerUpSpeed == true && UpSpeedImageWidget)
				{
					UCanvasPanelSlot* UpSpeedCanvasPanelSlot = Cast<UCanvasPanelSlot>(UpSpeedImageWidget->Slot);
					if (UpSpeedCanvasPanelSlot)
					{
						UpSpeedCanvasPanelSlot->SetSize(UpSpeedSlateBrush.GetImageSize()); /** * 设置加速图片大小 */
					}
					UpSpeedImageWidget->SetBrush(UpSpeedSlateBrush);
					bTriggerUpSpeed = false;
				}
			}
			if (UpSpeedImageWidget->GetVisibility() != ESlateVisibility::Visible)
			{
				UpSpeedImageWidget->SetVisibility(ESlateVisibility::Visible); /** * 设置显示加速图片 */
			}
		}
		else
		{
			OnTouchLocation.Broadcast({ FMath::Clamp(PositionScale.X,-1.0,1.0),  FMath::Clamp(PositionScale.Y,-1.0, 1.0), Location.Z + 1 });
			if (UpSpeedImageWidget->GetVisibility() != ESlateVisibility::Hidden)
			{
				UpSpeedImageWidget->SetVisibility(ESlateVisibility::Hidden); /** * 设置隐藏加速图片 */
			}
		}
		if (LastTriggerLocation != Location)
		{
			SetControlPosition({ Location.X, Location.Y });
		}
	}
	LastTriggerLocation = Location;
}

void UTouchAdvancedJoystickWidget::SetDisabled(bool bIsDisabled)
{
	Super::SetDisabled(bIsDisabled);
	if (bDisabled)
	{
		if (IsDesignTime() == false)
		{
			if (UpSpeedImageWidget->GetVisibility() != ESlateVisibility::Hidden)
			{
				UpSpeedImageWidget->SetVisibility(ESlateVisibility::Hidden); /** * 设置隐藏加速图片 */
			}
		}
	}
}
