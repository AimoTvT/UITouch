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
		UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(UpSpeedImageWidget->Slot);
		if (CanvasPanelSlot)
		{
			CanvasPanelSlot->SetSize(UpSpeedSlateBrush.GetImageSize()); /** * 设置加速图片大小 */
			CanvasPanelSlot->SetPosition({0.0, (BackdropSlateBrush.GetImageSize() * -1).Y}); /** * 设置加速图片位置 */
		}
	}
}


void UTouchAdvancedJoystickWidget::NativeConstruct()
{
	Super::NativeConstruct();

}

void UTouchAdvancedJoystickWidget::TouchIndex(const FVector& Moved, uint8 FingerIndex)
{
	if (TouchFingerIndex == 255 && Moved.Z > 0.0)
	{
		if (IsTouchLocation(Moved))
		{
			LastTriggerLocation += {0.002, 0.002, 0.0};
			TouchFingerIndex = FingerIndex;
			OnPressedLocation.Broadcast({ 0.0, 0.0, Moved.Z + 1 });
			SetIndexTouchDelegate(true, FingerIndex);
			TriggerInedxAnimation(1);
			if (bFixedJoystick == false && BackdropImageWidget)
			{
				UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot);
				if (CanvasPanelSlot)
				{
					FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
					LocalSize = TriggerOffsetPosition - LocalSize;
					CanvasPanelSlot->SetPosition(LocalSize);
				}
			}
			if (bFixedJoystick == false && UpSpeedImageWidget)
			{
				UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(UpSpeedImageWidget->Slot);
				if (CanvasPanelSlot)
				{
					FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
					LocalSize = TriggerOffsetPosition - LocalSize;
					LocalSize.Y = LocalSize.Y + BackdropSlateBrush.GetImageSize().Y * -1; /** * 偏移Y位置 */
					CanvasPanelSlot->SetPosition(LocalSize);
				}
			}
			
			return;
		}
	}
	if (TouchFingerIndex == FingerIndex)
	{
		TouchFingerIndex = 255;
		SetIndexTouchDelegate(false, FingerIndex);
		OnPressedLocation.Broadcast({ 0.0, 0.0, Moved.Z + 1 });
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
		UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot);
		if (bFixedJoystick == false && CanvasPanelSlot)
		{
			
			CanvasPanelSlot->SetPosition({0.0,0.0});
		}
		return;
	}
	return;
}

void UTouchAdvancedJoystickWidget::TouchMoved(const FVector& Moved)
{
	if (bTickDelegated == false && LastTriggerLocation == Moved)
	{
		return;
	}
	LastTriggerLocation = Moved;
	if (TouchFingerIndex != 255)
	{
		FVector2D PositionScale = { Moved.X, Moved.Y };
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
				OnPressedLocation.Broadcast({ FMath::Clamp(PositionScale.X,-1.0,1.0),  FMath::Clamp(PositionScale.Y,-1.0, 2), Moved.Z + 1 }); /** * 返回 Y = 2 是加速模式 */
				if (bTriggerUpSpeed == false && UpSpeedImageWidget)
				{
					UpSpeedImageWidget->SetBrush(TriggerUpSpeedSlateBrush);
					bTriggerUpSpeed = true;
				}
			}
			else
			{
				OnPressedLocation.Broadcast({ FMath::Clamp(PositionScale.X,-1.0,1.0),  FMath::Clamp(PositionScale.Y,-1.0, 1.0), Moved.Z + 1 }); /** * 分发普通移动 */
				if (bTriggerUpSpeed == true && UpSpeedImageWidget)
				{
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
			OnPressedLocation.Broadcast({ FMath::Clamp(PositionScale.X,-1.0,1.0),  FMath::Clamp(PositionScale.Y,-1.0, 1.0), Moved.Z + 1 });
			if (UpSpeedImageWidget->GetVisibility() != ESlateVisibility::Hidden)
			{
				UpSpeedImageWidget->SetVisibility(ESlateVisibility::Hidden); /** * 设置隐藏加速图片 */
			}
		}
		SetControlPosition({ Moved.X, Moved.Y });
	}
}
