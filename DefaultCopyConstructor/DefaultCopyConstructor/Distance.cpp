#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance():feet(0),inches(0)
{
}

Distance::Distance(int f, float i) :feet(f), inches(i)
{
}

void Distance::setDistance(int f, float i)
{
	feet = f;
	inches = i;
}

void Distance::print()
{
	cout << " Feet = " << feet << "\t" << " inches = " << inches << "\n";
}

Distance Distance::add_distance(Distance d2)             // adding objects
{
	Distance result;
	result.feet= feet + d2.feet;
	inches + d2.inches;
	result.inches = inches + d2.inches;
	return result;
}

Distance::~Distance()
{
}
