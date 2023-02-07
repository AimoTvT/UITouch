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


#include "Widgets/TouchJoystickWidget.h"
#include "UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"

void UTouchJoystickWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (ControlImageWidget)
	{
		ControlImageWidget->SetBrush(ControlSlateBrush);  /** * 设置操控杆的图片 */
		UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(ControlImageWidget->Slot);  /** * 获取画布 */
		if (CanvasPanelSlot)
		{
			CanvasPanelSlot->SetSize(ControlSlateBrush.GetImageSize());  /** * 设置大小 */
		}
	}
	if (BackdropImageWidget)
	{
		BackdropImageWidget->SetBrush(BackdropSlateBrush);  /** * 设置操控杆背景的图片 */
	}

}

void UTouchJoystickWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(ControlImageWidget->Slot);
	if (CanvasPanelSlot)
	{
		CanvasPanelSlot->SetAnchors(FAnchors(0.0, 0.0));  /** * 设置对齐 */
		CanvasPanelSlot->SetAlignment({0.0, 0.0});  /** * 设置锚点 */
		CanvasPanelSlot->SetPosition(BackdropSlateBrush.GetImageSize() / 2- ControlSlateBrush.GetImageSize() / 2);  /** * 设置位置(需要UI拉伸大小和图片大小相同) */
	}
}


void UTouchJoystickWidget::TouchIndex(FVector Moved, uint8 FingerIndex)
{
	if (TouchFingerIndex == 255 && Moved.Z > 0.0)
	{
		if (IsTouchLocation(Moved))  /** * 判断进入触控位置 */
		{
			TouchFingerIndex = FingerIndex;
			OnPressedLocation.Broadcast({ 0.0, 0.0, Moved.Z + 1 });
			SetIndexTouchDelegate(true, FingerIndex);
			TriggerInedxAnimation(1);
			return;
		}
	}
	if (TouchFingerIndex == FingerIndex)
	{
		TouchFingerIndex = 255;
		SetIndexTouchDelegate(false, FingerIndex);
		OnPressedLocation.Broadcast({ 0.0, 0.0, Moved.Z + 1 });
		SetControlPosition((LocalWidgetPosition + GetPaintSpaceGeometry().GetLocalSize() / 2) * UWidgetLayoutLibrary::GetViewportScale(this));  /** * 设置操控杆归零位置 */
		TriggerInedxAnimation(0);
		return;
	}
	return;
}

void UTouchJoystickWidget::TouchMoved(FVector Moved)
{
	if (TouchFingerIndex != 255)
	{
		float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
		FVector2D SizeLocation = GetPaintSpaceGeometry().GetLocalSize() * ViewportScale / 2;
		FVector2D OffLocation = { Moved.X, Moved.Y };
		OffLocation = OffLocation - (LocalWidgetPosition * ViewportScale + SizeLocation);  /** * 获取偏移值 */
		/** * 限制的值 */
		float X = OffLocation.X / (SizeLocation.X * RenderTransform.Scale.X);
		float Y = OffLocation.Y / (SizeLocation.Y * RenderTransform.Scale.Y) * YShaftTimes;
		if (Y < IgnoreNumerical.Y && Y > IgnoreNumerical.Y * -1)
		{
			if (X < IgnoreNumerical.X && X > IgnoreNumerical.X * -1)
			{
				X = 0.0;
				Y = 0.0;
			}
		}
		OnPressedLocation.Broadcast({ FMath::Clamp(X, -1.0, 1.0),  FMath::Clamp(Y, -1.0, 1.0), Moved.Z + 1 });
		SetControlPosition({ Moved.X, Moved.Y });
	}
}

void UTouchJoystickWidget::SetControlPosition(FVector2D Position)
{
	UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(ControlImageWidget->Slot);
	if (CanvasPanelSlot)
	{
		float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this); /** * 获取缩放 */
		FVector2D ControlImageSize = CanvasPanelSlot->GetAutoSize() ? ControlImageWidget->Brush.GetImageSize() : CanvasPanelSlot->GetSize(); /** * 获取偏移值 */
		FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
		FVector2D SetLocationPosition = Position / ViewportScale - (LocalWidgetPosition + LocalSize); /** * 中心位置 */

		FVector2D Direction;
		float Len;
		SetLocationPosition.ToDirectionAndLength(Direction, Len); /** * 获得圆圈参数 */
		SetLocationPosition = FVector2D(Len > LocalSize.X * RenderTransform.Scale.X ? LocalSize.X * RenderTransform.Scale.X : Len);
		SetLocationPosition = Direction * JoystickAnimationRangeMultiple * (SetLocationPosition / RenderTransform.Scale); /** * 获得圆圈位置 */
		SetLocationPosition = SetLocationPosition + LocalSize - ControlImageSize / 2; /** * 设置偏移 */
		
		CanvasPanelSlot->SetPosition(SetLocationPosition);
	}
}

/* * 获取蓝图动画

		ObjectProperty = FindField<UObjectProperty>(GetClass(), "JianBianXianShiAnimation"); //Object指针类型变量
		Object = Cast<UWidgetAnimation>(ObjectProperty->GetObjectPropertyValue_InContainer(this)); //转换Object类型
		if (Object)
		{
			WidgetAnimation = Cast<UWidgetAnimation>(Object);
			if (WidgetAnimation)
			{
				PlayAnimation(WidgetAnimation, 0.0f, 1, EUMGSequencePlayMode::Forward);
			}
		}

*/