#pragma once
#include<iostream>
using namespace std;
class Distance
{
private:
	int feet;
	int inches;
public:
	Distance() :feet(0), inches(0)
	{}

	Distance(int f, int i) :feet(f), inches(i)
	{}
	void display()
	{
		cout << " Feet = " << feet << endl;
		cout << " Inches = " << inches << endl;

	}
	Distance operator +(Distance d2)
	{
		int f = feet + d2.feet;
		int i = inches + d2.inches;

		return Distance(f, i);
	}

	Distance operator -(Distance d2)
	{
		int f = feet - d2.feet;
		int i = inches - d2.inches;

		return Distance(f, i);
	}

};

