// Created by Bankai Software @2025

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FConceptorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
