#include "Rectangle.h"
#include <iostream>
using namespace std;    // i applied all constructor and destructor cases in this file 
                                    
/*Rectangle::Rectangle()
{
	length = 0;
	width = 0;
	cout << " The length and width are initialized" << "\n";
}*/

//initialization list way when using constractor to initialize :

/*
Rectangle::Rectangle() : length(0), width(0)
{
	cout << " The Rectangle Length and Width are initialized ";

}
*/

//without hard coding :

Rectangle::Rectangle(float l , float w) : length(l), width(w)
{
	cout << " The Rectangle Length and Width are initialized \n";

}

/* Rectangle Rectangle::merge(Rectangle r2)       // adding objects
{
	Rectangle r3;
	r3.length = length + r2.length;
	r3.width = width + r2.width;
	return r3;
}
*/




Rectangle::~Rectangle()
{
	cout << " The object life time ended";
}


void Rectangle::setlength(float l)
{
	length = l;
}

void Rectangle::setwidth(float w)
{
	width = w;
}

float Rectangle::Getlength()
{
	return length;
}

float Rectangle::Getwidth()
{
	return width;
}



