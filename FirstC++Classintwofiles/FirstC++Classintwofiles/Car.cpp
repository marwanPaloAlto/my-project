#include "Car.h"
#include <iostream>
using namespace std;

int Car::count = 0;
/*
Car::Car()
{
	maker = "Honda";
	model = 2019;
	colour = "White";
}
*/


Car::Car() :maker("Toyota"), model(2019), colour("White")
{
	count++;
		
	// inside any other statement you want to put
}



//initialization list way when using constractor to initialize :


Car::Car(string m , int mo , string c) : maker(m),model(mo),colour(c)
{
	count++;
	
}

Car::~Car()
{

	count--;
	//cout << " Goodbye \n";


}
void Car::setmaker(string m)
{
	maker = m;
}

string Car::getmaker()
{
	return maker;
}

void Car::setmodel(int m)
{
	model = m;
}

int Car::getmodel()
{
	return model;
}

int Car::GetCarsCount()
{

	return count;
}
