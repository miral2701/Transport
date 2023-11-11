#pragma once
#include "Transport.h"
class Motocycle :
    public Transport
{
public:
	virtual void fuelConsumption() const;
	virtual void Show() const;
	virtual void Enter(string a,int b,bool c) ;
	virtual void Refueling() const;
};

