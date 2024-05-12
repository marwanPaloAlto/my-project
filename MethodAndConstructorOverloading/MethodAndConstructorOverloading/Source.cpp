#include <iostream>
#include "Calculator.h"
int main()
{
	/*
	Calculator c1;
	cout << " this is version 1 " << c1.add(3, 7) << "\n";
	cout << " this is version 2 " << c1.add(3, 7, 10) << "\n";
	cout << " this is version 3 " << c1.add("Hello", "World") << "\n";
	*/

	//Static Methods 

	Calculator::add(3, 5);
	Calculator::multiply(7, 2);
	Calculator::subtract(4, 9);

	cout << " The sum = " << Calculator::add(3, 5) << "\n";
	cout << " The product = " << Calculator::multiply(7, 2) << "\n";
	cout << " The result = " << Calculator::subtract(4, 9) << "\n";


	


}