#include "NakladniVozidlo.h"

NakladniVozidlo::NakladniVozidlo(string name, double s, int t, int lc) : Vehicle(name, s, t)
{
	this->loadCapacity = lc;
}

int NakladniVozidlo::GetLoadCapacity()
{
	return this->loadCapacity;
}
