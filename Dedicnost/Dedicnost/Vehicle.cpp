#include "Vehicle.h"

Vehicle::Vehicle(string n, double s, int t)
{
	this->name = n;
	this->maxSpeed = s;
	this->tiresCount = t;
}

string Vehicle::GetName()
{
	return this->name;
}

double Vehicle::GetMaxSpeed()
{
	return this->maxSpeed;
}

int Vehicle::GetTiresCount()
{
	return this->tiresCount;
}
