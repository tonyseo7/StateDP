#include "Iris.h"

Iris::Iris()
{
	focal_lenght = 2;
}


int Iris::Up()
{
	if (focal_lenght < 10)
	{
		focal_lenght++;
	}

	return focal_lenght;
}

int Iris::Down()
{
	if (focal_lenght > 2)
	{
		focal_lenght--;
	}

	return focal_lenght;
}