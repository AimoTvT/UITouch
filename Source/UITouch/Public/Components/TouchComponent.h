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
#include "Components/ActorComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"

#include "TouchComponent.generated.h"


UCLASS(Blueprintable, meta = (DisplayName = "TouchComponent", BlueprintSpawnableComponent))
class UITOUCH_API UTouchComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTouchComponent();

	/** * 触控索引组 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|On")
	TArray<uint8> TouchIndexs;

	/** * 触控玩家控制器 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Controller")
	TObjectPtr<APlayerController> TouchPlayerController;

	/** * 输入组件*/
	UPROPERTY(DuplicateTransient)
	TObjectPtr<class UInputComponent> InputComponent;

	/** * 增强型输入元件 */
	UPROPERTY(BlueprintReadWrite, Category = "EnhancedInput|Controller")
	UEnhancedInputComponent* EnhancedInputComponent;

	/** * 输入动作组 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EnhancedInput|Action", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UInputAction>> InputActionTouchs;

	/** * 触发调用组 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EnhancedInput|Action", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UObject>> ObjectTouchs;

	/** * 多播所有接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIndexTouchDynmic, FVector, Moved, uint8, FingerIndex);

	/** * 多播指定接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTouchDynmic, FVector, Moved);


	/** * 多播收到触发的调度器 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnIndexTouchDynmic OnTriggerTouch;

	/** * 多播指定接收到的调度器1 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch1;

	/** * 多播指定接收到的调度器2 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch2;

	/** * 多播指定接收到的调度器3 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch3;

	/** * 多播指定接收到的调度器4 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch4;

	/** * 多播指定接收到的调度器5 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch5;

	/** * 多播指定接收到的调度器6 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch6;

	/** * 多播指定接收到的调度器7 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch7;

	/** * 多播指定接收到的调度器8 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch8;

	/** * 多播指定接收到的调度器9 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch9;

	/** * 多播指定接收到的调度器10 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchDynmic OnMovedTouch10;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	/** 重写 玩家输入 */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** * 触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void TouchIndexLocation(FVector Location, uint8 FingerIndex);

	/** * 内部执行触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void TouchIndexLocationDelegate(FVector Location, uint8 FingerIndex);

	/** * 判断是否限制内最小0 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool IsClamp(FVector2D& A, FVector2D& B);

	/** * 判断释放的触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual TArray<uint8> NoInputTouchIndex(APlayerController* PlayerController);

	/** * 默认触控按键 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void DefaultInputActionTouchs();

	/** * 设置控制器 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetPlayerController(APlayerController* PlayerController);

	/** * 设置触控按键触发组 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetInputActionTouchs(TArray<UInputAction*> InputActions);

	/** * 绑定触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool DelegateBind(uint8 FingerIndex, bool bDelegateBind, UObject* InFunctionObject, const FName& InFunctionName);

	/** * 触摸按下 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void IA_TouchPressed(const FInputActionValue& Value);

	/** * 触摸松开 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void IA_TouchReleased(const FInputActionValue& Value);

	/** * 触摸移动 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void IA_TouchMove(const FInputActionValue& Value);

	/** * 添加触发调用组 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void AddObjectTouchs(UObject* Object, uint8 Index);

	/** * 删除触发调用组 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void RemoveObjectTouchs(UObject* Object);
	
};
