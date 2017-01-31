#pragma once
#include "State.h"
#include "Shutter.h"
#include "common.h"

class OnState :public State
{
	Shutter *shutter;

public:
	OnState(Shutter *shutter);
	virtual void Up();
	virtual void Down();
};