#include "Ship.h"

#include<iostream>
using namespace std;

void Ship::Show() const
{
	cout << "Тип топлива кораблика:" << fluelType;
}
void Ship::fuelConsumption() const
{
	cout << "Расход топлива кораблика 300 л на 100 км:";
}
void Ship::Enter(string a, int b, bool c)
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Ship::Refueling() const
{
	cout << "Бак корабля полон:";
}