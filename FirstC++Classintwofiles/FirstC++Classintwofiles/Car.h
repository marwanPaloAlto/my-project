#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string maker;
	int model;
	string colour;
	 static int count;            //transfere to static
public:
	void setmaker(string m);
	string getmaker();
	void setmodel(int m);
	int getmodel();
	int GetCarsCount();

	//Car();  with user input parameters    
	
	Car();
	Car(string m , int mo , string c);
	~Car();
};


