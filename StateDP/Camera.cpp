#include "Camera.h"

Camera::Camera(void)
{
	iris = new Iris();
	shutter = new Shutter();
	states[0] = new OffState(iris);
	states[1] = new OnState(shutter);

	statenum = 0;
}

Camera::~Camera(void)
{
	delete states[0];
	delete states[1];
	delete iris;
	delete shutter;

}

void Camera::ToggleInfoButton()
{
	statenum = (statenum + 1) % 2;

}


void Camera::DialUp()
{
	states[statenum]->Up();
}

void Camera::DialDown()
{
	states[statenum]->Down();
}


