#include "Car.h"

#include<iostream>
using namespace std;

void Car::Show() const
{
	cout << "Тип топлива машины:" <<fluelType;
}

void Car::fuelConsumption() const
{
	cout << "Расход топлива машины 20 л на 100 км:" ;
}

void Car::Enter(string a,int b,bool c) 
{
	fluelType = a;
	speed = b;
	hasWheels = c;
}
void Car::Refueling() const
{
	cout << "Бак автомобиля полон:";
}