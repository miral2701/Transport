#include "Car.h"

#include<iostream>
using namespace std;

void Car::Show() const
{
	cout << "��� ������� ������:" <<fluelType;
}

void Car::fuelConsumption() const
{
	cout << "������ ������� ������ 20 � �� 100 ��:" ;
}

void Car::Enter(string a,int b,bool c) 
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Car::Refueling() const
{
	cout << "��� ���������� �����:";
}