#include "OffState.h"

OffState::OffState(Iris *iris)
{
	this->iris = iris;
}


void OffState::Up()
{
	cout << "F 값 증가되었음. 현재 F값: " << iris->Up() << endl;
}
void OffState::Down()
{
	cout << "F 값 감소되었음. 현재 F값:" << iris->Down() << endl;
}