/**
 * 版权所有权: Aimo_皑墨
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UETouchPlugin
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */


#include "TouchControlWidget.h"

void UTouchControlWidget::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (ImageWidget)
	{
		TouchLocations.SetNum(10); /** * 设置触控位置组的最大索引数 */
		ImageWidget->SetBrush(SlateBrush); /** * 设置触控背景 */
	}
}


void UTouchControlWidget::TouchIndex(FVector Moved, uint8 FingerIndex)
{
	if (Moved.Z)
	{
		if (IsTouchLocation(Moved) && TouchFingerIndexs.Find(FingerIndex) == -1)
		{
			int32 Index = TouchFingerIndexs.Add(FingerIndex); /** * 添加触控索引组的索引 */
			if (Index != -1 && TouchLocations.Num() > Index)
			{
				TouchLocations[Index] = { Moved.X, Moved.Y }; /** * 设置触控位置组的位置 */
			}
			SetIndexTouchDelegate(true, FingerIndex); /** * 绑定移动位置调度器 */
		}
	}
	else
	{
		if (TouchFingerIndexs.Find(FingerIndex) != -1 && TouchLocations.Num() >= TouchFingerIndexs.Find(FingerIndex))
		{
			int32 Index = TouchFingerIndexs.Remove(FingerIndex);
			if (Index != -1 && TouchLocations.Num() > Index)
			{
				TouchLocations[Index] = { 0.0, 0.0 }; /** * 清除触控位置组的位置 */
			}
			SetIndexTouchDelegate(false, FingerIndex); /** * 解除绑定移动位置调度器 */
		}
	}
}

void UTouchControlWidget::TouchMoved(FVector Moved)
{
	int32 Index = TouchFingerIndexs.Find(uint8(Moved.Z)); /** * 获取寻找对应的索引 */
	if (Index != -1 && TouchLocations.Num() > Index) /** * 判断是否寻找成功 */
	{
		FVector2D TouchMoved = { Moved.X, Moved.Y };
		TouchMoved -= TouchLocations[Index]; /** * 计算移动位置 */
		TouchLocations[Index] = { Moved.X, Moved.Y }; /** * 覆盖旧位置 */
		OnPressedLocation.Broadcast({ TouchMoved.X, TouchMoved.Y,Moved.Z + 1}); /** * 分发移动位置 */
	}
}