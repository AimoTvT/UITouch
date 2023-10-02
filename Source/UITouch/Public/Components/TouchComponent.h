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


#include "TouchComponent.generated.h"


UCLASS(Blueprintable, meta=(DisplayName = "TouchComponent", BlueprintSpawnableComponent))
class UITOUCH_API UTouchComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTouchComponent();

	/** * 触控组 */
	UPROPERTY(BlueprintReadWrite, Category = "Aimo|On")
	TArray<uint8> TouchIndexs;

	/** * 多播所有接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIndexTouchDynmic,FVector, Moved, uint8, FingerIndex);

	/** * 多播指定接收到的调度器 */
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTouchDynmic, FVector, Moved);


	/** * 多播收到触发的调度器 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnIndexTouchDynmic OnTriggerTouch;

	/** * 多播指定接收到的调度器1 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch1;

	/** * 多播指定接收到的调度器2 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch2;

	/** * 多播指定接收到的调度器3 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch3;

	/** * 多播指定接收到的调度器4 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch4;

	/** * 多播指定接收到的调度器5 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch5;

	/** * 多播指定接收到的调度器6 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch6;

	/** * 多播指定接收到的调度器7 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch7;

	/** * 多播指定接收到的调度器8 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch8;

	/** * 多播指定接收到的调度器9 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch9;

	/** * 多播指定接收到的调度器10 */
	UPROPERTY(BlueprintAssignable, Category = "Aimo|On")
		FOnTouchDynmic OnMovedTouch10;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** * 触控 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void TouchIndexLocation(FVector Location, uint8 FingerIndex);

	/** * 内部执行触控 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual void TouchIndexLocationDelegate(FVector Location, uint8 FingerIndex);
	
	/** * 判断是否限制内最小0 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual bool IsClamp(FVector2D& A, FVector2D& B);

	/** * 判断释放的触控 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual TArray<uint8> NoInputTouchIndex(APlayerController* PlayerController);

	
	/** * 绑定触控 */
	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		virtual bool DelegateBind(uint8 FingerIndex, bool bDelegateBind, UObject* InFunctionObject, const FName& InFunctionName);

};
