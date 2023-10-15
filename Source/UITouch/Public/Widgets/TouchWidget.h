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

	/** * 总父类控件,如一个用户控件里添加多个触控,那么那个用户控件是总父类 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		TObjectPtr<UWidget> ParentWidget;

	/** * 本地位置,包括嵌套布局后的位置 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		FVector2D LocalWidgetPosition;

	/** * 自定义偏移位置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FVector2D CustomOffsetPosition;

	/** * 触发偏移位置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FVector2D TriggerOffsetPosition;

	/** * 最后触发位置 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|Variable")
		FVector LastTriggerLocation;

	/** 禁用图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		FSlateBrush DisabledSlateBrush;

	/** * 自定义触发 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		bool bCustomTrigger;

	/** * 禁用 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aimo|Variable")
		bool bDisabled = false;


	
	/** * 多播指定接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressed, FVector, Location);

	/** * 多播所有接收到的调度器 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnPressed OnTouchLocation;

protected:
	
	virtual void NativePreConstruct() override;

	// Called when the game starts
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;


public:


	/** * 判断是否进入触控区域 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void BindTouchDelegate();

	/** * 接收触发位置和索引 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void TouchIndexLocation(const FVector& Location, uint8 FingerIndex);

	/** * 设置触控是否绑定 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void SetIndexTouchDelegate(bool bDelegateBind, uint8 FingerIndex);

	/** * 触发移动位置 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void TouchMovedLocation(const FVector& Location);

	/** * 获取本地位置,包括嵌套布局后的偏移 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual FVector2D GetLocalPosition();

	/** * 判断是否进入触控区域 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual bool IsTouchLocation(const FVector& Location);

	/** * 设置禁用  */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void SetDisabled(bool bIsDisabled);

	/** * 播放动画 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void TriggerInedxAnimation(int Index);

	/** * 蓝图播放动画 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Aimo|Function")
		void BPTriggerInedxAnimation(int Index);

	/** * 组件销毁回调 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void ComponentDeactivated(UActorComponent* ActorComponent);

};
