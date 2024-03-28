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
#include "Components/TouchComponent.h"

#include "TouchWidget.generated.h"

 /**
  *
  */
UCLASS()
class UITOUCH_API UTouchWidget : public UUserWidget
{
	GENERATED_BODY()
protected:

	/** * 父类控件,用于嵌套用户控件,如用户控件位置不是右上角 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	TObjectPtr<UUserWidget> ParentUserWidget;


public:

	/** * 本地位置,包括嵌套布局后的位置 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	FVector2D LocalWidgetPosition;

	/** * 本地中心位置,包括嵌套布局后的位置 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	FVector2D LocalCentreWidgetPosition;

	/** * 自定义偏移位置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	FVector2D CustomOffsetPosition;

	/** * 触发偏移位置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	FVector2D TriggerOffsetPosition;

	/** * 最后触发位置 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	FVector LastTriggerLocation;

	/** * 禁用图片设置 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Appearance")
	FSlateBrush DisabledSlateBrush;

	/** * 自定义触发,后续需要手动触发 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bCustomTrigger;

	/** * 禁用 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	bool bDisabled = false;

	/** * 触发索引,255不限制触发, 0~254 等级越高越优先, 如果有相等那么都会触发,触发后等级低下会停止触发 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UITouch|Variable")
	uint8 TriggerIndex;

	/** * 绑定的默认控件触控组件 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Variable")
	TObjectPtr<UTouchComponent> WidgetTouchComponent;


	/** * 多播指定接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressed, FVector, Location);

	/** * 多播所有接收到的调度器 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnPressed OnTouchLocation;

protected:

	virtual void NativePreConstruct() override;

	// Called when the game starts
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;

	virtual void NativeDestruct() override;


public:

	/** * 获取父类控件,用于嵌套用户控件,如用户控件位置不是右上角 */
	UFUNCTION(BlueprintPure, Category = "UITouch|Function")
	virtual UWidget* GetParentUserWidget();

	/** * 设置父类控件,用于嵌套用户控件,如用户控件位置不是右上角 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetParentUserWidget(UUserWidget* InUserWidget);


	/** * 绑定组件委托,绑定失败后0.2秒后重新绑定,直至绑定成功 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void BindTouchDelegate();

	/** * 删除触控组件委托绑定 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void RemoveTouchDelegate(UTouchComponent* TouchComponent);

	/** * 接收触发位置和索引 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void NativeTouchIndexLocation(const FVector& Location, uint8 FingerIndex);

	/** * 接收触发位置和索引 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool TouchIndexLocation(const FVector& Location, uint8 FingerIndex);

	/** * 设置触控是否绑定 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetIndexTouchDelegate(bool bDelegateBind, uint8 FingerIndex);

	/** * 触发移动位置 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void TouchMovedLocation(const FVector& Location);

	/** * 获取本地位置,包括嵌套布局后的偏移 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual FVector2D GetLocalPosition();

	/** * 判断是否进入触控区域 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool IsTouchLocation(const FVector& Location);

	/** * 设置禁用  */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetDisabled(bool bIsDisabled);

	/** * 播放动画 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void TriggerInedxAnimation(int Index);

	/** * 蓝图播放动画 */
	UFUNCTION(BlueprintImplementableEvent, Category = "UITouch|Function")
	void BPTriggerInedxAnimation(int Index);

	/** * 组件销毁回调 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void ComponentDeactivated(UActorComponent* ActorComponent);

	/** * 触发索引,255不限制触发, 0~254 等级越高越优先, 如果有相等那么都会触发,触发后等级低下会停止触发 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetTriggerIndex(uint8 Index);

	/** * 获取控件触控组件 */
	UFUNCTION(BlueprintPure, Category = "UITouch|Function")
	virtual UTouchComponent* GetWidgetTouchComponent();

};
