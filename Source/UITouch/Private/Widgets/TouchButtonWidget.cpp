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

void UTouchButtonWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (ImageWidget)
	{
		if (ImageWidget)
		{
			if (bDisabled)
			{
				ImageWidget->SetBrush(DisabledSlateBrush);  /** * 设置按下的图片 */
			}
			else
			{
				ImageWidget->SetBrush(bPressed ? PressedSlateBrush : SlateBrush);  /** * 设置按下的图片 */
			}
		}
	}
}

void UTouchButtonWidget::TouchIndex(FVector Moved, uint8 FingerIndex)
{
	if (bDisabled)  /** * 是否禁用 */
	{
		return;
	}
	if (TouchFingerIndex == 255)  /** * 触控索引是否空 */
	{
		if (IsTouchLocation(Moved))  /** * 是否进入触控区域 */
		{
			if (bPressedHandover)
			{
				if (Moved.Z)
				{
					bPressed = !bPressed;
					Moved.Z = bPressed ? Moved.Z : 0.0;
					OnPressedLocation.Broadcast(Moved);
					if (ImageWidget)
					{
						ImageWidget->SetBrush(bPressed ? PressedSlateBrush : SlateBrush);
					}
				}
				TriggerInedxAnimation(1);
				return;
			}
			else
			{
				TouchFingerIndex = FingerIndex;
				OnPressedLocation.Broadcast(Moved);
				SetIndexTouchDelegate(true, FingerIndex);
			}
			if (ImageWidget)
			{
				ImageWidget->SetBrush(PressedSlateBrush);
			}
			TriggerInedxAnimation(1);
			return;
		}
	}
	if (TouchFingerIndex == FingerIndex)  /** * 判断是否是第二次松下触控 */
	{
		TouchFingerIndex = 255;
		OnPressedLocation.Broadcast(Moved);
		SetIndexTouchDelegate(false, FingerIndex);
		if (ImageWidget)
		{
			ImageWidget->SetBrush(SlateBrush);
		}
		TriggerInedxAnimation(0);
	}
	return;
}