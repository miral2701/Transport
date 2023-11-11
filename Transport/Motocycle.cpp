#include "Motocycle.h"

#include<iostream>
using namespace std;

void Motocycle::Show() const
{
	cout << "тип топлива мотоцыкла:" << fluelType;
}
void Motocycle::fuelConsumption() const
{
	cout << "Расход топлива мотоцыкла 10 л на 100 км:";
}
void Motocycle::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Motocycle::Refueling() const
{
	cout << "Бак мотоцыкла полон:";
}