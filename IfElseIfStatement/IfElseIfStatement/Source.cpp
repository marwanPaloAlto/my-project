#include <iostream>
using namespace std;
int main()
{

	int num1, num2;
	cout << "Enter 2 Numbers \n";
		cin >> num1 >> num2;

		if (num1 == num2)
			cout << "Equal \n";
		else if (num1 > num2)
			cout << "Num1 is greater \n";
		else
			cout << "Num2 is greater \n";
		
		return 0;

}