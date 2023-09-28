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


#include "Widgets/TouchControlWidget.h"

void UTouchControlWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (ImageWidget)
	{
		TouchPositions.SetNum(10); /** * 设置触控位置组的最大索引数 */
		ImageWidget->SetBrush(SlateBrush); /** * 设置触控背景 */
	}
}


void UTouchControlWidget::TouchIndex(const FVector& Moved, uint8 FingerIndex)
{
	if (bDisabled)
	{
		return;
	}
	if (Moved.Z)
	{
		if (IsTouchLocation(Moved) && TouchFingerIndexs.Find(FingerIndex) == -1)
		{
			LastTriggerLocation = Moved;
			int32 Index = TouchFingerIndexs.Add(FingerIndex); /** * 添加触控索引组的索引 */
			if (Index != -1 && TouchPositions.Num() > Index)
			{
				TouchPositions[Index] = { Moved.X, Moved.Y }; /** * 设置触控位置组的位置 */
			}
			SetIndexTouchDelegate(true, FingerIndex); /** * 绑定移动位置调度器 */
		}
	}
	else
	{
		if (TouchFingerIndexs.Find(FingerIndex) != -1 && TouchPositions.Num() >= TouchFingerIndexs.Find(FingerIndex))
		{
			int32 Index = TouchFingerIndexs.Remove(FingerIndex);
			if (Index != -1 && TouchPositions.Num() > Index)
			{
				TouchPositions[Index] = { 0.0, 0.0 }; /** * 清除触控位置组的位置 */
			}
			SetIndexTouchDelegate(false, FingerIndex); /** * 解除绑定移动位置调度器 */
		}
	}
}

void UTouchControlWidget::TouchMoved(const FVector& Moved)
{
	if (LastTriggerLocation == Moved)
	{
		return;
	}
	LastTriggerLocation = Moved;
	int32 Index = TouchFingerIndexs.Find(uint8(Moved.Z)); /** * 获取寻找对应的索引 */
	if (Index != -1 && TouchPositions.Num() > Index) /** * 判断是否寻找成功 */
	{
		FVector2D TouchMoved = { Moved.X, Moved.Y };
		TouchMoved -= TouchPositions[Index]; /** * 计算移动位置 */
		TouchPositions[Index] = { Moved.X, Moved.Y }; /** * 覆盖旧位置 */
		OnPressedLocation.Broadcast({ TouchMoved.X, TouchMoved.Y,Moved.Z + 1}); /** * 分发移动位置 */
	}
}

void UTouchControlWidget::SetDisabled(bool bIsDisabled)
{
	Super::SetDisabled(bIsDisabled);
	if (bDisabled)
	{
		if (IsDesignTime() == false)
		{
			for (size_t i = 0; i < TouchPositions.Num(); i++)
			{
				FVector2D DefaultPosition = { 0.0, 0.0 };
				if (TouchPositions[i] != DefaultPosition)
				{
					TouchPositions[i] = DefaultPosition; /** * 清除触控位置组的位置 */
					SetIndexTouchDelegate(false, i); /** * 解除绑定移动位置调度器 */
				}
			}
		}
		TriggerInedxAnimation(-1);
	}
	else
	{
		TriggerInedxAnimation(0);
	}
}
