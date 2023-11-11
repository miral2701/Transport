#include "Tram.h"

#include<iostream>
using namespace std;

void Tram::Show() const
{
	cout << "Тип топлива трамвая:" << fluelType;
}
void Tram::fuelConsumption() const
{
	cout << "Расход топлива трамвая 0 л на 100 км:";
}
void Tram::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Tram::Refueling() const
{
	cout << "Бак  трамвая пуст он едет на електричестае:";
}