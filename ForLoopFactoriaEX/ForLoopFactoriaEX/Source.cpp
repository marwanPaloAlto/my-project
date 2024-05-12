#include <iostream>
using namespace std;
int main()
{
	int number, fact = 1;
	cout << "enter positive number \n";
	cin >> number;
	if (number < 0)
		cout << "enter positive number only \n";
	else

		for (int i = 1; i <= number; i++)
			fact = fact * i;

	cout << "the factorial is " << fact << "\n";

}

