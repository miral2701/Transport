#include "Tram.h"

#include<iostream>
using namespace std;

void Tram::Show() const
{
	cout << "��� ������� �������:" << fluelType;
}
void Tram::fuelConsumption() const
{
	cout << "������ ������� ������� 0 � �� 100 ��:";
}
void Tram::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Tram::Refueling() const
{
	cout << "���  ������� ���� �� ���� �� �������������:";
}