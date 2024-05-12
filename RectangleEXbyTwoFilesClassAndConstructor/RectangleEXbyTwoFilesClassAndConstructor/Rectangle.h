#pragma once
#include <string>
using namespace std;
class Rectangle
{
private : 
	float length;
	float width;

public:
	void setlength(float l);
	void setwidth(float w);
	float Getlength();
	float Getwidth();
	Rectangle(float l , float w);
	Rectangle merge(Rectangle r2);  // adding objects
	~Rectangle();
	
};


