#pragma once
#include <string>
using namespace std;
class Rectangle
{
private:
	float length;
	float width;
	static int count;

public:
	void setlength(float l);
	void setwidth(float w);
	float Getlength();
	float Getwidth();
	Rectangle();
	Rectangle(float l , float w);
	~Rectangle();

};
