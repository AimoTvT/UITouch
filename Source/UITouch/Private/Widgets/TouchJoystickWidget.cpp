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
#include "Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"

void UTouchJoystickWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (ControlImageWidget)
	{
		ControlImageWidget->SetBrush(ControlSlateBrush);  /** * 设置操控杆的图片 */
		if (UCanvasPanelSlot* ControlCanvasPanelSlot = Cast<UCanvasPanelSlot>(ControlImageWidget->Slot))
		{
			ControlCanvasPanelSlot->SetSize(ControlSlateBrush.GetImageSize());  /** * 设置大小 */
		}
	}
	if (BackdropImageWidget)
	{
		if (UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot))
		{
			BackdropCanvasPanelSlot->SetSize(BackdropSlateBrush.GetImageSize());  /** * 设置大小 */
		}
	}
}

void UTouchJoystickWidget::SetWidgetTouchComponent(UTouchComponent* InTouchComponent)
{
	if (WidgetTouchComponent && WidgetTouchComponent != InTouchComponent && TriggerTouchIndex != 255)
	{
		RemoveTouchMoveDelegate(TriggerTouchIndex);
	}
	Super::SetWidgetTouchComponent(InTouchComponent);
}

bool UTouchJoystickWidget::TouchPressedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	LastTriggerLocation += {0.002, 0.002, 0.0};
	TriggerTouchIndex = TouchIndex;
	OnTouchLocationState.Broadcast({ 0.0, 0.0, static_cast<double>(TouchIndex) }, ETouchState::Pressed);
	BindTouchReleasedDelegate();
	BindTouchMoveDelegate(TouchIndex);
	TriggerIndexAnimation(1);
	if (bFixedJoystick == false && BackdropImageWidget)
	{
		if (UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot))
		{
			const FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
			BackdropCanvasPanelSlot->SetPosition(TriggerOffsetPosition - LocalSize);
		}
	}
	return true;
}

void UTouchJoystickWidget::TouchMovedLocation(const FVector& Location)
{
	if (bTickDelegated == false && LastTriggerLocation == Location)
	{
		return;
	}
	if (TriggerTouchIndex == 255)
	{
		return;
	}
	//获取操纵杆缩放
	FVector2D PositionScale = GetPositionScale(FVector2D(Location.X, Location.Y ));
	if (PositionScale.Y < IgnoreNumerical.Y && PositionScale.Y > IgnoreNumerical.Y * -1)
	{
		if (PositionScale.X < IgnoreNumerical.X && PositionScale.X > IgnoreNumerical.X * -1)
		{
			PositionScale.X = 0.0;
			PositionScale.Y = 0.0;
		}
	}
	OnTouchLocationState.Broadcast({ FMath::Clamp(PositionScale.X, -1.0, 1.0),  FMath::Clamp(PositionScale.Y, -1.0, 1.0), Location.Z }, ETouchState::Moved);
	if (LastTriggerLocation != Location)
	{
		SetControlPosition({ Location.X, Location.Y });
	}
	LastTriggerLocation = Location;
}

bool UTouchJoystickWidget::TouchReleasedLocation(const FVector& Location)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	if (TriggerTouchIndex != TouchIndex)
	{
		return false;
	}
	RemoveTouchReleasedDelegate();
	RemoveTouchMoveDelegate(TouchIndex);
	if (TriggerTouchIndex != TouchIndex)
	{
		return false;
	}
	TriggerTouchIndex = 255;
	OnTouchLocationState.Broadcast({ 0.0, 0.0, 0.0 }, ETouchState::Released);
	SetControlPosition({ 0.0,0.0 });  /** * 设置操控杆归零位置 */
	TriggerIndexAnimation(0);
	if (bFixedJoystick == false && BackdropImageWidget)
	{
		if (UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot))
		{
			BackdropCanvasPanelSlot->SetPosition({ 0.0,0.0 });
		}
	}
	return true;
}

void UTouchJoystickWidget::SetVisibleDisabled(bool bVisible, bool bFlushInput)
{
	Super::SetVisibleDisabled(bVisible, bFlushInput);
	if (bVisible)
	{
		if (BackdropImageWidget)
		{
			BackdropImageWidget->SetBrush(BackdropSlateBrush);  /** * 设置操控杆背景的图片 */
			if (UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot))
			{
				BackdropCanvasPanelSlot->SetSize(BackdropSlateBrush.GetImageSize());  /** * 设置大小 */
			}
		}
	}
	else
	{
		TriggerIndexAnimation(0);
		if (bFlushInput && IsDesignTime() == false)
		{
			if (TriggerTouchIndex != 255)
			{
				RemoveTouchMoveDelegate(TriggerTouchIndex);
				TriggerTouchIndex = 255;
				OnTouchLocationState.Broadcast({ 0.0, 0.0, LastTriggerLocation.Z + 1 }, ETouchState::Canceled);
			}

			SetControlPosition({ 0.0,0.0 });  /** * 设置操控杆归零位置 */
			if (bFixedJoystick == false)
			{
				if (UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot))
				{
					BackdropCanvasPanelSlot->SetPosition({ 0.0,0.0 });
				}
			}
		}
		if (BackdropImageWidget)
		{
			BackdropImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置操控杆背景的图片 */
			if (UCanvasPanelSlot* BackdropCanvasPanelSlot = Cast<UCanvasPanelSlot>(BackdropImageWidget->Slot))
			{
				BackdropCanvasPanelSlot->SetSize(DisabledSlateBrush.GetImageSize());  /** * 设置大小 */
			}
		}
		TriggerIndexAnimation(-1);
	}
}

void UTouchJoystickWidget::SetControlPosition(const FVector2D& Position)
{
	if (UCanvasPanelSlot* ControlCanvasPanelSlot = Cast<UCanvasPanelSlot>(ControlImageWidget->Slot))
	{
		if (Position != FVector2D({ 0.0, 0.0 }))
		{

			FVector2D SetPosition = Position;
			float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this); /** * 获取缩放 */
			FVector2D LocalSize = GetPaintSpaceGeometry().GetLocalSize() / 2;
			SetPosition = SetPosition / ViewportScale - LocalWidgetPosition - (bFixedJoystick ? LocalSize : TriggerOffsetPosition); /** * 中心位置 */
			float Len;
			FVector2D Direction = BackdropSlateBrush.GetImageSize(); /** * 临时存放图片大小,后续引用设置距离 */
			FVector2D GetRenderScale = GetRenderTransform().Scale; /** * 渲染大小 */
			float ImageSize;
			switch (ClampXY)
			{
			case 1:
				ImageSize = Direction.Y / 2;
				SetPosition.X = 0;
				break;
			case 2:
				ImageSize = Direction.X / 2;
				SetPosition.Y = 0;
				break;
			default:
				ImageSize = Direction.X > Direction.Y ? Direction.Y / 2 : Direction.X / 2;
				break;
			}
			SetPosition.ToDirectionAndLength(Direction, Len); /** * 获得圆圈参数 */
			SetPosition = FVector2D(Len > ImageSize * GetRenderScale.X ? ImageSize * GetRenderScale.X : Len); /** * 获得圆圈大小 */
			SetPosition = Direction * JoystickAnimationRangeMultiple * (SetPosition / GetRenderScale); /** * 获得圆圈位置 */
			if (bFixedJoystick == false)
			{
				SetPosition = SetPosition + (TriggerOffsetPosition - LocalSize);
			}
			ControlCanvasPanelSlot->SetPosition(SetPosition);
		}
		else
		{
			ControlCanvasPanelSlot->SetPosition(Position);
		}
	}
}

FVector2D UTouchJoystickWidget::GetPositionScale(const FVector2D& Position)
{
	const float ViewportScale = UWidgetLayoutLibrary::GetViewportScale(this);
	const FVector2D ImageSize = BackdropSlateBrush.GetImageSize() / 2;
	FVector2D PositionScale = Position / ViewportScale;  /** * 获取偏移值 */
	PositionScale = PositionScale - (LocalWidgetPosition + (bFixedJoystick ? GetPaintSpaceGeometry().GetLocalSize() / 2 : TriggerOffsetPosition));
	/** * 限制的值 */
	PositionScale.X = PositionScale.X / (ImageSize.X * GetRenderTransform().Scale.X);
	PositionScale.Y = PositionScale.Y / (ImageSize.Y * GetRenderTransform().Scale.Y) * YShaftTimes;
	return PositionScale;
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