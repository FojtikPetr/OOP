#pragma once
#include "Vehicle.h"

class NakladniVozidlo : public Vehicle
{
private:
	int loadCapacity;
public:
	NakladniVozidlo(string name, double s, int t, int lc);
	int GetLoadCapacity();
};

