#include "Camera.h"

void main()
{
	Camera *camera = new Camera();
	camera->DialUp();
	camera->DialDown();

	camera->ToggleInfoButton();
	camera->DialUp();
	camera->DialDown();

	delete camera;
}