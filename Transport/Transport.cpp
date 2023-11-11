#include "Transport.h"
#include <iostream>
using namespace std;





void Transport::SetFluel(char* b)
{
	fluelType = b;
}

void Transport::SetSpeed(int b)
{
	speed = b;
}

void Transport::SetWheels(bool b)
{
	hasWheels = b;
}

string Transport::GetFluel()
{
	return fluelType;
}

int Transport::GetSpeed()
{
	return speed;
}

bool Transport::GetWheels()
{
	return hasWheels;
}


