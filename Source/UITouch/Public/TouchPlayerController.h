/**
 * 版权所有权: Aimo_皑墨
 * 禁止盗取或用于盈利
 * 禁止修改未经过本人同意发布互联网
 * BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
 * GitHub地址: https://github.com/AimoTvT/UETouchPlugin
 * 欢迎有实力的大佬/萌新加入本插件的贡献
 * 一起打造强大的插件!!!
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "../Components/TouchComponent.h"

#include "TouchPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UITOUCH_API ATouchPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:

	ATouchPlayerController();

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Aimo|Variable")
		TObjectPtr <UTouchComponent> TouchComponent;

protected:

	/** 重写 玩家输入 */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 设置操控杆位置 */
		virtual void TouchPressed(ETouchIndex::Type FingerIndex, FVector Location);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 设置操控杆位置 */
		virtual void TouchReleased(ETouchIndex::Type FingerIndex, FVector Location);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 设置操控杆位置 */
		virtual void TouchMove(ETouchIndex::Type FingerIndex, FVector Location);

};
