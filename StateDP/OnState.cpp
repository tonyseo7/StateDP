#include "OnState.h"

OnState::OnState(Shutter *shutter)
{
	this->shutter = shutter;
}

void OnState::Up()
{
	cout << "���� ���ǵ� �ö�. ���� ���ǵ�:" << shutter->Up() << endl;

}

void OnState::Down()
{
	cout << "���� ���ǵ� ���Ű�. ���� ���ǵ�:" << shutter->Down() << endl;
}