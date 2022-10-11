/**
 * Copyright: Aimo_皑墨
 * Release date: October 12, 2022
 * Do not steal or use it for profit
 * No modification is allowed to be published on the Internet without the person's consent
 * BiLiBiLi (哔哩哔哩) address: https://space.bilibili.com/146962867
 * making address: https://github.com/AimoTvT/UETouchPlugin
 * We welcome the contributions of powerful movers and movers to join this plugin
 * Build powerful plugins together!!
 *
 * 版权所有权: Aimo_皑墨
 * 发布时间: 2022年10月12号
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
#include "Components/TouchComponent.h"

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
		/** * 触摸按下 */
		virtual void TouchPressed(ETouchIndex::Type FingerIndex, FVector Location);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 触摸松开 */
		virtual void TouchReleased(ETouchIndex::Type FingerIndex, FVector Location);

	UFUNCTION(BlueprintCallable, Category = "Aimo|Function")
		/** * 触摸移动 */
		virtual void TouchMove(ETouchIndex::Type FingerIndex, FVector Location);

};
