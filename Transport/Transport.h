#pragma once
#include<iostream>
using namespace std;

class Transport
{
protected:
	string fluelType;
	int speed;
	bool hasWheels;
public:
	
	void SetFluel(char* b);
	void SetSpeed(int b);
	void SetWheels(bool b);

	string GetFluel();
	int GetSpeed();
	bool GetWheels();

	virtual void fuelConsumption() const = 0;
	virtual void Show() const = 0;
	virtual void Enter(string a, int b, bool c)  = 0;
	virtual void Refueling() const = 0;


};

