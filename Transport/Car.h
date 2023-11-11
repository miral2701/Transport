
#include "Transport.h"
class Car :public Transport
{
public:
	virtual void fuelConsumption() const ;
	virtual void Show() const ;
	virtual void Enter(string a, int b, bool c) ;
	virtual void Refueling() const;

};
