#pragma once

#include "Platform/WIN32/IApplication.h"

class Application : public IApplication
{
	//Application

public:
	Application();
	~Application();

public:
	void Initialize();
	// Game loop - Called on a loop while the Application is running
	void Update();
};