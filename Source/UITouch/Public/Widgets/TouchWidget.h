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

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"


#include "TouchWidget.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API UTouchWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:


	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 本地位置,包括嵌套布局后的位置 */
		FVector2D LocalWidgetPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 自定义偏移位置 */
		FVector2D CustomOffsetPosition;

	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		/** * 总父类控件,如一个用户控件里添加多个触控,那么那个用户控件是总父类 */
		UWidget* ParentWidget;
	
	/** * 多播指定接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressed, FVector, Moved);

	/** * 多播所有接收到的调度器 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnPressed OnPressedLocation;

protected:
	// Called when the game starts
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;


public:


	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 判断是否进入触控区域 */
		virtual void BindTouchDelegate();

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 接收触发位置和索引 */
		virtual void TouchIndex(FVector Moved, uint8 FingerIndex);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 设置触控是否绑定 */
		virtual void SetIndexTouchDelegate(bool bDelegateBind, uint8 FingerIndex);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 触发移动位置 */
		virtual void TouchMoved(FVector Moved);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 获取本地位置,包括嵌套布局后的偏移 */
		virtual FVector2D GetLocalPosition();

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 判断是否进入触控区域 */
		virtual bool IsTouchLocation(FVector Moved);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 播放动画 */
		virtual void TriggerInedxAnimation(int Index);

	UFUNCTION(BlueprintImplementableEvent, Category = "Aimo|Function")
		/** * 蓝图播放动画 */
		void BPTriggerInedxAnimation(int Index);

};
