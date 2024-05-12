#include <iostream>
#include "Car.h"
using namespace std; 
                             /* i applied all constructor and destructor casesin this file*/
                              
int main()
{
	// Getting Object From Class and calling Methods

	/*Car C1;
	C1.setmaker("honda");
	C1.setmodel(2018);
	cout << " this car is made by " << C1.getmaker() << "\n";
	cout << " this car's model is " << C1.getmodel() << "\n";*/
	
	// now we initialiaze by constructor
	/*
	Car C1("toyota", 2020, "blue");
	cout << " this car is made by " << C1.getmaker() << "\n";
	cout << " this car's model is " << C1.getmodel() << "\n";
	
	Car C2("Fiat", 2021, "Black");
	cout << " this car is made by " << C2.getmaker() << "\n";
	cout << " this car's model is " << C2.getmodel() << "\n";
	*/


	Car c1;
	cout << "Counter reached " << c1.GetCarsCount() << "\n";
	
	Car c2;
	cout << "Counter reached " << c2.GetCarsCount() << "\n";
	
	Car c3;
	cout << "Counter reached " << c3.GetCarsCount() << "\n";
}