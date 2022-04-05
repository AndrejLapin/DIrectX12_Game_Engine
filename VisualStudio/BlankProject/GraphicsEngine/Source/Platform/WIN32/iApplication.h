#pragma once

#define ENTRYAPP(x) IApplication* EntryApplication() { return new x; }

class ENGINE_API IApplication
{
	//Application

public:
	IApplication();
	virtual ~IApplication() {};

public:
	virtual void Initialize() = 0;
	// Game loop - Called on a loop while the Application is running
	virtual void Update() = 0;
};

IApplication* EntryApplication();