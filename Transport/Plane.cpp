#include "Plane.h"

#include<iostream>
using namespace std;

void Plane::Show() const
{
	cout << "�� ������� ��������:" << fluelType;
}
void Plane::fuelConsumption() const
{
	cout << "������ ������� �������� 200 � �� 100 ��:";
}
void Plane::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Plane::Refueling() const
{
	cout << "��� �������� �����:";
}