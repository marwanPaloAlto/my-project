#include <iostream>
using namespace std;
int main()
{
	int number, fact = 1;

	for (number = 1; number <= 10; number++)
	{

		for (int i = 1; i <= number; i++)
			fact = fact * i;

		cout << "the factorial of " << number << " is " << fact << "\n";
	}
}

