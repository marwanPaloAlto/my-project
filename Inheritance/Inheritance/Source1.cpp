#include<iostream>
using namespace std;
#include"Student.h"

class Base
{
	int x;
public:
	// default constructor
	Base()
	{
		x = 0;
		cout << "Based default contructor\n";  //ÍÇÌÉ ãåãÉ Çäí ÇØÈÚ ÇáÌãáÉ Ïí;
	}                                         //  to know that this is the defalt constructor of base class  
};

class Derived : public Base
{
	int y;
public:
	// default constructor
	Derived()
	{
		y = 0;
		cout << "Derived default constructor\n";  // explicitly will call first the base class default constructor

	}
	// parameterized constructor
	Derived(int i)
	{
		y = i;
		cout << "Derived parameterized constructor\n";  // explicitly will call first the base class default constructor
	}
};

void main()
{                   
	Base b;
	Derived d1;
	Derived d2(10);
}