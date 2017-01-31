#include "OnState.h"

OnState::OnState(Shutter *shutter)
{
	this->shutter = shutter;
}

void OnState::Up()
{
	cout << "셔터 스피드 올라감. 현재 스피드:" << shutter->Up() << endl;

}

void OnState::Down()
{
	cout << "셔터 스피드 내렴감. 현재 스피드:" << shutter->Down() << endl;
}