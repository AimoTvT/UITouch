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


#include "Components/TouchComponent.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "Widgets/TouchWidget.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "UObject/ConstructorHelpers.h"


 // Sets default values for this component's properties
UTouchComponent::UTouchComponent() : EnhancedInputComponent(nullptr)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch1(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch1.EnhancedInputActionTouch1'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch2(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch2.EnhancedInputActionTouch2'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch3(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch3.EnhancedInputActionTouch3'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch4(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch4.EnhancedInputActionTouch4'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch5(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch5.EnhancedInputActionTouch5'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch6(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch6.EnhancedInputActionTouch6'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch7(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch7.EnhancedInputActionTouch7'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch8(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch8.EnhancedInputActionTouch8'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch9(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch9.EnhancedInputActionTouch9'"));
	static ConstructorHelpers::FObjectFinder<UInputAction> EnhancedInputActionTouch10(TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch10.EnhancedInputActionTouch10'"));

	InputActionTouchs.Add(EnhancedInputActionTouch1.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch2.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch3.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch4.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch5.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch6.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch7.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch8.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch9.Object);
	InputActionTouchs.Add(EnhancedInputActionTouch10.Object);

	
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> TouchInputMappingContextObject(TEXT("/Script/EnhancedInput.InputMappingContext'/UITouch/EnhancedInput/EnhancedInputMappingContextTouchs.EnhancedInputMappingContextTouchs'"));

	TouchInputMappingContext = TouchInputMappingContextObject.Object;


	// ...
}


// Called when the game starts
void UTouchComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	if (TouchPlayerController)
	{
		SetPlayerController(TouchPlayerController);
	}
	else
	{
		if (Cast<APlayerController>(GetOwner()))
		{
			SetPlayerController(Cast<APlayerController>(GetOwner()));
		}
	}
	//获取控件并绑定上
	TArray<UUserWidget*> FoundWidgets;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(this, FoundWidgets, UTouchWidget::StaticClass(), false);
	for (UUserWidget* UserWidget : FoundWidgets)
	{
		if (UTouchWidget* TouchWidget = Cast<UTouchWidget>(UserWidget))
		{
			if (TouchWidget->bCustomTrigger == false && TouchWidget->GetOwningPlayer() == TouchPlayerController)
			{
				TouchWidget->SetWidgetTouchComponent(this);
			}
		}
	}
}


// Called every frame
void UTouchComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UTouchComponent::TouchTriggerLocation(const FVector& Location, const ETouchState TouchState)
{
	const uint8 TouchIndex = static_cast<uint8>(Location.Z);
	//是否小于这个触控值
	if (!TouchStates.IsValidIndex(TouchIndex))
	{
		TouchStates.SetNum(TouchIndex + 1); /** * 设置触控位置组的最大索引数 */
	}
	switch (TouchState)
	{
	case ETouchState::Released:
		TouchStates[TouchIndex] = TouchState;
		OnTouchTrigger.Broadcast(Location, TouchState);
		break;
	case ETouchState::Pressed:
		TouchStates[TouchIndex] = TouchState;
		OnTouchTrigger.Broadcast(Location, TouchState);
		break;
	case ETouchState::Moved:
		TouchStates[TouchIndex] = TouchState;
		TouchTriggerLocationDelegate(Location, TouchState);
		break;
	default:
		TouchStates[TouchIndex] = TouchState;
		OnTouchTrigger.Broadcast(Location, TouchState);
		break;
	}
}


void UTouchComponent::TouchTriggerLocationDelegate(const FVector& Location, ETouchState TouchState)
{
	switch (static_cast<uint8>(Location.Z))
	{
	case 0:
		OnTouchMoved1.Broadcast(Location);
		break;
	case 1:
		OnTouchMoved2.Broadcast(Location);
		break;
	case 2:
		OnTouchMoved3.Broadcast(Location);
		break;
	case 3:
		OnTouchMoved4.Broadcast(Location);
		break;
	case 4:
		OnTouchMoved5.Broadcast(Location);
		break;
	case 5:
		OnTouchMoved6.Broadcast(Location);
		break;
	case 6:
		OnTouchMoved7.Broadcast(Location);
		break;
	case 7:
		OnTouchMoved8.Broadcast(Location);
		break;
	case 8:
		OnTouchMoved9.Broadcast(Location);
		break;
	case 9:
		OnTouchMoved10.Broadcast(Location);
		break;
	default:
		break;
	}
}

bool UTouchComponent::IsClamp(FVector2D& A, FVector2D& B)
{
	return A.X >= 0 && A.X <= B.X && A.Y >= 0 && A.Y <= B.Y;
}

TArray<uint8> UTouchComponent::ReleasedInputTouchIndexs(APlayerController* PlayerController)
{
	FVector2D Vector2 = UWidgetLayoutLibrary::GetViewportSize(GetWorld());
	TArray<uint8> ReleasedIndexs;
	if (PlayerController)
	{
		FVector2D Vector;
		bool bIsCurrentlyPressed = false;
		for (size_t i = 0; i < TouchStates.Num(); i++)
		{
			PlayerController->GetInputTouchState(static_cast<ETouchIndex::Type>(i), Vector.X, Vector.Y, bIsCurrentlyPressed);
			if ((TouchStates[i] != ETouchState::Released && bIsCurrentlyPressed == false) || IsClamp(Vector, Vector2) == false)
			{
				ReleasedIndexs.Add(i);
			}
		}
	}
	return ReleasedIndexs;
}

void UTouchComponent::DefaultInputActionTouchs()
{
	InputActionTouchs.Empty();
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch1.EnhancedInputActionTouch1'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch2.EnhancedInputActionTouch2'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch3.EnhancedInputActionTouch3'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch4.EnhancedInputActionTouch4'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch5.EnhancedInputActionTouch5'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch6.EnhancedInputActionTouch6'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch7.EnhancedInputActionTouch7'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch8.EnhancedInputActionTouch8'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch9.EnhancedInputActionTouch9'")));
	InputActionTouchs.Add(LoadObject<UInputAction>(this, TEXT("/Script/EnhancedInput.InputAction'/UITouch/EnhancedInput/EnhancedInputActionTouch10.EnhancedInputActionTouch10'")));
}

void UTouchComponent::EnabledDefaultInputMappingContext()
{
	if (!TouchInputMappingContext)
	{
		UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] TouchInputMappingContext == nullptr,Unable to perform automatic binding"));
		return;
	}
	if (TouchPlayerController == nullptr) //虽然基本上不可能发生
	{
		if (Cast<APlayerController>(GetOwner()))
		{
			SetPlayerController(Cast<APlayerController>(GetOwner()));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] TouchComponent Bind the player controller"));
			return;
		}
	}
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(TouchPlayerController->GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(TouchInputMappingContext, InputMappingContextPriorityIndex);
		UE_LOG(LogTemp, Log, TEXT("[UTouchComponent] TouchInputMappingContext, automatic binding successfully"));
		return;
	}
	else
	{
		if (GetWorld())
		{
			GetWorld()->GetTimerManager().SetTimer(TouchInputMappingContextTimerHandle, this, &UTouchComponent::EnabledDefaultInputMappingContext, 0.5f, false);
			UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] UEnhancedInputLocalPlayerSubsystem == nullprt,Wait to appear fetch"));
			return;
		}
		UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] GetWorld() = nullptr !???")); //虽然基本上不可能发生
		return;
	}
}

APlayerController* UTouchComponent::GetPlayerController() const
{
	return TouchPlayerController;
}

void UTouchComponent::SetPlayerController(APlayerController* PlayerController)
{
	if (TouchPlayerController != PlayerController)
	{
		TouchPlayerController = PlayerController;
		if (TouchPlayerController && TouchPlayerController->IsLocalController())
		{
			InputComponent = Cast<UInputComponent>(PlayerController->FindComponentByClass(UInputComponent::StaticClass()));
			if (InputComponent == nullptr)
			{
				InputComponent = NewObject<UInputComponent>(PlayerController);
			}
			if (InputActionTouchs.Num() == 0)
			{
				DefaultInputActionTouchs();
			}
			SetupPlayerInputComponent(InputComponent);
			
		}
	}
}

void UTouchComponent::SetInputActionTouchs(TArray<UInputAction*> InputActions)
{
	InputActionTouchs = InputActions;
	SetupPlayerInputComponent(InputComponent);
}

bool UTouchComponent::DelegateBind(uint8 TouchIndex, bool bDelegateBind, UObject* InFunctionObject, const FName& InFunctionName)
{
	if (InFunctionObject == nullptr)
	{
		return false;
	}
	FScriptDelegate ScriptDelegate; //建立对接变量
	ScriptDelegate.BindUFunction(InFunctionObject, InFunctionName); //对接变量绑定函数
	if (!ScriptDelegate.IsBound())
	{
		return false;
	}
	switch (TouchIndex)
	{
	case 0:
		if (bDelegateBind)
		{
			OnTouchMoved1.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved1.Remove(ScriptDelegate);
		}
		break;
	case 1:
		if (bDelegateBind)
		{
			OnTouchMoved2.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved2.Remove(ScriptDelegate);
		}
		break;
	case 2:
		if (bDelegateBind)
		{
			OnTouchMoved3.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved3.Remove(ScriptDelegate);
		}
		break;
	case 3:
		if (bDelegateBind)
		{
			OnTouchMoved4.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved4.Remove(ScriptDelegate);
		}
		break;
	case 4:
		if (bDelegateBind)
		{
			OnTouchMoved5.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved5.Remove(ScriptDelegate);
		}
		break;
	case 5:
		if (bDelegateBind)
		{
			OnTouchMoved6.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved6.Remove(ScriptDelegate);
		}
		break;
	case 6:
		if (bDelegateBind)
		{
			OnTouchMoved7.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved7.Remove(ScriptDelegate);
		}
		break;
	case 7:
		if (bDelegateBind)
		{
			OnTouchMoved8.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved8.Remove(ScriptDelegate);
		}
		break;
	case 8:
		if (bDelegateBind)
		{
			OnTouchMoved9.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved9.Remove(ScriptDelegate);
		}
		break;
	case 9:
		if (bDelegateBind)
		{
			OnTouchMoved10.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchMoved10.Remove(ScriptDelegate);
		}
		break;
	case 10:
		if (bDelegateBind)
		{
			OnTouchTrigger.Add(ScriptDelegate); //绑定对接变量
		}
		else
		{
			OnTouchTrigger.Remove(ScriptDelegate);
		}
		break;
	default:
		TouchIndex = 255;
		break;
	}
	return TouchIndex != 255;
}


void UTouchComponent::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	if (PlayerInputComponent == nullptr)
	{
		return;
	}
	if (EnhancedInputComponent == nullptr)	
	{
		EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	}
	if (EnhancedInputComponent)
	{
		switch (TouchInputMode)
		{
		case ETouchInputMode::EnhancedInput:
			for (size_t i = 0; i < InputActionTouchs.Num(); i++)
			{
				if (InputActionTouchs[i])
				{
					EnhancedInputComponent->BindAction(InputActionTouchs[i], ETriggerEvent::Started, this, &UTouchComponent::IA_TouchPressed);
					EnhancedInputComponent->BindAction(InputActionTouchs[i], ETriggerEvent::Completed, this, &UTouchComponent::IA_TouchReleased);
					EnhancedInputComponent->BindAction(InputActionTouchs[i], ETriggerEvent::Triggered, this, &UTouchComponent::IA_TouchMove);
				}
			}
			UE_LOG(LogTemp, Log, TEXT("[UTouchComponent] BindEnhancedInput,Pending activation of input mapping")); //绑定增强输入,待启用输入映射
			if (bAutoInputMappingContext)
			{
				EnabledDefaultInputMappingContext();
			}
			break;
		case ETouchInputMode::InputEvent:
			if (bAutoInputMappingContext)
			{
				InputComponent->BindTouch(IE_Pressed, this, &UTouchComponent::IA_TouchIndexPressed);
				InputComponent->BindTouch(IE_Repeat, this, &UTouchComponent::IA_TouchIndexMove);
				InputComponent->BindTouch(IE_Released, this, &UTouchComponent::IA_TouchIndexReleased);
				UE_LOG(LogTemp, Log, TEXT("[UTouchComponent] BindTouchEvent,Cannot be closed")); //绑定触控事件,无法关闭
			}
			break;
		default:
			break;
		}
	}
}



void UTouchComponent::IA_TouchPressed(const FInputActionValue& Value)
{
	const FVector Location = Value.Get<FVector>();
	UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] 按键按下: %s"), *Location.ToString());
	uint8 Index = 255;
	for (UTouchWidget* TouchWidget : TriggerTouchWidgets)
	{
		if ((Index == 255 || TouchWidget->TriggerPriorityIndex == Index))
		{
			if (TouchWidget->IsAllowTouch(Location))
			{
				UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] 允许控件: %s"), *TouchWidget->GetName());
				if (TouchWidget->TouchPressedLocation(Location))
				{
					Index = TouchWidget->TriggerPriorityIndex;
				}
			}
		}
		else
		{
			break;
		}
	}
	OnTouchPressed.Broadcast(Location);
}

void UTouchComponent::IA_TouchReleased(const FInputActionValue& Value)
{
	const FVector Location = Value.Get<FVector>();
	UE_LOG(LogTemp, Warning, TEXT("[UTouchComponent] 按键松开: %s"), *Location.ToString());
	OnTouchReleased.Broadcast(Location);
	//const TArray<uint8> ReleasedTouchIndexs = ReleasedInputTouchIndexs(TouchPlayerController);
	//for (const uint8 ReleasedTouchIndex : ReleasedTouchIndexs)
	//{
	//}
}

void UTouchComponent::IA_TouchMove(const FInputActionValue& Value)
{
	TouchTriggerLocation(Value.Get<FVector>(), ETouchState::Moved);
}

void UTouchComponent::AddTouchWidget(UTouchWidget* InTouchWidget, uint8 PriorityIndex)
{
	if (InTouchWidget)
	{
		int TIndex = -1;
		for (size_t i = 0; i < TriggerTouchWidgets.Num(); i++)
		{
			const UTouchWidget* TouchWidget = TriggerTouchWidgets[i]; 
			if (TouchWidget && (TouchWidget->TriggerPriorityIndex <= PriorityIndex))
			{
				TIndex = i;
				break;
			}
		}
		if (TIndex == -1)
		{
			TriggerTouchWidgets.Add(InTouchWidget);
		}
		else
		{
			TriggerTouchWidgets.Insert(InTouchWidget, TIndex);
		}
	}
}

void UTouchComponent::RemoveTouchWidget(UTouchWidget* InTouchWidget)
{
	if (InTouchWidget)
	{
		TriggerTouchWidgets.Remove(InTouchWidget);
	}
}

void UTouchComponent::IA_TouchIndexPressed(ETouchIndex::Type TouchIndex, FVector Location)
{
	Location.Z = static_cast<double>(TouchIndex);
	IA_TouchPressed(Location);
}

void UTouchComponent::IA_TouchIndexMove(ETouchIndex::Type TouchIndex, FVector Location)
{
	Location.Z = static_cast<double>(TouchIndex);
	IA_TouchMove(Location);
}

void UTouchComponent::IA_TouchIndexReleased(ETouchIndex::Type TouchIndex, FVector Location)
{
	Location.Z = static_cast<double>(TouchIndex);
	IA_TouchReleased(Location);
}
