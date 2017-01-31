#include "Shutter.h"

Shutter::Shutter()
{
	speed = 0;
}

int Shutter::Up()
{
	speed++;
	
	return speed;
}


int Shutter::Down()
{
	if (speed > 0)
	{
		speed--;
	}

	return speed;
}