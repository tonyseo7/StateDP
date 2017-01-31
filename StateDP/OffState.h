#pragma once
#include "State.h"
#include "Iris.h"
#include "common.h"

class OffState :public State
{
	Iris *iris;

public:
	OffState(Iris *iris);
	virtual void Up();
	virtual void Down();


};
