#include "OffState.h"

OffState::OffState(Iris *iris)
{
	this->iris = iris;
}


void OffState::Up()
{
	cout << "F �� �����Ǿ���. ���� F��: " << iris->Up() << endl;
}
void OffState::Down()
{
	cout << "F �� ���ҵǾ���. ���� F��:" << iris->Down() << endl;
}