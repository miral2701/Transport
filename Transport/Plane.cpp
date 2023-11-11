#include "Plane.h"

#include<iostream>
using namespace std;

void Plane::Show() const
{
	cout << "Ти топлива самолета:" << fluelType;
}
void Plane::fuelConsumption() const
{
	cout << "Расход топлива самолета 200 л на 100 км:";
}
void Plane::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Plane::Refueling() const
{
	cout << "Бак самолета полон:";
}