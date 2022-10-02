/**
 * 版权所有权: Aimo_皑墨
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UETouchPlugin
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */


#include "TouchJoystickWidget.h"
#include "UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"

void UTouchJoystickWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (BackdropImageWidget)
	{
		BackdropImageWidget->SetBrush(BackdropSlateBrush);  /** * 设置操控杆背景的图片 */
	}
	if (ControlImageWidget)
	{
		ControlImageWidget->SetBrush(ControlSlateBrush);  /** * 设置操控杆的图片 */
		UCanvasPanelSlot* CanvasPanelSlot = Cast<UCanvasPanelSlot>(ControlImageWidget->Slot);  /** * 获取画布 */
		if (CanvasPanelSlot)
		{
			CanvasPanelSlot->SetSize(ControlSlateBrush.GetImageSize());  /** * 设置大小 */
		}
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
			return;
		}
	}
	if (TouchFingerIndex == FingerIndex)
	{
		TouchFingerIndex = 255;
		SetIndexTouchDelegate(false, FingerIndex);
		OnPressedLocation.Broadcast({ 0.0, 0.0, Moved.Z + 1 });
		SetControlPosition(LocalWidgetLocation + GetPaintSpaceGeometry().GetLocalSize() / 2 * UWidgetLayoutLibrary::GetViewportScale(this));  /** * 设置操控杆归零位置 */
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
		OffLocation = OffLocation - (LocalWidgetLocation + SizeLocation);  /** * 获取偏移值 */
		/** * 限制的值 */
		float X = OffLocation.X / SizeLocation.X;
		float Y = OffLocation.Y / SizeLocation.Y * YShaftTimes;
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
		float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
		FVector2D LocalPositionAtCoordinates = GetPaintSpaceGeometry().GetLocalPositionAtCoordinates({ 0.0,0.0 });
		FVector2D Size = CanvasPanelSlot->GetAutoSize() ? ControlImageWidget->Brush.GetImageSize() : CanvasPanelSlot->GetSize();
		FVector Vector = FVector(Size, 0.0);  /** * 转化向量 */
		FVector2D SizeLocationPosition = { Vector.X / 2, Vector.Y / 2 }; 
		FVector2D SetLocationPosition = Position / ViewportScale - SizeLocationPosition - LocalPositionAtCoordinates;  /** * 获取设置最终位置 */
		FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize();
		/** * 限制操控杆位置 */
		CanvasPanelSlot->SetPosition({ FMath::Clamp(SetLocationPosition.X, (Size / 2 * -1).X, LocalSize.X + (Size / 2 * -1).X), FMath::Clamp(SetLocationPosition.Y,(Size / 2 * -1).Y, LocalSize.Y + (Size / 2 * -1).Y) });
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