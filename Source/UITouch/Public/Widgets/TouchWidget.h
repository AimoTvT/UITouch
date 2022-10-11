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
		FVector2D LocalWidgetLocation;
	
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
		/** * 判断是否进入触控区域 */
		virtual bool IsTouchLocation(FVector Moved);

};
