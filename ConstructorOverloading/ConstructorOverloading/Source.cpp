#include <iostream>
using namespace std;
#include "Rectangle.h"

using namespace std;


int main()
{
	Rectangle r1(float(5.5), float(4.4));
	cout << " the length is " << r1.Getlength() << "\n";
	cout << " the width is " << r1.Getwidth() << "\n";

	/*
	Rectangle c1;
	cout << "Counter reached " << c1.Getlength() << "\n";

	Rectangle c2;
	cout << "Counter reached " << c2.Getlength() << "\n";

	Rectangle c3;
	cout << "Counter reached " << c3.Getlength() << "\n";
	*/
}