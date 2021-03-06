#pragma once

#include "../ScriptHook/ScriptThread.h"
#include "../ScriptHook/ScriptingEnums.h"

class CustomThread : 
	public ScriptThread
{
private:
	u32 count;
	f32 z, y, x;
	b8 airportunload;
	u32 rand,
		customrand,
		vrand,
		srand,
		arand,
		timer,
		countloaded;

protected:
    // We want a Tick based script, so we override RunTick.
	void RunTick();

public:
	CustomThread();
};