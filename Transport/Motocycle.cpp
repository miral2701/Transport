#include "Motocycle.h"

#include<iostream>
using namespace std;

void Motocycle::Show() const
{
	cout << "��� ������� ���������:" << fluelType;
}
void Motocycle::fuelConsumption() const
{
	cout << "������ ������� ��������� 10 � �� 100 ��:";
}
void Motocycle::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Motocycle::Refueling() const
{
	cout << "��� ��������� �����:";
}