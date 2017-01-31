#pragma once
#include "OffState.h"
#include "OnState.h"
#include "Iris.h"
#include "Shutter.h"

class Camera
{
	State *states[2];
	Iris *iris;
	Shutter *shutter;
	int statenum;

public:
	Camera(void);
	~Camera(void);

	void ToggleInfoButton();
	void DialUp();
	void DialDown();
};
