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
#include "TimerManager.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"

#include "TouchComponent.generated.h"


 // TouchInputMode
UENUM(BlueprintType)
enum class ETouchInputMode : uint8
{
	/** * 输入事件 */
	InputEvent UMETA(DisplayName = "InputEvent"),
	/** * 增强输入 */
	EnhancedInput UMETA(DisplayName = "EnhancedInput")
};
// 触控事件类型（更准确的命名）
UENUM(BlueprintType)
enum class ETouchState : uint8
{
	/** 触控松开事件 */
	Released    UMETA(DisplayName = "Released"),
	/** 触控按下事件 */
	Pressed     UMETA(DisplayName = "Pressed"),
	/** 触控移动事件 */
	Moved       UMETA(DisplayName = "Moved"),
	/** 触控取消（系统中断） */
	Canceled UMETA(DisplayName = "Canceled")
};

class UTouchWidget;

UCLASS(Blueprintable, meta = (DisplayName = "TouchComponent", BlueprintSpawnableComponent))
class UITOUCH_API UTouchComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UTouchComponent();

	/** * 触控状态组,用于记录索引状态的 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|On")
	TArray<ETouchState> TouchStates;

	/** * 触控玩家控制器 */
	UPROPERTY(BlueprintReadWrite, Category = "UITouch|Controller")
	TObjectPtr<APlayerController> TouchPlayerController;

	/** * 输入组件*/
	UPROPERTY(DuplicateTransient)
	TObjectPtr<class UInputComponent> InputComponent;

	/** * 增强型输入元件 */
	UPROPERTY(BlueprintReadWrite, Category = "EnhancedInput|Controller")
	TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent;

	/** * 输入动作组 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "EnhancedInput|Action", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UInputAction>> InputActionTouchs;

	/** * 有限制的触发调用组,优先级都是从大到小排序*/
	UPROPERTY(BlueprintReadWrite, Category = "EnhancedInput|Action", meta = (AllowPrivateAccess = "true"))
	TArray<TObjectPtr<UTouchWidget>> TriggerTouchWidgets;

	/** * 自动绑定触控的输入映射 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnhancedInput|InputMappingContext")
	bool bAutoInputMappingContext = true;

	/** * 
	* 触控输入模式: 默认增强输入(EnhancedInput)
	* InputEvent(输入事件): 这个是官方的默认输入事件,自动绑定后无法关闭,所以推荐使用增强输入
	* EnhancedInput(默认增强输入): 默认绑定事件只是等待输入映射启用,和自动绑定输入映射配合默认启用
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnhancedInput|InputMappingContext")
	ETouchInputMode TouchInputMode = ETouchInputMode::EnhancedInput;

	/** * 自动绑定触控的输入映射的优先度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnhancedInput|InputMappingContext")
	int InputMappingContextPriorityIndex = 2;
	
	/** * 触控的输入映射 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EnhancedInput|InputMappingContext")
	TObjectPtr<UInputMappingContext> TouchInputMappingContext;
	
	/** * 触控的输入映射定时器,用于自动绑定失败的重试 */
	UPROPERTY(BlueprintReadWrite, Category = "PictureSequence|Variable")
	FTimerHandle TouchInputMappingContextTimerHandle;


	/** * 多播所有接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTouchIndexSignature, const FVector&, Location, const ETouchState, TouchState);

	/** * 多播指定接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTouchLocationSignature, const FVector&, Location);


	/** * 多播收到触发的调度器,只会绑定按下和松开,不会绑定移动 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchIndexSignature OnTouchTrigger;
	
	/** * 多播收到触发的调度器,只会绑定按下和松开,不会绑定移动 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchPressed;
	
	/** * 多播收到触发的调度器,只会绑定按下和松开,不会绑定移动 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchReleased;

	/** * 多播指定接收到的调度器1 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved1;

	/** * 多播指定接收到的调度器2 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved2;

	/** * 多播指定接收到的调度器3 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved3;

	/** * 多播指定接收到的调度器4 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved4;

	/** * 多播指定接收到的调度器5 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved5;

	/** * 多播指定接收到的调度器6 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved6;

	/** * 多播指定接收到的调度器7 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved7;

	/** * 多播指定接收到的调度器8 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved8;

	/** * 多播指定接收到的调度器9 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved9;

	/** * 多播指定接收到的调度器10 */
	UPROPERTY(BlueprintAssignable, Category = "UITouch|On")
	FOnTouchLocationSignature OnTouchMoved10;


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
	virtual void TouchTriggerLocation(const FVector& Location, const ETouchState TouchState);

	/** * 内部执行触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void TouchTriggerLocationDelegate(const FVector& Location, ETouchState TouchState);

	/** * 判断是否限制内最小0 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool IsClamp(FVector2D& A, FVector2D& B);

	/** * 判断释放的触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual TArray<uint8> ReleasedInputTouchIndexs(APlayerController* PlayerController);

	/** * 默认触控按键 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void DefaultInputActionTouchs();

	/** * 启用默认输入上下文 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void EnabledDefaultInputMappingContext();

	/** * 获取控制器 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual APlayerController* GetPlayerController() const;

	/** * 设置控制器 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetPlayerController(APlayerController* PlayerController);

	/** * 设置触控按键触发组 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void SetInputActionTouchs(TArray<UInputAction*> InputActions);

	/** * 绑定触控 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual bool DelegateBind(uint8 TouchIndex, bool bDelegateBind, UObject* InFunctionObject, const FName& InFunctionName);

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
	virtual void AddTouchWidget(UTouchWidget* InTouchWidget, uint8 PriorityIndex);

	/** * 删除触发调用组 */
	UFUNCTION(BlueprintCallable, Category = "UITouch|Function")
	virtual void RemoveTouchWidget(UTouchWidget* InTouchWidget);


	/** * 默认触控事件的回调 */

	/** * 触摸开始事件 */
	void IA_TouchIndexPressed(ETouchIndex::Type TouchIndex, FVector Location);

	/** * 触摸移动事件 */
	void IA_TouchIndexMove(ETouchIndex::Type TouchIndex, FVector Location);

	/** * 触摸结束事件 */
	void IA_TouchIndexReleased(ETouchIndex::Type TouchIndex, FVector Location);

};
