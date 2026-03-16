// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "KKC_EnhancedInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class CYBERWOLF_57V_API UKKC_EnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
	
	public:
        template<class UserClass, typename FuncType>
        void BindMovementActions(
            const UInputMappingContext* IMC,
            UserClass* Object,
            FuncType MoveFunc,
            FuncType LookFunc,
            FuncType JumpStartFunc,
            FuncType JumpEndFunc,
            FuncType SprintStartFunc,
            FuncType SprintEndFunc);
};
