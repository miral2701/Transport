#include "Ship.h"

#include<iostream>
using namespace std;

void Ship::Show() const
{
	cout << "��� ������� ���������:" << fluelType;
}
void Ship::fuelConsumption() const
{
	cout << "������ ������� ��������� 300 � �� 100 ��:";
}
void Ship::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Ship::Refueling() const
{
	cout << "��� ������� �����:";
}