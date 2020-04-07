#pragma once
#include <string>

using namespace std;

class Vehicle
{
private:
	string name;
	double maxSpeed;
	int tiresCount;
public:
	Vehicle(string n, double s, int t);

	string GetName();
	double GetMaxSpeed();
	int GetTiresCount();
};

